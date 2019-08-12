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

#include <alibabacloud/vpc/model/DescribeVpcAttributeRequest.h>

using AlibabaCloud::Vpc::Model::DescribeVpcAttributeRequest;

DescribeVpcAttributeRequest::DescribeVpcAttributeRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeVpcAttribute")
{}

DescribeVpcAttributeRequest::~DescribeVpcAttributeRequest()
{}

long DescribeVpcAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeVpcAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

bool DescribeVpcAttributeRequest::getDryRun()const
{
	return dryRun_;
}

void DescribeVpcAttributeRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setCoreParameter("DryRun", dryRun ? "true" : "false");
}

std::string DescribeVpcAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeVpcAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeVpcAttributeRequest::getRegionId()const
{
	return regionId_;
}

void DescribeVpcAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeVpcAttributeRequest::getVpcId()const
{
	return vpcId_;
}

void DescribeVpcAttributeRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", std::to_string(vpcId));
}

std::string DescribeVpcAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeVpcAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

bool DescribeVpcAttributeRequest::getIsDefault()const
{
	return isDefault_;
}

void DescribeVpcAttributeRequest::setIsDefault(bool isDefault)
{
	isDefault_ = isDefault;
	setCoreParameter("IsDefault", isDefault ? "true" : "false");
}

long DescribeVpcAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVpcAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

