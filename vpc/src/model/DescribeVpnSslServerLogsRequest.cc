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

#include <alibabacloud/vpc/model/DescribeVpnSslServerLogsRequest.h>

using AlibabaCloud::Vpc::Model::DescribeVpnSslServerLogsRequest;

DescribeVpnSslServerLogsRequest::DescribeVpnSslServerLogsRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeVpnSslServerLogs")
{}

DescribeVpnSslServerLogsRequest::~DescribeVpnSslServerLogsRequest()
{}

long DescribeVpnSslServerLogsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeVpnSslServerLogsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeVpnSslServerLogsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeVpnSslServerLogsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

int DescribeVpnSslServerLogsRequest::getMinutePeriod()const
{
	return minutePeriod_;
}

void DescribeVpnSslServerLogsRequest::setMinutePeriod(int minutePeriod)
{
	minutePeriod_ = minutePeriod;
	setCoreParameter("MinutePeriod", std::to_string(minutePeriod));
}

std::string DescribeVpnSslServerLogsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeVpnSslServerLogsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int DescribeVpnSslServerLogsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeVpnSslServerLogsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeVpnSslServerLogsRequest::getVpnSslServerId()const
{
	return vpnSslServerId_;
}

void DescribeVpnSslServerLogsRequest::setVpnSslServerId(const std::string& vpnSslServerId)
{
	vpnSslServerId_ = vpnSslServerId;
	setCoreParameter("VpnSslServerId", vpnSslServerId);
}

int DescribeVpnSslServerLogsRequest::getFrom()const
{
	return from_;
}

void DescribeVpnSslServerLogsRequest::setFrom(int from)
{
	from_ = from;
	setCoreParameter("From", std::to_string(from));
}

std::string DescribeVpnSslServerLogsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeVpnSslServerLogsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeVpnSslServerLogsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeVpnSslServerLogsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeVpnSslServerLogsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVpnSslServerLogsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int DescribeVpnSslServerLogsRequest::getTo()const
{
	return to_;
}

void DescribeVpnSslServerLogsRequest::setTo(int to)
{
	to_ = to;
	setCoreParameter("To", std::to_string(to));
}

