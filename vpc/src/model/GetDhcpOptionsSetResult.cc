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

#include <alibabacloud/vpc/model/GetDhcpOptionsSetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

GetDhcpOptionsSetResult::GetDhcpOptionsSetResult() :
	ServiceResult()
{}

GetDhcpOptionsSetResult::GetDhcpOptionsSetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDhcpOptionsSetResult::~GetDhcpOptionsSetResult()
{}

void GetDhcpOptionsSetResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAssociateVpcsNode = value["AssociateVpcs"]["AssociateVpc"];
	for (auto valueAssociateVpcsAssociateVpc : allAssociateVpcsNode)
	{
		AssociateVpc associateVpcsObject;
		if(!valueAssociateVpcsAssociateVpc["AssociateStatus"].isNull())
			associateVpcsObject.associateStatus = valueAssociateVpcsAssociateVpc["AssociateStatus"].asString();
		if(!valueAssociateVpcsAssociateVpc["VpcId"].isNull())
			associateVpcsObject.vpcId = valueAssociateVpcsAssociateVpc["VpcId"].asString();
		associateVpcs_.push_back(associateVpcsObject);
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
	auto dhcpOptionsNode = value["DhcpOptions"];
	if(!dhcpOptionsNode["TFTPServerName"].isNull())
		dhcpOptions_.tFTPServerName = dhcpOptionsNode["TFTPServerName"].asString();
	if(!dhcpOptionsNode["DomainNameServers"].isNull())
		dhcpOptions_.domainNameServers = dhcpOptionsNode["DomainNameServers"].asString();
	if(!dhcpOptionsNode["DomainName"].isNull())
		dhcpOptions_.domainName = dhcpOptionsNode["DomainName"].asString();
	if(!dhcpOptionsNode["BootFileName"].isNull())
		dhcpOptions_.bootFileName = dhcpOptionsNode["BootFileName"].asString();
	if(!dhcpOptionsNode["LeaseTime"].isNull())
		dhcpOptions_.leaseTime = dhcpOptionsNode["LeaseTime"].asString();
	if(!dhcpOptionsNode["Ipv6LeaseTime"].isNull())
		dhcpOptions_.ipv6LeaseTime = dhcpOptionsNode["Ipv6LeaseTime"].asString();
	if(!value["DhcpOptionsSetDescription"].isNull())
		dhcpOptionsSetDescription_ = value["DhcpOptionsSetDescription"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["DhcpOptionsSetId"].isNull())
		dhcpOptionsSetId_ = value["DhcpOptionsSetId"].asString();
	if(!value["DhcpOptionsSetName"].isNull())
		dhcpOptionsSetName_ = value["DhcpOptionsSetName"].asString();
	if(!value["OwnerId"].isNull())
		ownerId_ = std::stol(value["OwnerId"].asString());
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["CreationTime"].isNull())
		creationTime_ = value["CreationTime"].asString();

}

std::string GetDhcpOptionsSetResult::getStatus()const
{
	return status_;
}

std::string GetDhcpOptionsSetResult::getDhcpOptionsSetId()const
{
	return dhcpOptionsSetId_;
}

GetDhcpOptionsSetResult::DhcpOptions GetDhcpOptionsSetResult::getDhcpOptions()const
{
	return dhcpOptions_;
}

long GetDhcpOptionsSetResult::getOwnerId()const
{
	return ownerId_;
}

std::string GetDhcpOptionsSetResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::vector<GetDhcpOptionsSetResult::AssociateVpc> GetDhcpOptionsSetResult::getAssociateVpcs()const
{
	return associateVpcs_;
}

std::string GetDhcpOptionsSetResult::getDhcpOptionsSetName()const
{
	return dhcpOptionsSetName_;
}

std::string GetDhcpOptionsSetResult::getDhcpOptionsSetDescription()const
{
	return dhcpOptionsSetDescription_;
}

std::string GetDhcpOptionsSetResult::getCreationTime()const
{
	return creationTime_;
}

std::vector<GetDhcpOptionsSetResult::Tag> GetDhcpOptionsSetResult::getTags()const
{
	return tags_;
}

