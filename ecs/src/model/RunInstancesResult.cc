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

#include <alibabacloud/ecs/model/RunInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

RunInstancesResult::RunInstancesResult() :
	ServiceResult()
{}

RunInstancesResult::RunInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RunInstancesResult::~RunInstancesResult()
{}

void RunInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceIdSets = value["InstanceIdSets"]["InstanceIdSet"];
	for (const auto &item : allInstanceIdSets)
		instanceIdSets_.push_back(item.asString());
	if(!value["OrderId"].isNull())
		orderId_ = value["OrderId"].asString();
	if(!value["TradePrice"].isNull())
		tradePrice_ = std::stof(value["TradePrice"].asString());

}

std::vector<std::string> RunInstancesResult::getInstanceIdSets()const
{
	return instanceIdSets_;
}

std::string RunInstancesResult::getOrderId()const
{
	return orderId_;
}

float RunInstancesResult::getTradePrice()const
{
	return tradePrice_;
}

