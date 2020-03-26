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

#include <alibabacloud/cbn/model/DescribeCenRouteMapsRequest.h>

using AlibabaCloud::Cbn::Model::DescribeCenRouteMapsRequest;

DescribeCenRouteMapsRequest::DescribeCenRouteMapsRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "DescribeCenRouteMaps")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCenRouteMapsRequest::~DescribeCenRouteMapsRequest()
{}

long DescribeCenRouteMapsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeCenRouteMapsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeCenRouteMapsRequest::getCenId()const
{
	return cenId_;
}

void DescribeCenRouteMapsRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setParameter("CenId", cenId);
}

int DescribeCenRouteMapsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeCenRouteMapsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

int DescribeCenRouteMapsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCenRouteMapsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeCenRouteMapsRequest::getTransmitDirection()const
{
	return transmitDirection_;
}

void DescribeCenRouteMapsRequest::setTransmitDirection(const std::string& transmitDirection)
{
	transmitDirection_ = transmitDirection;
	setParameter("TransmitDirection", transmitDirection);
}

std::string DescribeCenRouteMapsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeCenRouteMapsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeCenRouteMapsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeCenRouteMapsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeCenRouteMapsRequest::getRouteMapId()const
{
	return routeMapId_;
}

void DescribeCenRouteMapsRequest::setRouteMapId(const std::string& routeMapId)
{
	routeMapId_ = routeMapId;
	setParameter("RouteMapId", routeMapId);
}

long DescribeCenRouteMapsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCenRouteMapsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeCenRouteMapsRequest::getCenRegionId()const
{
	return cenRegionId_;
}

void DescribeCenRouteMapsRequest::setCenRegionId(const std::string& cenRegionId)
{
	cenRegionId_ = cenRegionId;
	setParameter("CenRegionId", cenRegionId);
}

