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

#include <alibabacloud/ccc/model/GetJobStatusByCallIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

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
	if(!jobNode["GroupId"].isNull())
		job_.groupId = jobNode["GroupId"].asString();
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
	auto allContacts = value["Contacts"]["Contact"];
	for (auto value : allContacts)
	{
		Job::Contact contactObject;
		if(!value["ContactId"].isNull())
			contactObject.contactId = value["ContactId"].asString();
		if(!value["ContactName"].isNull())
			contactObject.contactName = value["ContactName"].asString();
		if(!value["Honorific"].isNull())
			contactObject.honorific = value["Honorific"].asString();
		if(!value["Role"].isNull())
			contactObject.role = value["Role"].asString();
		if(!value["PhoneNumber"].isNull())
			contactObject.phoneNumber = value["PhoneNumber"].asString();
		if(!value["State"].isNull())
			contactObject.state = value["State"].asString();
		if(!value["ReferenceId"].isNull())
			contactObject.referenceId = value["ReferenceId"].asString();
		if(!value["JobId"].isNull())
			contactObject.jobId = value["JobId"].asString();
		job_.contacts.push_back(contactObject);
	}
	auto allExtras = value["Extras"]["KeyValuePair"];
	for (auto value : allExtras)
	{
		Job::KeyValuePair keyValuePairObject;
		if(!value["Key"].isNull())
			keyValuePairObject.key = value["Key"].asString();
		if(!value["Value"].isNull())
			keyValuePairObject.value = value["Value"].asString();
		job_.extras.push_back(keyValuePairObject);
	}
	auto allTasks = value["Tasks"]["Task"];
	for (auto value : allTasks)
	{
		Job::Task taskObject;
		if(!value["TaskId"].isNull())
			taskObject.taskId = value["TaskId"].asString();
		if(!value["JobId"].isNull())
			taskObject.jobId = value["JobId"].asString();
		if(!value["ScenarioId"].isNull())
			taskObject.scenarioId = value["ScenarioId"].asString();
		if(!value["ChatbotId"].isNull())
			taskObject.chatbotId = value["ChatbotId"].asString();
		if(!value["PlanedTime"].isNull())
			taskObject.planedTime = std::stol(value["PlanedTime"].asString());
		if(!value["ActualTime"].isNull())
			taskObject.actualTime = std::stol(value["ActualTime"].asString());
		if(!value["CallingNumber"].isNull())
			taskObject.callingNumber = value["CallingNumber"].asString();
		if(!value["CalledNumber"].isNull())
			taskObject.calledNumber = value["CalledNumber"].asString();
		if(!value["CallId"].isNull())
			taskObject.callId = value["CallId"].asString();
		if(!value["Status"].isNull())
			taskObject.status = value["Status"].asString();
		if(!value["Brief"].isNull())
			taskObject.brief = value["Brief"].asString();
		if(!value["Duration"].isNull())
			taskObject.duration = std::stoi(value["Duration"].asString());
		auto allConversation = value["Conversation"]["ConversationDetail"];
		for (auto value : allConversation)
		{
			Job::Task::ConversationDetail conversationObject;
			if(!value["ConversationDetailId"].isNull())
				conversationObject.conversationDetailId = value["ConversationDetailId"].asString();
			if(!value["TaskId"].isNull())
				conversationObject.taskId = value["TaskId"].asString();
			if(!value["Timestamp"].isNull())
				conversationObject.timestamp = std::stol(value["Timestamp"].asString());
			if(!value["Speaker"].isNull())
				conversationObject.speaker = value["Speaker"].asString();
			if(!value["Script"].isNull())
				conversationObject.script = value["Script"].asString();
			auto allSummary1 = value["Summary"]["SummaryItem"];
			for (auto value : allSummary1)
			{
				Job::Task::ConversationDetail::SummaryItem summary1Object;
				if(!value["SummaryId"].isNull())
					summary1Object.summaryId = value["SummaryId"].asString();
				if(!value["Category"].isNull())
					summary1Object.category = value["Category"].asString();
				if(!value["SummaryName"].isNull())
					summary1Object.summaryName = value["SummaryName"].asString();
				if(!value["Content"].isNull())
					summary1Object.content = value["Content"].asString();
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
	auto allSummary = value["Summary"]["SummaryItem"];
	for (auto value : allSummary)
	{
		Job::SummaryItem3 summaryItem3Object;
		if(!value["SummaryId"].isNull())
			summaryItem3Object.summaryId = value["SummaryId"].asString();
		if(!value["Category"].isNull())
			summaryItem3Object.category = value["Category"].asString();
		if(!value["SummaryName"].isNull())
			summaryItem3Object.summaryName = value["SummaryName"].asString();
		if(!value["Content"].isNull())
			summaryItem3Object.content = value["Content"].asString();
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

