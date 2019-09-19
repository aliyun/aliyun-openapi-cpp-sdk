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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTasksNode = value["Tasks"]["Task"];
	for (auto valueTasksTask : allTasksNode)
	{
		Task tasksObject;
		if(!valueTasksTask["TaskId"].isNull())
			tasksObject.taskId = valueTasksTask["TaskId"].asString();
		if(!valueTasksTask["JobId"].isNull())
			tasksObject.jobId = valueTasksTask["JobId"].asString();
		if(!valueTasksTask["ScenarioId"].isNull())
			tasksObject.scenarioId = valueTasksTask["ScenarioId"].asString();
		if(!valueTasksTask["ChatbotId"].isNull())
			tasksObject.chatbotId = valueTasksTask["ChatbotId"].asString();
		if(!valueTasksTask["PlanedTime"].isNull())
			tasksObject.planedTime = std::stol(valueTasksTask["PlanedTime"].asString());
		if(!valueTasksTask["ActualTime"].isNull())
			tasksObject.actualTime = std::stol(valueTasksTask["ActualTime"].asString());
		if(!valueTasksTask["CallingNumber"].isNull())
			tasksObject.callingNumber = valueTasksTask["CallingNumber"].asString();
		if(!valueTasksTask["CalledNumber"].isNull())
			tasksObject.calledNumber = valueTasksTask["CalledNumber"].asString();
		if(!valueTasksTask["CallId"].isNull())
			tasksObject.callId = valueTasksTask["CallId"].asString();
		if(!valueTasksTask["Status"].isNull())
			tasksObject.status = valueTasksTask["Status"].asString();
		if(!valueTasksTask["Brief"].isNull())
			tasksObject.brief = valueTasksTask["Brief"].asString();
		if(!valueTasksTask["Duration"].isNull())
			tasksObject.duration = std::stoi(valueTasksTask["Duration"].asString());
		auto allConversationNode = allTasksNode["Conversation"]["ConversationDetail"];
		for (auto allTasksNodeConversationConversationDetail : allConversationNode)
		{
			Task::ConversationDetail conversationObject;
			if(!allTasksNodeConversationConversationDetail["Timestamp"].isNull())
				conversationObject.timestamp = std::stol(allTasksNodeConversationConversationDetail["Timestamp"].asString());
			if(!allTasksNodeConversationConversationDetail["Speaker"].isNull())
				conversationObject.speaker = allTasksNodeConversationConversationDetail["Speaker"].asString();
			if(!allTasksNodeConversationConversationDetail["Script"].isNull())
				conversationObject.script = allTasksNodeConversationConversationDetail["Script"].asString();
			auto allSummaryNode = allConversationNode["Summary"]["SummaryItem"];
			for (auto allConversationNodeSummarySummaryItem : allSummaryNode)
			{
				Task::ConversationDetail::SummaryItem summaryObject;
				if(!allConversationNodeSummarySummaryItem["Category"].isNull())
					summaryObject.category = allConversationNodeSummarySummaryItem["Category"].asString();
				if(!allConversationNodeSummarySummaryItem["SummaryName"].isNull())
					summaryObject.summaryName = allConversationNodeSummarySummaryItem["SummaryName"].asString();
				if(!allConversationNodeSummarySummaryItem["Content"].isNull())
					summaryObject.content = allConversationNodeSummarySummaryItem["Content"].asString();
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

