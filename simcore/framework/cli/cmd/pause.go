package cmd

import (
	"encoding/json"
	"fmt"
	"io/ioutil"
	"log"
	"net/http"
	"time"
	"txsim/cli/msg"

	"github.com/spf13/cobra"
	"github.com/spf13/viper"
)

// pauseCmd represents the pause command
var pauseCmd = &cobra.Command{
	Use:   "pause",
	Short: "pause the currently running scenario.",
	Long:  `pause the currently running scenario. ignored if there's no running scenario.`,
	Run: func(cmd *cobra.Command, args []string) {
		// Create a new HTTP client with a timeout
		client := &http.Client{
			Timeout: time.Second * 3,
		}

		// Make a POST request to pause the scenario
		resp, err := client.Post(fmt.Sprintf("http://%s/api/play/pause", viper.GetString(cfgKeyEndpoint)), "", nil)
		if err != nil {
			log.Println("pause request error: ", err)
			return
		}
		defer resp.Body.Close()

		// Check if the response status is OK
		if resp.StatusCode != http.StatusOK {
			log.Println("pause response status error: ", resp.Status)
			return
		}

		// Read the response body
		body, err := ioutil.ReadAll(resp.Body)
		if err != nil {
			log.Println("pause response body read error: ", err)
			return
		}

		// Unmarshal the response body into SimGeneralResponseBody struct
		rst := msg.SimGeneralResponseBody{}
		json.Unmarshal(body, &rst)

		// Check the response code and print appropriate message
		if rst.Code == 100 {
			fmt.Println("Scenario paused.")
		} else {
			fmt.Printf("[ERROR] Scenario pausing failed[%d]: %s\n", rst.Code, rst.Msg)
		}
	},
}

func init() {
	// Add the pause command to playCmd
	playCmd.AddCommand(pauseCmd)
}