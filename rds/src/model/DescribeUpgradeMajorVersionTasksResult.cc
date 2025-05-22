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

#include <alibabacloud/rds/model/DescribeUpgradeMajorVersionTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeUpgradeMajorVersionTasksResult::DescribeUpgradeMajorVersionTasksResult() :
	ServiceResult()
{}

DescribeUpgradeMajorVersionTasksResult::DescribeUpgradeMajorVersionTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUpgradeMajorVersionTasksResult::~DescribeUpgradeMajorVersionTasksResult()
{}

void DescribeUpgradeMajorVersionTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Tasks"];
	for (auto valueItemsTasks : allItemsNode)
	{
		Tasks itemsObject;
		if(!valueItemsTasks["TargetMajorVersion"].isNull())
			itemsObject.targetMajorVersion = valueItemsTasks["TargetMajorVersion"].asString();
		if(!valueItemsTasks["Result"].isNull())
			itemsObject.result = valueItemsTasks["Result"].asString();
		if(!valueItemsTasks["EndTime"].isNull())
			itemsObject.endTime = valueItemsTasks["EndTime"].asString();
		if(!valueItemsTasks["StartTime"].isNull())
			itemsObject.startTime = valueItemsTasks["StartTime"].asString();
		if(!valueItemsTasks["SourceMajorVersion"].isNull())
			itemsObject.sourceMajorVersion = valueItemsTasks["SourceMajorVersion"].asString();
		if(!valueItemsTasks["UpgradeMode"].isNull())
			itemsObject.upgradeMode = valueItemsTasks["UpgradeMode"].asString();
		if(!valueItemsTasks["CollectStatMode"].isNull())
			itemsObject.collectStatMode = valueItemsTasks["CollectStatMode"].asString();
		if(!valueItemsTasks["SourceInsName"].isNull())
			itemsObject.sourceInsName = valueItemsTasks["SourceInsName"].asString();
		if(!valueItemsTasks["TaskId"].isNull())
			itemsObject.taskId = std::stoi(valueItemsTasks["TaskId"].asString());
		if(!valueItemsTasks["TargetInsName"].isNull())
			itemsObject.targetInsName = valueItemsTasks["TargetInsName"].asString();
		if(!valueItemsTasks["SwitchTime"].isNull())
			itemsObject.switchTime = valueItemsTasks["SwitchTime"].asString();
		if(!valueItemsTasks["Detail"].isNull())
			itemsObject.detail = valueItemsTasks["Detail"].asString();
		if(!valueItemsTasks["SwitchEndTime"].isNull())
			itemsObject.switchEndTime = valueItemsTasks["SwitchEndTime"].asString();
		if(!valueItemsTasks["totalLogicRepLatencyMB"].isNull())
			itemsObject.totalLogicRepLatencyMB = std::stoi(valueItemsTasks["totalLogicRepLatencyMB"].asString());
		if(!valueItemsTasks["totalLogicRepDelayTime"].isNull())
			itemsObject.totalLogicRepDelayTime = std::stoi(valueItemsTasks["totalLogicRepDelayTime"].asString());
		if(!valueItemsTasks["zeroDownTimeConnectionString"].isNull())
			itemsObject.zeroDownTimeConnectionString = valueItemsTasks["zeroDownTimeConnectionString"].asString();
		if(!valueItemsTasks["zeroDownTimePort"].isNull())
			itemsObject.zeroDownTimePort = std::stoi(valueItemsTasks["zeroDownTimePort"].asString());
		if(!valueItemsTasks["cutOver"].isNull())
			itemsObject.cutOver = valueItemsTasks["cutOver"].asString() == "true";
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());

}

int DescribeUpgradeMajorVersionTasksResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeUpgradeMajorVersionTasksResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeUpgradeMajorVersionTasksResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeUpgradeMajorVersionTasksResult::Tasks> DescribeUpgradeMajorVersionTasksResult::getItems()const
{
	return items_;
}

