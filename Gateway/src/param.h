// *************** Unique ID's *******************//
#define GWID "TTGWLB1"        // Gateway mode ID
#define MonID "TTMonLB1"     // Monitor mode ID must start with TTMon to trigger auto-reply from a receiving gateway
#define RPID "RP8"           // Repeater mode ID used to prevent endless message loops between repeaters
#define SNodeID "TT-RP8"     // Node ID used in repeater mode status message. Please see the manual for more explanations of the monitor and repeater operating modes

#define MQTT_SERVER       "mqtt.innovateauckland.nz"
#define MQTT_SERVERPORT   1883
#define MQTT_USERNAME     "simple"
#define MQTT_KEY          "simplePassword"              // key or password
#define MQTT_TOPIC        "AKLC"                  // topic root
