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

#include <alibabacloud/vpc/model/DescribeVpcsRequest.h>

using AlibabaCloud::Vpc::Model::DescribeVpcsRequest;

DescribeVpcsRequest::DescribeVpcsRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeVpcs")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeVpcsRequest::~DescribeVpcsRequest()
{}

long DescribeVpcsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeVpcsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeVpcsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeVpcsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeVpcsRequest::getVpcName()const
{
	return vpcName_;
}

void DescribeVpcsRequest::setVpcName(const std::string& vpcName)
{
	vpcName_ = vpcName;
	setParameter("VpcName", vpcName);
}

std::string DescribeVpcsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeVpcsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeVpcsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeVpcsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeVpcsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeVpcsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::vector<DescribeVpcsRequest::Tag> DescribeVpcsRequest::getTag()const
{
	return tag_;
}

void DescribeVpcsRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Value", tagObj.value);
		setParameter(tagObjStr + ".Key", tagObj.key);
	}
}

bool DescribeVpcsRequest::getIsDefault()const
{
	return isDefault_;
}

void DescribeVpcsRequest::setIsDefault(bool isDefault)
{
	isDefault_ = isDefault;
	setParameter("IsDefault", isDefault ? "true" : "false");
}

bool DescribeVpcsRequest::getDryRun()const
{
	return dryRun_;
}

void DescribeVpcsRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", dryRun ? "true" : "false");
}

std::string DescribeVpcsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeVpcsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeVpcsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeVpcsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeVpcsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVpcsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeVpcsRequest::getVpcId()const
{
	return vpcId_;
}

void DescribeVpcsRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

