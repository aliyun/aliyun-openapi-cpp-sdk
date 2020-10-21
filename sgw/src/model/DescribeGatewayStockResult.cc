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

#include <alibabacloud/sgw/model/DescribeGatewayStockResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeGatewayStockResult::DescribeGatewayStockResult() :
	ServiceResult()
{}

DescribeGatewayStockResult::DescribeGatewayStockResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGatewayStockResult::~DescribeGatewayStockResult()
{}

void DescribeGatewayStockResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStocksNode = value["Stocks"]["Stock"];
	for (auto valueStocksStock : allStocksNode)
	{
		Stock stocksObject;
		if(!valueStocksStock["ZoneId"].isNull())
			stocksObject.zoneId = valueStocksStock["ZoneId"].asString();
		if(!valueStocksStock["StockInfo"].isNull())
			stocksObject.stockInfo = valueStocksStock["StockInfo"].asString();
		stocks_.push_back(stocksObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeGatewayStockResult::getMessage()const
{
	return message_;
}

std::vector<DescribeGatewayStockResult::Stock> DescribeGatewayStockResult::getStocks()const
{
	return stocks_;
}

std::string DescribeGatewayStockResult::getCode()const
{
	return code_;
}

bool DescribeGatewayStockResult::getSuccess()const
{
	return success_;
}

