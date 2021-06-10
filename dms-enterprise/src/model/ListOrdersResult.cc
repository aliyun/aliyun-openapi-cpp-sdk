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

#include <alibabacloud/dms-enterprise/model/ListOrdersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

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
		if(!valueOrdersOrder["Comment"].isNull())
			ordersObject.comment = valueOrdersOrder["Comment"].asString();
		if(!valueOrdersOrder["LastModifyTime"].isNull())
			ordersObject.lastModifyTime = valueOrdersOrder["LastModifyTime"].asString();
		if(!valueOrdersOrder["StatusCode"].isNull())
			ordersObject.statusCode = valueOrdersOrder["StatusCode"].asString();
		if(!valueOrdersOrder["CreateTime"].isNull())
			ordersObject.createTime = valueOrdersOrder["CreateTime"].asString();
		if(!valueOrdersOrder["Committer"].isNull())
			ordersObject.committer = valueOrdersOrder["Committer"].asString();
		if(!valueOrdersOrder["CommitterId"].isNull())
			ordersObject.committerId = std::stol(valueOrdersOrder["CommitterId"].asString());
		if(!valueOrdersOrder["StatusDesc"].isNull())
			ordersObject.statusDesc = valueOrdersOrder["StatusDesc"].asString();
		if(!valueOrdersOrder["PluginType"].isNull())
			ordersObject.pluginType = valueOrdersOrder["PluginType"].asString();
		if(!valueOrdersOrder["OrderId"].isNull())
			ordersObject.orderId = std::stol(valueOrdersOrder["OrderId"].asString());
		orders_.push_back(ordersObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<ListOrdersResult::Order> ListOrdersResult::getOrders()const
{
	return orders_;
}

long ListOrdersResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListOrdersResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListOrdersResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListOrdersResult::getSuccess()const
{
	return success_;
}

