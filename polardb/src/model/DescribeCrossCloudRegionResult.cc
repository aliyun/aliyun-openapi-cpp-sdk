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

#include <alibabacloud/polardb/model/DescribeCrossCloudRegionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeCrossCloudRegionResult::DescribeCrossCloudRegionResult() :
	ServiceResult()
{}

DescribeCrossCloudRegionResult::DescribeCrossCloudRegionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCrossCloudRegionResult::~DescribeCrossCloudRegionResult()
{}

void DescribeCrossCloudRegionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCrossCloudRegionListNode = value["CrossCloudRegionList"]["CrossCloudRegionListItem"];
	for (auto valueCrossCloudRegionListCrossCloudRegionListItem : allCrossCloudRegionListNode)
	{
		CrossCloudRegionListItem crossCloudRegionListObject;
		if(!valueCrossCloudRegionListCrossCloudRegionListItem["ProjectId"].isNull())
			crossCloudRegionListObject.projectId = valueCrossCloudRegionListCrossCloudRegionListItem["ProjectId"].asString();
		if(!valueCrossCloudRegionListCrossCloudRegionListItem["CrossCloudRegionId"].isNull())
			crossCloudRegionListObject.crossCloudRegionId = valueCrossCloudRegionListCrossCloudRegionListItem["CrossCloudRegionId"].asString();
		if(!valueCrossCloudRegionListCrossCloudRegionListItem["CrossCloudRegionName"].isNull())
			crossCloudRegionListObject.crossCloudRegionName = valueCrossCloudRegionListCrossCloudRegionListItem["CrossCloudRegionName"].asString();
		auto allCrossCloudZoneListNode = valueCrossCloudRegionListCrossCloudRegionListItem["CrossCloudZoneList"]["CrossCloudZoneListItem"];
		for (auto valueCrossCloudRegionListCrossCloudRegionListItemCrossCloudZoneListCrossCloudZoneListItem : allCrossCloudZoneListNode)
		{
			CrossCloudRegionListItem::CrossCloudZoneListItem crossCloudZoneListObject;
			if(!valueCrossCloudRegionListCrossCloudRegionListItemCrossCloudZoneListCrossCloudZoneListItem["CrossCloudZoneId"].isNull())
				crossCloudZoneListObject.crossCloudZoneId = valueCrossCloudRegionListCrossCloudRegionListItemCrossCloudZoneListCrossCloudZoneListItem["CrossCloudZoneId"].asString();
			if(!valueCrossCloudRegionListCrossCloudRegionListItemCrossCloudZoneListCrossCloudZoneListItem["CrossCloudZoneName"].isNull())
				crossCloudZoneListObject.crossCloudZoneName = valueCrossCloudRegionListCrossCloudRegionListItemCrossCloudZoneListCrossCloudZoneListItem["CrossCloudZoneName"].asString();
			crossCloudRegionListObject.crossCloudZoneList.push_back(crossCloudZoneListObject);
		}
		crossCloudRegionList_.push_back(crossCloudRegionListObject);
	}

}

std::vector<DescribeCrossCloudRegionResult::CrossCloudRegionListItem> DescribeCrossCloudRegionResult::getCrossCloudRegionList()const
{
	return crossCloudRegionList_;
}

