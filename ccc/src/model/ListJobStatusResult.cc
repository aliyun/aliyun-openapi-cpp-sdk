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
		if(!jobsNodeListJob["GroupId"].isNull())
			jobObject.groupId = jobsNodeListJob["GroupId"].asString();
		if(!jobsNodeListJob["ScenarioId"].isNull())
			jobObject.scenarioId = jobsNodeListJob["ScenarioId"].asString();
		if(!jobsNodeListJob["StrategyId"].isNull())
			jobObject.strategyId = jobsNodeListJob["StrategyId"].asString();
		if(!jobsNodeListJob["Priority"].isNull())
			jobObject.priority = std::stoi(jobsNodeListJob["Priority"].asString());
		if(!jobsNodeListJob["Status"].isNull())
			jobObject.status = jobsNodeListJob["Status"].asString();
		if(!jobsNodeListJob["ReferenceId"].isNull())
			jobObject.referenceId = jobsNodeListJob["ReferenceId"].asString();
		if(!jobsNodeListJob["FailureReason"].isNull())
			jobObject.failureReason = jobsNodeListJob["FailureReason"].asString();
		auto allContactsNode = jobsNodeListJob["Contacts"]["Contact"];
		for (auto jobsNodeListJobContactsContact : allContactsNode)
		{
			Jobs::Job::Contact contactsObject;
			if(!jobsNodeListJobContactsContact["ContactId"].isNull())
				contactsObject.contactId = jobsNodeListJobContactsContact["ContactId"].asString();
			if(!jobsNodeListJobContactsContact["ContactName"].isNull())
				contactsObject.contactName = jobsNodeListJobContactsContact["ContactName"].asString();
			if(!jobsNodeListJobContactsContact["Honorific"].isNull())
				contactsObject.honorific = jobsNodeListJobContactsContact["Honorific"].asString();
			if(!jobsNodeListJobContactsContact["Role"].isNull())
				contactsObject.role = jobsNodeListJobContactsContact["Role"].asString();
			if(!jobsNodeListJobContactsContact["PhoneNumber"].isNull())
				contactsObject.phoneNumber = jobsNodeListJobContactsContact["PhoneNumber"].asString();
			if(!jobsNodeListJobContactsContact["State"].isNull())
				contactsObject.state = jobsNodeListJobContactsContact["State"].asString();
			if(!jobsNodeListJobContactsContact["ReferenceId"].isNull())
				contactsObject.referenceId = jobsNodeListJobContactsContact["ReferenceId"].asString();
			if(!jobsNodeListJobContactsContact["JobId"].isNull())
				contactsObject.jobId = jobsNodeListJobContactsContact["JobId"].asString();
			jobObject.contacts.push_back(contactsObject);
		}
		auto allExtrasNode = jobsNodeListJob["Extras"]["KeyValuePair"];
		for (auto jobsNodeListJobExtrasKeyValuePair : allExtrasNode)
		{
			Jobs::Job::KeyValuePair extrasObject;
			if(!jobsNodeListJobExtrasKeyValuePair["Key"].isNull())
				extrasObject.key = jobsNodeListJobExtrasKeyValuePair["Key"].asString();
			if(!jobsNodeListJobExtrasKeyValuePair["Value"].isNull())
				extrasObject.value = jobsNodeListJobExtrasKeyValuePair["Value"].asString();
			jobObject.extras.push_back(extrasObject);
		}
		auto allTasksNode = jobsNodeListJob["Tasks"]["Task"];
		for (auto jobsNodeListJobTasksTask : allTasksNode)
		{
			Jobs::Job::Task tasksObject;
			if(!jobsNodeListJobTasksTask["TaskId"].isNull())
				tasksObject.taskId = jobsNodeListJobTasksTask["TaskId"].asString();
			if(!jobsNodeListJobTasksTask["JobId"].isNull())
				tasksObject.jobId = jobsNodeListJobTasksTask["JobId"].asString();
			if(!jobsNodeListJobTasksTask["ScenarioId"].isNull())
				tasksObject.scenarioId = jobsNodeListJobTasksTask["ScenarioId"].asString();
			if(!jobsNodeListJobTasksTask["ChatbotId"].isNull())
				tasksObject.chatbotId = jobsNodeListJobTasksTask["ChatbotId"].asString();
			if(!jobsNodeListJobTasksTask["PlanedTime"].isNull())
				tasksObject.planedTime = std::stol(jobsNodeListJobTasksTask["PlanedTime"].asString());
			if(!jobsNodeListJobTasksTask["ActualTime"].isNull())
				tasksObject.actualTime = std::stol(jobsNodeListJobTasksTask["ActualTime"].asString());
			if(!jobsNodeListJobTasksTask["CallingNumber"].isNull())
				tasksObject.callingNumber = jobsNodeListJobTasksTask["CallingNumber"].asString();
			if(!jobsNodeListJobTasksTask["CalledNumber"].isNull())
				tasksObject.calledNumber = jobsNodeListJobTasksTask["CalledNumber"].asString();
			if(!jobsNodeListJobTasksTask["CallId"].isNull())
				tasksObject.callId = jobsNodeListJobTasksTask["CallId"].asString();
			if(!jobsNodeListJobTasksTask["Status"].isNull())
				tasksObject.status = jobsNodeListJobTasksTask["Status"].asString();
			if(!jobsNodeListJobTasksTask["Brief"].isNull())
				tasksObject.brief = jobsNodeListJobTasksTask["Brief"].asString();
			if(!jobsNodeListJobTasksTask["Duration"].isNull())
				tasksObject.duration = std::stoi(jobsNodeListJobTasksTask["Duration"].asString());
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
		auto allSummaryNode = jobsNodeListJob["Summary"]["SummaryItem"];
		for (auto jobsNodeListJobSummarySummaryItem : allSummaryNode)
		{
			Jobs::Job::SummaryItem summaryObject;
			if(!jobsNodeListJobSummarySummaryItem["SummaryId"].isNull())
				summaryObject.summaryId = jobsNodeListJobSummarySummaryItem["SummaryId"].asString();
			if(!jobsNodeListJobSummarySummaryItem["GroupId"].isNull())
				summaryObject.groupId = jobsNodeListJobSummarySummaryItem["GroupId"].asString();
			if(!jobsNodeListJobSummarySummaryItem["JobId"].isNull())
				summaryObject.jobId = jobsNodeListJobSummarySummaryItem["JobId"].asString();
			if(!jobsNodeListJobSummarySummaryItem["TaskId"].isNull())
				summaryObject.taskId = jobsNodeListJobSummarySummaryItem["TaskId"].asString();
			if(!jobsNodeListJobSummarySummaryItem["ConversationDetailId"].isNull())
				summaryObject.conversationDetailId = jobsNodeListJobSummarySummaryItem["ConversationDetailId"].asString();
			if(!jobsNodeListJobSummarySummaryItem["Category"].isNull())
				summaryObject.category = jobsNodeListJobSummarySummaryItem["Category"].asString();
			if(!jobsNodeListJobSummarySummaryItem["SummaryName"].isNull())
				summaryObject.summaryName = jobsNodeListJobSummarySummaryItem["SummaryName"].asString();
			if(!jobsNodeListJobSummarySummaryItem["Content"].isNull())
				summaryObject.content = jobsNodeListJobSummarySummaryItem["Content"].asString();
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

