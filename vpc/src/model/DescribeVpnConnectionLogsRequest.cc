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

#include <alibabacloud/vpc/model/DescribeVpnConnectionLogsRequest.h>

using AlibabaCloud::Vpc::Model::DescribeVpnConnectionLogsRequest;

DescribeVpnConnectionLogsRequest::DescribeVpnConnectionLogsRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeVpnConnectionLogs")
{}

DescribeVpnConnectionLogsRequest::~DescribeVpnConnectionLogsRequest()
{}

long DescribeVpnConnectionLogsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeVpnConnectionLogsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeVpnConnectionLogsRequest::getMinutePeriod()const
{
	return minutePeriod_;
}

void DescribeVpnConnectionLogsRequest::setMinutePeriod(int minutePeriod)
{
	minutePeriod_ = minutePeriod;
	setParameter("MinutePeriod", std::to_string(minutePeriod));
}

std::string DescribeVpnConnectionLogsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeVpnConnectionLogsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeVpnConnectionLogsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeVpnConnectionLogsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeVpnConnectionLogsRequest::getVpnConnectionId()const
{
	return vpnConnectionId_;
}

void DescribeVpnConnectionLogsRequest::setVpnConnectionId(const std::string& vpnConnectionId)
{
	vpnConnectionId_ = vpnConnectionId;
	setParameter("VpnConnectionId", vpnConnectionId);
}

std::string DescribeVpnConnectionLogsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeVpnConnectionLogsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int DescribeVpnConnectionLogsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeVpnConnectionLogsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int DescribeVpnConnectionLogsRequest::getFrom()const
{
	return from_;
}

void DescribeVpnConnectionLogsRequest::setFrom(int from)
{
	from_ = from;
	setParameter("From", std::to_string(from));
}

int DescribeVpnConnectionLogsRequest::getTo()const
{
	return to_;
}

void DescribeVpnConnectionLogsRequest::setTo(int to)
{
	to_ = to;
	setParameter("To", std::to_string(to));
}

long DescribeVpnConnectionLogsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVpnConnectionLogsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeVpnConnectionLogsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeVpnConnectionLogsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

