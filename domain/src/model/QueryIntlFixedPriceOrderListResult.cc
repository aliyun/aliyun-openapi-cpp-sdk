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

#include <alibabacloud/domain/model/QueryIntlFixedPriceOrderListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryIntlFixedPriceOrderListResult::QueryIntlFixedPriceOrderListResult() :
	ServiceResult()
{}

QueryIntlFixedPriceOrderListResult::QueryIntlFixedPriceOrderListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryIntlFixedPriceOrderListResult::~QueryIntlFixedPriceOrderListResult()
{}

void QueryIntlFixedPriceOrderListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto moduleNode = value["Module"];
	if(!moduleNode["TotalItemNum"].isNull())
		module_.totalItemNum = std::stoi(moduleNode["TotalItemNum"].asString());
	if(!moduleNode["CurrentPageNum"].isNull())
		module_.currentPageNum = std::stoi(moduleNode["CurrentPageNum"].asString());
	if(!moduleNode["PageSize"].isNull())
		module_.pageSize = std::stoi(moduleNode["PageSize"].asString());
	if(!moduleNode["TotalPageNum"].isNull())
		module_.totalPageNum = std::stoi(moduleNode["TotalPageNum"].asString());
	auto allDataNode = moduleNode["Data"]["OrderList"];
	for (auto moduleNodeDataOrderList : allDataNode)
	{
		Module::OrderList orderListObject;
		if(!moduleNodeDataOrderList["OrderType"].isNull())
			orderListObject.orderType = std::stoi(moduleNodeDataOrderList["OrderType"].asString());
		if(!moduleNodeDataOrderList["BizId"].isNull())
			orderListObject.bizId = moduleNodeDataOrderList["BizId"].asString();
		if(!moduleNodeDataOrderList["UserId"].isNull())
			orderListObject.userId = moduleNodeDataOrderList["UserId"].asString();
		if(!moduleNodeDataOrderList["Status"].isNull())
			orderListObject.status = std::stoi(moduleNodeDataOrderList["Status"].asString());
		if(!moduleNodeDataOrderList["Price"].isNull())
			orderListObject.price = std::stol(moduleNodeDataOrderList["Price"].asString());
		if(!moduleNodeDataOrderList["Domain"].isNull())
			orderListObject.domain = moduleNodeDataOrderList["Domain"].asString();
		if(!moduleNodeDataOrderList["CreateTime"].isNull())
			orderListObject.createTime = std::stol(moduleNodeDataOrderList["CreateTime"].asString());
		if(!moduleNodeDataOrderList["UpdateTime"].isNull())
			orderListObject.updateTime = std::stol(moduleNodeDataOrderList["UpdateTime"].asString());
		module_.data.push_back(orderListObject);
	}

}

QueryIntlFixedPriceOrderListResult::Module QueryIntlFixedPriceOrderListResult::getModule()const
{
	return module_;
}

