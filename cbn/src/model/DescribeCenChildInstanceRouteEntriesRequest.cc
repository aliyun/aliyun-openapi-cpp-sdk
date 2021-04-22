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

#include <alibabacloud/cbn/model/DescribeCenChildInstanceRouteEntriesRequest.h>

using AlibabaCloud::Cbn::Model::DescribeCenChildInstanceRouteEntriesRequest;

DescribeCenChildInstanceRouteEntriesRequest::DescribeCenChildInstanceRouteEntriesRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "DescribeCenChildInstanceRouteEntries")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCenChildInstanceRouteEntriesRequest::~DescribeCenChildInstanceRouteEntriesRequest()
{}

long DescribeCenChildInstanceRouteEntriesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeCenChildInstanceRouteEntriesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeCenChildInstanceRouteEntriesRequest::getCenId()const
{
	return cenId_;
}

void DescribeCenChildInstanceRouteEntriesRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setParameter("CenId", cenId);
}

int DescribeCenChildInstanceRouteEntriesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeCenChildInstanceRouteEntriesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

int DescribeCenChildInstanceRouteEntriesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCenChildInstanceRouteEntriesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeCenChildInstanceRouteEntriesRequest::getChildInstanceRegionId()const
{
	return childInstanceRegionId_;
}

void DescribeCenChildInstanceRouteEntriesRequest::setChildInstanceRegionId(const std::string& childInstanceRegionId)
{
	childInstanceRegionId_ = childInstanceRegionId;
	setParameter("ChildInstanceRegionId", childInstanceRegionId);
}

std::string DescribeCenChildInstanceRouteEntriesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeCenChildInstanceRouteEntriesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeCenChildInstanceRouteEntriesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeCenChildInstanceRouteEntriesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeCenChildInstanceRouteEntriesRequest::getDestinationCidrBlock()const
{
	return destinationCidrBlock_;
}

void DescribeCenChildInstanceRouteEntriesRequest::setDestinationCidrBlock(const std::string& destinationCidrBlock)
{
	destinationCidrBlock_ = destinationCidrBlock;
	setParameter("DestinationCidrBlock", destinationCidrBlock);
}

long DescribeCenChildInstanceRouteEntriesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCenChildInstanceRouteEntriesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeCenChildInstanceRouteEntriesRequest::getChildInstanceType()const
{
	return childInstanceType_;
}

void DescribeCenChildInstanceRouteEntriesRequest::setChildInstanceType(const std::string& childInstanceType)
{
	childInstanceType_ = childInstanceType;
	setParameter("ChildInstanceType", childInstanceType);
}

std::string DescribeCenChildInstanceRouteEntriesRequest::getChildInstanceId()const
{
	return childInstanceId_;
}

void DescribeCenChildInstanceRouteEntriesRequest::setChildInstanceId(const std::string& childInstanceId)
{
	childInstanceId_ = childInstanceId;
	setParameter("ChildInstanceId", childInstanceId);
}

std::string DescribeCenChildInstanceRouteEntriesRequest::getChildInstanceRouteTableId()const
{
	return childInstanceRouteTableId_;
}

void DescribeCenChildInstanceRouteEntriesRequest::setChildInstanceRouteTableId(const std::string& childInstanceRouteTableId)
{
	childInstanceRouteTableId_ = childInstanceRouteTableId;
	setParameter("ChildInstanceRouteTableId", childInstanceRouteTableId);
}

std::string DescribeCenChildInstanceRouteEntriesRequest::getStatus()const
{
	return status_;
}

void DescribeCenChildInstanceRouteEntriesRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

