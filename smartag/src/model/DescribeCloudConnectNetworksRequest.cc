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

#include <alibabacloud/smartag/model/DescribeCloudConnectNetworksRequest.h>

using AlibabaCloud::Smartag::Model::DescribeCloudConnectNetworksRequest;

DescribeCloudConnectNetworksRequest::DescribeCloudConnectNetworksRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DescribeCloudConnectNetworks")
{}

DescribeCloudConnectNetworksRequest::~DescribeCloudConnectNetworksRequest()
{}

long DescribeCloudConnectNetworksRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeCloudConnectNetworksRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeCloudConnectNetworksRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeCloudConnectNetworksRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeCloudConnectNetworksRequest::getRegionId()const
{
	return regionId_;
}

void DescribeCloudConnectNetworksRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeCloudConnectNetworksRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeCloudConnectNetworksRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DescribeCloudConnectNetworksRequest::getName()const
{
	return name_;
}

void DescribeCloudConnectNetworksRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string DescribeCloudConnectNetworksRequest::getCcnId()const
{
	return ccnId_;
}

void DescribeCloudConnectNetworksRequest::setCcnId(const std::string& ccnId)
{
	ccnId_ = ccnId;
	setCoreParameter("CcnId", std::to_string(ccnId));
}

std::string DescribeCloudConnectNetworksRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCloudConnectNetworksRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::vector<DescribeCloudConnectNetworksRequest::Tag> DescribeCloudConnectNetworksRequest::getTag()const
{
	return tag_;
}

void DescribeCloudConnectNetworksRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Value", std::to_string(obj.value));
		setCoreParameter(str + ".Key", std::to_string(obj.key));
	}
}

long DescribeCloudConnectNetworksRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCloudConnectNetworksRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeCloudConnectNetworksRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeCloudConnectNetworksRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

