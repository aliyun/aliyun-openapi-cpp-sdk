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

#include <alibabacloud/cbn/model/DescribeCenGeographicSpanRemainingBandwidthRequest.h>

using AlibabaCloud::Cbn::Model::DescribeCenGeographicSpanRemainingBandwidthRequest;

DescribeCenGeographicSpanRemainingBandwidthRequest::DescribeCenGeographicSpanRemainingBandwidthRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "DescribeCenGeographicSpanRemainingBandwidth")
{}

DescribeCenGeographicSpanRemainingBandwidthRequest::~DescribeCenGeographicSpanRemainingBandwidthRequest()
{}

std::string DescribeCenGeographicSpanRemainingBandwidthRequest::getGeographicRegionBId()const
{
	return geographicRegionBId_;
}

void DescribeCenGeographicSpanRemainingBandwidthRequest::setGeographicRegionBId(const std::string& geographicRegionBId)
{
	geographicRegionBId_ = geographicRegionBId;
	setCoreParameter("GeographicRegionBId", geographicRegionBId);
}

long DescribeCenGeographicSpanRemainingBandwidthRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeCenGeographicSpanRemainingBandwidthRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeCenGeographicSpanRemainingBandwidthRequest::getGeographicRegionAId()const
{
	return geographicRegionAId_;
}

void DescribeCenGeographicSpanRemainingBandwidthRequest::setGeographicRegionAId(const std::string& geographicRegionAId)
{
	geographicRegionAId_ = geographicRegionAId;
	setCoreParameter("GeographicRegionAId", geographicRegionAId);
}

std::string DescribeCenGeographicSpanRemainingBandwidthRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeCenGeographicSpanRemainingBandwidthRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeCenGeographicSpanRemainingBandwidthRequest::getCenId()const
{
	return cenId_;
}

void DescribeCenGeographicSpanRemainingBandwidthRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setCoreParameter("CenId", cenId);
}

std::string DescribeCenGeographicSpanRemainingBandwidthRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeCenGeographicSpanRemainingBandwidthRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

int DescribeCenGeographicSpanRemainingBandwidthRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCenGeographicSpanRemainingBandwidthRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long DescribeCenGeographicSpanRemainingBandwidthRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCenGeographicSpanRemainingBandwidthRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int DescribeCenGeographicSpanRemainingBandwidthRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeCenGeographicSpanRemainingBandwidthRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

