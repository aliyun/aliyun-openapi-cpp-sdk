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

#include <alibabacloud/cbn/model/DescribeCenRegionDomainRouteEntriesRequest.h>

using AlibabaCloud::Cbn::Model::DescribeCenRegionDomainRouteEntriesRequest;

DescribeCenRegionDomainRouteEntriesRequest::DescribeCenRegionDomainRouteEntriesRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "DescribeCenRegionDomainRouteEntries")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCenRegionDomainRouteEntriesRequest::~DescribeCenRegionDomainRouteEntriesRequest()
{}

long DescribeCenRegionDomainRouteEntriesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeCenRegionDomainRouteEntriesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeCenRegionDomainRouteEntriesRequest::getCenId()const
{
	return cenId_;
}

void DescribeCenRegionDomainRouteEntriesRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setParameter("CenId", cenId);
}

int DescribeCenRegionDomainRouteEntriesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeCenRegionDomainRouteEntriesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

int DescribeCenRegionDomainRouteEntriesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCenRegionDomainRouteEntriesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeCenRegionDomainRouteEntriesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeCenRegionDomainRouteEntriesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeCenRegionDomainRouteEntriesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeCenRegionDomainRouteEntriesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeCenRegionDomainRouteEntriesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCenRegionDomainRouteEntriesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeCenRegionDomainRouteEntriesRequest::getCenRegionId()const
{
	return cenRegionId_;
}

void DescribeCenRegionDomainRouteEntriesRequest::setCenRegionId(const std::string& cenRegionId)
{
	cenRegionId_ = cenRegionId;
	setParameter("CenRegionId", cenRegionId);
}

std::string DescribeCenRegionDomainRouteEntriesRequest::getStatus()const
{
	return status_;
}

void DescribeCenRegionDomainRouteEntriesRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

