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

#include <alibabacloud/polardb/model/DescribeActiveOperationTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeActiveOperationTasksResult::DescribeActiveOperationTasksResult() :
	ServiceResult()
{}

DescribeActiveOperationTasksResult::DescribeActiveOperationTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeActiveOperationTasksResult::~DescribeActiveOperationTasksResult()
{}

void DescribeActiveOperationTasksResult::parse(const std::string &payload)
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
			itemsObject.status = std::stoi(valueItemsItemsItem["Status"].asString());
		if(!valueItemsItemsItem["PrepareInterval"].isNull())
			itemsObject.prepareInterval = valueItemsItemsItem["PrepareInterval"].asString();
		if(!valueItemsItemsItem["Deadline"].isNull())
			itemsObject.deadline = valueItemsItemsItem["Deadline"].asString();
		if(!valueItemsItemsItem["DBType"].isNull())
			itemsObject.dBType = valueItemsItemsItem["DBType"].asString();
		if(!valueItemsItemsItem["TaskType"].isNull())
			itemsObject.taskType = valueItemsItemsItem["TaskType"].asString();
		if(!valueItemsItemsItem["StartTime"].isNull())
			itemsObject.startTime = valueItemsItemsItem["StartTime"].asString();
		if(!valueItemsItemsItem["DBVersion"].isNull())
			itemsObject.dBVersion = valueItemsItemsItem["DBVersion"].asString();
		if(!valueItemsItemsItem["ModifiedTime"].isNull())
			itemsObject.modifiedTime = valueItemsItemsItem["ModifiedTime"].asString();
		if(!valueItemsItemsItem["DBClusterId"].isNull())
			itemsObject.dBClusterId = valueItemsItemsItem["DBClusterId"].asString();
		if(!valueItemsItemsItem["Region"].isNull())
			itemsObject.region = valueItemsItemsItem["Region"].asString();
		if(!valueItemsItemsItem["ResultInfo"].isNull())
			itemsObject.resultInfo = valueItemsItemsItem["ResultInfo"].asString();
		if(!valueItemsItemsItem["CreatedTime"].isNull())
			itemsObject.createdTime = valueItemsItemsItem["CreatedTime"].asString();
		if(!valueItemsItemsItem["TaskId"].isNull())
			itemsObject.taskId = std::stoi(valueItemsItemsItem["TaskId"].asString());
		if(!valueItemsItemsItem["SwitchTime"].isNull())
			itemsObject.switchTime = valueItemsItemsItem["SwitchTime"].asString();
		if(!valueItemsItemsItem["CurrentAVZ"].isNull())
			itemsObject.currentAVZ = valueItemsItemsItem["CurrentAVZ"].asString();
		if(!valueItemsItemsItem["InsComment"].isNull())
			itemsObject.insComment = valueItemsItemsItem["InsComment"].asString();
		if(!valueItemsItemsItem["TaskTypeZh"].isNull())
			itemsObject.taskTypeZh = valueItemsItemsItem["TaskTypeZh"].asString();
		if(!valueItemsItemsItem["TaskTypeEn"].isNull())
			itemsObject.taskTypeEn = valueItemsItemsItem["TaskTypeEn"].asString();
		if(!valueItemsItemsItem["ChangeLevel"].isNull())
			itemsObject.changeLevel = valueItemsItemsItem["ChangeLevel"].asString();
		if(!valueItemsItemsItem["ChangeLevelZh"].isNull())
			itemsObject.changeLevelZh = valueItemsItemsItem["ChangeLevelZh"].asString();
		if(!valueItemsItemsItem["ChangeLevelEn"].isNull())
			itemsObject.changeLevelEn = valueItemsItemsItem["ChangeLevelEn"].asString();
		if(!valueItemsItemsItem["ImpactZh"].isNull())
			itemsObject.impactZh = valueItemsItemsItem["ImpactZh"].asString();
		if(!valueItemsItemsItem["ImpactEn"].isNull())
			itemsObject.impactEn = valueItemsItemsItem["ImpactEn"].asString();
		if(!valueItemsItemsItem["AllowChange"].isNull())
			itemsObject.allowChange = std::stol(valueItemsItemsItem["AllowChange"].asString());
		if(!valueItemsItemsItem["AllowCancel"].isNull())
			itemsObject.allowCancel = std::stol(valueItemsItemsItem["AllowCancel"].asString());
		if(!valueItemsItemsItem["Impact"].isNull())
			itemsObject.impact = valueItemsItemsItem["Impact"].asString();
		if(!valueItemsItemsItem["TaskParams"].isNull())
			itemsObject.taskParams = valueItemsItemsItem["TaskParams"].asString();
		auto allDBNodeIds = value["DBNodeIds"]["subInsNames"];
		for (auto value : allDBNodeIds)
			itemsObject.dBNodeIds.push_back(value.asString());
		items_.push_back(itemsObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeActiveOperationTasksResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeActiveOperationTasksResult::getPageSize()const
{
	return pageSize_;
}

int DescribeActiveOperationTasksResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeActiveOperationTasksResult::ItemsItem> DescribeActiveOperationTasksResult::getItems()const
{
	return items_;
}

