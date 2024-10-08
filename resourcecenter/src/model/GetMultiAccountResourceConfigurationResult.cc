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

#include <alibabacloud/resourcecenter/model/GetMultiAccountResourceConfigurationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceCenter;
using namespace AlibabaCloud::ResourceCenter::Model;

GetMultiAccountResourceConfigurationResult::GetMultiAccountResourceConfigurationResult() :
	ServiceResult()
{}

GetMultiAccountResourceConfigurationResult::GetMultiAccountResourceConfigurationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMultiAccountResourceConfigurationResult::~GetMultiAccountResourceConfigurationResult()
{}

void GetMultiAccountResourceConfigurationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIpAddressAttributesNode = value["IpAddressAttributes"]["IpAddressAttribute"];
	for (auto valueIpAddressAttributesIpAddressAttribute : allIpAddressAttributesNode)
	{
		IpAddressAttribute ipAddressAttributesObject;
		if(!valueIpAddressAttributesIpAddressAttribute["IpAddress"].isNull())
			ipAddressAttributesObject.ipAddress = valueIpAddressAttributesIpAddressAttribute["IpAddress"].asString();
		if(!valueIpAddressAttributesIpAddressAttribute["NetworkType"].isNull())
			ipAddressAttributesObject.networkType = valueIpAddressAttributesIpAddressAttribute["NetworkType"].asString();
		if(!valueIpAddressAttributesIpAddressAttribute["Version"].isNull())
			ipAddressAttributesObject.version = valueIpAddressAttributesIpAddressAttribute["Version"].asString();
		ipAddressAttributes_.push_back(ipAddressAttributesObject);
	}
	auto allTagsNode = value["Tags"]["Tag"];
	for (auto valueTagsTag : allTagsNode)
	{
		Tag tagsObject;
		if(!valueTagsTag["Key"].isNull())
			tagsObject.key = valueTagsTag["Key"].asString();
		if(!valueTagsTag["Value"].isNull())
			tagsObject.value = valueTagsTag["Value"].asString();
		tags_.push_back(tagsObject);
	}
	auto allIpAddresses = value["IpAddresses"]["IpAddress"];
	for (const auto &item : allIpAddresses)
		ipAddresses_.push_back(item.asString());
	if(!value["AccountId"].isNull())
		accountId_ = value["AccountId"].asString();
	if(!value["Configuration"].isNull())
		configuration_ = value["Configuration"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["ExpireTime"].isNull())
		expireTime_ = value["ExpireTime"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["ResourceId"].isNull())
		resourceId_ = value["ResourceId"].asString();
	if(!value["ResourceName"].isNull())
		resourceName_ = value["ResourceName"].asString();
	if(!value["ResourceType"].isNull())
		resourceType_ = value["ResourceType"].asString();
	if(!value["ZoneId"].isNull())
		zoneId_ = value["ZoneId"].asString();

}

std::string GetMultiAccountResourceConfigurationResult::getAccountId()const
{
	return accountId_;
}

std::string GetMultiAccountResourceConfigurationResult::getConfiguration()const
{
	return configuration_;
}

std::string GetMultiAccountResourceConfigurationResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string GetMultiAccountResourceConfigurationResult::getZoneId()const
{
	return zoneId_;
}

std::string GetMultiAccountResourceConfigurationResult::getResourceName()const
{
	return resourceName_;
}

std::string GetMultiAccountResourceConfigurationResult::getCreateTime()const
{
	return createTime_;
}

std::string GetMultiAccountResourceConfigurationResult::getResourceType()const
{
	return resourceType_;
}

std::vector<std::string> GetMultiAccountResourceConfigurationResult::getIpAddresses()const
{
	return ipAddresses_;
}

std::string GetMultiAccountResourceConfigurationResult::getResourceId()const
{
	return resourceId_;
}

std::string GetMultiAccountResourceConfigurationResult::getRegionId()const
{
	return regionId_;
}

std::vector<GetMultiAccountResourceConfigurationResult::IpAddressAttribute> GetMultiAccountResourceConfigurationResult::getIpAddressAttributes()const
{
	return ipAddressAttributes_;
}

std::string GetMultiAccountResourceConfigurationResult::getExpireTime()const
{
	return expireTime_;
}

std::vector<GetMultiAccountResourceConfigurationResult::Tag> GetMultiAccountResourceConfigurationResult::getTags()const
{
	return tags_;
}

