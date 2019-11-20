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

#include <alibabacloud/ecs/model/DescribeDemandsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeDemandsRequest;

DescribeDemandsRequest::DescribeDemandsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeDemands")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDemandsRequest::~DescribeDemandsRequest()
{}

long DescribeDemandsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDemandsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeDemandsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDemandsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeDemandsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDemandsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int DescribeDemandsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDemandsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeDemandsRequest::getInstanceType()const
{
	return instanceType_;
}

void DescribeDemandsRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

std::vector<DescribeDemandsRequest::Tag> DescribeDemandsRequest::getTag()const
{
	return tag_;
}

void DescribeDemandsRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1);
		setCoreParameter(tagObjStr + ".Key", tagObj.key);
		setCoreParameter(tagObjStr + ".Value", tagObj.value);
	}
}

std::string DescribeDemandsRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void DescribeDemandsRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setCoreParameter("InstanceChargeType", instanceChargeType);
}

bool DescribeDemandsRequest::getDryRun()const
{
	return dryRun_;
}

void DescribeDemandsRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setCoreParameter("DryRun", dryRun ? "true" : "false");
}

std::string DescribeDemandsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDemandsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDemandsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDemandsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeDemandsRequest::getInstanceTypeFamily()const
{
	return instanceTypeFamily_;
}

void DescribeDemandsRequest::setInstanceTypeFamily(const std::string& instanceTypeFamily)
{
	instanceTypeFamily_ = instanceTypeFamily;
	setCoreParameter("InstanceTypeFamily", instanceTypeFamily);
}

long DescribeDemandsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDemandsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::vector<std::string> DescribeDemandsRequest::getDemandStatus()const
{
	return demandStatus_;
}

void DescribeDemandsRequest::setDemandStatus(const std::vector<std::string>& demandStatus)
{
	demandStatus_ = demandStatus;
	for(int dep1 = 0; dep1!= demandStatus.size(); dep1++)
		setCoreParameter("DemandStatus."+ std::to_string(dep1), demandStatus.at(dep1));
}

std::string DescribeDemandsRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeDemandsRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

