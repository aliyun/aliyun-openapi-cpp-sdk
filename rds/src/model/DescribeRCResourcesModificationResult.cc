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

#include <alibabacloud/rds/model/DescribeRCResourcesModificationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeRCResourcesModificationResult::DescribeRCResourcesModificationResult() :
	ServiceResult()
{}

DescribeRCResourcesModificationResult::DescribeRCResourcesModificationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRCResourcesModificationResult::~DescribeRCResourcesModificationResult()
{}

void DescribeRCResourcesModificationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAvailableZonesNode = value["AvailableZones"]["availableZonesItem"];
	for (auto valueAvailableZonesavailableZonesItem : allAvailableZonesNode)
	{
		AvailableZonesItem availableZonesObject;
		if(!valueAvailableZonesavailableZonesItem["Status"].isNull())
			availableZonesObject.status = valueAvailableZonesavailableZonesItem["Status"].asString();
		if(!valueAvailableZonesavailableZonesItem["StatusCategory"].isNull())
			availableZonesObject.statusCategory = valueAvailableZonesavailableZonesItem["StatusCategory"].asString();
		if(!valueAvailableZonesavailableZonesItem["ZoneId"].isNull())
			availableZonesObject.zoneId = valueAvailableZonesavailableZonesItem["ZoneId"].asString();
		if(!valueAvailableZonesavailableZonesItem["RegionId"].isNull())
			availableZonesObject.regionId = valueAvailableZonesavailableZonesItem["RegionId"].asString();
		auto allAvailableResourcesNode = valueAvailableZonesavailableZonesItem["AvailableResources"]["availableResourcesItem"];
		for (auto valueAvailableZonesavailableZonesItemAvailableResourcesavailableResourcesItem : allAvailableResourcesNode)
		{
			AvailableZonesItem::AvailableResourcesItem availableResourcesObject;
			if(!valueAvailableZonesavailableZonesItemAvailableResourcesavailableResourcesItem["Type"].isNull())
				availableResourcesObject.type = valueAvailableZonesavailableZonesItemAvailableResourcesavailableResourcesItem["Type"].asString();
			auto allSupportedResourcesNode = valueAvailableZonesavailableZonesItemAvailableResourcesavailableResourcesItem["SupportedResources"]["supportedResourcesItem"];
			for (auto valueAvailableZonesavailableZonesItemAvailableResourcesavailableResourcesItemSupportedResourcessupportedResourcesItem : allSupportedResourcesNode)
			{
				AvailableZonesItem::AvailableResourcesItem::SupportedResourcesItem supportedResourcesObject;
				if(!valueAvailableZonesavailableZonesItemAvailableResourcesavailableResourcesItemSupportedResourcessupportedResourcesItem["Status"].isNull())
					supportedResourcesObject.status = valueAvailableZonesavailableZonesItemAvailableResourcesavailableResourcesItemSupportedResourcessupportedResourcesItem["Status"].asString();
				if(!valueAvailableZonesavailableZonesItemAvailableResourcesavailableResourcesItemSupportedResourcessupportedResourcesItem["StatusCategory"].isNull())
					supportedResourcesObject.statusCategory = valueAvailableZonesavailableZonesItemAvailableResourcesavailableResourcesItemSupportedResourcessupportedResourcesItem["StatusCategory"].asString();
				if(!valueAvailableZonesavailableZonesItemAvailableResourcesavailableResourcesItemSupportedResourcessupportedResourcesItem["Value"].isNull())
					supportedResourcesObject.value = valueAvailableZonesavailableZonesItemAvailableResourcesavailableResourcesItemSupportedResourcessupportedResourcesItem["Value"].asString();
				availableResourcesObject.supportedResources.push_back(supportedResourcesObject);
			}
			availableZonesObject.availableResources.push_back(availableResourcesObject);
		}
		availableZones_.push_back(availableZonesObject);
	}

}

std::vector<DescribeRCResourcesModificationResult::AvailableZonesItem> DescribeRCResourcesModificationResult::getAvailableZones()const
{
	return availableZones_;
}

