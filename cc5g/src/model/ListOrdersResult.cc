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

#include <alibabacloud/cc5g/model/ListOrdersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CC5G;
using namespace AlibabaCloud::CC5G::Model;

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
	auto allOrdersNode = value["Orders"]["Order"];
	for (auto valueOrdersOrder : allOrdersNode)
	{
		Order ordersObject;
		if(!valueOrdersOrder["OrderId"].isNull())
			ordersObject.orderId = valueOrdersOrder["OrderId"].asString();
		if(!valueOrdersOrder["Status"].isNull())
			ordersObject.status = valueOrdersOrder["Status"].asString();
		if(!valueOrdersOrder["Action"].isNull())
			ordersObject.action = valueOrdersOrder["Action"].asString();
		if(!valueOrdersOrder["Description"].isNull())
			ordersObject.description = valueOrdersOrder["Description"].asString();
		if(!valueOrdersOrder["LogisticsId"].isNull())
			ordersObject.logisticsId = valueOrdersOrder["LogisticsId"].asString();
		if(!valueOrdersOrder["LogisticsStatus"].isNull())
			ordersObject.logisticsStatus = valueOrdersOrder["LogisticsStatus"].asString();
		if(!valueOrdersOrder["LogisticsType"].isNull())
			ordersObject.logisticsType = valueOrdersOrder["LogisticsType"].asString();
		if(!valueOrdersOrder["LogisticsUpdateTime"].isNull())
			ordersObject.logisticsUpdateTime = valueOrdersOrder["LogisticsUpdateTime"].asString();
		if(!valueOrdersOrder["CardCount"].isNull())
			ordersObject.cardCount = valueOrdersOrder["CardCount"].asString();
		if(!valueOrdersOrder["ContactName"].isNull())
			ordersObject.contactName = valueOrdersOrder["ContactName"].asString();
		if(!valueOrdersOrder["ContactPhone"].isNull())
			ordersObject.contactPhone = valueOrdersOrder["ContactPhone"].asString();
		if(!valueOrdersOrder["PostAddress"].isNull())
			ordersObject.postAddress = valueOrdersOrder["PostAddress"].asString();
		if(!valueOrdersOrder["CreateTime"].isNull())
			ordersObject.createTime = valueOrdersOrder["CreateTime"].asString();
		if(!valueOrdersOrder["PayTime"].isNull())
			ordersObject.payTime = valueOrdersOrder["PayTime"].asString();
		if(!valueOrdersOrder["RegionId"].isNull())
			ordersObject.regionId = valueOrdersOrder["RegionId"].asString();
		if(!valueOrdersOrder["CardType"].isNull())
			ordersObject.cardType = valueOrdersOrder["CardType"].asString();
		if(!valueOrdersOrder["CardNetType"].isNull())
			ordersObject.cardNetType = valueOrdersOrder["CardNetType"].asString();
		orders_.push_back(ordersObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = value["MaxResults"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::vector<ListOrdersResult::Order> ListOrdersResult::getOrders()const
{
	return orders_;
}

std::string ListOrdersResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListOrdersResult::getNextToken()const
{
	return nextToken_;
}

std::string ListOrdersResult::getMaxResults()const
{
	return maxResults_;
}

