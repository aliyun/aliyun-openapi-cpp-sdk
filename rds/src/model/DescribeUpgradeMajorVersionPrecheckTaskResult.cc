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

#include <alibabacloud/rds/model/DescribeUpgradeMajorVersionPrecheckTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeUpgradeMajorVersionPrecheckTaskResult::DescribeUpgradeMajorVersionPrecheckTaskResult() :
	ServiceResult()
{}

DescribeUpgradeMajorVersionPrecheckTaskResult::DescribeUpgradeMajorVersionPrecheckTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUpgradeMajorVersionPrecheckTaskResult::~DescribeUpgradeMajorVersionPrecheckTaskResult()
{}

void DescribeUpgradeMajorVersionPrecheckTaskResult::parse(const std::string &payload)
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
		if(!valueItemsTasks["EffectiveTime"].isNull())
			itemsObject.effectiveTime = valueItemsTasks["EffectiveTime"].asString();
		if(!valueItemsTasks["SourceMajorVersion"].isNull())
			itemsObject.sourceMajorVersion = valueItemsTasks["SourceMajorVersion"].asString();
		if(!valueItemsTasks["Result"].isNull())
			itemsObject.result = valueItemsTasks["Result"].asString();
		if(!valueItemsTasks["TaskId"].isNull())
			itemsObject.taskId = std::stoi(valueItemsTasks["TaskId"].asString());
		if(!valueItemsTasks["Detail"].isNull())
			itemsObject.detail = valueItemsTasks["Detail"].asString();
		if(!valueItemsTasks["CheckTime"].isNull())
			itemsObject.checkTime = valueItemsTasks["CheckTime"].asString();
		if(!valueItemsTasks["RecommendDiskSize"].isNull())
			itemsObject.recommendDiskSize = std::stoi(valueItemsTasks["RecommendDiskSize"].asString());
		if(!valueItemsTasks["RecommendLeastMemSize"].isNull())
			itemsObject.recommendLeastMemSize = std::stoi(valueItemsTasks["RecommendLeastMemSize"].asString());
		if(!valueItemsTasks["RecommendMemSize"].isNull())
			itemsObject.recommendMemSize = std::stoi(valueItemsTasks["RecommendMemSize"].asString());
		if(!valueItemsTasks["UpgradeMode"].isNull())
			itemsObject.upgradeMode = valueItemsTasks["UpgradeMode"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());

}

int DescribeUpgradeMajorVersionPrecheckTaskResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeUpgradeMajorVersionPrecheckTaskResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeUpgradeMajorVersionPrecheckTaskResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeUpgradeMajorVersionPrecheckTaskResult::Tasks> DescribeUpgradeMajorVersionPrecheckTaskResult::getItems()const
{
	return items_;
}

