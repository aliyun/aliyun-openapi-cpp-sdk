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

#include <alibabacloud/outboundbot/model/CreateTaskExportTaskRequest.h>

using AlibabaCloud::OutboundBot::Model::CreateTaskExportTaskRequest;

CreateTaskExportTaskRequest::CreateTaskExportTaskRequest() :
	RpcServiceRequest("outboundbot", "2019-12-26", "CreateTaskExportTask")
{
	setMethod(HttpRequest::Method::Get);
}

CreateTaskExportTaskRequest::~CreateTaskExportTaskRequest()
{}

bool CreateTaskExportTaskRequest::getHasAnswered()const
{
	return hasAnswered_;
}

void CreateTaskExportTaskRequest::setHasAnswered(bool hasAnswered)
{
	hasAnswered_ = hasAnswered;
	setParameter("HasAnswered", hasAnswered ? "true" : "false");
}

long CreateTaskExportTaskRequest::getActualTimeLte()const
{
	return actualTimeLte_;
}

void CreateTaskExportTaskRequest::setActualTimeLte(long actualTimeLte)
{
	actualTimeLte_ = actualTimeLte;
	setParameter("ActualTimeLte", std::to_string(actualTimeLte));
}

std::string CreateTaskExportTaskRequest::getOtherId()const
{
	return otherId_;
}

void CreateTaskExportTaskRequest::setOtherId(const std::string& otherId)
{
	otherId_ = otherId;
	setParameter("OtherId", otherId);
}

long CreateTaskExportTaskRequest::getTaskCreateTimeLte()const
{
	return taskCreateTimeLte_;
}

void CreateTaskExportTaskRequest::setTaskCreateTimeLte(long taskCreateTimeLte)
{
	taskCreateTimeLte_ = taskCreateTimeLte;
	setParameter("TaskCreateTimeLte", std::to_string(taskCreateTimeLte));
}

std::string CreateTaskExportTaskRequest::getJobId()const
{
	return jobId_;
}

void CreateTaskExportTaskRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

long CreateTaskExportTaskRequest::getTaskCreateTimeGte()const
{
	return taskCreateTimeGte_;
}

void CreateTaskExportTaskRequest::setTaskCreateTimeGte(long taskCreateTimeGte)
{
	taskCreateTimeGte_ = taskCreateTimeGte;
	setParameter("TaskCreateTimeGte", std::to_string(taskCreateTimeGte));
}

std::string CreateTaskExportTaskRequest::getCalledNumber()const
{
	return calledNumber_;
}

void CreateTaskExportTaskRequest::setCalledNumber(const std::string& calledNumber)
{
	calledNumber_ = calledNumber;
	setParameter("CalledNumber", calledNumber);
}

std::string CreateTaskExportTaskRequest::getUserIdMatch()const
{
	return userIdMatch_;
}

void CreateTaskExportTaskRequest::setUserIdMatch(const std::string& userIdMatch)
{
	userIdMatch_ = userIdMatch;
	setParameter("UserIdMatch", userIdMatch);
}

int CreateTaskExportTaskRequest::getPageSize()const
{
	return pageSize_;
}

void CreateTaskExportTaskRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string CreateTaskExportTaskRequest::getScriptNameQuery()const
{
	return scriptNameQuery_;
}

void CreateTaskExportTaskRequest::setScriptNameQuery(const std::string& scriptNameQuery)
{
	scriptNameQuery_ = scriptNameQuery;
	setParameter("ScriptNameQuery", scriptNameQuery);
}

int CreateTaskExportTaskRequest::getPageIndex()const
{
	return pageIndex_;
}

void CreateTaskExportTaskRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setParameter("PageIndex", std::to_string(pageIndex));
}

std::string CreateTaskExportTaskRequest::getSortOrder()const
{
	return sortOrder_;
}

void CreateTaskExportTaskRequest::setSortOrder(const std::string& sortOrder)
{
	sortOrder_ = sortOrder;
	setParameter("SortOrder", sortOrder);
}

std::string CreateTaskExportTaskRequest::getTaskStatusStringList()const
{
	return taskStatusStringList_;
}

