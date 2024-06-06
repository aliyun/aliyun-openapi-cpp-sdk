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

#include <alibabacloud/idaas-doraemon/model/ListOrderConsumeStatisticRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Idaas_doraemon;
using namespace AlibabaCloud::Idaas_doraemon::Model;

ListOrderConsumeStatisticRecordsResult::ListOrderConsumeStatisticRecordsResult() :
	ServiceResult()
{}

ListOrderConsumeStatisticRecordsResult::ListOrderConsumeStatisticRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOrderConsumeStatisticRecordsResult::~ListOrderConsumeStatisticRecordsResult()
{}

void ListOrderConsumeStatisticRecordsResult::parse(const std::string &payload)
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
		if(!valueItemsItem["StatisticTime"].isNull())
			itemsObject.statisticTime = std::stol(valueItemsItem["StatisticTime"].asString());
		if(!valueItemsItem["ApplicationExternalId"].isNull())
			itemsObject.applicationExternalId = valueItemsItem["ApplicationExternalId"].asString();
		if(!valueItemsItem["ServiceCode"].isNull())
			itemsObject.serviceCode = valueItemsItem["ServiceCode"].asString();
		if(!valueItemsItem["UnitPrice"].isNull())
			itemsObject.unitPrice = std::stol(valueItemsItem["UnitPrice"].asString());
		if(!valueItemsItem["ChargedCount"].isNull())
			itemsObject.chargedCount = std::stol(valueItemsItem["ChargedCount"].asString());
		if(!valueItemsItem["TotalPrice"].isNull())
			itemsObject.totalPrice = std::stol(valueItemsItem["TotalPrice"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["TotalPages"].isNull())
		totalPages_ = std::stol(value["TotalPages"].asString());
	if(!value["TotalElements"].isNull())
		totalElements_ = std::stol(value["TotalElements"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

long ListOrderConsumeStatisticRecordsResult::getPageSize()const
{
	return pageSize_;
}

long ListOrderConsumeStatisticRecordsResult::getTotalElements()const
{
	return totalElements_;
}

std::vector<ListOrderConsumeStatisticRecordsResult::Item> ListOrderConsumeStatisticRecordsResult::getItems()const
{
	return items_;
}

long ListOrderConsumeStatisticRecordsResult::getTotalPages()const
{
	return totalPages_;
}

