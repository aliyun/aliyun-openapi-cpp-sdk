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

#include <alibabacloud/ecs/model/DescribeSpotPriceHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeSpotPriceHistoryResult::DescribeSpotPriceHistoryResult() :
	ServiceResult()
{}

DescribeSpotPriceHistoryResult::DescribeSpotPriceHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSpotPriceHistoryResult::~DescribeSpotPriceHistoryResult()
{}

void DescribeSpotPriceHistoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSpotPricesNode = value["SpotPrices"]["SpotPriceType"];
	for (auto valueSpotPricesSpotPriceType : allSpotPricesNode)
	{
		SpotPriceType spotPricesObject;
		if(!valueSpotPricesSpotPriceType["IoOptimized"].isNull())
			spotPricesObject.ioOptimized = valueSpotPricesSpotPriceType["IoOptimized"].asString();
		if(!valueSpotPricesSpotPriceType["ZoneId"].isNull())
			spotPricesObject.zoneId = valueSpotPricesSpotPriceType["ZoneId"].asString();
		if(!valueSpotPricesSpotPriceType["SpotPrice"].isNull())
			spotPricesObject.spotPrice = std::stof(valueSpotPricesSpotPriceType["SpotPrice"].asString());
		if(!valueSpotPricesSpotPriceType["Timestamp"].isNull())
			spotPricesObject.timestamp = valueSpotPricesSpotPriceType["Timestamp"].asString();
		if(!valueSpotPricesSpotPriceType["NetworkType"].isNull())
			spotPricesObject.networkType = valueSpotPricesSpotPriceType["NetworkType"].asString();
		if(!valueSpotPricesSpotPriceType["InstanceType"].isNull())
			spotPricesObject.instanceType = valueSpotPricesSpotPriceType["InstanceType"].asString();
		if(!valueSpotPricesSpotPriceType["OriginPrice"].isNull())
			spotPricesObject.originPrice = std::stof(valueSpotPricesSpotPriceType["OriginPrice"].asString());
		spotPrices_.push_back(spotPricesObject);
	}
	if(!value["Currency"].isNull())
		currency_ = value["Currency"].asString();
	if(!value["NextOffset"].isNull())
		nextOffset_ = std::stoi(value["NextOffset"].asString());

}

std::string DescribeSpotPriceHistoryResult::getCurrency()const
{
	return currency_;
}

int DescribeSpotPriceHistoryResult::getNextOffset()const
{
	return nextOffset_;
}

std::vector<DescribeSpotPriceHistoryResult::SpotPriceType> DescribeSpotPriceHistoryResult::getSpotPrices()const
{
	return spotPrices_;
}

