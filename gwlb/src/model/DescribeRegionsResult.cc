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

#include <alibabacloud/gwlb/model/DescribeRegionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gwlb;
using namespace AlibabaCloud::Gwlb::Model;

DescribeRegionsResult::DescribeRegionsResult() :
	ServiceResult()
{}

DescribeRegionsResult::DescribeRegionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRegionsResult::~DescribeRegionsResult()
{}

void DescribeRegionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRegionsNode = value["Regions"]["Data"];
	for (auto valueRegionsData : allRegionsNode)
	{
		Data regionsObject;
		if(!valueRegionsData["LocalName"].isNull())
			regionsObject.localName = valueRegionsData["LocalName"].asString();
		if(!valueRegionsData["RegionEndpoint"].isNull())
			regionsObject.regionEndpoint = valueRegionsData["RegionEndpoint"].asString();
		if(!valueRegionsData["RegionId"].isNull())
			regionsObject.regionId = valueRegionsData["RegionId"].asString();
		regions_.push_back(regionsObject);
	}

}

std::vector<DescribeRegionsResult::Data> DescribeRegionsResult::getRegions()const
{
	return regions_;
}

