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

#include <alibabacloud/ehpc/model/DescribePriceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

DescribePriceResult::DescribePriceResult() :
	ServiceResult()
{}

DescribePriceResult::DescribePriceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePriceResult::~DescribePriceResult()
{}

void DescribePriceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPricesNode = value["Prices"]["PriceInfo"];
	for (auto valuePricesPriceInfo : allPricesNode)
	{
		PriceInfo pricesObject;
		if(!valuePricesPriceInfo["OriginalPrice"].isNull())
			pricesObject.originalPrice = std::stof(valuePricesPriceInfo["OriginalPrice"].asString());
		if(!valuePricesPriceInfo["NodeType"].isNull())
			pricesObject.nodeType = valuePricesPriceInfo["NodeType"].asString();
		if(!valuePricesPriceInfo["Currency"].isNull())
			pricesObject.currency = valuePricesPriceInfo["Currency"].asString();
		if(!valuePricesPriceInfo["TradePrice"].isNull())
			pricesObject.tradePrice = std::stof(valuePricesPriceInfo["TradePrice"].asString());
		prices_.push_back(pricesObject);
	}
	if(!value["TotalTradePrice"].isNull())
		totalTradePrice_ = std::stof(value["TotalTradePrice"].asString());

}

std::vector<DescribePriceResult::PriceInfo> DescribePriceResult::getPrices()const
{
	return prices_;
}

float DescribePriceResult::getTotalTradePrice()const
{
	return totalTradePrice_;
}

