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

#include <alibabacloud/trademark/model/QueryTrademarkPriceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

QueryTrademarkPriceResult::QueryTrademarkPriceResult() :
	ServiceResult()
{}

QueryTrademarkPriceResult::QueryTrademarkPriceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTrademarkPriceResult::~QueryTrademarkPriceResult()
{}

void QueryTrademarkPriceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPricesNode = value["Prices"]["PricesItem"];
	for (auto valuePricesPricesItem : allPricesNode)
	{
		PricesItem pricesObject;
		if(!valuePricesPricesItem["ClassificationCode"].isNull())
			pricesObject.classificationCode = valuePricesPricesItem["ClassificationCode"].asString();
		if(!valuePricesPricesItem["DiscountPrice"].isNull())
			pricesObject.discountPrice = std::stof(valuePricesPricesItem["DiscountPrice"].asString());
		if(!valuePricesPricesItem["OriginalPrice"].isNull())
			pricesObject.originalPrice = std::stof(valuePricesPricesItem["OriginalPrice"].asString());
		if(!valuePricesPricesItem["TradePrice"].isNull())
			pricesObject.tradePrice = std::stof(valuePricesPricesItem["TradePrice"].asString());
		if(!valuePricesPricesItem["Currency"].isNull())
			pricesObject.currency = valuePricesPricesItem["Currency"].asString();
		prices_.push_back(pricesObject);
	}
	if(!value["DiscountPrice"].isNull())
		discountPrice_ = std::stof(value["DiscountPrice"].asString());
	if(!value["OriginalPrice"].isNull())
		originalPrice_ = std::stof(value["OriginalPrice"].asString());
	if(!value["TradePrice"].isNull())
		tradePrice_ = std::stof(value["TradePrice"].asString());
	if(!value["Currency"].isNull())
		currency_ = value["Currency"].asString();

}

std::vector<QueryTrademarkPriceResult::PricesItem> QueryTrademarkPriceResult::getPrices()const
{
	return prices_;
}

float QueryTrademarkPriceResult::getOriginalPrice()const
{
	return originalPrice_;
}

float QueryTrademarkPriceResult::getDiscountPrice()const
{
	return discountPrice_;
}

std::string QueryTrademarkPriceResult::getCurrency()const
{
	return currency_;
}

float QueryTrademarkPriceResult::getTradePrice()const
{
	return tradePrice_;
}

