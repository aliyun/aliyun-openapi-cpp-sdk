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

#include <alibabacloud/live/model/DescribeLivePrivateLineAreasResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLivePrivateLineAreasResult::DescribeLivePrivateLineAreasResult() :
	ServiceResult()
{}

DescribeLivePrivateLineAreasResult::DescribeLivePrivateLineAreasResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLivePrivateLineAreasResult::~DescribeLivePrivateLineAreasResult()
{}

void DescribeLivePrivateLineAreasResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLiveAreasListNode = value["LiveAreasList"]["LiveArea"];
	for (auto valueLiveAreasListLiveArea : allLiveAreasListNode)
	{
		LiveArea liveAreasListObject;
		if(!valueLiveAreasListLiveArea["RegionType"].isNull())
			liveAreasListObject.regionType = valueLiveAreasListLiveArea["RegionType"].asString();
		auto allRegionsNode = valueLiveAreasListLiveArea["Regions"]["Region"];
		for (auto valueLiveAreasListLiveAreaRegionsRegion : allRegionsNode)
		{
			LiveArea::Region regionsObject;
			if(!valueLiveAreasListLiveAreaRegionsRegion["LocalName"].isNull())
				regionsObject.localName = valueLiveAreasListLiveAreaRegionsRegion["LocalName"].asString();
			if(!valueLiveAreasListLiveAreaRegionsRegion["RegionId"].isNull())
				regionsObject.regionId = valueLiveAreasListLiveAreaRegionsRegion["RegionId"].asString();
			liveAreasListObject.regions.push_back(regionsObject);
		}
		liveAreasList_.push_back(liveAreasListObject);
	}

}

std::vector<DescribeLivePrivateLineAreasResult::LiveArea> DescribeLivePrivateLineAreasResult::getLiveAreasList()const
{
	return liveAreasList_;
}

