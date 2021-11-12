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

#include <alibabacloud/polardb/model/DescribeStoragePlanResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeStoragePlanResult::DescribeStoragePlanResult() :
	ServiceResult()
{}

DescribeStoragePlanResult::DescribeStoragePlanResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStoragePlanResult::~DescribeStoragePlanResult()
{}

void DescribeStoragePlanResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["DescribeStoragePlanResponses"];
	for (auto valueItemsDescribeStoragePlanResponses : allItemsNode)
	{
		DescribeStoragePlanResponses itemsObject;
		if(!valueItemsDescribeStoragePlanResponses["ProdCode"].isNull())
			itemsObject.prodCode = valueItemsDescribeStoragePlanResponses["ProdCode"].asString();
		if(!valueItemsDescribeStoragePlanResponses["AliUid"].isNull())
			itemsObject.aliUid = valueItemsDescribeStoragePlanResponses["AliUid"].asString();
		if(!valueItemsDescribeStoragePlanResponses["CommodityCode"].isNull())
			itemsObject.commodityCode = valueItemsDescribeStoragePlanResponses["CommodityCode"].asString();
		if(!valueItemsDescribeStoragePlanResponses["TemplateName"].isNull())
			itemsObject.templateName = valueItemsDescribeStoragePlanResponses["TemplateName"].asString();
		if(!valueItemsDescribeStoragePlanResponses["StorageType"].isNull())
			itemsObject.storageType = valueItemsDescribeStoragePlanResponses["StorageType"].asString();
		if(!valueItemsDescribeStoragePlanResponses["Status"].isNull())
			itemsObject.status = valueItemsDescribeStoragePlanResponses["Status"].asString();
		if(!valueItemsDescribeStoragePlanResponses["StartTimes"].isNull())
			itemsObject.startTimes = valueItemsDescribeStoragePlanResponses["StartTimes"].asString();
		if(!valueItemsDescribeStoragePlanResponses["EndTimes"].isNull())
			itemsObject.endTimes = valueItemsDescribeStoragePlanResponses["EndTimes"].asString();
		if(!valueItemsDescribeStoragePlanResponses["PurchaseTimes"].isNull())
			itemsObject.purchaseTimes = valueItemsDescribeStoragePlanResponses["PurchaseTimes"].asString();
		if(!valueItemsDescribeStoragePlanResponses["InstanceId"].isNull())
			itemsObject.instanceId = valueItemsDescribeStoragePlanResponses["InstanceId"].asString();
		if(!valueItemsDescribeStoragePlanResponses["InitCapacityViewValue"].isNull())
			itemsObject.initCapacityViewValue = valueItemsDescribeStoragePlanResponses["InitCapacityViewValue"].asString();
		if(!valueItemsDescribeStoragePlanResponses["InitCapaCityViewUnit"].isNull())
			itemsObject.initCapaCityViewUnit = valueItemsDescribeStoragePlanResponses["InitCapaCityViewUnit"].asString();
		if(!valueItemsDescribeStoragePlanResponses["PeriodCapacityViewValue"].isNull())
			itemsObject.periodCapacityViewValue = valueItemsDescribeStoragePlanResponses["PeriodCapacityViewValue"].asString();
		if(!valueItemsDescribeStoragePlanResponses["PeriodCapaCityViewUnit"].isNull())
			itemsObject.periodCapaCityViewUnit = valueItemsDescribeStoragePlanResponses["PeriodCapaCityViewUnit"].asString();
		if(!valueItemsDescribeStoragePlanResponses["PeriodTime"].isNull())
			itemsObject.periodTime = valueItemsDescribeStoragePlanResponses["PeriodTime"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stol(value["TotalRecordCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());

}

long DescribeStoragePlanResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

long DescribeStoragePlanResult::getPageSize()const
{
	return pageSize_;
}

long DescribeStoragePlanResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeStoragePlanResult::DescribeStoragePlanResponses> DescribeStoragePlanResult::getItems()const
{
	return items_;
}

