/*!
 * \file        chan_sccp_enums.hh
 * \brief       SCCP Enums
 * \author      Diederik de Groot <ddegroot [at] users.sf.net>
 * \note        This program is free software and may be modified and distributed under the terms of the GNU Public License.
 *              See the LICENSE file at the top of the source tree.
 *
 * $Date$
 * $Revision$
 */
///////////////////////////////
// The enum examples
///////////////////////////////
// Simple verification method
//
// gcc -E -I. chan_sccp.h |indent > chan_sccp.h
// gcc -E -I. chan_sccp.c |indent > chan_sccp.c

///////////////////////////////
// The sccp enum declarations
///////////////////////////////

/*! 
 * \brief internal chan_sccp call state (c->callstate) (Enum)
 */
BEGIN_ENUM(sccp,channelstate,ENUMMACRO_SPARSE)
        ENUM_ELEMENT(SCCP_CHANNELSTATE_DOWN 				,=0, 	"DOWN")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_OFFHOOK 				,=1, 	"OFFHOOK")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_ONHOOK 				,=2, 	"ONHOOK")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_RINGOUT 				,=3,	"RINGOUT")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_RINGING 				,=4,	"RINGING")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_CONNECTED 			,=5,	"CONNECTED")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_BUSY 				,=6,	"BUSY   ")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_CONGESTION 			,=7,	"CONGESTION")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_HOLD 				,=8,	"HOLD   ")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_CALLWAITING 			,=9,	"CALLWAITING")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_CALLTRANSFER 			,=10,	"CALLTRANSFER")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_CALLPARK 			,=11,	"CALLPARK")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_PROCEED 				,=12,	"PROCEED")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_CALLREMOTEMULTILINE 		,=13,	"CALLREMOTEMULTILINE")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_INVALIDNUMBER 			,=14,	"INVALIDNUMBER")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_DIALING 				,=20,	"DIALING")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_PROGRESS 			,=21,	"PROGRESS")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_GETDIGITS 			,=0xA0,	"GETDIGITS")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_CALLCONFERENCE 			,=0xA1,	"CALLCONFERENCE")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_SPEEDDIAL 			,=0xA2,	"SPEEDDIAL")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_DIGITSFOLL 			,=0xA3,	"DIGITSFOLL")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_INVALIDCONFERENCE 		,=0xA4,	"INVALIDCONFERENCE")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_CONNECTEDCONFERENCE 		,=0xA5,	"CONNECTEDCONFERENCE")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_BLINDTRANSFER 			,=0xA6,	"BLINDTRANSFER")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_ZOMBIE 				,=0xFE,	"ZOMBIE")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_DND 				,=0xFF,	"DND")
END_ENUM(sccp,channelstate,ENUMMACRO_SPARSE)												/*!< internal Chan_SCCP Call State c->callstate */


BEGIN_ENUM(sccp,devicestate,ENUMMACRO_INCREMENTAL)
        ENUM_ELEMENT(SCCP_DEVICESTATE_ONHOOK				,,	"On Hook"	)
        ENUM_ELEMENT(SCCP_DEVICESTATE_OFFHOOK				,,	"Off Hook"	)
        ENUM_ELEMENT(SCCP_DEVICESTATE_UNAVAILABLE			,,	"Unavailable"	)
        ENUM_ELEMENT(SCCP_DEVICESTATE_DND				,,	"Do Not Disturb")
        ENUM_ELEMENT(SCCP_DEVICESTATE_FWDALL				,,	"Forward All"	)
END_ENUM(sccp,devicestate,ENUMMACRO_INCREMENTAL)

BEGIN_ENUM(sccp,callforward,ENUMMACRO_INCREMENTAL)
        ENUM_ELEMENT(SCCP_CFWD_NONE		 			,,	"None")
        ENUM_ELEMENT(SCCP_CFWD_ALL 					,,	"All")
        ENUM_ELEMENT(SCCP_CFWD_BUSY 					,,	"Busy")
        ENUM_ELEMENT(SCCP_CFWD_NOANSWER 				,,	"NoAnswer")
END_ENUM(sccp,callforward,ENUMMACRO_INCREMENTAL)

