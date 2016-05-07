/**
 *  @file A2500R24SettingsFCC.h
 *
 *  @brief Configuration, Channel and Power settings for A2500R24 FCC
 *  
 *  @version  1.0
 *
 *  @attention IMPORTANT: Your use of this Software is limited to those specific 
 *             rights granted under the terms of a software license agreement 
 *             between the user who downloaded the software, his/her employer 
 *             (which must be your employer) and Anaren (the "License"). You may
 *             not use this Software unless you agree to abide by the terms of 
 *             the License. The License limits your use, and you acknowledge,
 *             that the Software may not be modified, copied or distributed unless
 *             in connection with an authentic Anaren product. Other than for the 
 *             foregoing purpose, you may not use, reproduce, copy, prepare 
 *             derivative works of, modify, distribute, reverse engineer, decompile,
 *             perform, display or sell this Software and/or its documentation 
 *             for any purpose. 
 *             YOU FURTHER ACKNOWLEDGE AND AGREE THAT THE SOFTWARE AND DOCUMENTATION
 *             ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESS 
 *             OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY  WARRANTY OF 
 *             MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR 
 *             PURPOSE. IN NO EVENT SHALL ANAREN OR ITS LICENSORS BE LIABLE OR
 *             OBLIGATED UNDER CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION,
 *             BREACH OF WARRANTY, OR OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR 
 *             INDIRECT DAMAGES OR EXPENSES INCLUDING BUT NOT LIMITED TO ANY 
 *             INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR CONSEQUENTIAL DAMAGES, 
 *             LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF SUBSTITUTE GOODS,
 *             TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES (INCLUDING BUT
 *             NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS. 
 */

#ifndef __A2500R24SETTINGSFCC_H
#define __A2500R24SETTINGSRCC_H

#include "A2500RxxStruct.h"


#define A2500R24ChannelDefine(ChanNr,Description) {ChanNr}, Description
#define A2500R24PowerDefine(PowerSetting,Description) {PowerSetting}, Description
#define A2500R24PowerDefineAllSame(PowerSetting,Description) {PowerSetting,PowerSetting,PowerSetting,PowerSetting,PowerSetting,PowerSetting,PowerSetting,PowerSetting}, Description

extern A2500R24RegisterSettings A2500R24RegisterSettingsFCC[];
extern A2500R24PowerList A2500R24PowerListFCC[];
extern A2500R24ChannelList A2500R24ChannelListFCC[];
extern A2500R24Channel A2500R24ConfigurationChannelsFCC[];
extern A2500R24Configuration A2500R24ConfigurationFCC[];
extern A2500R24ArraySizes A2500R24ArraySizesFCC;

#endif  // __A2500R24SETTINGSFCC_H
