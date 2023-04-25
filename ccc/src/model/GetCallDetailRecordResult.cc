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
	if(!dataNode["ReleaseInitiator"].isNull())
		data_.releaseInitiator = dataNode["ReleaseInitiator"].asString();
	if(!dataNode["ContactDisposition"].isNull())
		data_.contactDisposition = dataNode["ContactDisposition"].asString();
	if(!dataNode["ContactType"].isNull())
		data_.contactType = dataNode["ContactType"].asString();
	if(!dataNode["AgentIds"].isNull())
		data_.agentIds = dataNode["AgentIds"].asString();
	if(!dataNode["CallDuration"].isNull())
		data_.callDuration = std::stol(dataNode["CallDuration"].asString());
	if(!dataNode["RecordingReady"].isNull())
		data_.recordingReady = dataNode["RecordingReady"].asString() == "true";
	if(!dataNode["EstablishedTime"].isNull())
		data_.establishedTime = std::stol(dataNode["EstablishedTime"].asString());
	if(!dataNode["InstanceId"].isNull())
		data_.instanceId = dataNode["InstanceId"].asString();
	if(!dataNode["SatisfactionSurveyOffered"].isNull())
		data_.satisfactionSurveyOffered = dataNode["SatisfactionSurveyOffered"].asString() == "true";
	if(!dataNode["CalledNumber"].isNull())
		data_.calledNumber = dataNode["CalledNumber"].asString();
	if(!dataNode["AgentNames"].isNull())
		data_.agentNames = dataNode["AgentNames"].asString();
	if(!dataNode["Satisfaction"].isNull())
		data_.satisfaction = std::stoi(dataNode["Satisfaction"].asString());
	if(!dataNode["StartTime"].isNull())
		data_.startTime = std::stol(dataNode["StartTime"].asString());
	if(!dataNode["ContactId"].isNull())
		data_.contactId = dataNode["ContactId"].asString();
	if(!dataNode["SatisfactionSurveyChannel"].isNull())
		data_.satisfactionSurveyChannel = dataNode["SatisfactionSurveyChannel"].asString();
	if(!dataNode["ReleaseTime"].isNull())
		data_.releaseTime = std::stol(dataNode["ReleaseTime"].asString());
	if(!dataNode["CallingNumber"].isNull())
		data_.callingNumber = dataNode["CallingNumber"].asString();
	if(!dataNode["SkillGroupNames"].isNull())
		data_.skillGroupNames = dataNode["SkillGroupNames"].asString();
	if(!dataNode["SkillGroupIds"].isNull())
		data_.skillGroupIds = dataNode["SkillGroupIds"].asString();
	if(!dataNode["CallerLocation"].isNull())
		data_.callerLocation = dataNode["CallerLocation"].asString();
	if(!dataNode["CalleeLocation"].isNull())
		data_.calleeLocation = dataNode["CalleeLocation"].asString();
	if(!dataNode["EarlyMediaState"].isNull())
		data_.earlyMediaState = dataNode["EarlyMediaState"].asString();
	if(!dataNode["ReleaseReason"].isNull())
		data_.releaseReason = dataNode["ReleaseReason"].asString();
	auto allAgentEventsNode = dataNode["AgentEvents"]["AgentEventsItem"];
	for (auto dataNodeAgentEventsAgentEventsItem : allAgentEventsNode)
	{
		Data::AgentEventsItem agentEventsItemObject;
		if(!dataNodeAgentEventsAgentEventsItem["AgentName"].isNull())
			agentEventsItemObject.agentName = dataNodeAgentEventsAgentEventsItem["AgentName"].asString();
		if(!dataNodeAgentEventsAgentEventsItem["AgentId"].isNull())
			agentEventsItemObject.agentId = dataNodeAgentEventsAgentEventsItem["AgentId"].asString();
		if(!dataNodeAgentEventsAgentEventsItem["SkillGroupId"].isNull())
			agentEventsItemObject.skillGroupId = dataNodeAgentEventsAgentEventsItem["SkillGroupId"].asString();
		auto allEventSequenceNode = dataNodeAgentEventsAgentEventsItem["EventSequence"]["EventSequenceItem"];
		for (auto dataNodeAgentEventsAgentEventsItemEventSequenceEventSequenceItem : allEventSequenceNode)
		{
			Data::AgentEventsItem::EventSequenceItem eventSequenceObject;
			if(!dataNodeAgentEventsAgentEventsItemEventSequenceEventSequenceItem["Event"].isNull())
				eventSequenceObject.event = dataNodeAgentEventsAgentEventsItemEventSequenceEventSequenceItem["Event"].asString();
			if(!dataNodeAgentEventsAgentEventsItemEventSequenceEventSequenceItem["EventTime"].isNull())
				eventSequenceObject.eventTime = std::stol(dataNodeAgentEventsAgentEventsItemEventSequenceEventSequenceItem["EventTime"].asString());
			if(!dataNodeAgentEventsAgentEventsItemEventSequenceEventSequenceItem["Duration"].isNull())
				eventSequenceObject.duration = std::stol(dataNodeAgentEventsAgentEventsItemEventSequenceEventSequenceItem["Duration"].asString());
			agentEventsItemObject.eventSequence.push_back(eventSequenceObject);
		}
		data_.agentEvents.push_back(agentEventsItemObject);
	}
	auto allIvrEventsNode = dataNode["IvrEvents"]["IvrEventsItem"];
	for (auto dataNodeIvrEventsIvrEventsItem : allIvrEventsNode)
	{
		Data::IvrEventsItem ivrEventsItemObject;
		if(!dataNodeIvrEventsIvrEventsItem["FlowId"].isNull())
			ivrEventsItemObject.flowId = dataNodeIvrEventsIvrEventsItem["FlowId"].asString();
		if(!dataNodeIvrEventsIvrEventsItem["FlowType"].isNull())
			ivrEventsItemObject.flowType = dataNodeIvrEventsIvrEventsItem["FlowType"].asString();
		auto allEventSequence1Node = dataNodeIvrEventsIvrEventsItem["EventSequence"]["EventSequenceItem"];
		for (auto dataNodeIvrEventsIvrEventsItemEventSequenceEventSequenceItem : allEventSequence1Node)
		{
			Data::IvrEventsItem::EventSequenceItem2 eventSequence1Object;
			if(!dataNodeIvrEventsIvrEventsItemEventSequenceEventSequenceItem["Event"].isNull())
				eventSequence1Object.event = dataNodeIvrEventsIvrEventsItemEventSequenceEventSequenceItem["Event"].asString();
			if(!dataNodeIvrEventsIvrEventsItemEventSequenceEventSequenceItem["EventTime"].isNull())
				eventSequence1Object.eventTime = std::stol(dataNodeIvrEventsIvrEventsItemEventSequenceEventSequenceItem["EventTime"].asString());
			ivrEventsItemObject.eventSequence1.push_back(eventSequence1Object);
		}
		data_.ivrEvents.push_back(ivrEventsItemObject);
	}
	auto allQueueEventsNode = dataNode["QueueEvents"]["QueueEventsItem"];
	for (auto dataNodeQueueEventsQueueEventsItem : allQueueEventsNode)
	{
		Data::QueueEventsItem queueEventsItemObject;
		if(!dataNodeQueueEventsQueueEventsItem["QueueId"].isNull())
			queueEventsItemObject.queueId = dataNodeQueueEventsQueueEventsItem["QueueId"].asString();
		if(!dataNodeQueueEventsQueueEventsItem["QueueName"].isNull())
			queueEventsItemObject.queueName = dataNodeQueueEventsQueueEventsItem["QueueName"].asString();
		if(!dataNodeQueueEventsQueueEventsItem["FlowId"].isNull())
			queueEventsItemObject.flowId = dataNodeQueueEventsQueueEventsItem["FlowId"].asString();
		if(!dataNodeQueueEventsQueueEventsItem["QueueType"].isNull())
			queueEventsItemObject.queueType = std::stoi(dataNodeQueueEventsQueueEventsItem["QueueType"].asString());
		auto allEventSequence3Node = dataNodeQueueEventsQueueEventsItem["EventSequence"]["EventSequenceItem"];
		for (auto dataNodeQueueEventsQueueEventsItemEventSequenceEventSequenceItem : allEventSequence3Node)
		{
			Data::QueueEventsItem::EventSequenceItem4 eventSequence3Object;
			if(!dataNodeQueueEventsQueueEventsItemEventSequenceEventSequenceItem["Event"].isNull())
				eventSequence3Object.event = dataNodeQueueEventsQueueEventsItemEventSequenceEventSequenceItem["Event"].asString();
			if(!dataNodeQueueEventsQueueEventsItemEventSequenceEventSequenceItem["EventTime"].isNull())
				eventSequence3Object.eventTime = std::stol(dataNodeQueueEventsQueueEventsItemEventSequenceEventSequenceItem["EventTime"].asString());
			queueEventsItemObject.eventSequence3.push_back(eventSequence3Object);
		}
		data_.queueEvents.push_back(queueEventsItemObject);
	}
	auto allCustomerEventsNode = dataNode["CustomerEvents"]["CustomerEventsItem"];
	for (auto dataNodeCustomerEventsCustomerEventsItem : allCustomerEventsNode)
	{
		Data::CustomerEventsItem customerEventsItemObject;
		if(!dataNodeCustomerEventsCustomerEventsItem["CustomerId"].isNull())
			customerEventsItemObject.customerId = dataNodeCustomerEventsCustomerEventsItem["CustomerId"].asString();
		auto allEventSequence5Node = dataNodeCustomerEventsCustomerEventsItem["EventSequence"]["EventSequenceItem"];
		for (auto dataNodeCustomerEventsCustomerEventsItemEventSequenceEventSequenceItem : allEventSequence5Node)
		{
			Data::CustomerEventsItem::EventSequenceItem6 eventSequence5Object;
			if(!dataNodeCustomerEventsCustomerEventsItemEventSequenceEventSequenceItem["Event"].isNull())
				eventSequence5Object.event = dataNodeCustomerEventsCustomerEventsItemEventSequenceEventSequenceItem["Event"].asString();
			if(!dataNodeCustomerEventsCustomerEventsItemEventSequenceEventSequenceItem["EventTime"].isNull())
				eventSequence5Object.eventTime = std::stol(dataNodeCustomerEventsCustomerEventsItemEventSequenceEventSequenceItem["EventTime"].asString());
			customerEventsItemObject.eventSequence5.push_back(eventSequence5Object);
		}
		data_.customerEvents.push_back(customerEventsItemObject);
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

