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
		if(!valueJobsJob["FailureReason"].isNull())
			jobsObject.failureReason = valueJobsJob["FailureReason"].asString();
		if(!valueJobsJob["JobGroupId"].isNull())
			jobsObject.jobGroupId = valueJobsJob["JobGroupId"].asString();
		if(!valueJobsJob["JobId"].isNull())
			jobsObject.jobId = valueJobsJob["JobId"].asString();
		if(!valueJobsJob["Priority"].isNull())
			jobsObject.priority = std::stoi(valueJobsJob["Priority"].asString());
		if(!valueJobsJob["ReferenceId"].isNull())
			jobsObject.referenceId = valueJobsJob["ReferenceId"].asString();
		if(!valueJobsJob["ScenarioId"].isNull())
			jobsObject.scenarioId = valueJobsJob["ScenarioId"].asString();
		if(!valueJobsJob["Status"].isNull())
			jobsObject.status = valueJobsJob["Status"].asString();
		if(!valueJobsJob["StrategyId"].isNull())
			jobsObject.strategyId = valueJobsJob["StrategyId"].asString();
		if(!valueJobsJob["SystemPriority"].isNull())
			jobsObject.systemPriority = std::stoi(valueJobsJob["SystemPriority"].asString());
		auto allContactsNode = allJobsNode["Contacts"]["Contact"];
		for (auto allJobsNodeContactsContact : allContactsNode)
		{
			Job::Contact contactsObject;
			if(!allJobsNodeContactsContact["ContactId"].isNull())
				contactsObject.contactId = allJobsNodeContactsContact["ContactId"].asString();
			if(!allJobsNodeContactsContact["ContactName"].isNull())
				contactsObject.contactName = allJobsNodeContactsContact["ContactName"].asString();
			if(!allJobsNodeContactsContact["Honorific"].isNull())
				contactsObject.honorific = allJobsNodeContactsContact["Honorific"].asString();
			if(!allJobsNodeContactsContact["JobId"].isNull())
				contactsObject.jobId = allJobsNodeContactsContact["JobId"].asString();
			if(!allJobsNodeContactsContact["PhoneNumber"].isNull())
				contactsObject.phoneNumber = allJobsNodeContactsContact["PhoneNumber"].asString();
			if(!allJobsNodeContactsContact["ReferenceId"].isNull())
				contactsObject.referenceId = allJobsNodeContactsContact["ReferenceId"].asString();
			if(!allJobsNodeContactsContact["Role"].isNull())
				contactsObject.role = allJobsNodeContactsContact["Role"].asString();
			if(!allJobsNodeContactsContact["State"].isNull())
				contactsObject.state = allJobsNodeContactsContact["State"].asString();
			jobsObject.contacts.push_back(contactsObject);
		}
		auto allExtrasNode = allJobsNode["Extras"]["KeyValuePair"];
		for (auto allJobsNodeExtrasKeyValuePair : allExtrasNode)
		{
			Job::KeyValuePair extrasObject;
			if(!allJobsNodeExtrasKeyValuePair["Key"].isNull())
				extrasObject.key = allJobsNodeExtrasKeyValuePair["Key"].asString();
			if(!allJobsNodeExtrasKeyValuePair["Value"].isNull())
				extrasObject.value = allJobsNodeExtrasKeyValuePair["Value"].asString();
			jobsObject.extras.push_back(extrasObject);
		}
		auto allSummaryNode = allJobsNode["Summary"]["SummaryItem"];
		for (auto allJobsNodeSummarySummaryItem : allSummaryNode)
		{
			Job::SummaryItem summaryObject;
			if(!allJobsNodeSummarySummaryItem["Category"].isNull())
				summaryObject.category = allJobsNodeSummarySummaryItem["Category"].asString();
			if(!allJobsNodeSummarySummaryItem["Content"].isNull())
				summaryObject.content = allJobsNodeSummarySummaryItem["Content"].asString();
			if(!allJobsNodeSummarySummaryItem["SummaryName"].isNull())
				summaryObject.summaryName = allJobsNodeSummarySummaryItem["SummaryName"].asString();
			jobsObject.summary.push_back(summaryObject);
		}
		auto allTasksNode = allJobsNode["Tasks"]["Task"];
		for (auto allJobsNodeTasksTask : allTasksNode)
		{
			Job::Task tasksObject;
			if(!allJobsNodeTasksTask["ActualTime"].isNull())
				tasksObject.actualTime = std::stol(allJobsNodeTasksTask["ActualTime"].asString());
			if(!allJobsNodeTasksTask["Brief"].isNull())
				tasksObject.brief = allJobsNodeTasksTask["Brief"].asString();
			if(!allJobsNodeTasksTask["CallId"].isNull())
				tasksObject.callId = allJobsNodeTasksTask["CallId"].asString();
			if(!allJobsNodeTasksTask["CalledNumber"].isNull())
				tasksObject.calledNumber = allJobsNodeTasksTask["CalledNumber"].asString();
			if(!allJobsNodeTasksTask["CallingNumber"].isNull())
				tasksObject.callingNumber = allJobsNodeTasksTask["CallingNumber"].asString();
			if(!allJobsNodeTasksTask["ChatbotId"].isNull())
				tasksObject.chatbotId = allJobsNodeTasksTask["ChatbotId"].asString();
			if(!allJobsNodeTasksTask["Duration"].isNull())
				tasksObject.duration = std::stoi(allJobsNodeTasksTask["Duration"].asString());
			if(!allJobsNodeTasksTask["JobId"].isNull())
				tasksObject.jobId = allJobsNodeTasksTask["JobId"].asString();
			if(!allJobsNodeTasksTask["PlanedTime"].isNull())
				tasksObject.planedTime = std::stol(allJobsNodeTasksTask["PlanedTime"].asString());
			if(!allJobsNodeTasksTask["ScenarioId"].isNull())
				tasksObject.scenarioId = allJobsNodeTasksTask["ScenarioId"].asString();
			if(!allJobsNodeTasksTask["Status"].isNull())
				tasksObject.status = allJobsNodeTasksTask["Status"].asString();
			if(!allJobsNodeTasksTask["TaskId"].isNull())
				tasksObject.taskId = allJobsNodeTasksTask["TaskId"].asString();
			auto allConversationNode = allTasksNode["Conversation"]["ConversationDetail"];
			for (auto allTasksNodeConversationConversationDetail : allConversationNode)
			{
				Job::Task::ConversationDetail conversationObject;
				if(!allTasksNodeConversationConversationDetail["Script"].isNull())
					conversationObject.script = allTasksNodeConversationConversationDetail["Script"].asString();
				if(!allTasksNodeConversationConversationDetail["Speaker"].isNull())
					conversationObject.speaker = allTasksNodeConversationConversationDetail["Speaker"].asString();
				if(!allTasksNodeConversationConversationDetail["Timestamp"].isNull())
					conversationObject.timestamp = std::stol(allTasksNodeConversationConversationDetail["Timestamp"].asString());
				auto allSummary1Node = allConversationNode["Summary"]["SummaryItem"];
				for (auto allConversationNodeSummarySummaryItem : allSummary1Node)
				{
					Job::Task::ConversationDetail::SummaryItem2 summary1Object;
					if(!allConversationNodeSummarySummaryItem["Category"].isNull())
						summary1Object.category = allConversationNodeSummarySummaryItem["Category"].asString();
					if(!allConversationNodeSummarySummaryItem["Content"].isNull())
						summary1Object.content = allConversationNodeSummarySummaryItem["Content"].asString();
					if(!allConversationNodeSummarySummaryItem["SummaryName"].isNull())
						summary1Object.summaryName = allConversationNodeSummarySummaryItem["SummaryName"].asString();
					conversationObject.summary1.push_back(summary1Object);
				}
				tasksObject.conversation.push_back(conversationObject);
			}
			auto contact3Node = value["Contact"];
			if(!contact3Node["ContactId"].isNull())
				tasksObject.contact3.contactId = contact3Node["ContactId"].asString();
			if(!contact3Node["ContactName"].isNull())
				tasksObject.contact3.contactName = contact3Node["ContactName"].asString();
			if(!contact3Node["Honorific"].isNull())
				tasksObject.contact3.honorific = contact3Node["Honorific"].asString();
			if(!contact3Node["JobId"].isNull())
				tasksObject.contact3.jobId = contact3Node["JobId"].asString();
			if(!contact3Node["PhoneNumber"].isNull())
				tasksObject.contact3.phoneNumber = contact3Node["PhoneNumber"].asString();
			if(!contact3Node["ReferenceId"].isNull())
				tasksObject.contact3.referenceId = contact3Node["ReferenceId"].asString();
			if(!contact3Node["Role"].isNull())
				tasksObject.contact3.role = contact3Node["Role"].asString();
			if(!contact3Node["State"].isNull())
				tasksObject.contact3.state = contact3Node["State"].asString();
			jobsObject.tasks.push_back(tasksObject);
		}
		auto allCallingNumbers = value["CallingNumbers"]["String"];
		for (auto value : allCallingNumbers)
			jobsObject.callingNumbers.push_back(value.asString());
		jobs_.push_back(jobsObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
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

