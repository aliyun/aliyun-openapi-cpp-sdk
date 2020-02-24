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

#include <alibabacloud/outboundbot/model/GetJobStatusByCallIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

GetJobStatusByCallIdResult::GetJobStatusByCallIdResult() :
	ServiceResult()
{}

GetJobStatusByCallIdResult::GetJobStatusByCallIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetJobStatusByCallIdResult::~GetJobStatusByCallIdResult()
{}

void GetJobStatusByCallIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto jobNode = value["Job"];
	if(!jobNode["JobId"].isNull())
		job_.jobId = jobNode["JobId"].asString();
	if(!jobNode["JobGroupId"].isNull())
		job_.jobGroupId = jobNode["JobGroupId"].asString();
	if(!jobNode["ScenarioId"].isNull())
		job_.scenarioId = jobNode["ScenarioId"].asString();
	if(!jobNode["StrategyId"].isNull())
		job_.strategyId = jobNode["StrategyId"].asString();
	if(!jobNode["Priority"].isNull())
		job_.priority = std::stoi(jobNode["Priority"].asString());
	if(!jobNode["Status"].isNull())
		job_.status = jobNode["Status"].asString();
	if(!jobNode["ReferenceId"].isNull())
		job_.referenceId = jobNode["ReferenceId"].asString();
	if(!jobNode["FailureReason"].isNull())
		job_.failureReason = jobNode["FailureReason"].asString();
	auto allContactsNode = jobNode["Contacts"]["Contact"];
	for (auto jobNodeContactsContact : allContactsNode)
	{
		Job::Contact contactObject;
		if(!jobNodeContactsContact["ContactId"].isNull())
			contactObject.contactId = jobNodeContactsContact["ContactId"].asString();
		if(!jobNodeContactsContact["ContactName"].isNull())
			contactObject.contactName = jobNodeContactsContact["ContactName"].asString();
		if(!jobNodeContactsContact["Honorific"].isNull())
			contactObject.honorific = jobNodeContactsContact["Honorific"].asString();
		if(!jobNodeContactsContact["Role"].isNull())
			contactObject.role = jobNodeContactsContact["Role"].asString();
		if(!jobNodeContactsContact["PhoneNumber"].isNull())
			contactObject.phoneNumber = jobNodeContactsContact["PhoneNumber"].asString();
		if(!jobNodeContactsContact["State"].isNull())
			contactObject.state = jobNodeContactsContact["State"].asString();
		if(!jobNodeContactsContact["ReferenceId"].isNull())
			contactObject.referenceId = jobNodeContactsContact["ReferenceId"].asString();
		if(!jobNodeContactsContact["JobId"].isNull())
			contactObject.jobId = jobNodeContactsContact["JobId"].asString();
		job_.contacts.push_back(contactObject);
	}
	auto allExtrasNode = jobNode["Extras"]["KeyValuePair"];
	for (auto jobNodeExtrasKeyValuePair : allExtrasNode)
	{
		Job::KeyValuePair keyValuePairObject;
		if(!jobNodeExtrasKeyValuePair["Key"].isNull())
			keyValuePairObject.key = jobNodeExtrasKeyValuePair["Key"].asString();
		if(!jobNodeExtrasKeyValuePair["Value"].isNull())
			keyValuePairObject.value = jobNodeExtrasKeyValuePair["Value"].asString();
		job_.extras.push_back(keyValuePairObject);
	}
	auto allTasksNode = jobNode["Tasks"]["Task"];
	for (auto jobNodeTasksTask : allTasksNode)
	{
		Job::Task taskObject;
		if(!jobNodeTasksTask["TaskId"].isNull())
			taskObject.taskId = jobNodeTasksTask["TaskId"].asString();
		if(!jobNodeTasksTask["JobId"].isNull())
			taskObject.jobId = jobNodeTasksTask["JobId"].asString();
		if(!jobNodeTasksTask["ScenarioId"].isNull())
			taskObject.scenarioId = jobNodeTasksTask["ScenarioId"].asString();
		if(!jobNodeTasksTask["ChatbotId"].isNull())
			taskObject.chatbotId = jobNodeTasksTask["ChatbotId"].asString();
		if(!jobNodeTasksTask["PlanedTime"].isNull())
			taskObject.planedTime = std::stol(jobNodeTasksTask["PlanedTime"].asString());
		if(!jobNodeTasksTask["ActualTime"].isNull())
			taskObject.actualTime = std::stol(jobNodeTasksTask["ActualTime"].asString());
		if(!jobNodeTasksTask["EndTime"].isNull())
			taskObject.endTime = std::stol(jobNodeTasksTask["EndTime"].asString());
		if(!jobNodeTasksTask["CallingNumber"].isNull())
			taskObject.callingNumber = jobNodeTasksTask["CallingNumber"].asString();
		if(!jobNodeTasksTask["CalledNumber"].isNull())
			taskObject.calledNumber = jobNodeTasksTask["CalledNumber"].asString();
		if(!jobNodeTasksTask["CallId"].isNull())
			taskObject.callId = jobNodeTasksTask["CallId"].asString();
		if(!jobNodeTasksTask["Status"].isNull())
			taskObject.status = jobNodeTasksTask["Status"].asString();
		if(!jobNodeTasksTask["Brief"].isNull())
			taskObject.brief = jobNodeTasksTask["Brief"].asString();
		if(!jobNodeTasksTask["Duration"].isNull())
			taskObject.duration = std::stoi(jobNodeTasksTask["Duration"].asString());
		auto allConversationNode = allTasksNode["Conversation"]["ConversationDetail"];
		for (auto allTasksNodeConversationConversationDetail : allConversationNode)
		{
			Job::Task::ConversationDetail conversationObject;
			if(!allTasksNodeConversationConversationDetail["ConversationId"].isNull())
				conversationObject.conversationId = allTasksNodeConversationConversationDetail["ConversationId"].asString();
			if(!allTasksNodeConversationConversationDetail["TaskId"].isNull())
				conversationObject.taskId = allTasksNodeConversationConversationDetail["TaskId"].asString();
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
				if(!allConversationNodeSummarySummaryItem["SummaryId"].isNull())
					summary1Object.summaryId = allConversationNodeSummarySummaryItem["SummaryId"].asString();
				if(!allConversationNodeSummarySummaryItem["Category"].isNull())
					summary1Object.category = allConversationNodeSummarySummaryItem["Category"].asString();
				if(!allConversationNodeSummarySummaryItem["SummaryName"].isNull())
					summary1Object.summaryName = allConversationNodeSummarySummaryItem["SummaryName"].asString();
				if(!allConversationNodeSummarySummaryItem["Content"].isNull())
					summary1Object.content = allConversationNodeSummarySummaryItem["Content"].asString();
				conversationObject.summary1.push_back(summary1Object);
			}
			taskObject.conversation.push_back(conversationObject);
		}
		auto contact2Node = value["Contact"];
		if(!contact2Node["ContactId"].isNull())
			taskObject.contact2.contactId = contact2Node["ContactId"].asString();
		if(!contact2Node["ContactName"].isNull())
			taskObject.contact2.contactName = contact2Node["ContactName"].asString();
		if(!contact2Node["Honorific"].isNull())
			taskObject.contact2.honorific = contact2Node["Honorific"].asString();
		if(!contact2Node["Role"].isNull())
			taskObject.contact2.role = contact2Node["Role"].asString();
		if(!contact2Node["PhoneNumber"].isNull())
			taskObject.contact2.phoneNumber = contact2Node["PhoneNumber"].asString();
		if(!contact2Node["State"].isNull())
			taskObject.contact2.state = contact2Node["State"].asString();
		if(!contact2Node["ReferenceId"].isNull())
			taskObject.contact2.referenceId = contact2Node["ReferenceId"].asString();
		if(!contact2Node["JobId"].isNull())
			taskObject.contact2.jobId = contact2Node["JobId"].asString();
		job_.tasks.push_back(taskObject);
	}
	auto allSummaryNode = jobNode["Summary"]["SummaryItem"];
	for (auto jobNodeSummarySummaryItem : allSummaryNode)
	{
		Job::SummaryItem3 summaryItem3Object;
		if(!jobNodeSummarySummaryItem["SummaryId"].isNull())
			summaryItem3Object.summaryId = jobNodeSummarySummaryItem["SummaryId"].asString();
		if(!jobNodeSummarySummaryItem["Category"].isNull())
			summaryItem3Object.category = jobNodeSummarySummaryItem["Category"].asString();
		if(!jobNodeSummarySummaryItem["SummaryName"].isNull())
			summaryItem3Object.summaryName = jobNodeSummarySummaryItem["SummaryName"].asString();
		if(!jobNodeSummarySummaryItem["Content"].isNull())
			summaryItem3Object.content = jobNodeSummarySummaryItem["Content"].asString();
		job_.summary.push_back(summaryItem3Object);
	}
		auto allCallingNumbers = jobNode["CallingNumbers"]["String"];
		for (auto value : allCallingNumbers)
			job_.callingNumbers.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string GetJobStatusByCallIdResult::getMessage()const
{
	return message_;
}

int GetJobStatusByCallIdResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetJobStatusByCallIdResult::Job GetJobStatusByCallIdResult::getJob()const
{
	return job_;
}

std::string GetJobStatusByCallIdResult::getCode()const
{
	return code_;
}

bool GetJobStatusByCallIdResult::getSuccess()const
{
	return success_;
}

