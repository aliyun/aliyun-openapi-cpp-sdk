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

#include <alibabacloud/r-kvstore/model/DescribeTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeTasksResult::DescribeTasksResult() :
	ServiceResult()
{}

DescribeTasksResult::DescribeTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTasksResult::~DescribeTasksResult()
{}

void DescribeTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["TaskProgressInfo"];
	for (auto valueItemsTaskProgressInfo : allItemsNode)
	{
		TaskProgressInfo itemsObject;
		if(!valueItemsTaskProgressInfo["TaskId"].isNull())
			itemsObject.taskId = valueItemsTaskProgressInfo["TaskId"].asString();
		if(!valueItemsTaskProgressInfo["TaskAction"].isNull())
			itemsObject.taskAction = valueItemsTaskProgressInfo["TaskAction"].asString();
		if(!valueItemsTaskProgressInfo["Status"].isNull())
			itemsObject.status = valueItemsTaskProgressInfo["Status"].asString();
		if(!valueItemsTaskProgressInfo["Progress"].isNull())
			itemsObject.progress = std::stof(valueItemsTaskProgressInfo["Progress"].asString());
		if(!valueItemsTaskProgressInfo["BeginTime"].isNull())
			itemsObject.beginTime = valueItemsTaskProgressInfo["BeginTime"].asString();
		if(!valueItemsTaskProgressInfo["FinishTime"].isNull())
			itemsObject.finishTime = valueItemsTaskProgressInfo["FinishTime"].asString();
		if(!valueItemsTaskProgressInfo["StepsInfo"].isNull())
			itemsObject.stepsInfo = valueItemsTaskProgressInfo["StepsInfo"].asString();
		if(!valueItemsTaskProgressInfo["Remain"].isNull())
			itemsObject.remain = std::stoi(valueItemsTaskProgressInfo["Remain"].asString());
		if(!valueItemsTaskProgressInfo["StepProgressInfo"].isNull())
			itemsObject.stepProgressInfo = valueItemsTaskProgressInfo["StepProgressInfo"].asString();
		if(!valueItemsTaskProgressInfo["CurrentStepName"].isNull())
			itemsObject.currentStepName = valueItemsTaskProgressInfo["CurrentStepName"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());

}

int DescribeTasksResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeTasksResult::getPageSize()const
{
	return pageSize_;
}

int DescribeTasksResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeTasksResult::TaskProgressInfo> DescribeTasksResult::getItems()const
{
	return items_;
}

