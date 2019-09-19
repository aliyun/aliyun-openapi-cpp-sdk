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

#include <alibabacloud/ccc/model/ListRecentCallRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListRecentCallRecordsResult::ListRecentCallRecordsResult() :
	ServiceResult()
{}

ListRecentCallRecordsResult::ListRecentCallRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRecentCallRecordsResult::~ListRecentCallRecordsResult()
{}

void ListRecentCallRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto callDetailRecordsNode = value["CallDetailRecords"];
	if(!callDetailRecordsNode["TotalCount"].isNull())
		callDetailRecords_.totalCount = std::stoi(callDetailRecordsNode["TotalCount"].asString());
	if(!callDetailRecordsNode["PageNumber"].isNull())
		callDetailRecords_.pageNumber = std::stoi(callDetailRecordsNode["PageNumber"].asString());
	if(!callDetailRecordsNode["PageSize"].isNull())
		callDetailRecords_.pageSize = std::stoi(callDetailRecordsNode["PageSize"].asString());
	auto allListNode = callDetailRecordsNode["List"]["CallDetailRecord"];
	for (auto callDetailRecordsNodeListCallDetailRecord : allListNode)
	{
		CallDetailRecords::CallDetailRecord callDetailRecordObject;
		if(!callDetailRecordsNodeListCallDetailRecord["ContactId"].isNull())
			callDetailRecordObject.contactId = callDetailRecordsNodeListCallDetailRecord["ContactId"].asString();
		if(!callDetailRecordsNodeListCallDetailRecord["StartTime"].isNull())
			callDetailRecordObject.startTime = std::stol(callDetailRecordsNodeListCallDetailRecord["StartTime"].asString());
		if(!callDetailRecordsNodeListCallDetailRecord["Duration"].isNull())
			callDetailRecordObject.duration = std::stoi(callDetailRecordsNodeListCallDetailRecord["Duration"].asString());
		if(!callDetailRecordsNodeListCallDetailRecord["Satisfaction"].isNull())
			callDetailRecordObject.satisfaction = std::stoi(callDetailRecordsNodeListCallDetailRecord["Satisfaction"].asString());
		if(!callDetailRecordsNodeListCallDetailRecord["ContactType"].isNull())
			callDetailRecordObject.contactType = callDetailRecordsNodeListCallDetailRecord["ContactType"].asString();
		if(!callDetailRecordsNodeListCallDetailRecord["ContactDisposition"].isNull())
			callDetailRecordObject.contactDisposition = callDetailRecordsNodeListCallDetailRecord["ContactDisposition"].asString();
		if(!callDetailRecordsNodeListCallDetailRecord["CallingNumber"].isNull())
			callDetailRecordObject.callingNumber = callDetailRecordsNodeListCallDetailRecord["CallingNumber"].asString();
		if(!callDetailRecordsNodeListCallDetailRecord["CalledNumber"].isNull())
			callDetailRecordObject.calledNumber = callDetailRecordsNodeListCallDetailRecord["CalledNumber"].asString();
		if(!callDetailRecordsNodeListCallDetailRecord["AgentNames"].isNull())
			callDetailRecordObject.agentNames = callDetailRecordsNodeListCallDetailRecord["AgentNames"].asString();
		if(!callDetailRecordsNodeListCallDetailRecord["SkillGroupNames"].isNull())
			callDetailRecordObject.skillGroupNames = callDetailRecordsNodeListCallDetailRecord["SkillGroupNames"].asString();
		if(!callDetailRecordsNodeListCallDetailRecord["InstanceId"].isNull())
			callDetailRecordObject.instanceId = callDetailRecordsNodeListCallDetailRecord["InstanceId"].asString();
		if(!callDetailRecordsNodeListCallDetailRecord["ExtraAttr"].isNull())
			callDetailRecordObject.extraAttr = callDetailRecordsNodeListCallDetailRecord["ExtraAttr"].asString();
		if(!callDetailRecordsNodeListCallDetailRecord["ExtraAttr"].isNull())
			callDetailRecordObject.extraAttr1 = callDetailRecordsNodeListCallDetailRecord["ExtraAttr"].asString();
		if(!callDetailRecordsNodeListCallDetailRecord["SatisfactionDesc"].isNull())
			callDetailRecordObject.satisfactionDesc = callDetailRecordsNodeListCallDetailRecord["SatisfactionDesc"].asString();
		if(!callDetailRecordsNodeListCallDetailRecord["Feedback"].isNull())
			callDetailRecordObject.feedback = callDetailRecordsNodeListCallDetailRecord["Feedback"].asString();
		auto allAgentsNode = allListNode["Agents"]["CallDetailAgent"];
		for (auto allListNodeAgentsCallDetailAgent : allAgentsNode)
		{
			CallDetailRecords::CallDetailRecord::CallDetailAgent agentsObject;
			if(!allListNodeAgentsCallDetailAgent["ContactId"].isNull())
				agentsObject.contactId = allListNodeAgentsCallDetailAgent["ContactId"].asString();
			if(!allListNodeAgentsCallDetailAgent["AgentId"].isNull())
				agentsObject.agentId = allListNodeAgentsCallDetailAgent["AgentId"].asString();
			if(!allListNodeAgentsCallDetailAgent["AgentName"].isNull())
				agentsObject.agentName = allListNodeAgentsCallDetailAgent["AgentName"].asString();
			if(!allListNodeAgentsCallDetailAgent["SkillGroupName"].isNull())
				agentsObject.skillGroupName = allListNodeAgentsCallDetailAgent["SkillGroupName"].asString();
			if(!allListNodeAgentsCallDetailAgent["QueueTime"].isNull())
				agentsObject.queueTime = std::stoi(allListNodeAgentsCallDetailAgent["QueueTime"].asString());
			if(!allListNodeAgentsCallDetailAgent["RingTime"].isNull())
				agentsObject.ringTime = std::stoi(allListNodeAgentsCallDetailAgent["RingTime"].asString());
			if(!allListNodeAgentsCallDetailAgent["StartTime"].isNull())
				agentsObject.startTime = std::stol(allListNodeAgentsCallDetailAgent["StartTime"].asString());
			if(!allListNodeAgentsCallDetailAgent["TalkTime"].isNull())
				agentsObject.talkTime = std::stoi(allListNodeAgentsCallDetailAgent["TalkTime"].asString());
			if(!allListNodeAgentsCallDetailAgent["HoldTime"].isNull())
				agentsObject.holdTime = std::stoi(allListNodeAgentsCallDetailAgent["HoldTime"].asString());
			if(!allListNodeAgentsCallDetailAgent["WorkTime"].isNull())
				agentsObject.workTime = std::stoi(allListNodeAgentsCallDetailAgent["WorkTime"].asString());
			if(!allListNodeAgentsCallDetailAgent["Satisfaction"].isNull())
				agentsObject.satisfaction = allListNodeAgentsCallDetailAgent["Satisfaction"].asString();
			if(!allListNodeAgentsCallDetailAgent["Feedback"].isNull())
				agentsObject.feedback = allListNodeAgentsCallDetailAgent["Feedback"].asString();
			callDetailRecordObject.agents.push_back(agentsObject);
		}
		auto allRecordingsNode = allListNode["Recordings"]["Recording"];
		for (auto allListNodeRecordingsRecording : allRecordingsNode)
		{
			CallDetailRecords::CallDetailRecord::Recording recordingsObject;
			if(!allListNodeRecordingsRecording["ContactId"].isNull())
				recordingsObject.contactId = allListNodeRecordingsRecording["ContactId"].asString();
			if(!allListNodeRecordingsRecording["ContactType"].isNull())
				recordingsObject.contactType = allListNodeRecordingsRecording["ContactType"].asString();
			if(!allListNodeRecordingsRecording["AgentId"].isNull())
				recordingsObject.agentId = allListNodeRecordingsRecording["AgentId"].asString();
			if(!allListNodeRecordingsRecording["AgentName"].isNull())
				recordingsObject.agentName = allListNodeRecordingsRecording["AgentName"].asString();
			if(!allListNodeRecordingsRecording["CallingNumber"].isNull())
				recordingsObject.callingNumber = allListNodeRecordingsRecording["CallingNumber"].asString();
			if(!allListNodeRecordingsRecording["CalledNumber"].isNull())
				recordingsObject.calledNumber = allListNodeRecordingsRecording["CalledNumber"].asString();
			if(!allListNodeRecordingsRecording["StartTime"].isNull())
				recordingsObject.startTime = std::stol(allListNodeRecordingsRecording["StartTime"].asString());
			if(!allListNodeRecordingsRecording["Duration"].isNull())
				recordingsObject.duration = std::stoi(allListNodeRecordingsRecording["Duration"].asString());
			if(!allListNodeRecordingsRecording["FileName"].isNull())
				recordingsObject.fileName = allListNodeRecordingsRecording["FileName"].asString();
			if(!allListNodeRecordingsRecording["FilePath"].isNull())
				recordingsObject.filePath = allListNodeRecordingsRecording["FilePath"].asString();
			if(!allListNodeRecordingsRecording["FileDescription"].isNull())
				recordingsObject.fileDescription = allListNodeRecordingsRecording["FileDescription"].asString();
			if(!allListNodeRecordingsRecording["Channel"].isNull())
				recordingsObject.channel = allListNodeRecordingsRecording["Channel"].asString();
			if(!allListNodeRecordingsRecording["InstanceId"].isNull())
				recordingsObject.instanceId = allListNodeRecordingsRecording["InstanceId"].asString();
			callDetailRecordObject.recordings.push_back(recordingsObject);
		}
		callDetailRecords_.list.push_back(callDetailRecordObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string ListRecentCallRecordsResult::getMessage()const
{
	return message_;
}

ListRecentCallRecordsResult::CallDetailRecords ListRecentCallRecordsResult::getCallDetailRecords()const
{
	return callDetailRecords_;
}

int ListRecentCallRecordsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListRecentCallRecordsResult::getCode()const
{
	return code_;
}

bool ListRecentCallRecordsResult::getSuccess()const
{
	return success_;
}

