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
		auto allAgentsNode = callDetailRecordsNodeListCallDetailRecord["Agents"]["CallDetailAgent"];
		for (auto callDetailRecordsNodeListCallDetailRecordAgentsCallDetailAgent : allAgentsNode)
		{
			CallDetailRecords::CallDetailRecord::CallDetailAgent agentsObject;
			if(!callDetailRecordsNodeListCallDetailRecordAgentsCallDetailAgent["ContactId"].isNull())
				agentsObject.contactId = callDetailRecordsNodeListCallDetailRecordAgentsCallDetailAgent["ContactId"].asString();
			if(!callDetailRecordsNodeListCallDetailRecordAgentsCallDetailAgent["AgentId"].isNull())
				agentsObject.agentId = callDetailRecordsNodeListCallDetailRecordAgentsCallDetailAgent["AgentId"].asString();
			if(!callDetailRecordsNodeListCallDetailRecordAgentsCallDetailAgent["AgentName"].isNull())
				agentsObject.agentName = callDetailRecordsNodeListCallDetailRecordAgentsCallDetailAgent["AgentName"].asString();
			if(!callDetailRecordsNodeListCallDetailRecordAgentsCallDetailAgent["SkillGroupName"].isNull())
				agentsObject.skillGroupName = callDetailRecordsNodeListCallDetailRecordAgentsCallDetailAgent["SkillGroupName"].asString();
			if(!callDetailRecordsNodeListCallDetailRecordAgentsCallDetailAgent["QueueTime"].isNull())
				agentsObject.queueTime = std::stoi(callDetailRecordsNodeListCallDetailRecordAgentsCallDetailAgent["QueueTime"].asString());
			if(!callDetailRecordsNodeListCallDetailRecordAgentsCallDetailAgent["RingTime"].isNull())
				agentsObject.ringTime = std::stoi(callDetailRecordsNodeListCallDetailRecordAgentsCallDetailAgent["RingTime"].asString());
			if(!callDetailRecordsNodeListCallDetailRecordAgentsCallDetailAgent["StartTime"].isNull())
				agentsObject.startTime = std::stol(callDetailRecordsNodeListCallDetailRecordAgentsCallDetailAgent["StartTime"].asString());
			if(!callDetailRecordsNodeListCallDetailRecordAgentsCallDetailAgent["TalkTime"].isNull())
				agentsObject.talkTime = std::stoi(callDetailRecordsNodeListCallDetailRecordAgentsCallDetailAgent["TalkTime"].asString());
			if(!callDetailRecordsNodeListCallDetailRecordAgentsCallDetailAgent["HoldTime"].isNull())
				agentsObject.holdTime = std::stoi(callDetailRecordsNodeListCallDetailRecordAgentsCallDetailAgent["HoldTime"].asString());
			if(!callDetailRecordsNodeListCallDetailRecordAgentsCallDetailAgent["WorkTime"].isNull())
				agentsObject.workTime = std::stoi(callDetailRecordsNodeListCallDetailRecordAgentsCallDetailAgent["WorkTime"].asString());
			if(!callDetailRecordsNodeListCallDetailRecordAgentsCallDetailAgent["Satisfaction"].isNull())
				agentsObject.satisfaction = callDetailRecordsNodeListCallDetailRecordAgentsCallDetailAgent["Satisfaction"].asString();
			if(!callDetailRecordsNodeListCallDetailRecordAgentsCallDetailAgent["Feedback"].isNull())
				agentsObject.feedback = callDetailRecordsNodeListCallDetailRecordAgentsCallDetailAgent["Feedback"].asString();
			callDetailRecordObject.agents.push_back(agentsObject);
		}
		auto allRecordingsNode = callDetailRecordsNodeListCallDetailRecord["Recordings"]["Recording"];
		for (auto callDetailRecordsNodeListCallDetailRecordRecordingsRecording : allRecordingsNode)
		{
			CallDetailRecords::CallDetailRecord::Recording recordingsObject;
			if(!callDetailRecordsNodeListCallDetailRecordRecordingsRecording["ContactId"].isNull())
				recordingsObject.contactId = callDetailRecordsNodeListCallDetailRecordRecordingsRecording["ContactId"].asString();
			if(!callDetailRecordsNodeListCallDetailRecordRecordingsRecording["ContactType"].isNull())
				recordingsObject.contactType = callDetailRecordsNodeListCallDetailRecordRecordingsRecording["ContactType"].asString();
			if(!callDetailRecordsNodeListCallDetailRecordRecordingsRecording["AgentId"].isNull())
				recordingsObject.agentId = callDetailRecordsNodeListCallDetailRecordRecordingsRecording["AgentId"].asString();
			if(!callDetailRecordsNodeListCallDetailRecordRecordingsRecording["AgentName"].isNull())
				recordingsObject.agentName = callDetailRecordsNodeListCallDetailRecordRecordingsRecording["AgentName"].asString();
			if(!callDetailRecordsNodeListCallDetailRecordRecordingsRecording["CallingNumber"].isNull())
				recordingsObject.callingNumber = callDetailRecordsNodeListCallDetailRecordRecordingsRecording["CallingNumber"].asString();
			if(!callDetailRecordsNodeListCallDetailRecordRecordingsRecording["CalledNumber"].isNull())
				recordingsObject.calledNumber = callDetailRecordsNodeListCallDetailRecordRecordingsRecording["CalledNumber"].asString();
			if(!callDetailRecordsNodeListCallDetailRecordRecordingsRecording["StartTime"].isNull())
				recordingsObject.startTime = std::stol(callDetailRecordsNodeListCallDetailRecordRecordingsRecording["StartTime"].asString());
			if(!callDetailRecordsNodeListCallDetailRecordRecordingsRecording["Duration"].isNull())
				recordingsObject.duration = std::stoi(callDetailRecordsNodeListCallDetailRecordRecordingsRecording["Duration"].asString());
			if(!callDetailRecordsNodeListCallDetailRecordRecordingsRecording["FileName"].isNull())
				recordingsObject.fileName = callDetailRecordsNodeListCallDetailRecordRecordingsRecording["FileName"].asString();
			if(!callDetailRecordsNodeListCallDetailRecordRecordingsRecording["FilePath"].isNull())
				recordingsObject.filePath = callDetailRecordsNodeListCallDetailRecordRecordingsRecording["FilePath"].asString();
			if(!callDetailRecordsNodeListCallDetailRecordRecordingsRecording["FileDescription"].isNull())
				recordingsObject.fileDescription = callDetailRecordsNodeListCallDetailRecordRecordingsRecording["FileDescription"].asString();
			if(!callDetailRecordsNodeListCallDetailRecordRecordingsRecording["Channel"].isNull())
				recordingsObject.channel = callDetailRecordsNodeListCallDetailRecordRecordingsRecording["Channel"].asString();
			if(!callDetailRecordsNodeListCallDetailRecordRecordingsRecording["InstanceId"].isNull())
				recordingsObject.instanceId = callDetailRecordsNodeListCallDetailRecordRecordingsRecording["InstanceId"].asString();
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

