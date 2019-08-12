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

#include <alibabacloud/cbn/model/DescribeRouteServicesInCenRequest.h>

using AlibabaCloud::Cbn::Model::DescribeRouteServicesInCenRequest;

DescribeRouteServicesInCenRequest::DescribeRouteServicesInCenRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "DescribeRouteServicesInCen")
{}

DescribeRouteServicesInCenRequest::~DescribeRouteServicesInCenRequest()
{}

long DescribeRouteServicesInCenRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRouteServicesInCenRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeRouteServicesInCenRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeRouteServicesInCenRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeRouteServicesInCenRequest::getCenId()const
{
	return cenId_;
}

void DescribeRouteServicesInCenRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setCoreParameter("CenId", std::to_string(cenId));
}

std::string DescribeRouteServicesInCenRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeRouteServicesInCenRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

int DescribeRouteServicesInCenRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeRouteServicesInCenRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeRouteServicesInCenRequest::getHost()const
{
	return host_;
}

void DescribeRouteServicesInCenRequest::setHost(const std::string& host)
{
	host_ = host;
	setCoreParameter("Host", std::to_string(host));
}

std::string DescribeRouteServicesInCenRequest::getHostRegionId()const
{
	return hostRegionId_;
}

void DescribeRouteServicesInCenRequest::setHostRegionId(const std::string& hostRegionId)
{
	hostRegionId_ = hostRegionId;
	setCoreParameter("HostRegionId", std::to_string(hostRegionId));
}

std::string DescribeRouteServicesInCenRequest::getAccessRegionId()const
{
	return accessRegionId_;
}

void DescribeRouteServicesInCenRequest::setAccessRegionId(const std::string& accessRegionId)
{
	accessRegionId_ = accessRegionId;
	setCoreParameter("AccessRegionId", std::to_string(accessRegionId));
}

long DescribeRouteServicesInCenRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRouteServicesInCenRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int DescribeRouteServicesInCenRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeRouteServicesInCenRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

