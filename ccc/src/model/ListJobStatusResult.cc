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

#include <alibabacloud/ccc/model/ListJobStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListJobStatusResult::ListJobStatusResult() :
	ServiceResult()
{}

ListJobStatusResult::ListJobStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListJobStatusResult::~ListJobStatusResult()
{}

void ListJobStatusResult::parse(const std::string &payload)
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
		if(!value["GroupId"].isNull())
			jobObject.groupId = value["GroupId"].asString();
		if(!value["ScenarioId"].isNull())
			jobObject.scenarioId = value["ScenarioId"].asString();
		if(!value["StrategyId"].isNull())
			jobObject.strategyId = value["StrategyId"].asString();
		if(!value["Priority"].isNull())
			jobObject.priority = std::stoi(value["Priority"].asString());
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
		auto allExtras = value["Extras"]["KeyValuePair"];
		for (auto value : allExtras)
		{
			Jobs::Job::KeyValuePair extrasObject;
			if(!value["Key"].isNull())
				extrasObject.key = value["Key"].asString();
			if(!value["Value"].isNull())
				extrasObject.value = value["Value"].asString();
			jobObject.extras.push_back(extrasObject);
		}
		auto allTasks = value["Tasks"]["Task"];
		for (auto value : allTasks)
		{
			Jobs::Job::Task tasksObject;
			if(!value["TaskId"].isNull())
				tasksObject.taskId = value["TaskId"].asString();
			if(!value["JobId"].isNull())
				tasksObject.jobId = value["JobId"].asString();
			if(!value["ScenarioId"].isNull())
				tasksObject.scenarioId = value["ScenarioId"].asString();
			if(!value["ChatbotId"].isNull())
				tasksObject.chatbotId = value["ChatbotId"].asString();
			if(!value["PlanedTime"].isNull())
				tasksObject.planedTime = std::stol(value["PlanedTime"].asString());
			if(!value["ActualTime"].isNull())
				tasksObject.actualTime = std::stol(value["ActualTime"].asString());
			if(!value["CallingNumber"].isNull())
				tasksObject.callingNumber = value["CallingNumber"].asString();
			if(!value["CalledNumber"].isNull())
				tasksObject.calledNumber = value["CalledNumber"].asString();
			if(!value["CallId"].isNull())
				tasksObject.callId = value["CallId"].asString();
			if(!value["Status"].isNull())
				tasksObject.status = value["Status"].asString();
			if(!value["Brief"].isNull())
				tasksObject.brief = value["Brief"].asString();
			if(!value["Duration"].isNull())
				tasksObject.duration = std::stoi(value["Duration"].asString());
			auto contact1Node = value["Contact"];
			if(!contact1Node["ContactId"].isNull())
				tasksObject.contact1.contactId = contact1Node["ContactId"].asString();
			if(!contact1Node["ContactName"].isNull())
				tasksObject.contact1.contactName = contact1Node["ContactName"].asString();
			if(!contact1Node["Honorific"].isNull())
				tasksObject.contact1.honorific = contact1Node["Honorific"].asString();
			if(!contact1Node["Role"].isNull())
				tasksObject.contact1.role = contact1Node["Role"].asString();
			if(!contact1Node["PhoneNumber"].isNull())
				tasksObject.contact1.phoneNumber = contact1Node["PhoneNumber"].asString();
			if(!contact1Node["State"].isNull())
				tasksObject.contact1.state = contact1Node["State"].asString();
			if(!contact1Node["ReferenceId"].isNull())
				tasksObject.contact1.referenceId = contact1Node["ReferenceId"].asString();
			if(!contact1Node["JobId"].isNull())
				tasksObject.contact1.jobId = contact1Node["JobId"].asString();
			jobObject.tasks.push_back(tasksObject);
		}
		auto allSummary = value["Summary"]["SummaryItem"];
		for (auto value : allSummary)
		{
			Jobs::Job::SummaryItem summaryObject;
			if(!value["SummaryId"].isNull())
				summaryObject.summaryId = value["SummaryId"].asString();
			if(!value["GroupId"].isNull())
				summaryObject.groupId = value["GroupId"].asString();
			if(!value["JobId"].isNull())
				summaryObject.jobId = value["JobId"].asString();
			if(!value["TaskId"].isNull())
				summaryObject.taskId = value["TaskId"].asString();
			if(!value["ConversationDetailId"].isNull())
				summaryObject.conversationDetailId = value["ConversationDetailId"].asString();
			if(!value["Category"].isNull())
				summaryObject.category = value["Category"].asString();
			if(!value["SummaryName"].isNull())
				summaryObject.summaryName = value["SummaryName"].asString();
			if(!value["Content"].isNull())
				summaryObject.content = value["Content"].asString();
			jobObject.summary.push_back(summaryObject);
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

std::string ListJobStatusResult::getMessage()const
{
	return message_;
}

ListJobStatusResult::Jobs ListJobStatusResult::getJobs()const
{
	return jobs_;
}

int ListJobStatusResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListJobStatusResult::getCode()const
{
	return code_;
}

bool ListJobStatusResult::getSuccess()const
{
	return success_;
}

