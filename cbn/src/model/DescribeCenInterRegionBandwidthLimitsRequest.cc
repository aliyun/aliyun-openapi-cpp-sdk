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

#include <alibabacloud/cbn/model/DescribeCenInterRegionBandwidthLimitsRequest.h>

using AlibabaCloud::Cbn::Model::DescribeCenInterRegionBandwidthLimitsRequest;

DescribeCenInterRegionBandwidthLimitsRequest::DescribeCenInterRegionBandwidthLimitsRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "DescribeCenInterRegionBandwidthLimits")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCenInterRegionBandwidthLimitsRequest::~DescribeCenInterRegionBandwidthLimitsRequest()
{}

long DescribeCenInterRegionBandwidthLimitsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeCenInterRegionBandwidthLimitsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeCenInterRegionBandwidthLimitsRequest::getCenId()const
{
	return cenId_;
}

void DescribeCenInterRegionBandwidthLimitsRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setParameter("CenId", cenId);
}

int DescribeCenInterRegionBandwidthLimitsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeCenInterRegionBandwidthLimitsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

int DescribeCenInterRegionBandwidthLimitsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCenInterRegionBandwidthLimitsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeCenInterRegionBandwidthLimitsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeCenInterRegionBandwidthLimitsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeCenInterRegionBandwidthLimitsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeCenInterRegionBandwidthLimitsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeCenInterRegionBandwidthLimitsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCenInterRegionBandwidthLimitsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

