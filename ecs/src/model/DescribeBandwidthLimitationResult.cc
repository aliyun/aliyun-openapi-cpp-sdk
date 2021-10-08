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

#include <alibabacloud/ecs/model/DescribeBandwidthLimitationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeBandwidthLimitationResult::DescribeBandwidthLimitationResult() :
	ServiceResult()
{}

DescribeBandwidthLimitationResult::DescribeBandwidthLimitationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBandwidthLimitationResult::~DescribeBandwidthLimitationResult()
{}

void DescribeBandwidthLimitationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBandwidthsNode = value["Bandwidths"]["Bandwidth"];
	for (auto valueBandwidthsBandwidth : allBandwidthsNode)
	{
		Bandwidth bandwidthsObject;
		if(!valueBandwidthsBandwidth["InternetChargeType"].isNull())
			bandwidthsObject.internetChargeType = valueBandwidthsBandwidth["InternetChargeType"].asString();
		if(!valueBandwidthsBandwidth["Max"].isNull())
			bandwidthsObject.max = std::stoi(valueBandwidthsBandwidth["Max"].asString());
		if(!valueBandwidthsBandwidth["Min"].isNull())
			bandwidthsObject.min = std::stoi(valueBandwidthsBandwidth["Min"].asString());
		if(!valueBandwidthsBandwidth["Unit"].isNull())
			bandwidthsObject.unit = valueBandwidthsBandwidth["Unit"].asString();
		bandwidths_.push_back(bandwidthsObject);
	}

}

std::vector<DescribeBandwidthLimitationResult::Bandwidth> DescribeBandwidthLimitationResult::getBandwidths()const
{
	return bandwidths_;
}

