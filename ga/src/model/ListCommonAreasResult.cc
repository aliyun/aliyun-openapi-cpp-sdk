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

#include <alibabacloud/ga/model/ListCommonAreasResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

ListCommonAreasResult::ListCommonAreasResult() :
	ServiceResult()
{}

ListCommonAreasResult::ListCommonAreasResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCommonAreasResult::~ListCommonAreasResult()
{}

void ListCommonAreasResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAreasNode = value["Areas"]["AreasItem"];
	for (auto valueAreasAreasItem : allAreasNode)
	{
		AreasItem areasObject;
		if(!valueAreasAreasItem["LocalName"].isNull())
			areasObject.localName = valueAreasAreasItem["LocalName"].asString();
		if(!valueAreasAreasItem["AreaId"].isNull())
			areasObject.areaId = valueAreasAreasItem["AreaId"].asString();
		auto allRegionListNode = valueAreasAreasItem["RegionList"]["RegionListItem"];
		for (auto valueAreasAreasItemRegionListRegionListItem : allRegionListNode)
		{
			AreasItem::RegionListItem regionListObject;
			if(!valueAreasAreasItemRegionListRegionListItem["LocalName"].isNull())
				regionListObject.localName = valueAreasAreasItemRegionListRegionListItem["LocalName"].asString();
			if(!valueAreasAreasItemRegionListRegionListItem["RegionId"].isNull())
				regionListObject.regionId = valueAreasAreasItemRegionListRegionListItem["RegionId"].asString();
			areasObject.regionList.push_back(regionListObject);
		}
		areas_.push_back(areasObject);
	}

}

std::vector<ListCommonAreasResult::AreasItem> ListCommonAreasResult::getAreas()const
{
	return areas_;
}

