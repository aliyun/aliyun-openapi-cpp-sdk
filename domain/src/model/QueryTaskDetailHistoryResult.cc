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

#include <alibabacloud/domain/model/QueryTaskDetailHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryTaskDetailHistoryResult::QueryTaskDetailHistoryResult() :
	ServiceResult()
{}

QueryTaskDetailHistoryResult::QueryTaskDetailHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTaskDetailHistoryResult::~QueryTaskDetailHistoryResult()
{}

void QueryTaskDetailHistoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allObjects = value["Objects"]["TaskDetailHistory"];
	for (auto value : allObjects)
	{
		TaskDetailHistory objectsObject;
		if(!value["TaskNo"].isNull())
			objectsObject.taskNo = value["TaskNo"].asString();
		if(!value["TaskDetailNo"].isNull())
			objectsObject.taskDetailNo = value["TaskDetailNo"].asString();
		if(!value["TaskType"].isNull())
			objectsObject.taskType = value["TaskType"].asString();
		if(!value["InstanceId"].isNull())
			objectsObject.instanceId = value["InstanceId"].asString();
		if(!value["DomainName"].isNull())
			objectsObject.domainName = value["DomainName"].asString();
		if(!value["TaskStatus"].isNull())
			objectsObject.taskStatus = value["TaskStatus"].asString();
		if(!value["UpdateTime"].isNull())
			objectsObject.updateTime = value["UpdateTime"].asString();
		if(!value["CreateTime"].isNull())
			objectsObject.createTime = value["CreateTime"].asString();
		if(!value["TryCount"].isNull())
			objectsObject.tryCount = std::stoi(value["TryCount"].asString());
		if(!value["ErrorMsg"].isNull())
			objectsObject.errorMsg = value["ErrorMsg"].asString();
		if(!value["TaskStatusCode"].isNull())
			objectsObject.taskStatusCode = std::stoi(value["TaskStatusCode"].asString());
		if(!value["TaskTypeDescription"].isNull())
			objectsObject.taskTypeDescription = value["TaskTypeDescription"].asString();
		objects_.push_back(objectsObject);
	}
	auto currentPageCursorNode = value["CurrentPageCursor"];
	if(!currentPageCursorNode["TaskNo"].isNull())
		currentPageCursor_.taskNo = currentPageCursorNode["TaskNo"].asString();
	if(!currentPageCursorNode["TaskDetailNo"].isNull())
		currentPageCursor_.taskDetailNo = currentPageCursorNode["TaskDetailNo"].asString();
	if(!currentPageCursorNode["TaskType"].isNull())
		currentPageCursor_.taskType = currentPageCursorNode["TaskType"].asString();
	if(!currentPageCursorNode["InstanceId"].isNull())
		currentPageCursor_.instanceId = currentPageCursorNode["InstanceId"].asString();
	if(!currentPageCursorNode["DomainName"].isNull())
		currentPageCursor_.domainName = currentPageCursorNode["DomainName"].asString();
	if(!currentPageCursorNode["TaskStatus"].isNull())
		currentPageCursor_.taskStatus = currentPageCursorNode["TaskStatus"].asString();
	if(!currentPageCursorNode["UpdateTime"].isNull())
		currentPageCursor_.updateTime = currentPageCursorNode["UpdateTime"].asString();
	if(!currentPageCursorNode["CreateTime"].isNull())
		currentPageCursor_.createTime = currentPageCursorNode["CreateTime"].asString();
	if(!currentPageCursorNode["TryCount"].isNull())
		currentPageCursor_.tryCount = std::stoi(currentPageCursorNode["TryCount"].asString());
	if(!currentPageCursorNode["ErrorMsg"].isNull())
		currentPageCursor_.errorMsg = currentPageCursorNode["ErrorMsg"].asString();
	if(!currentPageCursorNode["TaskStatusCode"].isNull())
		currentPageCursor_.taskStatusCode = std::stoi(currentPageCursorNode["TaskStatusCode"].asString());
	if(!currentPageCursorNode["TaskTypeDescription"].isNull())
		currentPageCursor_.taskTypeDescription = currentPageCursorNode["TaskTypeDescription"].asString();
	auto nextPageCursorNode = value["NextPageCursor"];
	if(!nextPageCursorNode["TaskNo"].isNull())
		nextPageCursor_.taskNo = nextPageCursorNode["TaskNo"].asString();
	if(!nextPageCursorNode["TaskDetailNo"].isNull())
		nextPageCursor_.taskDetailNo = nextPageCursorNode["TaskDetailNo"].asString();
	if(!nextPageCursorNode["TaskType"].isNull())
		nextPageCursor_.taskType = nextPageCursorNode["TaskType"].asString();
	if(!nextPageCursorNode["InstanceId"].isNull())
		nextPageCursor_.instanceId = nextPageCursorNode["InstanceId"].asString();
	if(!nextPageCursorNode["DomainName"].isNull())
		nextPageCursor_.domainName = nextPageCursorNode["DomainName"].asString();
	if(!nextPageCursorNode["TaskStatus"].isNull())
		nextPageCursor_.taskStatus = nextPageCursorNode["TaskStatus"].asString();
	if(!nextPageCursorNode["UpdateTime"].isNull())
		nextPageCursor_.updateTime = nextPageCursorNode["UpdateTime"].asString();
	if(!nextPageCursorNode["CreateTime"].isNull())
		nextPageCursor_.createTime = nextPageCursorNode["CreateTime"].asString();
	if(!nextPageCursorNode["TryCount"].isNull())
		nextPageCursor_.tryCount = std::stoi(nextPageCursorNode["TryCount"].asString());
	if(!nextPageCursorNode["ErrorMsg"].isNull())
		nextPageCursor_.errorMsg = nextPageCursorNode["ErrorMsg"].asString();
	if(!nextPageCursorNode["TaskStatusCode"].isNull())
		nextPageCursor_.taskStatusCode = std::stoi(nextPageCursorNode["TaskStatusCode"].asString());
	if(!nextPageCursorNode["TaskTypeDescription"].isNull())
		nextPageCursor_.taskTypeDescription = nextPageCursorNode["TaskTypeDescription"].asString();
	auto prePageCursorNode = value["PrePageCursor"];
	if(!prePageCursorNode["TaskNo"].isNull())
		prePageCursor_.taskNo = prePageCursorNode["TaskNo"].asString();
	if(!prePageCursorNode["TaskDetailNo"].isNull())
		prePageCursor_.taskDetailNo = prePageCursorNode["TaskDetailNo"].asString();
	if(!prePageCursorNode["TaskType"].isNull())
		prePageCursor_.taskType = prePageCursorNode["TaskType"].asString();
	if(!prePageCursorNode["InstanceId"].isNull())
		prePageCursor_.instanceId = prePageCursorNode["InstanceId"].asString();
	if(!prePageCursorNode["DomainName"].isNull())
		prePageCursor_.domainName = prePageCursorNode["DomainName"].asString();
	if(!prePageCursorNode["TaskStatus"].isNull())
		prePageCursor_.taskStatus = prePageCursorNode["TaskStatus"].asString();
	if(!prePageCursorNode["UpdateTime"].isNull())
		prePageCursor_.updateTime = prePageCursorNode["UpdateTime"].asString();
	if(!prePageCursorNode["CreateTime"].isNull())
		prePageCursor_.createTime = prePageCursorNode["CreateTime"].asString();
	if(!prePageCursorNode["TryCount"].isNull())
		prePageCursor_.tryCount = std::stoi(prePageCursorNode["TryCount"].asString());
	if(!prePageCursorNode["ErrorMsg"].isNull())
		prePageCursor_.errorMsg = prePageCursorNode["ErrorMsg"].asString();
	if(!prePageCursorNode["TaskStatusCode"].isNull())
		prePageCursor_.taskStatusCode = std::stoi(prePageCursorNode["TaskStatusCode"].asString());
	if(!prePageCursorNode["TaskTypeDescription"].isNull())
		prePageCursor_.taskTypeDescription = prePageCursorNode["TaskTypeDescription"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int QueryTaskDetailHistoryResult::getPageSize()const
{
	return pageSize_;
}

QueryTaskDetailHistoryResult::CurrentPageCursor QueryTaskDetailHistoryResult::getCurrentPageCursor()const
{
	return currentPageCursor_;
}

std::vector<QueryTaskDetailHistoryResult::TaskDetailHistory> QueryTaskDetailHistoryResult::getObjects()const
{
	return objects_;
}

QueryTaskDetailHistoryResult::PrePageCursor QueryTaskDetailHistoryResult::getPrePageCursor()const
{
	return prePageCursor_;
}

QueryTaskDetailHistoryResult::NextPageCursor QueryTaskDetailHistoryResult::getNextPageCursor()const
{
	return nextPageCursor_;
}

