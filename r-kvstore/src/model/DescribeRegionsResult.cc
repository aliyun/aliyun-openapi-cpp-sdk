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

#include <alibabacloud/r-kvstore/model/DescribeRegionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

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
	auto allRegionIdsNode = value["RegionIds"]["KVStoreRegion"];
	for (auto valueRegionIdsKVStoreRegion : allRegionIdsNode)
	{
		KVStoreRegion regionIdsObject;
		if(!valueRegionIdsKVStoreRegion["RegionEndpoint"].isNull())
			regionIdsObject.regionEndpoint = valueRegionIdsKVStoreRegion["RegionEndpoint"].asString();
		if(!valueRegionIdsKVStoreRegion["LocalName"].isNull())
			regionIdsObject.localName = valueRegionIdsKVStoreRegion["LocalName"].asString();
		if(!valueRegionIdsKVStoreRegion["RegionId"].isNull())
			regionIdsObject.regionId = valueRegionIdsKVStoreRegion["RegionId"].asString();
		if(!valueRegionIdsKVStoreRegion["ZoneIds"].isNull())
			regionIdsObject.zoneIds = valueRegionIdsKVStoreRegion["ZoneIds"].asString();
		auto allZoneIdList = value["ZoneIdList"]["ZoneId"];
		for (auto value : allZoneIdList)
			regionIdsObject.zoneIdList.push_back(value.asString());
		regionIds_.push_back(regionIdsObject);
	}

}

std::vector<DescribeRegionsResult::KVStoreRegion> DescribeRegionsResult::getRegionIds()const
{
	return regionIds_;
}

