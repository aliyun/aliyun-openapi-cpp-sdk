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

#include <alibabacloud/outboundbot/model/ListJobsByGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListJobsByGroupResult::ListJobsByGroupResult() :
	ServiceResult()
{}

ListJobsByGroupResult::ListJobsByGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListJobsByGroupResult::~ListJobsByGroupResult()
{}

void ListJobsByGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto jobsNode = value["Jobs"];
	if(!jobsNode["PageNumber"].isNull())
		jobs_.pageNumber = std::stoi(jobsNode["PageNumber"].asString());
	if(!jobsNode["PageSize"].isNull())
		jobs_.pageSize = std::stoi(jobsNode["PageSize"].asString());
	if(!jobsNode["TotalCount"].isNull())
		jobs_.totalCount = std::stoi(jobsNode["TotalCount"].asString());
	auto allListNode = jobsNode["List"]["Job"];
	for (auto jobsNodeListJob : allListNode)
	{
		Jobs::Job jobObject;
		if(!jobsNodeListJob["Status"].isNull())
			jobObject.status = jobsNodeListJob["Status"].asString();
		if(!jobsNodeListJob["ScenarioId"].isNull())
			jobObject.scenarioId = jobsNodeListJob["ScenarioId"].asString();
		if(!jobsNodeListJob["JobGroupId"].isNull())
			jobObject.jobGroupId = jobsNodeListJob["JobGroupId"].asString();
		if(!jobsNodeListJob["StrategyId"].isNull())
			jobObject.strategyId = jobsNodeListJob["StrategyId"].asString();
		if(!jobsNodeListJob["JobId"].isNull())
			jobObject.jobId = jobsNodeListJob["JobId"].asString();
		if(!jobsNodeListJob["Priority"].isNull())
			jobObject.priority = std::stoi(jobsNodeListJob["Priority"].asString());
		if(!jobsNodeListJob["SystemPriority"].isNull())
			jobObject.systemPriority = std::stoi(jobsNodeListJob["SystemPriority"].asString());
		if(!jobsNodeListJob["FailureReason"].isNull())
			jobObject.failureReason = jobsNodeListJob["FailureReason"].asString();
		if(!jobsNodeListJob["ReferenceId"].isNull())
			jobObject.referenceId = jobsNodeListJob["ReferenceId"].asString();
		auto allContactsNode = jobsNodeListJob["Contacts"]["Contact"];
		for (auto jobsNodeListJobContactsContact : allContactsNode)
		{
			Jobs::Job::Contact contactsObject;
			if(!jobsNodeListJobContactsContact["PhoneNumber"].isNull())
				contactsObject.phoneNumber = jobsNodeListJobContactsContact["PhoneNumber"].asString();
			if(!jobsNodeListJobContactsContact["State"].isNull())
				contactsObject.state = jobsNodeListJobContactsContact["State"].asString();
			if(!jobsNodeListJobContactsContact["ContactId"].isNull())
				contactsObject.contactId = jobsNodeListJobContactsContact["ContactId"].asString();
			if(!jobsNodeListJobContactsContact["Honorific"].isNull())
				contactsObject.honorific = jobsNodeListJobContactsContact["Honorific"].asString();
			if(!jobsNodeListJobContactsContact["JobId"].isNull())
				contactsObject.jobId = jobsNodeListJobContactsContact["JobId"].asString();
			if(!jobsNodeListJobContactsContact["ContactName"].isNull())
				contactsObject.contactName = jobsNodeListJobContactsContact["ContactName"].asString();
			if(!jobsNodeListJobContactsContact["Role"].isNull())
				contactsObject.role = jobsNodeListJobContactsContact["Role"].asString();
			if(!jobsNodeListJobContactsContact["ReferenceId"].isNull())
				contactsObject.referenceId = jobsNodeListJobContactsContact["ReferenceId"].asString();
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
		auto allSummaryNode = jobsNodeListJob["Summary"]["SummaryItem"];
		for (auto jobsNodeListJobSummarySummaryItem : allSummaryNode)
		{
			Jobs::Job::SummaryItem summaryObject;
			if(!jobsNodeListJobSummarySummaryItem["SummaryName"].isNull())
				summaryObject.summaryName = jobsNodeListJobSummarySummaryItem["SummaryName"].asString();
			if(!jobsNodeListJobSummarySummaryItem["JobGroupId"].isNull())
				summaryObject.jobGroupId = jobsNodeListJobSummarySummaryItem["JobGroupId"].asString();
			if(!jobsNodeListJobSummarySummaryItem["JobId"].isNull())
				summaryObject.jobId = jobsNodeListJobSummarySummaryItem["JobId"].asString();
			if(!jobsNodeListJobSummarySummaryItem["Category"].isNull())
				summaryObject.category = jobsNodeListJobSummarySummaryItem["Category"].asString();
			if(!jobsNodeListJobSummarySummaryItem["TaskId"].isNull())
				summaryObject.taskId = jobsNodeListJobSummarySummaryItem["TaskId"].asString();
			if(!jobsNodeListJobSummarySummaryItem["Content"].isNull())
				summaryObject.content = jobsNodeListJobSummarySummaryItem["Content"].asString();
			if(!jobsNodeListJobSummarySummaryItem["ConversationDetailId"].isNull())
				summaryObject.conversationDetailId = jobsNodeListJobSummarySummaryItem["ConversationDetailId"].asString();
			if(!jobsNodeListJobSummarySummaryItem["SummaryId"].isNull())
				summaryObject.summaryId = jobsNodeListJobSummarySummaryItem["SummaryId"].asString();
			jobObject.summary.push_back(summaryObject);
		}
		auto allCallingNumbers = value["CallingNumbers"]["String"];
		for (auto value : allCallingNumbers)
			jobObject.callingNumbers.push_back(value.asString());
		jobs_.list.push_back(jobObject);
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

std::string ListJobsByGroupResult::getMessage()const
{
	return message_;
}

ListJobsByGroupResult::Jobs ListJobsByGroupResult::getJobs()const
{
	return jobs_;
}

int ListJobsByGroupResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListJobsByGroupResult::getCode()const
{
	return code_;
}

bool ListJobsByGroupResult::getSuccess()const
{
	return success_;
}

