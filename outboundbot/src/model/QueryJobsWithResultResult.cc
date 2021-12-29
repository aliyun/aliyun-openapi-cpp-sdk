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

#include <alibabacloud/outboundbot/model/QueryJobsWithResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

QueryJobsWithResultResult::QueryJobsWithResultResult() :
	ServiceResult()
{}

QueryJobsWithResultResult::QueryJobsWithResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryJobsWithResultResult::~QueryJobsWithResultResult()
{}

void QueryJobsWithResultResult::parse(const std::string &payload)
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
	if(!jobsNode["PageCount"].isNull())
		jobs_.pageCount = std::stoi(jobsNode["PageCount"].asString());
	if(!jobsNode["RowCount"].isNull())
		jobs_.rowCount = std::stoi(jobsNode["RowCount"].asString());
	auto allListNode = jobsNode["List"]["Job"];
	for (auto jobsNodeListJob : allListNode)
	{
		Jobs::Job jobObject;
		if(!jobsNodeListJob["Status"].isNull())
			jobObject.status = jobsNodeListJob["Status"].asString();
		if(!jobsNodeListJob["StatusName"].isNull())
			jobObject.statusName = jobsNodeListJob["StatusName"].asString();
		if(!jobsNodeListJob["JobFailureReason"].isNull())
			jobObject.jobFailureReason = jobsNodeListJob["JobFailureReason"].asString();
		if(!jobsNodeListJob["Id"].isNull())
			jobObject.id = jobsNodeListJob["Id"].asString();
		auto latestTaskNode = value["LatestTask"];
		if(!latestTaskNode["Status"].isNull())
			jobObject.latestTask.status = latestTaskNode["Status"].asString();
		if(!latestTaskNode["TaskEndReason"].isNull())
			jobObject.latestTask.taskEndReason = latestTaskNode["TaskEndReason"].asString();
		if(!latestTaskNode["HasAnswered"].isNull())
			jobObject.latestTask.hasAnswered = latestTaskNode["HasAnswered"].asString() == "true";
		if(!latestTaskNode["CallDuration"].isNull())
			jobObject.latestTask.callDuration = std::stoi(latestTaskNode["CallDuration"].asString());
		if(!latestTaskNode["HasReachedEndOfFlow"].isNull())
			jobObject.latestTask.hasReachedEndOfFlow = latestTaskNode["HasReachedEndOfFlow"].asString() == "true";
		if(!latestTaskNode["StatusName"].isNull())
			jobObject.latestTask.statusName = latestTaskNode["StatusName"].asString();
		if(!latestTaskNode["CallTime"].isNull())
			jobObject.latestTask.callTime = std::stol(latestTaskNode["CallTime"].asString());
		if(!latestTaskNode["CallDurationDisplay"].isNull())
			jobObject.latestTask.callDurationDisplay = latestTaskNode["CallDurationDisplay"].asString();
		if(!latestTaskNode["HasHangUpByRejection"].isNull())
			jobObject.latestTask.hasHangUpByRejection = latestTaskNode["HasHangUpByRejection"].asString() == "true";
		if(!latestTaskNode["HasLastPlaybackCompleted"].isNull())
			jobObject.latestTask.hasLastPlaybackCompleted = latestTaskNode["HasLastPlaybackCompleted"].asString() == "true";
		auto allExtrasNode = latestTaskNode["Extras"]["Extra"];
		for (auto latestTaskNodeExtrasExtra : allExtrasNode)
		{
			Jobs::Job::LatestTask::Extra extraObject;
			if(!latestTaskNodeExtrasExtra["Key"].isNull())
				extraObject.key = latestTaskNodeExtrasExtra["Key"].asString();
			if(!latestTaskNodeExtrasExtra["Value"].isNull())
				extraObject.value = latestTaskNodeExtrasExtra["Value"].asString();
			jobObject.latestTask.extras.push_back(extraObject);
		}
		auto allTagHitsNode = latestTaskNode["TagHits"]["TagHit"];
		for (auto latestTaskNodeTagHitsTagHit : allTagHitsNode)
		{
			Jobs::Job::LatestTask::TagHit tagHitObject;
			if(!latestTaskNodeTagHitsTagHit["TagName"].isNull())
				tagHitObject.tagName = latestTaskNodeTagHitsTagHit["TagName"].asString();
			if(!latestTaskNodeTagHitsTagHit["TagGroup"].isNull())
				tagHitObject.tagGroup = latestTaskNodeTagHitsTagHit["TagGroup"].asString();
			jobObject.latestTask.tagHits.push_back(tagHitObject);
		}
		auto allDialExceptionCodesNode = latestTaskNode["DialExceptionCodes"]["ExceptionCode"];
		for (auto latestTaskNodeDialExceptionCodesExceptionCode : allDialExceptionCodesNode)
		{
			Jobs::Job::LatestTask::ExceptionCode exceptionCodeObject;
			if(!latestTaskNodeDialExceptionCodesExceptionCode["Code"].isNull())
				exceptionCodeObject.code = latestTaskNodeDialExceptionCodesExceptionCode["Code"].asString();
			if(!latestTaskNodeDialExceptionCodesExceptionCode["Hint"].isNull())
				exceptionCodeObject.hint = latestTaskNodeDialExceptionCodesExceptionCode["Hint"].asString();
			jobObject.latestTask.dialExceptionCodes.push_back(exceptionCodeObject);
		}
		auto contactNode = latestTaskNode["Contact"];
		if(!contactNode["Round"].isNull())
			jobObject.latestTask.contact.round = std::stoi(contactNode["Round"].asString());
		if(!contactNode["JobUuid"].isNull())
			jobObject.latestTask.contact.jobUuid = contactNode["JobUuid"].asString();
		if(!contactNode["PreferredPhoneNumber"].isNull())
			jobObject.latestTask.contact.preferredPhoneNumber = contactNode["PreferredPhoneNumber"].asString();
		if(!contactNode["PhoneNumber"].isNull())
			jobObject.latestTask.contact.phoneNumber = contactNode["PhoneNumber"].asString();
		if(!contactNode["State"].isNull())
			jobObject.latestTask.contact.state = contactNode["State"].asString();
		if(!contactNode["Honorific"].isNull())
			jobObject.latestTask.contact.honorific = contactNode["Honorific"].asString();
		if(!contactNode["Name"].isNull())
			jobObject.latestTask.contact.name = contactNode["Name"].asString();
		if(!contactNode["Role"].isNull())
			jobObject.latestTask.contact.role = contactNode["Role"].asString();
		if(!contactNode["Id"].isNull())
			jobObject.latestTask.contact.id = contactNode["Id"].asString();
		if(!contactNode["ReferenceId"].isNull())
			jobObject.latestTask.contact.referenceId = contactNode["ReferenceId"].asString();
		jobs_.list.push_back(jobObject);
	}
	auto allVariableNames = value["VariableNames"]["VariableName"];
	for (const auto &item : allVariableNames)
		variableNames_.push_back(item.asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<std::string> QueryJobsWithResultResult::getVariableNames()const
{
	return variableNames_;
}

std::string QueryJobsWithResultResult::getMessage()const
{
	return message_;
}

QueryJobsWithResultResult::Jobs QueryJobsWithResultResult::getJobs()const
{
	return jobs_;
}

int QueryJobsWithResultResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string QueryJobsWithResultResult::getCode()const
{
	return code_;
}

bool QueryJobsWithResultResult::getSuccess()const
{
	return success_;
}

