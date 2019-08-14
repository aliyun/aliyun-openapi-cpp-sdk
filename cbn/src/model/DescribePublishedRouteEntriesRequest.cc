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

#include <alibabacloud/cbn/model/DescribePublishedRouteEntriesRequest.h>

using AlibabaCloud::Cbn::Model::DescribePublishedRouteEntriesRequest;

DescribePublishedRouteEntriesRequest::DescribePublishedRouteEntriesRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "DescribePublishedRouteEntries")
{}

DescribePublishedRouteEntriesRequest::~DescribePublishedRouteEntriesRequest()
{}

std::string DescribePublishedRouteEntriesRequest::getChildInstanceId()const
{
	return childInstanceId_;
}

void DescribePublishedRouteEntriesRequest::setChildInstanceId(const std::string& childInstanceId)
{
	childInstanceId_ = childInstanceId;
	setCoreParameter("ChildInstanceId", childInstanceId);
}

long DescribePublishedRouteEntriesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribePublishedRouteEntriesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribePublishedRouteEntriesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribePublishedRouteEntriesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribePublishedRouteEntriesRequest::getCenId()const
{
	return cenId_;
}

void DescribePublishedRouteEntriesRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setCoreParameter("CenId", cenId);
}

std::string DescribePublishedRouteEntriesRequest::getDestinationCidrBlock()const
{
	return destinationCidrBlock_;
}

void DescribePublishedRouteEntriesRequest::setDestinationCidrBlock(const std::string& destinationCidrBlock)
{
	destinationCidrBlock_ = destinationCidrBlock;
	setCoreParameter("DestinationCidrBlock", destinationCidrBlock);
}

int DescribePublishedRouteEntriesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribePublishedRouteEntriesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribePublishedRouteEntriesRequest::getChildInstanceType()const
{
	return childInstanceType_;
}

void DescribePublishedRouteEntriesRequest::setChildInstanceType(const std::string& childInstanceType)
{
	childInstanceType_ = childInstanceType;
	setCoreParameter("ChildInstanceType", childInstanceType);
}

std::string DescribePublishedRouteEntriesRequest::getChildInstanceRouteTableId()const
{
	return childInstanceRouteTableId_;
}

void DescribePublishedRouteEntriesRequest::setChildInstanceRouteTableId(const std::string& childInstanceRouteTableId)
{
	childInstanceRouteTableId_ = childInstanceRouteTableId;
	setCoreParameter("ChildInstanceRouteTableId", childInstanceRouteTableId);
}

int DescribePublishedRouteEntriesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribePublishedRouteEntriesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribePublishedRouteEntriesRequest::getChildInstanceRegionId()const
{
	return childInstanceRegionId_;
}

void DescribePublishedRouteEntriesRequest::setChildInstanceRegionId(const std::string& childInstanceRegionId)
{
	childInstanceRegionId_ = childInstanceRegionId;
	setCoreParameter("ChildInstanceRegionId", childInstanceRegionId);
}

