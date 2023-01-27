/*
 * canal_frontcontroller_messages.h
 *
 *  Created on: Dec 28, 2022
 *      Authors: Samuel Parent, Abhishek Magdum, Lin Fu
 *
 *                    ..::^~~~!!~~~^^:..
 *                .:^!7??JJJJJJJJJJJJ??7!~:.
 *              :~7?JJJ???????????????JJJJ??!^.
 *           .^7?JJJ???JJJJJJ??????????????JJJ?~:
 *          ^7JJ???????777777???JJJJJJJ???????JJ?~.
 *        .!JJ???????????7!~^::::^~!!7??JJ???????J7:
 *       :7JJJ??????????JJJJ??7~:    ..:~7?J??????J?^
 *      .7J???????????????????JJ?!.       :7J??????J?^
 *     .~J??????????????????JJJJ?!.       .7J???????J7.
 *     :?J?????????????JJJJ??7!^.      .:~???????????J~
 *     ^???????????JJJ??7~^:..      .:~7?JJ??????????J!.
 *     ^????????JJ?7~^:.        .:~!?JJJ?????????????J!.
 *     ^????????!^.          .:~7?JJJ????????????????J!.
 *     .7J????!.            :7?JJ?????????????????????^
 *      ~JJ?J7.             ~JJJJ???????????????????J!.
 *      .!J???^.            .^!7?JJJJJJ????????????J7:
 *       .!?J??7^.              .:^~!7???JJJJJ????J7:
 *        .^?JJJJ?7~.                 ..:^~~!7????!.
 *          .!?JJJJ?:                         ..::
 *            :~??!:
 *              ..
 */

#ifndef INC_CANAL_FRONTCONTROLLER_MESSAGES_H_
#define INC_CANAL_FRONTCONTROLLER_MESSAGES_H_

/*********************************************************
*                       INCLUDES
*********************************************************/
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "canal_types.h"

/*********************************************************
*                        ENUMS
*********************************************************/

typedef enum {
    UNKNOWN_CAN_ID = 0,
    AMK_SETPOINTS_CAN_ID = ((uint32_t) 0x240),
} TeMessageID;

/*********************************************************
*                     MESSAGE STRUCTS
*********************************************************/

typedef struct {
    uint16_t AMK_TargetVelocity;
    _Bool bEnable;
}TsAMKSetpoints;

/*********************************************************
*                       MESSAGE MACROS
*********************************************************/
#define NUM_RX_MESSAGES (1U)
#define NUM_TX_MESSAGES (1U)

#define AMK_SETPOINTS_ENDIANNESS (CAN_LITTLE_ENDIAN)

/*********************************************************
*                       SIGNAL MACROS
*********************************************************/

// AMK_Setpoints: AMK_TempMotor
#define AMK_SETPOINTS_AMK_TARGETVELOCITY_START   (24U)
#define AMK_SETPOINTS_AMK_TARGETVELOCITY_LENGTH  (16U)
#define AMK_SETPOINTS_AMK_TARGETVELOCITY_FACTOR  (0.125)
#define AMK_SETPOINTS_AMK_TARGETVELOCITY_OFFSET  (0U)

/*********************************************************
*                 GLOBAL STRUCT INSTANCES
*********************************************************/

extern TsAMKSetpoints AMK_Setpoints;

/*********************************************************
*               PUBLIC FUNCTION DECLARATIONS
*********************************************************/

TeCanALRet GetBinaryUnmarshaller(uint32_t* ID, BinaryUnmarshaller** pUnmarshal);
TeCanALRet GetBinaryMarshaller(TeMessageID* ID, BinaryMarshaller** pMarshal);

#endif /* INC_CANAL_FRONTCONTROLLER_MESSAGES_H_ */
