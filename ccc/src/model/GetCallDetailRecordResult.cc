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

#include <alibabacloud/ccc/model/GetCallDetailRecordResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetCallDetailRecordResult::GetCallDetailRecordResult() :
	ServiceResult()
{}

GetCallDetailRecordResult::GetCallDetailRecordResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCallDetailRecordResult::~GetCallDetailRecordResult()
{}

void GetCallDetailRecordResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AgentIds"].isNull())
		data_.agentIds = dataNode["AgentIds"].asString();
	if(!dataNode["AgentNames"].isNull())
		data_.agentNames = dataNode["AgentNames"].asString();
	if(!dataNode["CalledNumber"].isNull())
		data_.calledNumber = dataNode["CalledNumber"].asString();
	if(!dataNode["CallingNumber"].isNull())
		data_.callingNumber = dataNode["CallingNumber"].asString();
	if(!dataNode["ContactDisposition"].isNull())
		data_.contactDisposition = dataNode["ContactDisposition"].asString();
	if(!dataNode["ContactId"].isNull())
		data_.contactId = dataNode["ContactId"].asString();
	if(!dataNode["ContactType"].isNull())
		data_.contactType = dataNode["ContactType"].asString();
	if(!dataNode["CallDuration"].isNull())
		data_.callDuration = std::stol(dataNode["CallDuration"].asString());
	if(!dataNode["EstablishedTime"].isNull())
		data_.establishedTime = std::stol(dataNode["EstablishedTime"].asString());
	if(!dataNode["InstanceId"].isNull())
		data_.instanceId = dataNode["InstanceId"].asString();
	if(!dataNode["StartTime"].isNull())
		data_.startTime = std::stol(dataNode["StartTime"].asString());
	if(!dataNode["ReleaseTime"].isNull())
		data_.releaseTime = std::stol(dataNode["ReleaseTime"].asString());
	if(!dataNode["SkillGroupIds"].isNull())
		data_.skillGroupIds = dataNode["SkillGroupIds"].asString();
	if(!dataNode["SkillGroupNames"].isNull())
		data_.skillGroupNames = dataNode["SkillGroupNames"].asString();
	if(!dataNode["SatisfactionSurveyOffered"].isNull())
		data_.satisfactionSurveyOffered = dataNode["SatisfactionSurveyOffered"].asString() == "true";
	if(!dataNode["Satisfaction"].isNull())
		data_.satisfaction = std::stoi(dataNode["Satisfaction"].asString());
	if(!dataNode["SatisfactionSurveyChannel"].isNull())
		data_.satisfactionSurveyChannel = dataNode["SatisfactionSurveyChannel"].asString();
	if(!dataNode["ReleaseInitiator"].isNull())
		data_.releaseInitiator = dataNode["ReleaseInitiator"].asString();
	if(!dataNode["RecordingReady"].isNull())
		data_.recordingReady = dataNode["RecordingReady"].asString() == "true";
	auto allCdrAgentEventsNode = dataNode["CdrAgentEvents"]["CdrAgentEventsItem"];
	for (auto dataNodeCdrAgentEventsCdrAgentEventsItem : allCdrAgentEventsNode)
	{
		Data::CdrAgentEventsItem cdrAgentEventsItemObject;
		if(!dataNodeCdrAgentEventsCdrAgentEventsItem["AgentId"].isNull())
			cdrAgentEventsItemObject.agentId = dataNodeCdrAgentEventsCdrAgentEventsItem["AgentId"].asString();
		if(!dataNodeCdrAgentEventsCdrAgentEventsItem["AgentName"].isNull())
			cdrAgentEventsItemObject.agentName = dataNodeCdrAgentEventsCdrAgentEventsItem["AgentName"].asString();
		if(!dataNodeCdrAgentEventsCdrAgentEventsItem["SkillGroupId"].isNull())
			cdrAgentEventsItemObject.skillGroupId = dataNodeCdrAgentEventsCdrAgentEventsItem["SkillGroupId"].asString();
		auto allEventSequenceNode = dataNodeCdrAgentEventsCdrAgentEventsItem["EventSequence"]["EventSequenceItem"];
		for (auto dataNodeCdrAgentEventsCdrAgentEventsItemEventSequenceEventSequenceItem : allEventSequenceNode)
		{
			Data::CdrAgentEventsItem::EventSequenceItem eventSequenceObject;
			if(!dataNodeCdrAgentEventsCdrAgentEventsItemEventSequenceEventSequenceItem["Event"].isNull())
				eventSequenceObject.event = dataNodeCdrAgentEventsCdrAgentEventsItemEventSequenceEventSequenceItem["Event"].asString();
			if(!dataNodeCdrAgentEventsCdrAgentEventsItemEventSequenceEventSequenceItem["EventTime"].isNull())
				eventSequenceObject.eventTime = std::stol(dataNodeCdrAgentEventsCdrAgentEventsItemEventSequenceEventSequenceItem["EventTime"].asString());
			cdrAgentEventsItemObject.eventSequence.push_back(eventSequenceObject);
		}
		data_.cdrAgentEvents.push_back(cdrAgentEventsItemObject);
	}
	auto allCdrIvrEventsNode = dataNode["CdrIvrEvents"]["CdrIvrEventsItem"];
	for (auto dataNodeCdrIvrEventsCdrIvrEventsItem : allCdrIvrEventsNode)
	{
		Data::CdrIvrEventsItem cdrIvrEventsItemObject;
		if(!dataNodeCdrIvrEventsCdrIvrEventsItem["FlowId"].isNull())
			cdrIvrEventsItemObject.flowId = dataNodeCdrIvrEventsCdrIvrEventsItem["FlowId"].asString();
		auto allEventSequence1Node = dataNodeCdrIvrEventsCdrIvrEventsItem["EventSequence"]["EventSequenceItem"];
		for (auto dataNodeCdrIvrEventsCdrIvrEventsItemEventSequenceEventSequenceItem : allEventSequence1Node)
		{
			Data::CdrIvrEventsItem::EventSequenceItem2 eventSequence1Object;
			if(!dataNodeCdrIvrEventsCdrIvrEventsItemEventSequenceEventSequenceItem["Event"].isNull())
				eventSequence1Object.event = dataNodeCdrIvrEventsCdrIvrEventsItemEventSequenceEventSequenceItem["Event"].asString();
			if(!dataNodeCdrIvrEventsCdrIvrEventsItemEventSequenceEventSequenceItem["EventTime"].isNull())
				eventSequence1Object.eventTime = std::stol(dataNodeCdrIvrEventsCdrIvrEventsItemEventSequenceEventSequenceItem["EventTime"].asString());
			cdrIvrEventsItemObject.eventSequence1.push_back(eventSequence1Object);
		}
		data_.cdrIvrEvents.push_back(cdrIvrEventsItemObject);
	}
	auto allCdrQueueEventsNode = dataNode["CdrQueueEvents"]["CdrQueueEventsItem"];
	for (auto dataNodeCdrQueueEventsCdrQueueEventsItem : allCdrQueueEventsNode)
	{
		Data::CdrQueueEventsItem cdrQueueEventsItemObject;
		if(!dataNodeCdrQueueEventsCdrQueueEventsItem["FlowId"].isNull())
			cdrQueueEventsItemObject.flowId = dataNodeCdrQueueEventsCdrQueueEventsItem["FlowId"].asString();
		if(!dataNodeCdrQueueEventsCdrQueueEventsItem["QueueId"].isNull())
			cdrQueueEventsItemObject.queueId = dataNodeCdrQueueEventsCdrQueueEventsItem["QueueId"].asString();
		if(!dataNodeCdrQueueEventsCdrQueueEventsItem["QueueName"].isNull())
			cdrQueueEventsItemObject.queueName = dataNodeCdrQueueEventsCdrQueueEventsItem["QueueName"].asString();
		if(!dataNodeCdrQueueEventsCdrQueueEventsItem["QueueType"].isNull())
			cdrQueueEventsItemObject.queueType = std::stoi(dataNodeCdrQueueEventsCdrQueueEventsItem["QueueType"].asString());
		auto allEventSequence3Node = dataNodeCdrQueueEventsCdrQueueEventsItem["EventSequence"]["EventSequenceItem"];
		for (auto dataNodeCdrQueueEventsCdrQueueEventsItemEventSequenceEventSequenceItem : allEventSequence3Node)
		{
			Data::CdrQueueEventsItem::EventSequenceItem4 eventSequence3Object;
			if(!dataNodeCdrQueueEventsCdrQueueEventsItemEventSequenceEventSequenceItem["Event"].isNull())
				eventSequence3Object.event = dataNodeCdrQueueEventsCdrQueueEventsItemEventSequenceEventSequenceItem["Event"].asString();
			if(!dataNodeCdrQueueEventsCdrQueueEventsItemEventSequenceEventSequenceItem["EventTime"].isNull())
				eventSequence3Object.eventTime = std::stol(dataNodeCdrQueueEventsCdrQueueEventsItemEventSequenceEventSequenceItem["EventTime"].asString());
			cdrQueueEventsItemObject.eventSequence3.push_back(eventSequence3Object);
		}
		data_.cdrQueueEvents.push_back(cdrQueueEventsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetCallDetailRecordResult::getMessage()const
{
	return message_;
}

int GetCallDetailRecordResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetCallDetailRecordResult::Data GetCallDetailRecordResult::getData()const
{
	return data_;
}

std::string GetCallDetailRecordResult::getCode()const
{
	return code_;
}

