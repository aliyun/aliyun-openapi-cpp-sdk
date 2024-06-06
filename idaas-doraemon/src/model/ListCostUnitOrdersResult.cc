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

#include <alibabacloud/idaas-doraemon/model/ListCostUnitOrdersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Idaas_doraemon;
using namespace AlibabaCloud::Idaas_doraemon::Model;

ListCostUnitOrdersResult::ListCostUnitOrdersResult() :
	ServiceResult()
{}

ListCostUnitOrdersResult::ListCostUnitOrdersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCostUnitOrdersResult::~ListCostUnitOrdersResult()
{}

void ListCostUnitOrdersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Item"];
	for (auto valueItemsItem : allItemsNode)
	{
		Item itemsObject;
		if(!valueItemsItem["AliOrderCode"].isNull())
			itemsObject.aliOrderCode = valueItemsItem["AliOrderCode"].asString();
		if(!valueItemsItem["AliOrderInstanceId"].isNull())
			itemsObject.aliOrderInstanceId = valueItemsItem["AliOrderInstanceId"].asString();
		if(!valueItemsItem["TotalCostUnit"].isNull())
			itemsObject.totalCostUnit = std::stol(valueItemsItem["TotalCostUnit"].asString());
		if(!valueItemsItem["UsedCostUnit"].isNull())
			itemsObject.usedCostUnit = std::stol(valueItemsItem["UsedCostUnit"].asString());
		if(!valueItemsItem["OrderStatus"].isNull())
			itemsObject.orderStatus = valueItemsItem["OrderStatus"].asString();
		if(!valueItemsItem["CreateTime"].isNull())
			itemsObject.createTime = std::stol(valueItemsItem["CreateTime"].asString());
		if(!valueItemsItem["ExpiredTime"].isNull())
			itemsObject.expiredTime = std::stol(valueItemsItem["ExpiredTime"].asString());
		if(!valueItemsItem["RefundTime"].isNull())
			itemsObject.refundTime = std::stol(valueItemsItem["RefundTime"].asString());
		if(!valueItemsItem["Exhausted"].isNull())
			itemsObject.exhausted = valueItemsItem["Exhausted"].asString() == "true";
		items_.push_back(itemsObject);
	}
	if(!value["TotalPages"].isNull())
		totalPages_ = std::stol(value["TotalPages"].asString());
	if(!value["TotalElements"].isNull())
		totalElements_ = std::stol(value["TotalElements"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

long ListCostUnitOrdersResult::getPageSize()const
{
	return pageSize_;
}

long ListCostUnitOrdersResult::getTotalElements()const
{
	return totalElements_;
}

std::vector<ListCostUnitOrdersResult::Item> ListCostUnitOrdersResult::getItems()const
{
	return items_;
}

long ListCostUnitOrdersResult::getTotalPages()const
{
	return totalPages_;
}

