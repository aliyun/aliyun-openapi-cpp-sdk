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

#include <alibabacloud/rds/model/DescribeRegionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

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
	auto allRegionsNode = value["Regions"]["RDSRegion"];
	for (auto valueRegionsRDSRegion : allRegionsNode)
	{
		RDSRegion regionsObject;
		if(!valueRegionsRDSRegion["LocalName"].isNull())
			regionsObject.localName = valueRegionsRDSRegion["LocalName"].asString();
		if(!valueRegionsRDSRegion["RegionEndpoint"].isNull())
			regionsObject.regionEndpoint = valueRegionsRDSRegion["RegionEndpoint"].asString();
		if(!valueRegionsRDSRegion["RegionId"].isNull())
			regionsObject.regionId = valueRegionsRDSRegion["RegionId"].asString();
		if(!valueRegionsRDSRegion["ZoneId"].isNull())
			regionsObject.zoneId = valueRegionsRDSRegion["ZoneId"].asString();
		if(!valueRegionsRDSRegion["ZoneName"].isNull())
			regionsObject.zoneName = valueRegionsRDSRegion["ZoneName"].asString();
		regions_.push_back(regionsObject);
	}

}

std::vector<DescribeRegionsResult::RDSRegion> DescribeRegionsResult::getRegions()const
{
	return regions_;
}

