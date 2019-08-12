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
		if(!value["SatisfactionDesc"].isNull())
			callDetailRecordObject.satisfactionDesc = value["SatisfactionDesc"].asString();
		if(!value["Feedback"].isNull())
			callDetailRecordObject.feedback = value["Feedback"].asString();
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
		auto allAgents = value["Agents"]["CallDetailAgent"];
		for (auto value : allAgents)
		{
			CallDetailRecords::CallDetailRecord::CallDetailAgent agentsObject;
			if(!value["AgentId"].isNull())
				agentsObject.agentId = value["AgentId"].asString();
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
			if(!value["AgentId"].isNull())
				recordingsObject.agentId = value["AgentId"].asString();
			if(!value["AgentName"].isNull())
				recordingsObject.agentName = value["AgentName"].asString();
			if(!value["StartTime"].isNull())
				recordingsObject.startTime = std::stol(value["StartTime"].asString());
			if(!value["Duration"].isNull())
				recordingsObject.duration = std::stoi(value["Duration"].asString());
			if(!value["FileName"].isNull())
				recordingsObject.fileName = value["FileName"].asString();
			if(!value["FileDescription"].isNull())
				recordingsObject.fileDescription = value["FileDescription"].asString();
			if(!value["QualityCheckTid"].isNull())
				recordingsObject.qualityCheckTid = value["QualityCheckTid"].asString();
			if(!value["QualityCheckTaskId"].isNull())
				recordingsObject.qualityCheckTaskId = value["QualityCheckTaskId"].asString();
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

std::string ListCallDetailRecordsResult::getMessage()const
{
	return message_;
}

ListCallDetailRecordsResult::CallDetailRecords ListCallDetailRecordsResult::getCallDetailRecords()const
{
	return callDetailRecords_;
}

int ListCallDetailRecordsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListCallDetailRecordsResult::getCode()const
{
	return code_;
}

bool ListCallDetailRecordsResult::getSuccess()const
{
	return success_;
}

