/*
 * mqtt_topics.h
 *
 *  Created on: Mar 17, 2026
 *      Author: Admin
 */

#ifndef INC_MQTT_TOPICS_H_
#define INC_MQTT_TOPICS_H_

#define DEVICE_ID               "STM32H7"

/* ---- Topics the device subscribes to ---- */
#define TOPIC_SUB_STATUS        "devices/" DEVICE_ID "/status"
#define TOPIC_SUB_CONTROL       "devices/" DEVICE_ID "/control"

#define TOPIC_PUB_STATUS     "devices/" DEVICE_ID "/status/state"  // publishes its own state
#define TOPIC_PUB_CONTROL    "devices/" DEVICE_ID "/control/state"
#endif /* INC_MQTT_TOPICS_H_ */
