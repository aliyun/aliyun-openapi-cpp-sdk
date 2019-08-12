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

#include <alibabacloud/ccc/model/GetTaskListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetTaskListResult::GetTaskListResult() :
	ServiceResult()
{}

GetTaskListResult::GetTaskListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTaskListResult::~GetTaskListResult()
{}

void GetTaskListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allTasks = value["Tasks"]["Task"];
	for (auto value : allTasks)
	{
		Task tasksObject;
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
		auto allConversation = value["Conversation"]["ConversationDetail"];
		for (auto value : allConversation)
		{
			Task::ConversationDetail conversationObject;
			if(!value["Timestamp"].isNull())
				conversationObject.timestamp = std::stol(value["Timestamp"].asString());
			if(!value["Speaker"].isNull())
				conversationObject.speaker = value["Speaker"].asString();
			if(!value["Script"].isNull())
				conversationObject.script = value["Script"].asString();
			auto allSummary = value["Summary"]["SummaryItem"];
			for (auto value : allSummary)
			{
				Task::ConversationDetail::SummaryItem summaryObject;
				if(!value["Category"].isNull())
					summaryObject.category = value["Category"].asString();
				if(!value["SummaryName"].isNull())
					summaryObject.summaryName = value["SummaryName"].asString();
				if(!value["Content"].isNull())
					summaryObject.content = value["Content"].asString();
				conversationObject.summary.push_back(summaryObject);
			}
			tasksObject.conversation.push_back(conversationObject);
		}
		auto contactNode = value["Contact"];
		if(!contactNode["ContactId"].isNull())
			tasksObject.contact.contactId = contactNode["ContactId"].asString();
		if(!contactNode["ContactName"].isNull())
			tasksObject.contact.contactName = contactNode["ContactName"].asString();
		if(!contactNode["Honorific"].isNull())
			tasksObject.contact.honorific = contactNode["Honorific"].asString();
		if(!contactNode["Role"].isNull())
			tasksObject.contact.role = contactNode["Role"].asString();
		if(!contactNode["PhoneNumber"].isNull())
			tasksObject.contact.phoneNumber = contactNode["PhoneNumber"].asString();
		if(!contactNode["State"].isNull())
			tasksObject.contact.state = contactNode["State"].asString();
		if(!contactNode["ReferenceId"].isNull())
			tasksObject.contact.referenceId = contactNode["ReferenceId"].asString();
		if(!contactNode["JobId"].isNull())
			tasksObject.contact.jobId = contactNode["JobId"].asString();
		tasks_.push_back(tasksObject);
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

std::vector<GetTaskListResult::Task> GetTaskListResult::getTasks()const
{
	return tasks_;
}

std::string GetTaskListResult::getMessage()const
{
	return message_;
}

int GetTaskListResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetTaskListResult::getCode()const
{
	return code_;
}

bool GetTaskListResult::getSuccess()const
{
	return success_;
}

