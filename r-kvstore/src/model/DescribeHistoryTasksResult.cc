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

#include <alibabacloud/r-kvstore/model/DescribeHistoryTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeHistoryTasksResult::DescribeHistoryTasksResult() :
	ServiceResult()
{}

DescribeHistoryTasksResult::DescribeHistoryTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHistoryTasksResult::~DescribeHistoryTasksResult()
{}

void DescribeHistoryTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["ItemsItem"];
	for (auto valueItemsItemsItem : allItemsNode)
	{
		ItemsItem itemsObject;
		if(!valueItemsItemsItem["Status"].isNull())
			itemsObject.status = valueItemsItemsItem["Status"].asString();
		if(!valueItemsItemsItem["TaskId"].isNull())
			itemsObject.taskId = valueItemsItemsItem["TaskId"].asString();
		if(!valueItemsItemsItem["CurrentStepName"].isNull())
			itemsObject.currentStepName = valueItemsItemsItem["CurrentStepName"].asString();
		if(!valueItemsItemsItem["StartTime"].isNull())
			itemsObject.startTime = valueItemsItemsItem["StartTime"].asString();
		if(!valueItemsItemsItem["EndTime"].isNull())
			itemsObject.endTime = valueItemsItemsItem["EndTime"].asString();
		if(!valueItemsItemsItem["TaskType"].isNull())
			itemsObject.taskType = valueItemsItemsItem["TaskType"].asString();
		if(!valueItemsItemsItem["RemainTime"].isNull())
			itemsObject.remainTime = std::stoi(valueItemsItemsItem["RemainTime"].asString());
		if(!valueItemsItemsItem["Progress"].isNull())
			itemsObject.progress = std::stof(valueItemsItemsItem["Progress"].asString());
		if(!valueItemsItemsItem["RegionId"].isNull())
			itemsObject.regionId = valueItemsItemsItem["RegionId"].asString();
		if(!valueItemsItemsItem["InstanceType"].isNull())
			itemsObject.instanceType = valueItemsItemsItem["InstanceType"].asString();
		if(!valueItemsItemsItem["InstanceId"].isNull())
			itemsObject.instanceId = valueItemsItemsItem["InstanceId"].asString();
		if(!valueItemsItemsItem["InstanceName"].isNull())
			itemsObject.instanceName = valueItemsItemsItem["InstanceName"].asString();
		if(!valueItemsItemsItem["DbType"].isNull())
			itemsObject.dbType = valueItemsItemsItem["DbType"].asString();
		if(!valueItemsItemsItem["Product"].isNull())
			itemsObject.product = valueItemsItemsItem["Product"].asString();
		if(!valueItemsItemsItem["TaskDetail"].isNull())
			itemsObject.taskDetail = valueItemsItemsItem["TaskDetail"].asString();
		if(!valueItemsItemsItem["ReasonCode"].isNull())
			itemsObject.reasonCode = valueItemsItemsItem["ReasonCode"].asString();
		if(!valueItemsItemsItem["ActionInfo"].isNull())
			itemsObject.actionInfo = valueItemsItemsItem["ActionInfo"].asString();
		if(!valueItemsItemsItem["Uid"].isNull())
			itemsObject.uid = valueItemsItemsItem["Uid"].asString();
		if(!valueItemsItemsItem["CallerSource"].isNull())
			itemsObject.callerSource = valueItemsItemsItem["CallerSource"].asString();
		if(!valueItemsItemsItem["CallerUid"].isNull())
			itemsObject.callerUid = valueItemsItemsItem["CallerUid"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeHistoryTasksResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeHistoryTasksResult::getPageSize()const
{
	return pageSize_;
}

int DescribeHistoryTasksResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeHistoryTasksResult::ItemsItem> DescribeHistoryTasksResult::getItems()const
{
	return items_;
}

