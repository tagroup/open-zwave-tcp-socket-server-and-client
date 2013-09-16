#define COMMAND_CLASS_NO_OPERATION 0x00
#define COMMAND_CLASS_BASIC 0x20
#define COMMAND_CLASS_CONTROLLER_REPLICATION 0x21
#define COMMAND_CLASS_APPLICATION_STATUS 0x22
#define COMMAND_CLASS_ZIP_SERVICES 0x23
#define COMMAND_CLASS_ZIP_SERVER 0x24
#define COMMAND_CLASS_SWITCH_BINARY 0x25
#define COMMAND_CLASS_SWITCH_MULTILEVEL 0x26
#define COMMAND_CLASS_SWITCH_ALL 0x27
#define COMMAND_CLASS_SWITCH_TOGGLE_BINARY 0x28
#define COMMAND_CLASS_SWITCH_TOGGLE_MULTILEVEL 0x29
#define COMMAND_CLASS_CHIMNEY_FAN 0x2A
#define COMMAND_CLASS_SCENE_ACTIVATION 0x2B
#define COMMAND_CLASS_SCENE_ACTUATOR CONF 0x2C
#define COMMAND_CLASS_SCENE_CONTROLLER CONF 0x2D
#define COMMAND_CLASS_ZIP_CLIENT 0x2E
#define COMMAND_CLASS_ZIP_ADV_SERVICES 0x2F
#define COMMAND_CLASS_SENSOR_BINARY 0x30
#define COMMAND_CLASS_SENSOR_MULTILEVEL 0x31
#define COMMAND_CLASS_METER 0x32
#define COMMAND_CLASS_ZIP_ADV_SERVER 0x33
#define COMMAND_CLASS_ZIP_ADV_CLIENT 0x34
#define COMMAND_CLASS_METER_PULSE 0x35
#define COMMAND_CLASS_THERMOSTAT_HEATING 0x38
#define COMMAND_CLASS_THERMOSTAT_MODE 0x40
#define COMMAND_CLASS_THERMOSTAT_OPERATING_STATE 0x42
#define COMMAND_CLASS_THERMOSTAT_SETPOINT 0x43
#define COMMAND_CLASS_THERMOSTAT_FAN_MODE 0x44
#define COMMAND_CLASS_THERMOSTAT_FAN_STATE 0x45
#define COMMAND_CLASS_CLIMATE_CONTROL_SCHEDULE 0x46
#define COMMAND_CLASS_THERMOSTAT_SETBACK 0x47
#define COMMAND_CLASS_DOOR_LOCK_LOGGING 0x4C
#define COMMAND_CLASS_SCHEDULE_ENTRY_LOCK 0x4E
#define COMMAND_CLASS_BASIC_WINDOW_COVERING 0x50
#define COMMAND_CLASS_MTP_WINDOW_COVERING 0x51
#define COMMAND_CLASS_MULTI_INSTANCE 0x60
#define COMMAND_CLASS_DOOR_LOCK 0x62
#define COMMAND_CLASS_USER_CODE 0x63
#define COMMAND_CLASS_CONFIGURATION 0x70
#define COMMAND_CLASS_ALARM 0x71
#define COMMAND_CLASS_MANUFACTURER_SPECIFIC 0x72
#define COMMAND_CLASS_POWERLEVEL 0x73
#define COMMAND_CLASS_PROTECTION 0x75
#define COMMAND_CLASS_LOCK 0x76
#define COMMAND_CLASS_NODE_NAMING 0x77
#define COMMAND_CLASS_FIRMWARE_UPDATE_MD 0x7A
#define COMMAND_CLASS_GROUPING_NAME 0x7B
#define COMMAND_CLASS_REMOTE_ASSOCIATION_ACTIVATE 0x7C
#define COMMAND_CLASS_REMOTE_ASSOCIATION 0x7D
#define COMMAND_CLASS_BATTERY 0x80
#define COMMAND_CLASS_CLOCK 0x81
#define COMMAND_CLASS_HAIL 0x82
#define COMMAND_CLASS_WAKE_UP 0x84
#define COMMAND_CLASS_ASSOCIATION 0x85
#define COMMAND_CLASS_VERSION 0x86
#define COMMAND_CLASS_INDICATOR 0x87
#define COMMAND_CLASS_PROPRIETARY 0x88
#define COMMAND_CLASS_LANGUAGE 0x89
#define COMMAND_CLASS_TIME 0x8A
#define COMMAND_CLASS_TIME_PARAMETERS 0x8B
#define COMMAND_CLASS_GEOGRAPHIC_LOCATION 0x8C
#define COMMAND_CLASS_COMPOSITE 0x8D
#define COMMAND_CLASS_MULTI_INSTANCE_ASSOCIATION 0x8E
#define COMMAND_CLASS_MULTI_CMD 0x8F
#define COMMAND_CLASS_ENERGY_PRODUCTION 0x90
#define COMMAND_CLASS_MANUFACTURER_PROPRIETARY 0x91
#define COMMAND_CLASS_SCREEN_MD 0x92
#define COMMAND_CLASS_SCREEN_ATTRIBUTES 0x93
#define COMMAND_CLASS_SIMPLE_AV_CONTROL 0x94
#define COMMAND_CLASS_AV_CONTENT_DIRECTORY MD 0x95
#define COMMAND_CLASS_AV_RENDERER_STATUS 0x96
#define COMMAND_CLASS_AV_CONTENT_SEARCH_MD 0x97
#define COMMAND_CLASS_SECURITY 0x98
#define COMMAND_CLASS_AV_TAGGING_MD 0x99
#define COMMAND_CLASS_IP_CONFIGURATION 0x9A
#define COMMAND_CLASS_ASSOCIATION_COMMAND_CONFIGURATION 0x9B
#define COMMAND_CLASS_SENSOR_ALARM 0x9C
#define COMMAND_CLASS_SILENCE_ALARM 0x9D
#define COMMAND_CLASS_SENSOR_CONFIGURATION 0x9E
#define COMMAND_CLASS_MARK 0xEF
#define COMMAND_CLASS_NON_INTEROPERABLE 0xF0

