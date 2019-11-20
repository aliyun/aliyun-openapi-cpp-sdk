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

#include <alibabacloud/vpc/model/DescribeVSwitchesRequest.h>

using AlibabaCloud::Vpc::Model::DescribeVSwitchesRequest;

DescribeVSwitchesRequest::DescribeVSwitchesRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeVSwitches")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeVSwitchesRequest::~DescribeVSwitchesRequest()
{}

long DescribeVSwitchesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeVSwitchesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeVSwitchesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeVSwitchesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeVSwitchesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeVSwitchesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeVSwitchesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeVSwitchesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int DescribeVSwitchesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeVSwitchesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::vector<DescribeVSwitchesRequest::Tag> DescribeVSwitchesRequest::getTag()const
{
	return tag_;
}

void DescribeVSwitchesRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1);
		setCoreParameter(tagObjStr + ".Value", tagObj.value);
		setCoreParameter(tagObjStr + ".Key", tagObj.key);
	}
}

bool DescribeVSwitchesRequest::getIsDefault()const
{
	return isDefault_;
}

void DescribeVSwitchesRequest::setIsDefault(bool isDefault)
{
	isDefault_ = isDefault;
	setCoreParameter("IsDefault", isDefault ? "true" : "false");
}

std::string DescribeVSwitchesRequest::getRouteTableId()const
{
	return routeTableId_;
}

void DescribeVSwitchesRequest::setRouteTableId(const std::string& routeTableId)
{
	routeTableId_ = routeTableId;
	setCoreParameter("RouteTableId", routeTableId);
}

bool DescribeVSwitchesRequest::getDryRun()const
{
	return dryRun_;
}

void DescribeVSwitchesRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setCoreParameter("DryRun", dryRun ? "true" : "false");
}

std::string DescribeVSwitchesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeVSwitchesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeVSwitchesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeVSwitchesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeVSwitchesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVSwitchesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeVSwitchesRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void DescribeVSwitchesRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::string DescribeVSwitchesRequest::getVpcId()const
{
	return vpcId_;
}

void DescribeVSwitchesRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

std::string DescribeVSwitchesRequest::getVSwitchName()const
{
	return vSwitchName_;
}

void DescribeVSwitchesRequest::setVSwitchName(const std::string& vSwitchName)
{
	vSwitchName_ = vSwitchName;
	setCoreParameter("VSwitchName", vSwitchName);
}

std::string DescribeVSwitchesRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeVSwitchesRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

