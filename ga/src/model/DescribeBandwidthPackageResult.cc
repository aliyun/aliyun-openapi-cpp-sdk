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

#include <alibabacloud/ga/model/DescribeBandwidthPackageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

DescribeBandwidthPackageResult::DescribeBandwidthPackageResult() :
	ServiceResult()
{}

DescribeBandwidthPackageResult::DescribeBandwidthPackageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBandwidthPackageResult::~DescribeBandwidthPackageResult()
{}

void DescribeBandwidthPackageResult::parse(const std::string &payload)
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
	auto allAccelerators = value["Accelerators"]["Accelerator"];
	for (const auto &item : allAccelerators)
		accelerators_.push_back(item.asString());
	if(!value["CbnGeographicRegionIdB"].isNull())
		cbnGeographicRegionIdB_ = value["CbnGeographicRegionIdB"].asString();
	if(!value["CbnGeographicRegionIdA"].isNull())
		cbnGeographicRegionIdA_ = value["CbnGeographicRegionIdA"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["BandwidthType"].isNull())
		bandwidthType_ = value["BandwidthType"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["State"].isNull())
		state_ = value["State"].asString();
	if(!value["ChargeType"].isNull())
		chargeType_ = value["ChargeType"].asString();
	if(!value["Bandwidth"].isNull())
		bandwidth_ = std::stoi(value["Bandwidth"].asString());
	if(!value["ExpiredTime"].isNull())
		expiredTime_ = value["ExpiredTime"].asString();
	if(!value["BandwidthPackageId"].isNull())
		bandwidthPackageId_ = value["BandwidthPackageId"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["BillingType"].isNull())
		billingType_ = value["BillingType"].asString();
	if(!value["Ratio"].isNull())
		ratio_ = std::stoi(value["Ratio"].asString());
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

}

std::string DescribeBandwidthPackageResult::getCbnGeographicRegionIdB()const
{
	return cbnGeographicRegionIdB_;
}

std::string DescribeBandwidthPackageResult::getCbnGeographicRegionIdA()const
{
	return cbnGeographicRegionIdA_;
}

std::string DescribeBandwidthPackageResult::getDescription()const
{
	return description_;
}

std::string DescribeBandwidthPackageResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string DescribeBandwidthPackageResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeBandwidthPackageResult::getName()const
{
	return name_;
}

std::string DescribeBandwidthPackageResult::getBandwidthType()const
{
	return bandwidthType_;
}

std::string DescribeBandwidthPackageResult::getType()const
{
	return type_;
}

std::vector<std::string> DescribeBandwidthPackageResult::getAccelerators()const
{
	return accelerators_;
}

std::string DescribeBandwidthPackageResult::getState()const
{
	return state_;
}

std::string DescribeBandwidthPackageResult::getChargeType()const
{
	return chargeType_;
}

int DescribeBandwidthPackageResult::getBandwidth()const
{
	return bandwidth_;
}

std::string DescribeBandwidthPackageResult::getExpiredTime()const
{
	return expiredTime_;
}

std::string DescribeBandwidthPackageResult::getBandwidthPackageId()const
{
	return bandwidthPackageId_;
}

int DescribeBandwidthPackageResult::getRatio()const
{
	return ratio_;
}

std::string DescribeBandwidthPackageResult::getRegionId()const
{
	return regionId_;
}

std::vector<DescribeBandwidthPackageResult::TagsItem> DescribeBandwidthPackageResult::getTags()const
{
	return tags_;
}

std::string DescribeBandwidthPackageResult::getBillingType()const
{
	return billingType_;
}

