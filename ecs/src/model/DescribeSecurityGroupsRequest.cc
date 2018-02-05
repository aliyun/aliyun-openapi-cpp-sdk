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

#include <alibabacloud/ecs/model/DescribeSecurityGroupsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeSecurityGroupsRequest;

DescribeSecurityGroupsRequest::DescribeSecurityGroupsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeSecurityGroups")
{}

DescribeSecurityGroupsRequest::~DescribeSecurityGroupsRequest()
{}

std::string DescribeSecurityGroupsRequest::getTag4Value()const
{
	return tag4Value_;
}

void DescribeSecurityGroupsRequest::setTag4Value(const std::string& tag4Value)
{
	tag4Value_ = tag4Value;
	setParameter("Tag4Value", tag4Value);
}

long DescribeSecurityGroupsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSecurityGroupsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeSecurityGroupsRequest::getTag2Key()const
{
	return tag2Key_;
}

void DescribeSecurityGroupsRequest::setTag2Key(const std::string& tag2Key)
{
	tag2Key_ = tag2Key;
	setParameter("Tag2Key", tag2Key);
}

bool DescribeSecurityGroupsRequest::getFuzzyQuery()const
{
	return fuzzyQuery_;
}

void DescribeSecurityGroupsRequest::setFuzzyQuery(bool fuzzyQuery)
{
	fuzzyQuery_ = fuzzyQuery;
	setParameter("FuzzyQuery", std::to_string(fuzzyQuery));
}

std::string DescribeSecurityGroupsRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void DescribeSecurityGroupsRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

std::string DescribeSecurityGroupsRequest::getTag3Key()const
{
	return tag3Key_;
}

void DescribeSecurityGroupsRequest::setTag3Key(const std::string& tag3Key)
{
	tag3Key_ = tag3Key;
	setParameter("Tag3Key", tag3Key);
}

bool DescribeSecurityGroupsRequest::getIsQueryEcsCount()const
{
	return isQueryEcsCount_;
}

void DescribeSecurityGroupsRequest::setIsQueryEcsCount(bool isQueryEcsCount)
{
	isQueryEcsCount_ = isQueryEcsCount;
	setParameter("IsQueryEcsCount", std::to_string(isQueryEcsCount));
}

std::string DescribeSecurityGroupsRequest::getNetworkType()const
{
	return networkType_;
}

void DescribeSecurityGroupsRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setParameter("NetworkType", networkType);
}

std::string DescribeSecurityGroupsRequest::getSecurityGroupName()const
{
	return securityGroupName_;
}

void DescribeSecurityGroupsRequest::setSecurityGroupName(const std::string& securityGroupName)
{
	securityGroupName_ = securityGroupName;
	setParameter("SecurityGroupName", securityGroupName);
}

int DescribeSecurityGroupsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSecurityGroupsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeSecurityGroupsRequest::getTag1Value()const
{
	return tag1Value_;
}

void DescribeSecurityGroupsRequest::setTag1Value(const std::string& tag1Value)
{
	tag1Value_ = tag1Value;
	setParameter("Tag1Value", tag1Value);
}

std::string DescribeSecurityGroupsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSecurityGroupsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeSecurityGroupsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSecurityGroupsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeSecurityGroupsRequest::getTag3Value()const
{
	return tag3Value_;
}

void DescribeSecurityGroupsRequest::setTag3Value(const std::string& tag3Value)
{
	tag3Value_ = tag3Value;
	setParameter("Tag3Value", tag3Value);
}

bool DescribeSecurityGroupsRequest::getDryRun()const
{
	return dryRun_;
}

void DescribeSecurityGroupsRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", std::to_string(dryRun));
}

std::string DescribeSecurityGroupsRequest::getTag5Key()const
{
	return tag5Key_;
}

void DescribeSecurityGroupsRequest::setTag5Key(const std::string& tag5Key)
{
	tag5Key_ = tag5Key;
	setParameter("Tag5Key", tag5Key);
}

std::string DescribeSecurityGroupsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSecurityGroupsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSecurityGroupsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSecurityGroupsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeSecurityGroupsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSecurityGroupsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeSecurityGroupsRequest::getSecurityGroupIds()const
{
	return securityGroupIds_;
}

void DescribeSecurityGroupsRequest::setSecurityGroupIds(const std::string& securityGroupIds)
{
	securityGroupIds_ = securityGroupIds;
	setParameter("SecurityGroupIds", securityGroupIds);
}

std::string DescribeSecurityGroupsRequest::getTag5Value()const
{
	return tag5Value_;
}

void DescribeSecurityGroupsRequest::setTag5Value(const std::string& tag5Value)
{
	tag5Value_ = tag5Value;
	setParameter("Tag5Value", tag5Value);
}

std::string DescribeSecurityGroupsRequest::getTag1Key()const
{
	return tag1Key_;
}

void DescribeSecurityGroupsRequest::setTag1Key(const std::string& tag1Key)
{
	tag1Key_ = tag1Key;
	setParameter("Tag1Key", tag1Key);
}

std::string DescribeSecurityGroupsRequest::getVpcId()const
{
	return vpcId_;
}

void DescribeSecurityGroupsRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string DescribeSecurityGroupsRequest::getTag2Value()const
{
	return tag2Value_;
}

void DescribeSecurityGroupsRequest::setTag2Value(const std::string& tag2Value)
{
	tag2Value_ = tag2Value;
	setParameter("Tag2Value", tag2Value);
}

std::string DescribeSecurityGroupsRequest::getTag4Key()const
{
	return tag4Key_;
}

void DescribeSecurityGroupsRequest::setTag4Key(const std::string& tag4Key)
{
	tag4Key_ = tag4Key;
	setParameter("Tag4Key", tag4Key);
}

