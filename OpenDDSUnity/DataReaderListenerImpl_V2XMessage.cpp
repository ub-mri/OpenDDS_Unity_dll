/*
 *
 *
 * Distributed under the OpenDDS License.
 * See: http://www.opendds.org/license.html
 */

#include <ace/Log_Msg.h>
#include <ace/OS_NS_stdlib.h>
#include <iostream>


#include "DataReaderListenerImpl_V2XMessage.h"
#include "MriTypeSupportImpl.h"
#include "OpenDDS.h"
#include "QueueTs.h"




using std::cerr;
using std::cout;
using std::endl;
using std::string;

extern QueueTs<Mri::V2XMessage> v2x_queue_in;


void
DataReaderListenerImpl_V2XMessage::on_data_available(DDS::DataReader_ptr reader)
{

	Mri::V2XMessageDataReader_var reader_i =
		Mri::V2XMessageDataReader::_narrow(reader);

	if (!reader_i) {
		ACE_ERROR((LM_ERROR,
			ACE_TEXT("ERROR: %N:%l: on_data_available() -")
			ACE_TEXT(" _narrow failed!\n")));
		ACE_OS::exit(-1);
	}

	Mri::V2XMessage v2x_message;
	DDS::SampleInfo info;

	DDS::ReturnCode_t error = reader_i->take_next_sample(v2x_message, info);

	if (error == DDS::RETCODE_OK) {
		//cout << "SampleInfo.sample_rank = " << info.sample_rank << endl;
		//cout << "SampleInfo.instance_state = " << info.instance_state << endl;

		if (info.valid_data) {
			v2x_queue_in.push(v2x_message);
		}

	}
	else {
		ACE_ERROR((LM_ERROR,
			ACE_TEXT("ERROR: %N:%l: on_data_available() -")
			ACE_TEXT(" take_next_sample failed!\n")));
	}
}




























void
DataReaderListenerImpl_V2XMessage::on_requested_deadline_missed(
  DDS::DataReader_ptr /*reader*/,
  const DDS::RequestedDeadlineMissedStatus& /*status*/)
{
	cout << "******************        V2X                **************************" << endl;
	cout << "******************        on_requested_deadline_missed      **************************" << endl;
	cout << "******************                                **************************" << endl << endl;
}

void
DataReaderListenerImpl_V2XMessage::on_requested_incompatible_qos(
  DDS::DataReader_ptr /*reader*/,
  const DDS::RequestedIncompatibleQosStatus& /*status*/)
{

	cout << "******************        V2X                **************************" << endl;
	cout << "******************        on_requested_incompatible_qos   ***************" << endl;
	cout << "******************                                **************************" << endl << endl;

}

void
DataReaderListenerImpl_V2XMessage::on_sample_rejected(
  DDS::DataReader_ptr /*reader*/,
  const DDS::SampleRejectedStatus& /*status*/)
{
	cout << "******************        V2X                **************************" << endl;
	cout << "******************        Sample rejected      **************************" << endl;
	cout << "******************                                **************************" << endl << endl;
}

void
DataReaderListenerImpl_V2XMessage::on_liveliness_changed(
  DDS::DataReader_ptr /*reader*/,
  const DDS::LivelinessChangedStatus& /*status*/)
{
}



void
DataReaderListenerImpl_V2XMessage::on_subscription_matched(
  DDS::DataReader_ptr /*reader*/,
  const DDS::SubscriptionMatchedStatus& /*status*/)
{
	cout << "******************        V2X message               **************************" << endl;
	cout << "******************        Subscriber changed      **************************" << endl;
	cout << "******************                                **************************" << endl << endl;
}

void
DataReaderListenerImpl_V2XMessage::on_sample_lost(
  DDS::DataReader_ptr /*reader*/,
  const DDS::SampleLostStatus& /*status*/)
{
}
