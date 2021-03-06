//#pragma once
//#include <string>
//#include "DataReader_Aux2Strings.h"
//
//void TimestampThread();
//
//void AddNextDelay(Mri::Aux2Strings auxMessage, long timestampNow);
//
//long GetTimestamp();
//long GetElapsedMicroseconds();
//void SetTimestamp(long timestamp_perfect);
//bool SendSyncMessage();
//
//bool SynchronizeTime();
//bool ParseAux2Strings(Mri::Aux2Strings aux_message);
//
//void TimeSynchronizationGetVEH_ID(DDS::DomainParticipant_var m_participant, DDS::Subscriber_var m_subscriber, DDS::Publisher_var m_publisher);
//
//long long startTimer(void);
//
//long endTimer(long long const & begin);
//
//const std::string TAG_TIME_SYNC = "timesync";
//const std::string TAG_DNPW = "dnpw";
//const std::string TAG_REGISTER_VEH_ID = "register_veh_idh";
//const std::string TAG_UNREGISTER_APP = "unregister_app";
//
//const long THIS_APP_ID = 5;
//const long SERVER_ID = 1;
//
//extern Mri::Aux2StringsDataWriter_var  writer_global_aux2strings;
//extern Mri::V2XMessageDataWriter_var  writer_global_v2xmessage;
//extern Mri::VehDataDataWriter_var  writer_global_vehdata;
//
//