/*!
 * \brief SCCP Dtmf Mode (ENUM)
 */
BEGIN_ENUM(sccp,dtmfmode,ENUMMACRO_INCREMENTAL)
	ENUM_ELEMENT(SCCP_DTMFMODE_NONE					,,	"None")
	ENUM_ELEMENT(SCCP_DTMFMODE_INBAND				,,	"Inband")
	ENUM_ELEMENT(SCCP_DTMFMODE_OUTOFBAND				,,	"OutOfBand")
	ENUM_ELEMENT(SCCP_DTMFMODE_AUTO					,,	"Auto")
END_ENUM(sccp,dtmfmode,ENUMMACRO_INCREMENTAL)

/*!
 * \brief SCCP Autoanswer (ENUM)
 */
BEGIN_ENUM(sccp,autoanswer,ENUMMACRO_INCREMENTAL)
        ENUM_ELEMENT(SCCP_AUTOANSWER_NONE				,,	"AutoAnswer None")
        ENUM_ELEMENT(SCCP_AUTOANSWER_1W 				,,	"AutoAnswer 1-Way")
        ENUM_ELEMENT(SCCP_AUTOANSWER_2W 				,,	"AutoAnswer Both Ways")
END_ENUM(sccp,autoanswer,ENUMMACRO_INCREMENTAL)

/*!
 * \brief SCCP DNDMode (ENUM)
 */
BEGIN_ENUM(sccp,dndmode,ENUMMACRO_INCREMENTAL)
        ENUM_ELEMENT(SCCP_DNDMODE_OFF					,,	"Off")
        ENUM_ELEMENT(SCCP_DNDMODE_REJECT				,,	"Reject")
        ENUM_ELEMENT(SCCP_DNDMODE_SILENT				,,	"Silent")
        ENUM_ELEMENT(SCCP_DNDMODE_USERDEFINED				,,	"UserDefined")
END_ENUM(sccp,dndmode,ENUMMACRO_INCREMENTAL)

BEGIN_ENUM(sccp,accessory,ENUMMACRO_INCREMENTAL)
        ENUM_ELEMENT(SCCP_ACCESSORY_NONE	 			,,	"None")
        ENUM_ELEMENT(SCCP_ACCESSORY_HEADSET	 			,,	"Headset")
        ENUM_ELEMENT(SCCP_ACCESSORY_HANDSET	 			,,	"Handset") 
        ENUM_ELEMENT(SCCP_ACCESSORY_SPEAKER	 			,,	"Speaker")
END_ENUM(sccp,accessory,ENUMMACRO_INCREMENTAL)

BEGIN_ENUM(sccp,accessorystate,ENUMMACRO_INCREMENTAL)
        ENUM_ELEMENT(SCCP_ACCESSORYSTATE_NONE	 			,,	"None")
        ENUM_ELEMENT(SCCP_ACCESSORYSTATE_ONHOOK	 			,,	"On Hook") 
        ENUM_ELEMENT(SCCP_ACCESSORYSTATE_OFFHOOK	 		,,	"Off Hook")
END_ENUM(sccp,accessorystate,ENUMMACRO_INCREMENTAL)

BEGIN_ENUM(sccp,config_buttontype,ENUMMACRO_INCREMENTAL)
        ENUM_ELEMENT(LINE			 			,,	"Line")
        ENUM_ELEMENT(SPEEDDIAL	 					,,	"Speeddial") 
        ENUM_ELEMENT(SERVICE				 		,,	"Service")
        ENUM_ELEMENT(FEATURE	 					,,	"Feature")
        ENUM_ELEMENT(EMPTY	 					,,	"Empty")
END_ENUM(sccp,config_buttontype,ENUMMACRO_INCREMENTAL)

BEGIN_ENUM(sccp,devstate_state,ENUMMACRO_INCREMENTAL)
        ENUM_ELEMENT(SCCP_DEVSTATE_IDLE					,=0 << 0,	"IDLE")
        ENUM_ELEMENT(SCCP_DEVSTATE_INUSE				,=1 << 1,	"INUSE")
END_ENUM(sccp,devstate_state,ENUMMACRO_INCREMENTAL)
