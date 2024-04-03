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

#include <alibabacloud/cloudauth/model/DescribeSmartStatisticsPageListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudauth;
using namespace AlibabaCloud::Cloudauth::Model;

DescribeSmartStatisticsPageListResult::DescribeSmartStatisticsPageListResult() :
	ServiceResult()
{}

DescribeSmartStatisticsPageListResult::DescribeSmartStatisticsPageListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSmartStatisticsPageListResult::~DescribeSmartStatisticsPageListResult()
{}

void DescribeSmartStatisticsPageListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["ItemsItem"];
	for (auto valueItemsItemsItem : allItemsNode)
	{
		ItemsItem itemsObject;
		if(!valueItemsItemsItem["Date"].isNull())
			itemsObject.date = valueItemsItemsItem["Date"].asString();
		if(!valueItemsItemsItem["SceneId"].isNull())
			itemsObject.sceneId = std::stol(valueItemsItemsItem["SceneId"].asString());
		if(!valueItemsItemsItem["SceneName"].isNull())
			itemsObject.sceneName = valueItemsItemsItem["SceneName"].asString();
		if(!valueItemsItemsItem["TotalCount"].isNull())
			itemsObject.totalCount = std::stoi(valueItemsItemsItem["TotalCount"].asString());
		if(!valueItemsItemsItem["SuccessCount"].isNull())
			itemsObject.successCount = std::stoi(valueItemsItemsItem["SuccessCount"].asString());
		if(!valueItemsItemsItem["PassRate"].isNull())
			itemsObject.passRate = valueItemsItemsItem["PassRate"].asString();
		if(!valueItemsItemsItem["ProductCode"].isNull())
			itemsObject.productCode = valueItemsItemsItem["ProductCode"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalPage"].isNull())
		totalPage_ = std::stoi(value["TotalPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeSmartStatisticsPageListResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeSmartStatisticsPageListResult::getTotalPage()const
{
	return totalPage_;
}

int DescribeSmartStatisticsPageListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeSmartStatisticsPageListResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeSmartStatisticsPageListResult::ItemsItem> DescribeSmartStatisticsPageListResult::getItems()const
{
	return items_;
}

