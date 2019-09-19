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

#include <alibabacloud/ccc/model/ListPredictiveJobStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListPredictiveJobStatusResult::ListPredictiveJobStatusResult() :
	ServiceResult()
{}

ListPredictiveJobStatusResult::ListPredictiveJobStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPredictiveJobStatusResult::~ListPredictiveJobStatusResult()
{}

void ListPredictiveJobStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto jobsNode = value["Jobs"];
	if(!jobsNode["TotalCount"].isNull())
		jobs_.totalCount = std::stoi(jobsNode["TotalCount"].asString());
	if(!jobsNode["PageNumber"].isNull())
		jobs_.pageNumber = std::stoi(jobsNode["PageNumber"].asString());
	if(!jobsNode["PageSize"].isNull())
		jobs_.pageSize = std::stoi(jobsNode["PageSize"].asString());
	auto allListNode = jobsNode["List"]["Job"];
	for (auto jobsNodeListJob : allListNode)
	{
		Jobs::Job jobObject;
		if(!jobsNodeListJob["JobId"].isNull())
			jobObject.jobId = jobsNodeListJob["JobId"].asString();
		if(!jobsNodeListJob["JobGroupId"].isNull())
			jobObject.jobGroupId = jobsNodeListJob["JobGroupId"].asString();
		if(!jobsNodeListJob["ScenarioId"].isNull())
			jobObject.scenarioId = jobsNodeListJob["ScenarioId"].asString();
		if(!jobsNodeListJob["StrategyId"].isNull())
			jobObject.strategyId = jobsNodeListJob["StrategyId"].asString();
		if(!jobsNodeListJob["Priority"].isNull())
			jobObject.priority = std::stoi(jobsNodeListJob["Priority"].asString());
		if(!jobsNodeListJob["SystemPriority"].isNull())
			jobObject.systemPriority = std::stoi(jobsNodeListJob["SystemPriority"].asString());
		if(!jobsNodeListJob["Status"].isNull())
			jobObject.status = jobsNodeListJob["Status"].asString();
		if(!jobsNodeListJob["ReferenceId"].isNull())
			jobObject.referenceId = jobsNodeListJob["ReferenceId"].asString();
		if(!jobsNodeListJob["FailureReason"].isNull())
			jobObject.failureReason = jobsNodeListJob["FailureReason"].asString();
		auto allContactsNode = allListNode["Contacts"]["Contact"];
		for (auto allListNodeContactsContact : allContactsNode)
		{
			Jobs::Job::Contact contactsObject;
			if(!allListNodeContactsContact["ContactId"].isNull())
				contactsObject.contactId = allListNodeContactsContact["ContactId"].asString();
			if(!allListNodeContactsContact["ContactName"].isNull())
				contactsObject.contactName = allListNodeContactsContact["ContactName"].asString();
			if(!allListNodeContactsContact["Honorific"].isNull())
				contactsObject.honorific = allListNodeContactsContact["Honorific"].asString();
			if(!allListNodeContactsContact["Role"].isNull())
				contactsObject.role = allListNodeContactsContact["Role"].asString();
			if(!allListNodeContactsContact["PhoneNumber"].isNull())
				contactsObject.phoneNumber = allListNodeContactsContact["PhoneNumber"].asString();
			if(!allListNodeContactsContact["State"].isNull())
				contactsObject.state = allListNodeContactsContact["State"].asString();
			if(!allListNodeContactsContact["ReferenceId"].isNull())
				contactsObject.referenceId = allListNodeContactsContact["ReferenceId"].asString();
			if(!allListNodeContactsContact["JobId"].isNull())
				contactsObject.jobId = allListNodeContactsContact["JobId"].asString();
			jobObject.contacts.push_back(contactsObject);
		}
		auto allCallingNumbers = value["CallingNumbers"]["String"];
		for (auto value : allCallingNumbers)
			jobObject.callingNumbers.push_back(value.asString());
		jobs_.list.push_back(jobObject);
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

std::string ListPredictiveJobStatusResult::getMessage()const
{
	return message_;
}

ListPredictiveJobStatusResult::Jobs ListPredictiveJobStatusResult::getJobs()const
{
	return jobs_;
}

int ListPredictiveJobStatusResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListPredictiveJobStatusResult::getCode()const
{
	return code_;
}

bool ListPredictiveJobStatusResult::getSuccess()const
{
	return success_;
}