#define BASIC_TYPE_CONTROLLER 0x01
#define BASIC_TYPE_STATIC_CONTROLLER 0x02
#define BASIC_TYPE_SLAVE 0x03
#define BASIC_TYPE_ROUTING_SLAVE 0x04

#define GENERIC_TYPE_GENERIC_CONTROLLER 0x01
#define GENERIC_TYPE_STATIC_CONTROLLER 0x02
#define GENERIC_TYPE_AV_CONTROL_POINT 0x03
#define GENERIC_TYPE_DISPLAY 0x06
#define GENERIC_TYPE_GARAGE_DOOR 0x07
#define GENERIC_TYPE_THERMOSTAT 0x08
#define GENERIC_TYPE_WINDOW_COVERING 0x09
#define GENERIC_TYPE_REPEATER_SLAVE 0x0F
#define GENERIC_TYPE_SWITCH_BINARY 0x10
#define GENERIC_TYPE_SWITCH_MULTILEVEL 0x11
#define GENERIC_TYPE_SWITCH_REMOTE 0x12
#define GENERIC_TYPE_SWITCH_TOGGLE 0x13
#define GENERIC_TYPE_ZIP_GATEWAY 0x14
#define GENERIC_TYPE_ZIP_NODE 0x15
#define GENERIC_TYPE_SENSOR_BINARY 0x20
#define GENERIC_TYPE_SENSOR_MULTILEVEL 0x21
#define GENERIC_TYPE_WATER_CONTROL 0x22
#define GENERIC_TYPE_METER_PULSE 0x30
#define GENERIC_TYPE_METER 0x31
#define GENERIC_TYPE_ENTRY_CONTROL 0x40
#define GENERIC_TYPE_SEMI_INTEROPERABLE 0x50
#define GENERIC_TYPE_SENSOR_ALARM 0xA1
#define GENERIC_TYPE_NON_INTEROPERABLE 0xFF