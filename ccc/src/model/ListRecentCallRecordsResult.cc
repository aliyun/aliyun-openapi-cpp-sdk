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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto callDetailRecordsNode = value["CallDetailRecords"];
	if(!callDetailRecordsNode["TotalCount"].isNull())
		callDetailRecords_.totalCount = std::stoi(callDetailRecordsNode["TotalCount"].asString());
	if(!callDetailRecordsNode["PageNumber"].isNull())
		callDetailRecords_.pageNumber = std::stoi(callDetailRecordsNode["PageNumber"].asString());
	if(!callDetailRecordsNode["PageSize"].isNull())
		callDetailRecords_.pageSize = std::stoi(callDetailRecordsNode["PageSize"].asString());
	auto allList = value["List"]["CallDetailRecord"];
	for (auto value : allList)
	{
		CallDetailRecords::CallDetailRecord callDetailRecordObject;
		if(!value["ContactId"].isNull())
			callDetailRecordObject.contactId = value["ContactId"].asString();
		if(!value["StartTime"].isNull())
			callDetailRecordObject.startTime = std::stol(value["StartTime"].asString());
		if(!value["Duration"].isNull())
			callDetailRecordObject.duration = std::stoi(value["Duration"].asString());
		if(!value["Satisfaction"].isNull())
			callDetailRecordObject.satisfaction = std::stoi(value["Satisfaction"].asString());
		if(!value["ContactType"].isNull())
			callDetailRecordObject.contactType = value["ContactType"].asString();
		if(!value["ContactDisposition"].isNull())
			callDetailRecordObject.contactDisposition = value["ContactDisposition"].asString();
		if(!value["CallingNumber"].isNull())
			callDetailRecordObject.callingNumber = value["CallingNumber"].asString();
		if(!value["CalledNumber"].isNull())
			callDetailRecordObject.calledNumber = value["CalledNumber"].asString();
		if(!value["AgentNames"].isNull())
			callDetailRecordObject.agentNames = value["AgentNames"].asString();
		if(!value["SkillGroupNames"].isNull())
			callDetailRecordObject.skillGroupNames = value["SkillGroupNames"].asString();
		if(!value["InstanceId"].isNull())
			callDetailRecordObject.instanceId = value["InstanceId"].asString();
		if(!value["ExtraAttr"].isNull())
			callDetailRecordObject.extraAttr = value["ExtraAttr"].asString();
		if(!value["ExtraAttr"].isNull())
			callDetailRecordObject.extraAttr1 = value["ExtraAttr"].asString();
		if(!value["SatisfactionDesc"].isNull())
			callDetailRecordObject.satisfactionDesc = value["SatisfactionDesc"].asString();
		if(!value["Feedback"].isNull())
			callDetailRecordObject.feedback = value["Feedback"].asString();
		auto allAgents = value["Agents"]["CallDetailAgent"];
		for (auto value : allAgents)
		{
			CallDetailRecords::CallDetailRecord::CallDetailAgent agentsObject;
			if(!value["ContactId"].isNull())
				agentsObject.contactId = value["ContactId"].asString();
			if(!value["AgentId"].isNull())
				agentsObject.agentId = value["AgentId"].asString();
			if(!value["AgentName"].isNull())
				agentsObject.agentName = value["AgentName"].asString();
			if(!value["SkillGroupName"].isNull())
				agentsObject.skillGroupName = value["SkillGroupName"].asString();
			if(!value["QueueTime"].isNull())
				agentsObject.queueTime = std::stoi(value["QueueTime"].asString());
			if(!value["RingTime"].isNull())
				agentsObject.ringTime = std::stoi(value["RingTime"].asString());
			if(!value["StartTime"].isNull())
				agentsObject.startTime = std::stol(value["StartTime"].asString());
			if(!value["TalkTime"].isNull())
				agentsObject.talkTime = std::stoi(value["TalkTime"].asString());
			if(!value["HoldTime"].isNull())
				agentsObject.holdTime = std::stoi(value["HoldTime"].asString());
			if(!value["WorkTime"].isNull())
				agentsObject.workTime = std::stoi(value["WorkTime"].asString());
			if(!value["Satisfaction"].isNull())
				agentsObject.satisfaction = value["Satisfaction"].asString();
			if(!value["Feedback"].isNull())
				agentsObject.feedback = value["Feedback"].asString();
			callDetailRecordObject.agents.push_back(agentsObject);
		}
		auto allRecordings = value["Recordings"]["Recording"];
		for (auto value : allRecordings)
		{
			CallDetailRecords::CallDetailRecord::Recording recordingsObject;
			if(!value["ContactId"].isNull())
				recordingsObject.contactId = value["ContactId"].asString();
			if(!value["ContactType"].isNull())
				recordingsObject.contactType = value["ContactType"].asString();
			if(!value["AgentId"].isNull())
				recordingsObject.agentId = value["AgentId"].asString();
			if(!value["AgentName"].isNull())
				recordingsObject.agentName = value["AgentName"].asString();
			if(!value["CallingNumber"].isNull())
				recordingsObject.callingNumber = value["CallingNumber"].asString();
			if(!value["CalledNumber"].isNull())
				recordingsObject.calledNumber = value["CalledNumber"].asString();
			if(!value["StartTime"].isNull())
				recordingsObject.startTime = std::stol(value["StartTime"].asString());
			if(!value["Duration"].isNull())
				recordingsObject.duration = std::stoi(value["Duration"].asString());
			if(!value["FileName"].isNull())
				recordingsObject.fileName = value["FileName"].asString();
			if(!value["FilePath"].isNull())
				recordingsObject.filePath = value["FilePath"].asString();
			if(!value["FileDescription"].isNull())
				recordingsObject.fileDescription = value["FileDescription"].asString();
			if(!value["Channel"].isNull())
				recordingsObject.channel = value["Channel"].asString();
			if(!value["InstanceId"].isNull())
				recordingsObject.instanceId = value["InstanceId"].asString();
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

