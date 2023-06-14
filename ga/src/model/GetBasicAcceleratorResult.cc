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

#include <alibabacloud/ga/model/GetBasicAcceleratorResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

GetBasicAcceleratorResult::GetBasicAcceleratorResult() :
	ServiceResult()
{}

GetBasicAcceleratorResult::GetBasicAcceleratorResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetBasicAcceleratorResult::~GetBasicAcceleratorResult()
{}

void GetBasicAcceleratorResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTagsNode = value["Tags"]["TagsItem"];
	for (auto valueTagsTagsItem : allTagsNode)
	{
		TagsItem tagsObject;
		if(!valueTagsTagsItem["Key"].isNull())
			tagsObject.key = valueTagsTagsItem["Key"].asString();
		if(!valueTagsTagsItem["Value"].isNull())
			tagsObject.value = valueTagsTagsItem["Value"].asString();
		tags_.push_back(tagsObject);
	}
	auto crossDomainBandwidthPackageNode = value["CrossDomainBandwidthPackage"];
	if(!crossDomainBandwidthPackageNode["Bandwidth"].isNull())
		crossDomainBandwidthPackage_.bandwidth = std::stoi(crossDomainBandwidthPackageNode["Bandwidth"].asString());
	if(!crossDomainBandwidthPackageNode["InstanceId"].isNull())
		crossDomainBandwidthPackage_.instanceId = crossDomainBandwidthPackageNode["InstanceId"].asString();
	auto basicBandwidthPackageNode = value["BasicBandwidthPackage"];
	if(!basicBandwidthPackageNode["Bandwidth"].isNull())
		basicBandwidthPackage_.bandwidth = std::stoi(basicBandwidthPackageNode["Bandwidth"].asString());
	if(!basicBandwidthPackageNode["BandwidthType"].isNull())
		basicBandwidthPackage_.bandwidthType = basicBandwidthPackageNode["BandwidthType"].asString();
	if(!basicBandwidthPackageNode["InstanceId"].isNull())
		basicBandwidthPackage_.instanceId = basicBandwidthPackageNode["InstanceId"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["InstanceChargeType"].isNull())
		instanceChargeType_ = value["InstanceChargeType"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["State"].isNull())
		state_ = value["State"].asString();
	if(!value["ExpiredTime"].isNull())
		expiredTime_ = std::stol(value["ExpiredTime"].asString());
	if(!value["CenId"].isNull())
		cenId_ = value["CenId"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["AcceleratorId"].isNull())
		acceleratorId_ = value["AcceleratorId"].asString();
	if(!value["BasicEndpointGroupId"].isNull())
		basicEndpointGroupId_ = value["BasicEndpointGroupId"].asString();
	if(!value["BasicIpSetId"].isNull())
		basicIpSetId_ = value["BasicIpSetId"].asString();
	if(!value["BandwidthBillingType"].isNull())
		bandwidthBillingType_ = value["BandwidthBillingType"].asString();
	if(!value["CrossPrivateState"].isNull())
		crossPrivateState_ = value["CrossPrivateState"].asString();
	if(!value["CrossBorderStatus"].isNull())
		crossBorderStatus_ = value["CrossBorderStatus"].asString() == "true";
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

}

std::string GetBasicAcceleratorResult::getDescription()const
{
	return description_;
}

std::string GetBasicAcceleratorResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string GetBasicAcceleratorResult::getInstanceChargeType()const
{
	return instanceChargeType_;
}

long GetBasicAcceleratorResult::getCreateTime()const
{
	return createTime_;
}

GetBasicAcceleratorResult::CrossDomainBandwidthPackage GetBasicAcceleratorResult::getCrossDomainBandwidthPackage()const
{
	return crossDomainBandwidthPackage_;
}

std::string GetBasicAcceleratorResult::getName()const
{
	return name_;
}

std::string GetBasicAcceleratorResult::getBandwidthBillingType()const
{
	return bandwidthBillingType_;
}

GetBasicAcceleratorResult::BasicBandwidthPackage GetBasicAcceleratorResult::getBasicBandwidthPackage()const
{
	return basicBandwidthPackage_;
}

std::string GetBasicAcceleratorResult::getState()const
{
	return state_;
}

long GetBasicAcceleratorResult::getExpiredTime()const
{
	return expiredTime_;
}

std::string GetBasicAcceleratorResult::getBasicIpSetId()const
{
	return basicIpSetId_;
}

std::string GetBasicAcceleratorResult::getCenId()const
{
	return cenId_;
}

std::string GetBasicAcceleratorResult::getCrossPrivateState()const
{
	return crossPrivateState_;
}

std::string GetBasicAcceleratorResult::getRegionId()const
{
	return regionId_;
}

std::string GetBasicAcceleratorResult::getBasicEndpointGroupId()const
{
	return basicEndpointGroupId_;
}

std::string GetBasicAcceleratorResult::getAcceleratorId()const
{
	return acceleratorId_;
}

std::vector<GetBasicAcceleratorResult::TagsItem> GetBasicAcceleratorResult::getTags()const
{
	return tags_;
}

bool GetBasicAcceleratorResult::getCrossBorderStatus()const
{
	return crossBorderStatus_;
}

