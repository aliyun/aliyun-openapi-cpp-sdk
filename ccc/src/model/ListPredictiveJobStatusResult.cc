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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto jobsNode = value["Jobs"];
	if(!jobsNode["TotalCount"].isNull())
		jobs_.totalCount = std::stoi(jobsNode["TotalCount"].asString());
	if(!jobsNode["PageNumber"].isNull())
		jobs_.pageNumber = std::stoi(jobsNode["PageNumber"].asString());
	if(!jobsNode["PageSize"].isNull())
		jobs_.pageSize = std::stoi(jobsNode["PageSize"].asString());
	auto allList = value["List"]["Job"];
	for (auto value : allList)
	{
		Jobs::Job jobObject;
		if(!value["JobId"].isNull())
			jobObject.jobId = value["JobId"].asString();
		if(!value["JobGroupId"].isNull())
			jobObject.jobGroupId = value["JobGroupId"].asString();
		if(!value["ScenarioId"].isNull())
			jobObject.scenarioId = value["ScenarioId"].asString();
		if(!value["StrategyId"].isNull())
			jobObject.strategyId = value["StrategyId"].asString();
		if(!value["Priority"].isNull())
			jobObject.priority = std::stoi(value["Priority"].asString());
		if(!value["SystemPriority"].isNull())
			jobObject.systemPriority = std::stoi(value["SystemPriority"].asString());
		if(!value["Status"].isNull())
			jobObject.status = value["Status"].asString();
		if(!value["ReferenceId"].isNull())
			jobObject.referenceId = value["ReferenceId"].asString();
		if(!value["FailureReason"].isNull())
			jobObject.failureReason = value["FailureReason"].asString();
		auto allContacts = value["Contacts"]["Contact"];
		for (auto value : allContacts)
		{
			Jobs::Job::Contact contactsObject;
			if(!value["ContactId"].isNull())
				contactsObject.contactId = value["ContactId"].asString();
			if(!value["ContactName"].isNull())
				contactsObject.contactName = value["ContactName"].asString();
			if(!value["Honorific"].isNull())
				contactsObject.honorific = value["Honorific"].asString();
			if(!value["Role"].isNull())
				contactsObject.role = value["Role"].asString();
			if(!value["PhoneNumber"].isNull())
				contactsObject.phoneNumber = value["PhoneNumber"].asString();
			if(!value["State"].isNull())
				contactsObject.state = value["State"].asString();
			if(!value["ReferenceId"].isNull())
				contactsObject.referenceId = value["ReferenceId"].asString();
			if(!value["JobId"].isNull())
				contactsObject.jobId = value["JobId"].asString();
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

