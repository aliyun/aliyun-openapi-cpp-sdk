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

#include <alibabacloud/ga/model/ListBasicAcceleratorsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

ListBasicAcceleratorsResult::ListBasicAcceleratorsResult() :
	ServiceResult()
{}

ListBasicAcceleratorsResult::ListBasicAcceleratorsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBasicAcceleratorsResult::~ListBasicAcceleratorsResult()
{}

void ListBasicAcceleratorsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAcceleratorsNode = value["Accelerators"]["AcceleratorsItem"];
	for (auto valueAcceleratorsAcceleratorsItem : allAcceleratorsNode)
	{
		AcceleratorsItem acceleratorsObject;
		if(!valueAcceleratorsAcceleratorsItem["Type"].isNull())
			acceleratorsObject.type = valueAcceleratorsAcceleratorsItem["Type"].asString();
		if(!valueAcceleratorsAcceleratorsItem["State"].isNull())
			acceleratorsObject.state = valueAcceleratorsAcceleratorsItem["State"].asString();
		if(!valueAcceleratorsAcceleratorsItem["CreateTime"].isNull())
			acceleratorsObject.createTime = std::stol(valueAcceleratorsAcceleratorsItem["CreateTime"].asString());
		if(!valueAcceleratorsAcceleratorsItem["RegionId"].isNull())
			acceleratorsObject.regionId = valueAcceleratorsAcceleratorsItem["RegionId"].asString();
		if(!valueAcceleratorsAcceleratorsItem["InstanceChargeType"].isNull())
			acceleratorsObject.instanceChargeType = valueAcceleratorsAcceleratorsItem["InstanceChargeType"].asString();
		if(!valueAcceleratorsAcceleratorsItem["AcceleratorId"].isNull())
			acceleratorsObject.acceleratorId = valueAcceleratorsAcceleratorsItem["AcceleratorId"].asString();
		if(!valueAcceleratorsAcceleratorsItem["Description"].isNull())
			acceleratorsObject.description = valueAcceleratorsAcceleratorsItem["Description"].asString();
		if(!valueAcceleratorsAcceleratorsItem["ExpiredTime"].isNull())
			acceleratorsObject.expiredTime = std::stol(valueAcceleratorsAcceleratorsItem["ExpiredTime"].asString());
		if(!valueAcceleratorsAcceleratorsItem["Name"].isNull())
			acceleratorsObject.name = valueAcceleratorsAcceleratorsItem["Name"].asString();
		if(!valueAcceleratorsAcceleratorsItem["BasicEndpointGroupId"].isNull())
			acceleratorsObject.basicEndpointGroupId = valueAcceleratorsAcceleratorsItem["BasicEndpointGroupId"].asString();
		if(!valueAcceleratorsAcceleratorsItem["BasicIpSetId"].isNull())
			acceleratorsObject.basicIpSetId = valueAcceleratorsAcceleratorsItem["BasicIpSetId"].asString();
		if(!valueAcceleratorsAcceleratorsItem["BandwidthBillingType"].isNull())
			acceleratorsObject.bandwidthBillingType = valueAcceleratorsAcceleratorsItem["BandwidthBillingType"].asString();
		if(!valueAcceleratorsAcceleratorsItem["ResourceGroupId"].isNull())
			acceleratorsObject.resourceGroupId = valueAcceleratorsAcceleratorsItem["ResourceGroupId"].asString();
		if(!valueAcceleratorsAcceleratorsItem["CrossBorderStatus"].isNull())
			acceleratorsObject.crossBorderStatus = valueAcceleratorsAcceleratorsItem["CrossBorderStatus"].asString() == "true";
		auto allTagsNode = valueAcceleratorsAcceleratorsItem["Tags"]["TagsItem"];
		for (auto valueAcceleratorsAcceleratorsItemTagsTagsItem : allTagsNode)
		{
			AcceleratorsItem::TagsItem tagsObject;
			if(!valueAcceleratorsAcceleratorsItemTagsTagsItem["Key"].isNull())
				tagsObject.key = valueAcceleratorsAcceleratorsItemTagsTagsItem["Key"].asString();
			if(!valueAcceleratorsAcceleratorsItemTagsTagsItem["Value"].isNull())
				tagsObject.value = valueAcceleratorsAcceleratorsItemTagsTagsItem["Value"].asString();
			acceleratorsObject.tags.push_back(tagsObject);
		}
		auto basicBandwidthPackageNode = value["BasicBandwidthPackage"];
		if(!basicBandwidthPackageNode["Bandwidth"].isNull())
			acceleratorsObject.basicBandwidthPackage.bandwidth = std::stoi(basicBandwidthPackageNode["Bandwidth"].asString());
		if(!basicBandwidthPackageNode["BandwidthType"].isNull())
			acceleratorsObject.basicBandwidthPackage.bandwidthType = basicBandwidthPackageNode["BandwidthType"].asString();
		if(!basicBandwidthPackageNode["InstanceId"].isNull())
			acceleratorsObject.basicBandwidthPackage.instanceId = basicBandwidthPackageNode["InstanceId"].asString();
		auto crossDomainBandwidthPackageNode = value["CrossDomainBandwidthPackage"];
		if(!crossDomainBandwidthPackageNode["Bandwidth"].isNull())
			acceleratorsObject.crossDomainBandwidthPackage.bandwidth = std::stoi(crossDomainBandwidthPackageNode["Bandwidth"].asString());
		if(!crossDomainBandwidthPackageNode["InstanceId"].isNull())
			acceleratorsObject.crossDomainBandwidthPackage.instanceId = crossDomainBandwidthPackageNode["InstanceId"].asString();
		accelerators_.push_back(acceleratorsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListBasicAcceleratorsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListBasicAcceleratorsResult::AcceleratorsItem> ListBasicAcceleratorsResult::getAccelerators()const
{
	return accelerators_;
}

int ListBasicAcceleratorsResult::getPageSize()const
{
	return pageSize_;
}

int ListBasicAcceleratorsResult::getPageNumber()const
{
	return pageNumber_;
}

