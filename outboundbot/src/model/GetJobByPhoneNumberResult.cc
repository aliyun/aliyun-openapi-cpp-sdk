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

#include <alibabacloud/outboundbot/model/GetJobByPhoneNumberResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

GetJobByPhoneNumberResult::GetJobByPhoneNumberResult() :
	ServiceResult()
{}

GetJobByPhoneNumberResult::GetJobByPhoneNumberResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetJobByPhoneNumberResult::~GetJobByPhoneNumberResult()
{}

void GetJobByPhoneNumberResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobsNode = value["Jobs"]["Job"];
	for (auto valueJobsJob : allJobsNode)
	{
		Job jobsObject;
		if(!valueJobsJob["JobId"].isNull())
			jobsObject.jobId = valueJobsJob["JobId"].asString();
		if(!valueJobsJob["GroupId"].isNull())
			jobsObject.groupId = valueJobsJob["GroupId"].asString();
		if(!valueJobsJob["ScenarioId"].isNull())
			jobsObject.scenarioId = valueJobsJob["ScenarioId"].asString();
		if(!valueJobsJob["StrategyId"].isNull())
			jobsObject.strategyId = valueJobsJob["StrategyId"].asString();
		if(!valueJobsJob["Priority"].isNull())
			jobsObject.priority = std::stoi(valueJobsJob["Priority"].asString());
		if(!valueJobsJob["SystemPriority"].isNull())
			jobsObject.systemPriority = std::stoi(valueJobsJob["SystemPriority"].asString());
		if(!valueJobsJob["Status"].isNull())
			jobsObject.status = valueJobsJob["Status"].asString();
		if(!valueJobsJob["ReferenceId"].isNull())
			jobsObject.referenceId = valueJobsJob["ReferenceId"].asString();
		if(!valueJobsJob["FailureReason"].isNull())
			jobsObject.failureReason = valueJobsJob["FailureReason"].asString();
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
			if(!allJobsNodeContactsContact["Role"].isNull())
				contactsObject.role = allJobsNodeContactsContact["Role"].asString();
			if(!allJobsNodeContactsContact["PhoneNumber"].isNull())
				contactsObject.phoneNumber = allJobsNodeContactsContact["PhoneNumber"].asString();
			if(!allJobsNodeContactsContact["State"].isNull())
				contactsObject.state = allJobsNodeContactsContact["State"].asString();
			if(!allJobsNodeContactsContact["ReferenceId"].isNull())
				contactsObject.referenceId = allJobsNodeContactsContact["ReferenceId"].asString();
			if(!allJobsNodeContactsContact["JobId"].isNull())
				contactsObject.jobId = allJobsNodeContactsContact["JobId"].asString();
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
		auto allTasksNode = allJobsNode["Tasks"]["Task"];
		for (auto allJobsNodeTasksTask : allTasksNode)
		{
			Job::Task tasksObject;
			if(!allJobsNodeTasksTask["TaskId"].isNull())
				tasksObject.taskId = allJobsNodeTasksTask["TaskId"].asString();
			if(!allJobsNodeTasksTask["JobId"].isNull())
				tasksObject.jobId = allJobsNodeTasksTask["JobId"].asString();
			if(!allJobsNodeTasksTask["ScenarioId"].isNull())
				tasksObject.scenarioId = allJobsNodeTasksTask["ScenarioId"].asString();
			if(!allJobsNodeTasksTask["ChatbotId"].isNull())
				tasksObject.chatbotId = allJobsNodeTasksTask["ChatbotId"].asString();
			if(!allJobsNodeTasksTask["PlanedTime"].isNull())
				tasksObject.planedTime = std::stol(allJobsNodeTasksTask["PlanedTime"].asString());
			if(!allJobsNodeTasksTask["ActualTime"].isNull())
				tasksObject.actualTime = std::stol(allJobsNodeTasksTask["ActualTime"].asString());
			if(!allJobsNodeTasksTask["CallingNumber"].isNull())
				tasksObject.callingNumber = allJobsNodeTasksTask["CallingNumber"].asString();
			if(!allJobsNodeTasksTask["CalledNumber"].isNull())
				tasksObject.calledNumber = allJobsNodeTasksTask["CalledNumber"].asString();
			if(!allJobsNodeTasksTask["CallId"].isNull())
				tasksObject.callId = allJobsNodeTasksTask["CallId"].asString();
			if(!allJobsNodeTasksTask["Status"].isNull())
				tasksObject.status = allJobsNodeTasksTask["Status"].asString();
			if(!allJobsNodeTasksTask["Brief"].isNull())
				tasksObject.brief = allJobsNodeTasksTask["Brief"].asString();
			if(!allJobsNodeTasksTask["Duration"].isNull())
				tasksObject.duration = std::stoi(allJobsNodeTasksTask["Duration"].asString());
			auto allConversationNode = allTasksNode["Conversation"]["ConversationDetail"];
			for (auto allTasksNodeConversationConversationDetail : allConversationNode)
			{
				Job::Task::ConversationDetail conversationObject;
				if(!allTasksNodeConversationConversationDetail["Timestamp"].isNull())
					conversationObject.timestamp = std::stol(allTasksNodeConversationConversationDetail["Timestamp"].asString());
				if(!allTasksNodeConversationConversationDetail["Speaker"].isNull())
					conversationObject.speaker = allTasksNodeConversationConversationDetail["Speaker"].asString();
				if(!allTasksNodeConversationConversationDetail["Script"].isNull())
					conversationObject.script = allTasksNodeConversationConversationDetail["Script"].asString();
				auto allSummary1Node = allConversationNode["Summary"]["SummaryItem"];
				for (auto allConversationNodeSummarySummaryItem : allSummary1Node)
				{
					Job::Task::ConversationDetail::SummaryItem summary1Object;
					if(!allConversationNodeSummarySummaryItem["Category"].isNull())
						summary1Object.category = allConversationNodeSummarySummaryItem["Category"].asString();
					if(!allConversationNodeSummarySummaryItem["SummaryName"].isNull())
						summary1Object.summaryName = allConversationNodeSummarySummaryItem["SummaryName"].asString();
					if(!allConversationNodeSummarySummaryItem["Content"].isNull())
						summary1Object.content = allConversationNodeSummarySummaryItem["Content"].asString();
					conversationObject.summary1.push_back(summary1Object);
				}
				tasksObject.conversation.push_back(conversationObject);
			}
			auto contact2Node = value["Contact"];
			if(!contact2Node["ContactId"].isNull())
				tasksObject.contact2.contactId = contact2Node["ContactId"].asString();
			if(!contact2Node["ContactName"].isNull())
				tasksObject.contact2.contactName = contact2Node["ContactName"].asString();
			if(!contact2Node["Honorific"].isNull())
				tasksObject.contact2.honorific = contact2Node["Honorific"].asString();
			if(!contact2Node["Role"].isNull())
				tasksObject.contact2.role = contact2Node["Role"].asString();
			if(!contact2Node["PhoneNumber"].isNull())
				tasksObject.contact2.phoneNumber = contact2Node["PhoneNumber"].asString();
			if(!contact2Node["State"].isNull())
				tasksObject.contact2.state = contact2Node["State"].asString();
			if(!contact2Node["ReferenceId"].isNull())
				tasksObject.contact2.referenceId = contact2Node["ReferenceId"].asString();
			if(!contact2Node["JobId"].isNull())
				tasksObject.contact2.jobId = contact2Node["JobId"].asString();
			jobsObject.tasks.push_back(tasksObject);
		}
		auto allSummaryNode = allJobsNode["Summary"]["SummaryItem"];
		for (auto allJobsNodeSummarySummaryItem : allSummaryNode)
		{
			Job::SummaryItem3 summaryObject;
			if(!allJobsNodeSummarySummaryItem["Category"].isNull())
				summaryObject.category = allJobsNodeSummarySummaryItem["Category"].asString();
			if(!allJobsNodeSummarySummaryItem["SummaryName"].isNull())
				summaryObject.summaryName = allJobsNodeSummarySummaryItem["SummaryName"].asString();
			if(!allJobsNodeSummarySummaryItem["Content"].isNull())
				summaryObject.content = allJobsNodeSummarySummaryItem["Content"].asString();
			jobsObject.summary.push_back(summaryObject);
		}
		auto allCallingNumbers = value["CallingNumbers"]["String"];
		for (auto value : allCallingNumbers)
			jobsObject.callingNumbers.push_back(value.asString());
		jobs_.push_back(jobsObject);
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

std::string GetJobByPhoneNumberResult::getMessage()const
{
	return message_;
}

std::vector<GetJobByPhoneNumberResult::Job> GetJobByPhoneNumberResult::getJobs()const
{
	return jobs_;
}

int GetJobByPhoneNumberResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetJobByPhoneNumberResult::getCode()const
{
	return code_;
}

bool GetJobByPhoneNumberResult::getSuccess()const
{
	return success_;
}