void CreateTaskExportTaskRequest::setTaskStatusStringList(const std::string& taskStatusStringList)
{
	taskStatusStringList_ = taskStatusStringList;
	setParameter("TaskStatusStringList", taskStatusStringList);
}

std::string CreateTaskExportTaskRequest::getJobGroupNameQuery()const
{
	return jobGroupNameQuery_;
}

void CreateTaskExportTaskRequest::setJobGroupNameQuery(const std::string& jobGroupNameQuery)
{
	jobGroupNameQuery_ = jobGroupNameQuery;
	setParameter("JobGroupNameQuery", jobGroupNameQuery);
}

std::string CreateTaskExportTaskRequest::getTaskId()const
{
	return taskId_;
}

void CreateTaskExportTaskRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", taskId);
}

bool CreateTaskExportTaskRequest::getHasHangUpByRejection()const
{
	return hasHangUpByRejection_;
}

void CreateTaskExportTaskRequest::setHasHangUpByRejection(bool hasHangUpByRejection)
{
	hasHangUpByRejection_ = hasHangUpByRejection;
	setParameter("HasHangUpByRejection", hasHangUpByRejection ? "true" : "false");
}

bool CreateTaskExportTaskRequest::getHasReachedEndOfFlow()const
{
	return hasReachedEndOfFlow_;
}

void CreateTaskExportTaskRequest::setHasReachedEndOfFlow(bool hasReachedEndOfFlow)
{
	hasReachedEndOfFlow_ = hasReachedEndOfFlow;
	setParameter("HasReachedEndOfFlow", hasReachedEndOfFlow ? "true" : "false");
}

std::string CreateTaskExportTaskRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateTaskExportTaskRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

long CreateTaskExportTaskRequest::getRecordingDurationGte()const
{
	return recordingDurationGte_;
}

void CreateTaskExportTaskRequest::setRecordingDurationGte(long recordingDurationGte)
{
	recordingDurationGte_ = recordingDurationGte;
	setParameter("RecordingDurationGte", std::to_string(recordingDurationGte));
}

long CreateTaskExportTaskRequest::getCallDurationLte()const
{
	return callDurationLte_;
}

void CreateTaskExportTaskRequest::setCallDurationLte(long callDurationLte)
{
	callDurationLte_ = callDurationLte;
	setParameter("CallDurationLte", std::to_string(callDurationLte));
}

std::string CreateTaskExportTaskRequest::getJobGroupId()const
{
	return jobGroupId_;
}

void CreateTaskExportTaskRequest::setJobGroupId(const std::string& jobGroupId)
{
	jobGroupId_ = jobGroupId;
	setParameter("JobGroupId", jobGroupId);
}

std::string CreateTaskExportTaskRequest::getSortBy()const
{
	return sortBy_;
}

void CreateTaskExportTaskRequest::setSortBy(const std::string& sortBy)
{
	sortBy_ = sortBy;
	setParameter("SortBy", sortBy);
}

std::string CreateTaskExportTaskRequest::getJobStatusStringList()const
{
	return jobStatusStringList_;
}

void CreateTaskExportTaskRequest::setJobStatusStringList(const std::string& jobStatusStringList)
{
	jobStatusStringList_ = jobStatusStringList;
	setParameter("JobStatusStringList", jobStatusStringList);
}

long CreateTaskExportTaskRequest::getActualTimeGte()const
{
	return actualTimeGte_;
}

void CreateTaskExportTaskRequest::setActualTimeGte(long actualTimeGte)
{
	actualTimeGte_ = actualTimeGte;
	setParameter("ActualTimeGte", std::to_string(actualTimeGte));
}

long CreateTaskExportTaskRequest::getCallDurationGte()const
{
	return callDurationGte_;
}

void CreateTaskExportTaskRequest::setCallDurationGte(long callDurationGte)
{
	callDurationGte_ = callDurationGte;
	setParameter("CallDurationGte", std::to_string(callDurationGte));
}

long CreateTaskExportTaskRequest::getRecordingDurationLte()const
{
	return recordingDurationLte_;
}

void CreateTaskExportTaskRequest::setRecordingDurationLte(long recordingDurationLte)
{
	recordingDurationLte_ = recordingDurationLte;
	setParameter("RecordingDurationLte", std::to_string(recordingDurationLte));
}

