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

#include <alibabacloud/outboundbot/model/DescribeJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

DescribeJobResult::DescribeJobResult() :
	ServiceResult()
{}

DescribeJobResult::DescribeJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeJobResult::~DescribeJobResult()
{}

void DescribeJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto jobNode = value["Job"];
	if(!jobNode["FailureReason"].isNull())
		job_.failureReason = jobNode["FailureReason"].asString();
	if(!jobNode["JobGroupId"].isNull())
		job_.jobGroupId = jobNode["JobGroupId"].asString();
	if(!jobNode["JobId"].isNull())
		job_.jobId = jobNode["JobId"].asString();
	if(!jobNode["Priority"].isNull())
		job_.priority = std::stoi(jobNode["Priority"].asString());
	if(!jobNode["ReferenceId"].isNull())
		job_.referenceId = jobNode["ReferenceId"].asString();
	if(!jobNode["ScenarioId"].isNull())
		job_.scenarioId = jobNode["ScenarioId"].asString();
	if(!jobNode["Status"].isNull())
		job_.status = jobNode["Status"].asString();
	if(!jobNode["StrategyId"].isNull())
		job_.strategyId = jobNode["StrategyId"].asString();
	if(!jobNode["SystemPriority"].isNull())
		job_.systemPriority = std::stoi(jobNode["SystemPriority"].asString());
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
		if(!jobNodeContactsContact["JobId"].isNull())
			contactObject.jobId = jobNodeContactsContact["JobId"].asString();
		if(!jobNodeContactsContact["PhoneNumber"].isNull())
			contactObject.phoneNumber = jobNodeContactsContact["PhoneNumber"].asString();
		if(!jobNodeContactsContact["ReferenceId"].isNull())
			contactObject.referenceId = jobNodeContactsContact["ReferenceId"].asString();
		if(!jobNodeContactsContact["Role"].isNull())
			contactObject.role = jobNodeContactsContact["Role"].asString();
		if(!jobNodeContactsContact["State"].isNull())
			contactObject.state = jobNodeContactsContact["State"].asString();
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
	auto allSummaryNode = jobNode["Summary"]["SummaryItem"];
	for (auto jobNodeSummarySummaryItem : allSummaryNode)
	{
		Job::SummaryItem summaryItemObject;
		if(!jobNodeSummarySummaryItem["Category"].isNull())
			summaryItemObject.category = jobNodeSummarySummaryItem["Category"].asString();
		if(!jobNodeSummarySummaryItem["Content"].isNull())
			summaryItemObject.content = jobNodeSummarySummaryItem["Content"].asString();
		if(!jobNodeSummarySummaryItem["SummaryName"].isNull())
			summaryItemObject.summaryName = jobNodeSummarySummaryItem["SummaryName"].asString();
		job_.summary.push_back(summaryItemObject);
	}
	auto allTasksNode = jobNode["Tasks"]["Task"];
	for (auto jobNodeTasksTask : allTasksNode)
	{
		Job::Task taskObject;
		if(!jobNodeTasksTask["ActualTime"].isNull())
			taskObject.actualTime = std::stol(jobNodeTasksTask["ActualTime"].asString());
		if(!jobNodeTasksTask["Brief"].isNull())
			taskObject.brief = jobNodeTasksTask["Brief"].asString();
		if(!jobNodeTasksTask["CallId"].isNull())
			taskObject.callId = jobNodeTasksTask["CallId"].asString();
		if(!jobNodeTasksTask["CalledNumber"].isNull())
			taskObject.calledNumber = jobNodeTasksTask["CalledNumber"].asString();
		if(!jobNodeTasksTask["CallingNumber"].isNull())
			taskObject.callingNumber = jobNodeTasksTask["CallingNumber"].asString();
		if(!jobNodeTasksTask["ChatbotId"].isNull())
			taskObject.chatbotId = jobNodeTasksTask["ChatbotId"].asString();
		if(!jobNodeTasksTask["Duration"].isNull())
			taskObject.duration = std::stoi(jobNodeTasksTask["Duration"].asString());
		if(!jobNodeTasksTask["JobId"].isNull())
			taskObject.jobId = jobNodeTasksTask["JobId"].asString();
		if(!jobNodeTasksTask["PlanedTime"].isNull())
			taskObject.planedTime = std::stol(jobNodeTasksTask["PlanedTime"].asString());
		if(!jobNodeTasksTask["ScenarioId"].isNull())
			taskObject.scenarioId = jobNodeTasksTask["ScenarioId"].asString();
		if(!jobNodeTasksTask["Status"].isNull())
			taskObject.status = jobNodeTasksTask["Status"].asString();
		if(!jobNodeTasksTask["TaskId"].isNull())
			taskObject.taskId = jobNodeTasksTask["TaskId"].asString();
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
			taskObject.conversation.push_back(conversationObject);
		}
		auto contact3Node = value["Contact"];
		if(!contact3Node["ContactId"].isNull())
			taskObject.contact3.contactId = contact3Node["ContactId"].asString();
		if(!contact3Node["ContactName"].isNull())
			taskObject.contact3.contactName = contact3Node["ContactName"].asString();
		if(!contact3Node["Honorific"].isNull())
			taskObject.contact3.honorific = contact3Node["Honorific"].asString();
		if(!contact3Node["JobId"].isNull())
			taskObject.contact3.jobId = contact3Node["JobId"].asString();
		if(!contact3Node["PhoneNumber"].isNull())
			taskObject.contact3.phoneNumber = contact3Node["PhoneNumber"].asString();
		if(!contact3Node["ReferenceId"].isNull())
			taskObject.contact3.referenceId = contact3Node["ReferenceId"].asString();
		if(!contact3Node["Role"].isNull())
			taskObject.contact3.role = contact3Node["Role"].asString();
		if(!contact3Node["State"].isNull())
			taskObject.contact3.state = contact3Node["State"].asString();
		job_.tasks.push_back(taskObject);
	}
		auto allCallingNumbers = jobNode["CallingNumbers"]["String"];
		for (auto value : allCallingNumbers)
			job_.callingNumbers.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeJobResult::getMessage()const
{
	return message_;
}

int DescribeJobResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

DescribeJobResult::Job DescribeJobResult::getJob()const
{
	return job_;
}

std::string DescribeJobResult::getCode()const
{
	return code_;
}

bool DescribeJobResult::getSuccess()const
{
	return success_;
}

