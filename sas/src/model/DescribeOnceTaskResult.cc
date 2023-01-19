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

#include <alibabacloud/sas/model/DescribeOnceTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeOnceTaskResult::DescribeOnceTaskResult() :
	ServiceResult()
{}

DescribeOnceTaskResult::DescribeOnceTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOnceTaskResult::~DescribeOnceTaskResult()
{}

void DescribeOnceTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTaskManageResponseListNode = value["TaskManageResponseList"]["TaskManageResponse"];
	for (auto valueTaskManageResponseListTaskManageResponse : allTaskManageResponseListNode)
	{
		TaskManageResponse taskManageResponseListObject;
		if(!valueTaskManageResponseListTaskManageResponse["TaskType"].isNull())
			taskManageResponseListObject.taskType = valueTaskManageResponseListTaskManageResponse["TaskType"].asString();
		if(!valueTaskManageResponseListTaskManageResponse["Progress"].isNull())
			taskManageResponseListObject.progress = valueTaskManageResponseListTaskManageResponse["Progress"].asString();
		if(!valueTaskManageResponseListTaskManageResponse["TaskStatus"].isNull())
			taskManageResponseListObject.taskStatus = std::stoi(valueTaskManageResponseListTaskManageResponse["TaskStatus"].asString());
		if(!valueTaskManageResponseListTaskManageResponse["DetailData"].isNull())
			taskManageResponseListObject.detailData = valueTaskManageResponseListTaskManageResponse["DetailData"].asString();
		if(!valueTaskManageResponseListTaskManageResponse["TaskStatusText"].isNull())
			taskManageResponseListObject.taskStatusText = valueTaskManageResponseListTaskManageResponse["TaskStatusText"].asString();
		if(!valueTaskManageResponseListTaskManageResponse["TaskName"].isNull())
			taskManageResponseListObject.taskName = valueTaskManageResponseListTaskManageResponse["TaskName"].asString();
		if(!valueTaskManageResponseListTaskManageResponse["TaskStartTime"].isNull())
			taskManageResponseListObject.taskStartTime = std::stol(valueTaskManageResponseListTaskManageResponse["TaskStartTime"].asString());
		if(!valueTaskManageResponseListTaskManageResponse["TaskEndTime"].isNull())
			taskManageResponseListObject.taskEndTime = std::stol(valueTaskManageResponseListTaskManageResponse["TaskEndTime"].asString());
		if(!valueTaskManageResponseListTaskManageResponse["TaskId"].isNull())
			taskManageResponseListObject.taskId = valueTaskManageResponseListTaskManageResponse["TaskId"].asString();
		if(!valueTaskManageResponseListTaskManageResponse["Source"].isNull())
			taskManageResponseListObject.source = valueTaskManageResponseListTaskManageResponse["Source"].asString();
		if(!valueTaskManageResponseListTaskManageResponse["Context"].isNull())
			taskManageResponseListObject.context = valueTaskManageResponseListTaskManageResponse["Context"].asString();
		if(!valueTaskManageResponseListTaskManageResponse["SuccessCount"].isNull())
			taskManageResponseListObject.successCount = std::stoi(valueTaskManageResponseListTaskManageResponse["SuccessCount"].asString());
		if(!valueTaskManageResponseListTaskManageResponse["FailCount"].isNull())
			taskManageResponseListObject.failCount = std::stoi(valueTaskManageResponseListTaskManageResponse["FailCount"].asString());
		if(!valueTaskManageResponseListTaskManageResponse["ResultInfo"].isNull())
			taskManageResponseListObject.resultInfo = valueTaskManageResponseListTaskManageResponse["ResultInfo"].asString();
		taskManageResponseList_.push_back(taskManageResponseListObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());

}

DescribeOnceTaskResult::PageInfo DescribeOnceTaskResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<DescribeOnceTaskResult::TaskManageResponse> DescribeOnceTaskResult::getTaskManageResponseList()const
{
	return taskManageResponseList_;
}

