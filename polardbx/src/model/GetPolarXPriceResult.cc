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

#include <alibabacloud/polardbx/model/GetPolarXPriceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardbx;
using namespace AlibabaCloud::Polardbx::Model;

GetPolarXPriceResult::GetPolarXPriceResult() :
	ServiceResult()
{}

GetPolarXPriceResult::GetPolarXPriceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPolarXPriceResult::~GetPolarXPriceResult()
{}

void GetPolarXPriceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOrderPriceListNode = value["OrderPriceList"]["OrderPrice"];
	for (auto valueOrderPriceListOrderPrice : allOrderPriceListNode)
	{
		OrderPrice orderPriceListObject;
		if(!valueOrderPriceListOrderPrice["DBInstanceName"].isNull())
			orderPriceListObject.dBInstanceName = valueOrderPriceListOrderPrice["DBInstanceName"].asString();
		if(!valueOrderPriceListOrderPrice["TotalCostAmount"].isNull())
			orderPriceListObject.totalCostAmount = valueOrderPriceListOrderPrice["TotalCostAmount"].asString();
		if(!valueOrderPriceListOrderPrice["DiscountAmount"].isNull())
			orderPriceListObject.discountAmount = valueOrderPriceListOrderPrice["DiscountAmount"].asString();
		if(!valueOrderPriceListOrderPrice["TradeAmount"].isNull())
			orderPriceListObject.tradeAmount = valueOrderPriceListOrderPrice["TradeAmount"].asString();
		if(!valueOrderPriceListOrderPrice["OriginalAmount"].isNull())
			orderPriceListObject.originalAmount = valueOrderPriceListOrderPrice["OriginalAmount"].asString();
		if(!valueOrderPriceListOrderPrice["PayType"].isNull())
			orderPriceListObject.payType = valueOrderPriceListOrderPrice["PayType"].asString();
		auto allRulesNode = valueOrderPriceListOrderPrice["Rules"]["Rule"];
		for (auto valueOrderPriceListOrderPriceRulesRule : allRulesNode)
		{
			OrderPrice::Rule rulesObject;
			if(!valueOrderPriceListOrderPriceRulesRule["RuleDescId"].isNull())
				rulesObject.ruleDescId = std::stol(valueOrderPriceListOrderPriceRulesRule["RuleDescId"].asString());
			if(!valueOrderPriceListOrderPriceRulesRule["Name"].isNull())
				rulesObject.name = valueOrderPriceListOrderPriceRulesRule["Name"].asString();
			if(!valueOrderPriceListOrderPriceRulesRule["Title"].isNull())
				rulesObject.title = valueOrderPriceListOrderPriceRulesRule["Title"].asString();
			orderPriceListObject.rules.push_back(rulesObject);
		}
		orderPriceList_.push_back(orderPriceListObject);
	}

}

std::vector<GetPolarXPriceResult::OrderPrice> GetPolarXPriceResult::getOrderPriceList()const
{
	return orderPriceList_;
}

