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

#include <alibabacloud/dcdn/model/DescribeDcdnOfflineLogDeliveryRegionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnOfflineLogDeliveryRegionsResult::DescribeDcdnOfflineLogDeliveryRegionsResult() :
	ServiceResult()
{}

DescribeDcdnOfflineLogDeliveryRegionsResult::DescribeDcdnOfflineLogDeliveryRegionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnOfflineLogDeliveryRegionsResult::~DescribeDcdnOfflineLogDeliveryRegionsResult()
{}

void DescribeDcdnOfflineLogDeliveryRegionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAreasNode = value["Areas"]["Area"];
	for (auto valueAreasArea : allAreasNode)
	{
		Area areasObject;
		if(!valueAreasArea["AreaId"].isNull())
			areasObject.areaId = valueAreasArea["AreaId"].asString();
		if(!valueAreasArea["AreaName"].isNull())
			areasObject.areaName = valueAreasArea["AreaName"].asString();
		auto allRegionInfosNode = valueAreasArea["RegionInfos"]["RegionInfo"];
		for (auto valueAreasAreaRegionInfosRegionInfo : allRegionInfosNode)
		{
			Area::RegionInfo regionInfosObject;
			if(!valueAreasAreaRegionInfosRegionInfo["RegionId"].isNull())
				regionInfosObject.regionId = valueAreasAreaRegionInfosRegionInfo["RegionId"].asString();
			if(!valueAreasAreaRegionInfosRegionInfo["RegionName"].isNull())
				regionInfosObject.regionName = valueAreasAreaRegionInfosRegionInfo["RegionName"].asString();
			if(!valueAreasAreaRegionInfosRegionInfo["IsOverseas"].isNull())
				regionInfosObject.isOverseas = valueAreasAreaRegionInfosRegionInfo["IsOverseas"].asString();
			if(!valueAreasAreaRegionInfosRegionInfo["OssEndpoint"].isNull())
				regionInfosObject.ossEndpoint = valueAreasAreaRegionInfosRegionInfo["OssEndpoint"].asString();
			areasObject.regionInfos.push_back(regionInfosObject);
		}
		areas_.push_back(areasObject);
	}

}

std::vector<DescribeDcdnOfflineLogDeliveryRegionsResult::Area> DescribeDcdnOfflineLogDeliveryRegionsResult::getAreas()const
{
	return areas_;
}

