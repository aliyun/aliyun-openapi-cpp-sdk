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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allBandwidths = value["Bandwidths"]["Bandwidth"];
	for (auto value : allBandwidths)
	{
		Bandwidth bandwidthsObject;
		if(!value["InternetChargeType"].isNull())
			bandwidthsObject.internetChargeType = value["InternetChargeType"].asString();
		if(!value["Min"].isNull())
			bandwidthsObject.min = std::stoi(value["Min"].asString());
		if(!value["Max"].isNull())
			bandwidthsObject.max = std::stoi(value["Max"].asString());
		if(!value["Unit"].isNull())
			bandwidthsObject.unit = value["Unit"].asString();
		bandwidths_.push_back(bandwidthsObject);
	}

}

std::vector<DescribeBandwidthLimitationResult::Bandwidth> DescribeBandwidthLimitationResult::getBandwidths()const
{
	return bandwidths_;
}

