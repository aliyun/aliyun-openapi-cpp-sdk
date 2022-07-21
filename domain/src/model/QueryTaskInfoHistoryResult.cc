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

#include <alibabacloud/domain/model/QueryTaskInfoHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryTaskInfoHistoryResult::QueryTaskInfoHistoryResult() :
	ServiceResult()
{}

QueryTaskInfoHistoryResult::QueryTaskInfoHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTaskInfoHistoryResult::~QueryTaskInfoHistoryResult()
{}

void QueryTaskInfoHistoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allObjectsNode = value["Objects"]["TaskInfoHistory"];
	for (auto valueObjectsTaskInfoHistory : allObjectsNode)
	{
		TaskInfoHistory objectsObject;
		if(!valueObjectsTaskInfoHistory["TaskType"].isNull())
			objectsObject.taskType = valueObjectsTaskInfoHistory["TaskType"].asString();
		if(!valueObjectsTaskInfoHistory["TaskNo"].isNull())
			objectsObject.taskNo = valueObjectsTaskInfoHistory["TaskNo"].asString();
		if(!valueObjectsTaskInfoHistory["TaskStatusCode"].isNull())
			objectsObject.taskStatusCode = std::stoi(valueObjectsTaskInfoHistory["TaskStatusCode"].asString());
		if(!valueObjectsTaskInfoHistory["TaskStatus"].isNull())
			objectsObject.taskStatus = valueObjectsTaskInfoHistory["TaskStatus"].asString();
		if(!valueObjectsTaskInfoHistory["TaskTypeDescription"].isNull())
			objectsObject.taskTypeDescription = valueObjectsTaskInfoHistory["TaskTypeDescription"].asString();
		if(!valueObjectsTaskInfoHistory["TaskNum"].isNull())
			objectsObject.taskNum = std::stoi(valueObjectsTaskInfoHistory["TaskNum"].asString());
		if(!valueObjectsTaskInfoHistory["CreateTime"].isNull())
			objectsObject.createTime = valueObjectsTaskInfoHistory["CreateTime"].asString();
		if(!valueObjectsTaskInfoHistory["CreateTimeLong"].isNull())
			objectsObject.createTimeLong = std::stol(valueObjectsTaskInfoHistory["CreateTimeLong"].asString());
		if(!valueObjectsTaskInfoHistory["Clientip"].isNull())
			objectsObject.clientip = valueObjectsTaskInfoHistory["Clientip"].asString();
		objects_.push_back(objectsObject);
	}
	auto currentPageCursorNode = value["CurrentPageCursor"];
	if(!currentPageCursorNode["TaskType"].isNull())
		currentPageCursor_.taskType = currentPageCursorNode["TaskType"].asString();
	if(!currentPageCursorNode["TaskNo"].isNull())
		currentPageCursor_.taskNo = currentPageCursorNode["TaskNo"].asString();
	if(!currentPageCursorNode["TaskStatusCode"].isNull())
		currentPageCursor_.taskStatusCode = std::stoi(currentPageCursorNode["TaskStatusCode"].asString());
	if(!currentPageCursorNode["TaskStatus"].isNull())
		currentPageCursor_.taskStatus = currentPageCursorNode["TaskStatus"].asString();
	if(!currentPageCursorNode["TaskTypeDescription"].isNull())
		currentPageCursor_.taskTypeDescription = currentPageCursorNode["TaskTypeDescription"].asString();
	if(!currentPageCursorNode["TaskNum"].isNull())
		currentPageCursor_.taskNum = std::stoi(currentPageCursorNode["TaskNum"].asString());
	if(!currentPageCursorNode["CreateTime"].isNull())
		currentPageCursor_.createTime = currentPageCursorNode["CreateTime"].asString();
	if(!currentPageCursorNode["CreateTimeLong"].isNull())
		currentPageCursor_.createTimeLong = std::stol(currentPageCursorNode["CreateTimeLong"].asString());
	if(!currentPageCursorNode["Clientip"].isNull())
		currentPageCursor_.clientip = currentPageCursorNode["Clientip"].asString();
	auto prePageCursorNode = value["PrePageCursor"];
	if(!prePageCursorNode["TaskType"].isNull())
		prePageCursor_.taskType = prePageCursorNode["TaskType"].asString();
	if(!prePageCursorNode["TaskNo"].isNull())
		prePageCursor_.taskNo = prePageCursorNode["TaskNo"].asString();
	if(!prePageCursorNode["TaskStatusCode"].isNull())
		prePageCursor_.taskStatusCode = std::stoi(prePageCursorNode["TaskStatusCode"].asString());
	if(!prePageCursorNode["TaskStatus"].isNull())
		prePageCursor_.taskStatus = prePageCursorNode["TaskStatus"].asString();
	if(!prePageCursorNode["TaskTypeDescription"].isNull())
		prePageCursor_.taskTypeDescription = prePageCursorNode["TaskTypeDescription"].asString();
	if(!prePageCursorNode["TaskNum"].isNull())
		prePageCursor_.taskNum = std::stoi(prePageCursorNode["TaskNum"].asString());
	if(!prePageCursorNode["CreateTime"].isNull())
		prePageCursor_.createTime = prePageCursorNode["CreateTime"].asString();
	if(!prePageCursorNode["CreateTimeLong"].isNull())
		prePageCursor_.createTimeLong = std::stol(prePageCursorNode["CreateTimeLong"].asString());
	if(!prePageCursorNode["Clientip"].isNull())
		prePageCursor_.clientip = prePageCursorNode["Clientip"].asString();
	auto nextPageCursorNode = value["NextPageCursor"];
	if(!nextPageCursorNode["TaskType"].isNull())
		nextPageCursor_.taskType = nextPageCursorNode["TaskType"].asString();
	if(!nextPageCursorNode["TaskNo"].isNull())
		nextPageCursor_.taskNo = nextPageCursorNode["TaskNo"].asString();
	if(!nextPageCursorNode["TaskStatusCode"].isNull())
		nextPageCursor_.taskStatusCode = std::stoi(nextPageCursorNode["TaskStatusCode"].asString());
	if(!nextPageCursorNode["TaskStatus"].isNull())
		nextPageCursor_.taskStatus = nextPageCursorNode["TaskStatus"].asString();
	if(!nextPageCursorNode["TaskTypeDescription"].isNull())
		nextPageCursor_.taskTypeDescription = nextPageCursorNode["TaskTypeDescription"].asString();
	if(!nextPageCursorNode["TaskNum"].isNull())
		nextPageCursor_.taskNum = std::stoi(nextPageCursorNode["TaskNum"].asString());
	if(!nextPageCursorNode["CreateTime"].isNull())
		nextPageCursor_.createTime = nextPageCursorNode["CreateTime"].asString();
	if(!nextPageCursorNode["CreateTimeLong"].isNull())
		nextPageCursor_.createTimeLong = std::stol(nextPageCursorNode["CreateTimeLong"].asString());
	if(!nextPageCursorNode["Clientip"].isNull())
		nextPageCursor_.clientip = nextPageCursorNode["Clientip"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int QueryTaskInfoHistoryResult::getPageSize()const
{
	return pageSize_;
}

QueryTaskInfoHistoryResult::CurrentPageCursor QueryTaskInfoHistoryResult::getCurrentPageCursor()const
{
	return currentPageCursor_;
}

std::vector<QueryTaskInfoHistoryResult::TaskInfoHistory> QueryTaskInfoHistoryResult::getObjects()const
{
	return objects_;
}

QueryTaskInfoHistoryResult::PrePageCursor QueryTaskInfoHistoryResult::getPrePageCursor()const
{
	return prePageCursor_;
}

QueryTaskInfoHistoryResult::NextPageCursor QueryTaskInfoHistoryResult::getNextPageCursor()const
{
	return nextPageCursor_;
}

