/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/ccc/model/ListCallDetailRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListCallDetailRecordsResult::ListCallDetailRecordsResult() :
	ServiceResult()
{}

ListCallDetailRecordsResult::ListCallDetailRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCallDetailRecordsResult::~ListCallDetailRecordsResult()
{}

void ListCallDetailRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allListNode = dataNode["List"]["CallDetailRecord"];
	for (auto dataNodeListCallDetailRecord : allListNode)
	{
		Data::CallDetailRecord callDetailRecordObject;
		if(!dataNodeListCallDetailRecord["ContactDisposition"].isNull())
			callDetailRecordObject.contactDisposition = dataNodeListCallDetailRecord["ContactDisposition"].asString();
		if(!dataNodeListCallDetailRecord["ContactType"].isNull())
			callDetailRecordObject.contactType = dataNodeListCallDetailRecord["ContactType"].asString();
		if(!dataNodeListCallDetailRecord["EstablishedTime"].isNull())
			callDetailRecordObject.establishedTime = std::stol(dataNodeListCallDetailRecord["EstablishedTime"].asString());
		if(!dataNodeListCallDetailRecord["CalledNumber"].isNull())
			callDetailRecordObject.calledNumber = dataNodeListCallDetailRecord["CalledNumber"].asString();
		if(!dataNodeListCallDetailRecord["AdditionalBroker"].isNull())
			callDetailRecordObject.additionalBroker = dataNodeListCallDetailRecord["AdditionalBroker"].asString();
		if(!dataNodeListCallDetailRecord["SatisfactionIndex"].isNull())
			callDetailRecordObject.satisfactionIndex = std::stoi(dataNodeListCallDetailRecord["SatisfactionIndex"].asString());
		if(!dataNodeListCallDetailRecord["SatisfactionSurveyChannel"].isNull())
			callDetailRecordObject.satisfactionSurveyChannel = dataNodeListCallDetailRecord["SatisfactionSurveyChannel"].asString();
		if(!dataNodeListCallDetailRecord["ReleaseTime"].isNull())
			callDetailRecordObject.releaseTime = std::stol(dataNodeListCallDetailRecord["ReleaseTime"].asString());
		if(!dataNodeListCallDetailRecord["WaitTime"].isNull())
			callDetailRecordObject.waitTime = std::stol(dataNodeListCallDetailRecord["WaitTime"].asString());
		if(!dataNodeListCallDetailRecord["SkillGroupNames"].isNull())
			callDetailRecordObject.skillGroupNames = dataNodeListCallDetailRecord["SkillGroupNames"].asString();
		if(!dataNodeListCallDetailRecord["IvrTime"].isNull())
			callDetailRecordObject.ivrTime = std::stol(dataNodeListCallDetailRecord["IvrTime"].asString());
		if(!dataNodeListCallDetailRecord["SatisfactionDescription"].isNull())
			callDetailRecordObject.satisfactionDescription = dataNodeListCallDetailRecord["SatisfactionDescription"].asString();
		if(!dataNodeListCallDetailRecord["ReleaseInitiator"].isNull())
			callDetailRecordObject.releaseInitiator = dataNodeListCallDetailRecord["ReleaseInitiator"].asString();
		if(!dataNodeListCallDetailRecord["AgentIds"].isNull())
			callDetailRecordObject.agentIds = dataNodeListCallDetailRecord["AgentIds"].asString();
		if(!dataNodeListCallDetailRecord["CallDuration"].isNull())
			callDetailRecordObject.callDuration = dataNodeListCallDetailRecord["CallDuration"].asString();
		if(!dataNodeListCallDetailRecord["RecordingReady"].isNull())
			callDetailRecordObject.recordingReady = dataNodeListCallDetailRecord["RecordingReady"].asString() == "true";
		if(!dataNodeListCallDetailRecord["InstanceId"].isNull())
			callDetailRecordObject.instanceId = dataNodeListCallDetailRecord["InstanceId"].asString();
		if(!dataNodeListCallDetailRecord["RingTime"].isNull())
			callDetailRecordObject.ringTime = std::stol(dataNodeListCallDetailRecord["RingTime"].asString());
		if(!dataNodeListCallDetailRecord["SatisfactionSurveyOffered"].isNull())
			callDetailRecordObject.satisfactionSurveyOffered = dataNodeListCallDetailRecord["SatisfactionSurveyOffered"].asString() == "true";
		if(!dataNodeListCallDetailRecord["AgentNames"].isNull())
			callDetailRecordObject.agentNames = dataNodeListCallDetailRecord["AgentNames"].asString();
		if(!dataNodeListCallDetailRecord["StartTime"].isNull())
			callDetailRecordObject.startTime = std::stol(dataNodeListCallDetailRecord["StartTime"].asString());
		if(!dataNodeListCallDetailRecord["ContactId"].isNull())
			callDetailRecordObject.contactId = dataNodeListCallDetailRecord["ContactId"].asString();
		if(!dataNodeListCallDetailRecord["RecordingDuration"].isNull())
			callDetailRecordObject.recordingDuration = std::stol(dataNodeListCallDetailRecord["RecordingDuration"].asString());
		if(!dataNodeListCallDetailRecord["CallingNumber"].isNull())
			callDetailRecordObject.callingNumber = dataNodeListCallDetailRecord["CallingNumber"].asString();
		if(!dataNodeListCallDetailRecord["QueueTime"].isNull())
			callDetailRecordObject.queueTime = std::stol(dataNodeListCallDetailRecord["QueueTime"].asString());
		if(!dataNodeListCallDetailRecord["Broker"].isNull())
			callDetailRecordObject.broker = dataNodeListCallDetailRecord["Broker"].asString();
		if(!dataNodeListCallDetailRecord["SkillGroupIds"].isNull())
			callDetailRecordObject.skillGroupIds = dataNodeListCallDetailRecord["SkillGroupIds"].asString();
		if(!dataNodeListCallDetailRecord["CallerLocation"].isNull())
			callDetailRecordObject.callerLocation = dataNodeListCallDetailRecord["CallerLocation"].asString();
		if(!dataNodeListCallDetailRecord["CalleeLocation"].isNull())
			callDetailRecordObject.calleeLocation = dataNodeListCallDetailRecord["CalleeLocation"].asString();
		if(!dataNodeListCallDetailRecord["EarlyMediaState"].isNull())
			callDetailRecordObject.earlyMediaState = dataNodeListCallDetailRecord["EarlyMediaState"].asString();
		if(!dataNodeListCallDetailRecord["ReleaseReason"].isNull())
			callDetailRecordObject.releaseReason = dataNodeListCallDetailRecord["ReleaseReason"].asString();
		if(!dataNodeListCallDetailRecord["DialingTime"].isNull())
			callDetailRecordObject.dialingTime = std::stol(dataNodeListCallDetailRecord["DialingTime"].asString());
		if(!dataNodeListCallDetailRecord["TalkTime"].isNull())
			callDetailRecordObject.talkTime = std::stol(dataNodeListCallDetailRecord["TalkTime"].asString());
		data_.list.push_back(callDetailRecordObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListCallDetailRecordsResult::getMessage()const
{
	return message_;
}

int ListCallDetailRecordsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListCallDetailRecordsResult::Data ListCallDetailRecordsResult::getData()const
{
	return data_;
}

std::string ListCallDetailRecordsResult::getCode()const
{
	return code_;
}

