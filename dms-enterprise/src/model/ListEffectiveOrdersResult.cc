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

#include <alibabacloud/dms-enterprise/model/ListEffectiveOrdersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListEffectiveOrdersResult::ListEffectiveOrdersResult() :
	ServiceResult()
{}

ListEffectiveOrdersResult::ListEffectiveOrdersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEffectiveOrdersResult::~ListEffectiveOrdersResult()
{}

void ListEffectiveOrdersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOrderSummaryNode = value["OrderSummary"]["OrderSummaryItem"];
	for (auto valueOrderSummaryOrderSummaryItem : allOrderSummaryNode)
	{
		OrderSummaryItem orderSummaryObject;
		if(!valueOrderSummaryOrderSummaryItem["CommodityCode"].isNull())
			orderSummaryObject.commodityCode = valueOrderSummaryOrderSummaryItem["CommodityCode"].asString();
		if(!valueOrderSummaryOrderSummaryItem["CommodityType"].isNull())
			orderSummaryObject.commodityType = valueOrderSummaryOrderSummaryItem["CommodityType"].asString();
		if(!valueOrderSummaryOrderSummaryItem["VersionType"].isNull())
			orderSummaryObject.versionType = valueOrderSummaryOrderSummaryItem["VersionType"].asString();
		if(!valueOrderSummaryOrderSummaryItem["TotalQuota"].isNull())
			orderSummaryObject.totalQuota = std::stoi(valueOrderSummaryOrderSummaryItem["TotalQuota"].asString());
		auto allOrderListNode = valueOrderSummaryOrderSummaryItem["OrderList"]["OrderListItem"];
		for (auto valueOrderSummaryOrderSummaryItemOrderListOrderListItem : allOrderListNode)
		{
			OrderSummaryItem::OrderListItem orderListObject;
			if(!valueOrderSummaryOrderSummaryItemOrderListOrderListItem["OrderId"].isNull())
				orderListObject.orderId = valueOrderSummaryOrderSummaryItemOrderListOrderListItem["OrderId"].asString();
			if(!valueOrderSummaryOrderSummaryItemOrderListOrderListItem["BuyerId"].isNull())
				orderListObject.buyerId = valueOrderSummaryOrderSummaryItemOrderListOrderListItem["BuyerId"].asString();
			if(!valueOrderSummaryOrderSummaryItemOrderListOrderListItem["InstanceId"].isNull())
				orderListObject.instanceId = valueOrderSummaryOrderSummaryItemOrderListOrderListItem["InstanceId"].asString();
			if(!valueOrderSummaryOrderSummaryItemOrderListOrderListItem["StartTime"].isNull())
				orderListObject.startTime = valueOrderSummaryOrderSummaryItemOrderListOrderListItem["StartTime"].asString();
			if(!valueOrderSummaryOrderSummaryItemOrderListOrderListItem["EndTime"].isNull())
				orderListObject.endTime = valueOrderSummaryOrderSummaryItemOrderListOrderListItem["EndTime"].asString();
			if(!valueOrderSummaryOrderSummaryItemOrderListOrderListItem["InsNum"].isNull())
				orderListObject.insNum = valueOrderSummaryOrderSummaryItemOrderListOrderListItem["InsNum"].asString();
			orderSummaryObject.orderList.push_back(orderListObject);
		}
		orderSummary_.push_back(orderSummaryObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::vector<ListEffectiveOrdersResult::OrderSummaryItem> ListEffectiveOrdersResult::getOrderSummary()const
{
	return orderSummary_;
}

std::string ListEffectiveOrdersResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListEffectiveOrdersResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListEffectiveOrdersResult::getSuccess()const
{
	return success_;
}

