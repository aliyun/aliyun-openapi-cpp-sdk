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

#include <alibabacloud/cbn/model/DescribeCenPrivateZoneRoutesRequest.h>

using AlibabaCloud::Cbn::Model::DescribeCenPrivateZoneRoutesRequest;

DescribeCenPrivateZoneRoutesRequest::DescribeCenPrivateZoneRoutesRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "DescribeCenPrivateZoneRoutes")
{}

DescribeCenPrivateZoneRoutesRequest::~DescribeCenPrivateZoneRoutesRequest()
{}

long DescribeCenPrivateZoneRoutesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeCenPrivateZoneRoutesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeCenPrivateZoneRoutesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeCenPrivateZoneRoutesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeCenPrivateZoneRoutesRequest::getCenId()const
{
	return cenId_;
}

void DescribeCenPrivateZoneRoutesRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setCoreParameter("CenId", cenId);
}

int DescribeCenPrivateZoneRoutesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCenPrivateZoneRoutesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeCenPrivateZoneRoutesRequest::getHostRegionId()const
{
	return hostRegionId_;
}

void DescribeCenPrivateZoneRoutesRequest::setHostRegionId(const std::string& hostRegionId)
{
	hostRegionId_ = hostRegionId;
	setCoreParameter("HostRegionId", hostRegionId);
}

std::string DescribeCenPrivateZoneRoutesRequest::getAccessRegionId()const
{
	return accessRegionId_;
}

void DescribeCenPrivateZoneRoutesRequest::setAccessRegionId(const std::string& accessRegionId)
{
	accessRegionId_ = accessRegionId;
	setCoreParameter("AccessRegionId", accessRegionId);
}

int DescribeCenPrivateZoneRoutesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeCenPrivateZoneRoutesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

