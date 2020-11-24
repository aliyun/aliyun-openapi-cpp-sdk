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

#include <alibabacloud/ddoscoo/model/DescribeNetworkRegionBlockResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeNetworkRegionBlockResult::DescribeNetworkRegionBlockResult() :
	ServiceResult()
{}

DescribeNetworkRegionBlockResult::DescribeNetworkRegionBlockResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNetworkRegionBlockResult::~DescribeNetworkRegionBlockResult()
{}

void DescribeNetworkRegionBlockResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto configNode = value["Config"];
	if(!configNode["RegionBlockSwitch"].isNull())
		config_.regionBlockSwitch = configNode["RegionBlockSwitch"].asString();
		auto allCountries = configNode["Countries"]["Country"];
		for (auto value : allCountries)
			config_.countries.push_back(value.asString());
		auto allProvinces = configNode["Provinces"]["Province"];
		for (auto value : allProvinces)
			config_.provinces.push_back(value.asString());

}

DescribeNetworkRegionBlockResult::Config DescribeNetworkRegionBlockResult::getConfig()const
{
	return config_;
}

