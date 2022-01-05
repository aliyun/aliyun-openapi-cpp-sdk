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

#include <alibabacloud/ccc/model/ListAttemptsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListAttemptsResult::ListAttemptsResult() :
	ServiceResult()
{}

ListAttemptsResult::ListAttemptsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAttemptsResult::~ListAttemptsResult()
{}

void ListAttemptsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allListNode = dataNode["List"]["AttemptList"];
	for (auto dataNodeListAttemptList : allListNode)
	{
		Data::AttemptList attemptListObject;
		if(!dataNodeListAttemptList["AttemptId"].isNull())
			attemptListObject.attemptId = dataNodeListAttemptList["AttemptId"].asString();
		if(!dataNodeListAttemptList["ContactId"].isNull())
			attemptListObject.contactId = dataNodeListAttemptList["ContactId"].asString();
		if(!dataNodeListAttemptList["CaseId"].isNull())
			attemptListObject.caseId = dataNodeListAttemptList["CaseId"].asString();
		if(!dataNodeListAttemptList["CampaignId"].isNull())
			attemptListObject.campaignId = dataNodeListAttemptList["CampaignId"].asString();
		if(!dataNodeListAttemptList["InstanceId"].isNull())
			attemptListObject.instanceId = dataNodeListAttemptList["InstanceId"].asString();
		if(!dataNodeListAttemptList["QueueId"].isNull())
			attemptListObject.queueId = dataNodeListAttemptList["QueueId"].asString();
		if(!dataNodeListAttemptList["Caller"].isNull())
			attemptListObject.caller = dataNodeListAttemptList["Caller"].asString();
		if(!dataNodeListAttemptList["Callee"].isNull())
			attemptListObject.callee = dataNodeListAttemptList["Callee"].asString();
		if(!dataNodeListAttemptList["AgentId"].isNull())
			attemptListObject.agentId = dataNodeListAttemptList["AgentId"].asString();
		if(!dataNodeListAttemptList["DialTime"].isNull())
			attemptListObject.dialTime = std::stol(dataNodeListAttemptList["DialTime"].asString());
		if(!dataNodeListAttemptList["DialDuration"].isNull())
			attemptListObject.dialDuration = std::stol(dataNodeListAttemptList["DialDuration"].asString());
		if(!dataNodeListAttemptList["CustomerEstablishedTime"].isNull())
			attemptListObject.customerEstablishedTime = std::stol(dataNodeListAttemptList["CustomerEstablishedTime"].asString());
		if(!dataNodeListAttemptList["CustomerReleasedTime"].isNull())
			attemptListObject.customerReleasedTime = std::stol(dataNodeListAttemptList["CustomerReleasedTime"].asString());
		if(!dataNodeListAttemptList["EnterIvrTime"].isNull())
			attemptListObject.enterIvrTime = std::stol(dataNodeListAttemptList["EnterIvrTime"].asString());
		if(!dataNodeListAttemptList["IvrDuration"].isNull())
			attemptListObject.ivrDuration = std::stol(dataNodeListAttemptList["IvrDuration"].asString());
		if(!dataNodeListAttemptList["EnqueueTime"].isNull())
			attemptListObject.enqueueTime = std::stol(dataNodeListAttemptList["EnqueueTime"].asString());
		if(!dataNodeListAttemptList["QueueDuration"].isNull())
			attemptListObject.queueDuration = std::stol(dataNodeListAttemptList["QueueDuration"].asString());
		if(!dataNodeListAttemptList["AssignAgentTime"].isNull())
			attemptListObject.assignAgentTime = std::stol(dataNodeListAttemptList["AssignAgentTime"].asString());
		if(!dataNodeListAttemptList["AgentRingDuration"].isNull())
			attemptListObject.agentRingDuration = std::stol(dataNodeListAttemptList["AgentRingDuration"].asString());
		if(!dataNodeListAttemptList["AgentEstablishedTime"].isNull())
			attemptListObject.agentEstablishedTime = std::stol(dataNodeListAttemptList["AgentEstablishedTime"].asString());
		data_.list.push_back(attemptListObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListAttemptsResult::getMessage()const
{
	return message_;
}

int ListAttemptsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListAttemptsResult::Data ListAttemptsResult::getData()const
{
	return data_;
}

std::string ListAttemptsResult::getCode()const
{
	return code_;
}

