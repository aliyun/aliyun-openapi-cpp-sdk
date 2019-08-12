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

#include <alibabacloud/smartag/model/DescribeFlowLogSagsRequest.h>

using AlibabaCloud::Smartag::Model::DescribeFlowLogSagsRequest;

DescribeFlowLogSagsRequest::DescribeFlowLogSagsRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DescribeFlowLogSags")
{}

DescribeFlowLogSagsRequest::~DescribeFlowLogSagsRequest()
{}

long DescribeFlowLogSagsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeFlowLogSagsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeFlowLogSagsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeFlowLogSagsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeFlowLogSagsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeFlowLogSagsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeFlowLogSagsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeFlowLogSagsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

int DescribeFlowLogSagsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeFlowLogSagsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long DescribeFlowLogSagsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeFlowLogSagsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeFlowLogSagsRequest::getFlowLogId()const
{
	return flowLogId_;
}

void DescribeFlowLogSagsRequest::setFlowLogId(const std::string& flowLogId)
{
	flowLogId_ = flowLogId;
	setCoreParameter("FlowLogId", flowLogId);
}

int DescribeFlowLogSagsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeFlowLogSagsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

