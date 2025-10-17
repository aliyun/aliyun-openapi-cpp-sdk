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

#include <alibabacloud/polardb/model/ListOrdersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

ListOrdersResult::ListOrdersResult() :
	ServiceResult()
{}

ListOrdersResult::ListOrdersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOrdersResult::~ListOrdersResult()
{}

void ListOrdersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOrderListNode = value["OrderList"]["order"];
	for (auto valueOrderListorder : allOrderListNode)
	{
		Order orderListObject;
		if(!valueOrderListorder["AliUid"].isNull())
			orderListObject.aliUid = valueOrderListorder["AliUid"].asString();
		if(!valueOrderListorder["ChargeType"].isNull())
			orderListObject.chargeType = valueOrderListorder["ChargeType"].asString();
		if(!valueOrderListorder["CommodityCode"].isNull())
			orderListObject.commodityCode = valueOrderListorder["CommodityCode"].asString();
		if(!valueOrderListorder["CreatedTime"].isNull())
			orderListObject.createdTime = valueOrderListorder["CreatedTime"].asString();
		if(!valueOrderListorder["InstanceId"].isNull())
			orderListObject.instanceId = valueOrderListorder["InstanceId"].asString();
		if(!valueOrderListorder["OrderId"].isNull())
			orderListObject.orderId = valueOrderListorder["OrderId"].asString();
		if(!valueOrderListorder["OrderStatus"].isNull())
			orderListObject.orderStatus = valueOrderListorder["OrderStatus"].asString();
		if(!valueOrderListorder["OrderType"].isNull())
			orderListObject.orderType = valueOrderListorder["OrderType"].asString();
		if(!valueOrderListorder["ProduceCode"].isNull())
			orderListObject.produceCode = valueOrderListorder["ProduceCode"].asString();
		if(!valueOrderListorder["Region"].isNull())
			orderListObject.region = valueOrderListorder["Region"].asString();
		orderList_.push_back(orderListObject);
	}
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListOrdersResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListOrdersResult::getNextToken()const
{
	return nextToken_;
}

int ListOrdersResult::getPageSize()const
{
	return pageSize_;
}

int ListOrdersResult::getPageNumber()const
{
	return pageNumber_;
}

int ListOrdersResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListOrdersResult::Order> ListOrdersResult::getOrderList()const
{
	return orderList_;
}

