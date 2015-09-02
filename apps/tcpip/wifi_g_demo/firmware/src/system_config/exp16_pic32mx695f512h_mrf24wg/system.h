/*******************************************************************************
  Company:
    Microchip Technology Inc.

  File Name:
    system.h

  Summary:
    System level definitions for the specific Microchip Development Board used.

  Description:
    System Specific Definitions

 *******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) <2014> released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
 *******************************************************************************/
//DOM-IGNORE-END



#ifndef __SYSTEM_H_
#define __SYSTEM_H_

// Clock frequency values
// These directly influence timed events using the Tick module.  They also are used for UART and SPI baud rate generation.
#define SYS_CLK_FrequencySystemGet()  (40000000ul) // 8MHz/FPLLIDIV*FPLLMUL/FPLLODIV
#define SYS_CLK_FrequencyInstructionGet()  (SYS_CLK_FrequencySystemGet() / 1)
#define SYS_CLK_FrequencyPeripheralGet()  (SYS_CLK_FrequencyInstructionGet() / 1) // Set your divider according to your Peripheral Bus Frequency configuration fuse setting

#endif /* __SYSTEM_H_ */
