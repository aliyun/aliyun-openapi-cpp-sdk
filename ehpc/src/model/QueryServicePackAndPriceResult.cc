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

#include <alibabacloud/ehpc/model/QueryServicePackAndPriceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

QueryServicePackAndPriceResult::QueryServicePackAndPriceResult() :
	ServiceResult()
{}

QueryServicePackAndPriceResult::QueryServicePackAndPriceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryServicePackAndPriceResult::~QueryServicePackAndPriceResult()
{}

void QueryServicePackAndPriceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allServicePackNode = value["ServicePack"]["ServicePackInfo"];
	for (auto valueServicePackServicePackInfo : allServicePackNode)
	{
		ServicePackInfo servicePackObject;
		if(!valueServicePackServicePackInfo["InstanceName"].isNull())
			servicePackObject.instanceName = valueServicePackServicePackInfo["InstanceName"].asString();
		if(!valueServicePackServicePackInfo["Capacity"].isNull())
			servicePackObject.capacity = std::stoi(valueServicePackServicePackInfo["Capacity"].asString());
		if(!valueServicePackServicePackInfo["StartTime"].isNull())
			servicePackObject.startTime = std::stoi(valueServicePackServicePackInfo["StartTime"].asString());
		if(!valueServicePackServicePackInfo["EndTime"].isNull())
			servicePackObject.endTime = std::stoi(valueServicePackServicePackInfo["EndTime"].asString());
		servicePack_.push_back(servicePackObject);
	}
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["TradePrice"].isNull())
		tradePrice_ = std::stof(value["TradePrice"].asString());
	if(!value["OriginalPrice"].isNull())
		originalPrice_ = std::stof(value["OriginalPrice"].asString());
	if(!value["DiscountPrice"].isNull())
		discountPrice_ = std::stof(value["DiscountPrice"].asString());
	if(!value["Currency"].isNull())
		currency_ = value["Currency"].asString();
	if(!value["OriginalAmount"].isNull())
		originalAmount_ = std::stoi(value["OriginalAmount"].asString());
	if(!value["ChargeAmount"].isNull())
		chargeAmount_ = std::stoi(value["ChargeAmount"].asString());

}

float QueryServicePackAndPriceResult::getOriginalPrice()const
{
	return originalPrice_;
}

float QueryServicePackAndPriceResult::getDiscountPrice()const
{
	return discountPrice_;
}

std::string QueryServicePackAndPriceResult::getCurrency()const
{
	return currency_;
}

std::vector<QueryServicePackAndPriceResult::ServicePackInfo> QueryServicePackAndPriceResult::getServicePack()const
{
	return servicePack_;
}

std::string QueryServicePackAndPriceResult::getRegionId()const
{
	return regionId_;
}

float QueryServicePackAndPriceResult::getTradePrice()const
{
	return tradePrice_;
}

int QueryServicePackAndPriceResult::getOriginalAmount()const
{
	return originalAmount_;
}

int QueryServicePackAndPriceResult::getChargeAmount()const
{
	return chargeAmount_;
}

