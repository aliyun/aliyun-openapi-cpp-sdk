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

#include <alibabacloud/outboundbot/model/ListJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListJobsResult::ListJobsResult() :
	ServiceResult()
{}

ListJobsResult::ListJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListJobsResult::~ListJobsResult()
{}

void ListJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobsNode = value["Jobs"]["Job"];
	for (auto valueJobsJob : allJobsNode)
	{
		Job jobsObject;
		if(!valueJobsJob["Status"].isNull())
			jobsObject.status = valueJobsJob["Status"].asString();
		if(!valueJobsJob["ScenarioId"].isNull())
			jobsObject.scenarioId = valueJobsJob["ScenarioId"].asString();
		if(!valueJobsJob["JobGroupId"].isNull())
			jobsObject.jobGroupId = valueJobsJob["JobGroupId"].asString();
		if(!valueJobsJob["StrategyId"].isNull())
			jobsObject.strategyId = valueJobsJob["StrategyId"].asString();
		if(!valueJobsJob["JobId"].isNull())
			jobsObject.jobId = valueJobsJob["JobId"].asString();
		if(!valueJobsJob["Priority"].isNull())
			jobsObject.priority = std::stoi(valueJobsJob["Priority"].asString());
		if(!valueJobsJob["SystemPriority"].isNull())
			jobsObject.systemPriority = std::stoi(valueJobsJob["SystemPriority"].asString());
		if(!valueJobsJob["FailureReason"].isNull())
			jobsObject.failureReason = valueJobsJob["FailureReason"].asString();
		if(!valueJobsJob["ReferenceId"].isNull())
			jobsObject.referenceId = valueJobsJob["ReferenceId"].asString();
		auto allContactsNode = valueJobsJob["Contacts"]["Contact"];
		for (auto valueJobsJobContactsContact : allContactsNode)
		{
			Job::Contact contactsObject;
			if(!valueJobsJobContactsContact["PhoneNumber"].isNull())
				contactsObject.phoneNumber = valueJobsJobContactsContact["PhoneNumber"].asString();
			if(!valueJobsJobContactsContact["State"].isNull())
				contactsObject.state = valueJobsJobContactsContact["State"].asString();
			if(!valueJobsJobContactsContact["ContactId"].isNull())
				contactsObject.contactId = valueJobsJobContactsContact["ContactId"].asString();
			if(!valueJobsJobContactsContact["Honorific"].isNull())
				contactsObject.honorific = valueJobsJobContactsContact["Honorific"].asString();
			if(!valueJobsJobContactsContact["JobId"].isNull())
				contactsObject.jobId = valueJobsJobContactsContact["JobId"].asString();
			if(!valueJobsJobContactsContact["ContactName"].isNull())
				contactsObject.contactName = valueJobsJobContactsContact["ContactName"].asString();
			if(!valueJobsJobContactsContact["Role"].isNull())
				contactsObject.role = valueJobsJobContactsContact["Role"].asString();
			if(!valueJobsJobContactsContact["ReferenceId"].isNull())
				contactsObject.referenceId = valueJobsJobContactsContact["ReferenceId"].asString();
			jobsObject.contacts.push_back(contactsObject);
		}
		auto allExtrasNode = valueJobsJob["Extras"]["KeyValuePair"];
		for (auto valueJobsJobExtrasKeyValuePair : allExtrasNode)
		{
			Job::KeyValuePair extrasObject;
			if(!valueJobsJobExtrasKeyValuePair["Key"].isNull())
				extrasObject.key = valueJobsJobExtrasKeyValuePair["Key"].asString();
			if(!valueJobsJobExtrasKeyValuePair["Value"].isNull())
				extrasObject.value = valueJobsJobExtrasKeyValuePair["Value"].asString();
			jobsObject.extras.push_back(extrasObject);
		}
		auto allSummaryNode = valueJobsJob["Summary"]["SummaryItem"];
		for (auto valueJobsJobSummarySummaryItem : allSummaryNode)
		{
			Job::SummaryItem summaryObject;
			if(!valueJobsJobSummarySummaryItem["SummaryName"].isNull())
				summaryObject.summaryName = valueJobsJobSummarySummaryItem["SummaryName"].asString();
			if(!valueJobsJobSummarySummaryItem["Category"].isNull())
				summaryObject.category = valueJobsJobSummarySummaryItem["Category"].asString();
			if(!valueJobsJobSummarySummaryItem["Content"].isNull())
				summaryObject.content = valueJobsJobSummarySummaryItem["Content"].asString();
			jobsObject.summary.push_back(summaryObject);
		}
		auto allTasksNode = valueJobsJob["Tasks"]["Task"];
		for (auto valueJobsJobTasksTask : allTasksNode)
		{
			Job::Task tasksObject;
			if(!valueJobsJobTasksTask["Status"].isNull())
				tasksObject.status = valueJobsJobTasksTask["Status"].asString();
			if(!valueJobsJobTasksTask["PlanedTime"].isNull())
				tasksObject.planedTime = std::stol(valueJobsJobTasksTask["PlanedTime"].asString());
			if(!valueJobsJobTasksTask["ChatbotId"].isNull())
				tasksObject.chatbotId = valueJobsJobTasksTask["ChatbotId"].asString();
			if(!valueJobsJobTasksTask["ActualTime"].isNull())
				tasksObject.actualTime = std::stol(valueJobsJobTasksTask["ActualTime"].asString());
			if(!valueJobsJobTasksTask["CalledNumber"].isNull())
				tasksObject.calledNumber = valueJobsJobTasksTask["CalledNumber"].asString();
			if(!valueJobsJobTasksTask["ScenarioId"].isNull())
				tasksObject.scenarioId = valueJobsJobTasksTask["ScenarioId"].asString();
			if(!valueJobsJobTasksTask["JobId"].isNull())
				tasksObject.jobId = valueJobsJobTasksTask["JobId"].asString();
			if(!valueJobsJobTasksTask["CallId"].isNull())
				tasksObject.callId = valueJobsJobTasksTask["CallId"].asString();
			if(!valueJobsJobTasksTask["CallingNumber"].isNull())
				tasksObject.callingNumber = valueJobsJobTasksTask["CallingNumber"].asString();
			if(!valueJobsJobTasksTask["Brief"].isNull())
				tasksObject.brief = valueJobsJobTasksTask["Brief"].asString();
			if(!valueJobsJobTasksTask["Duration"].isNull())
				tasksObject.duration = std::stoi(valueJobsJobTasksTask["Duration"].asString());
			if(!valueJobsJobTasksTask["TaskId"].isNull())
				tasksObject.taskId = valueJobsJobTasksTask["TaskId"].asString();
			auto allConversationNode = valueJobsJobTasksTask["Conversation"]["ConversationDetail"];
			for (auto valueJobsJobTasksTaskConversationConversationDetail : allConversationNode)
			{
				Job::Task::ConversationDetail conversationObject;
				if(!valueJobsJobTasksTaskConversationConversationDetail["Speaker"].isNull())
					conversationObject.speaker = valueJobsJobTasksTaskConversationConversationDetail["Speaker"].asString();
				if(!valueJobsJobTasksTaskConversationConversationDetail["Timestamp"].isNull())
					conversationObject.timestamp = std::stol(valueJobsJobTasksTaskConversationConversationDetail["Timestamp"].asString());
				if(!valueJobsJobTasksTaskConversationConversationDetail["Script"].isNull())
					conversationObject.script = valueJobsJobTasksTaskConversationConversationDetail["Script"].asString();
				auto allSummary1Node = valueJobsJobTasksTaskConversationConversationDetail["Summary"]["SummaryItem"];
				for (auto valueJobsJobTasksTaskConversationConversationDetailSummarySummaryItem : allSummary1Node)
				{
					Job::Task::ConversationDetail::SummaryItem2 summary1Object;
					if(!valueJobsJobTasksTaskConversationConversationDetailSummarySummaryItem["SummaryName"].isNull())
						summary1Object.summaryName = valueJobsJobTasksTaskConversationConversationDetailSummarySummaryItem["SummaryName"].asString();
					if(!valueJobsJobTasksTaskConversationConversationDetailSummarySummaryItem["Category"].isNull())
						summary1Object.category = valueJobsJobTasksTaskConversationConversationDetailSummarySummaryItem["Category"].asString();
					if(!valueJobsJobTasksTaskConversationConversationDetailSummarySummaryItem["Content"].isNull())
						summary1Object.content = valueJobsJobTasksTaskConversationConversationDetailSummarySummaryItem["Content"].asString();
					conversationObject.summary1.push_back(summary1Object);
				}
				tasksObject.conversation.push_back(conversationObject);
			}
			auto contact3Node = value["Contact"];
			if(!contact3Node["PhoneNumber"].isNull())
				tasksObject.contact3.phoneNumber = contact3Node["PhoneNumber"].asString();
			if(!contact3Node["State"].isNull())
				tasksObject.contact3.state = contact3Node["State"].asString();
			if(!contact3Node["ContactId"].isNull())
				tasksObject.contact3.contactId = contact3Node["ContactId"].asString();
			if(!contact3Node["Honorific"].isNull())
				tasksObject.contact3.honorific = contact3Node["Honorific"].asString();
			if(!contact3Node["JobId"].isNull())
				tasksObject.contact3.jobId = contact3Node["JobId"].asString();
			if(!contact3Node["ContactName"].isNull())
				tasksObject.contact3.contactName = contact3Node["ContactName"].asString();
			if(!contact3Node["Role"].isNull())
				tasksObject.contact3.role = contact3Node["Role"].asString();
			if(!contact3Node["ReferenceId"].isNull())
				tasksObject.contact3.referenceId = contact3Node["ReferenceId"].asString();
			jobsObject.tasks.push_back(tasksObject);
		}
		auto allCallingNumbers = value["CallingNumbers"]["String"];
		for (auto value : allCallingNumbers)
			jobsObject.callingNumbers.push_back(value.asString());
		jobs_.push_back(jobsObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListJobsResult::getMessage()const
{
	return message_;
}

std::vector<ListJobsResult::Job> ListJobsResult::getJobs()const
{
	return jobs_;
}

int ListJobsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListJobsResult::getCode()const
{
	return code_;
}

bool ListJobsResult::getSuccess()const
{
	return success_;
}

