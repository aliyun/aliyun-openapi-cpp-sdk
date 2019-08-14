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

#include <alibabacloud/dbs/model/DescribeBackupGatewayListRequest.h>

using AlibabaCloud::Dbs::Model::DescribeBackupGatewayListRequest;

DescribeBackupGatewayListRequest::DescribeBackupGatewayListRequest() :
	RpcServiceRequest("dbs", "2019-03-06", "DescribeBackupGatewayList")
{}

DescribeBackupGatewayListRequest::~DescribeBackupGatewayListRequest()
{}

std::string DescribeBackupGatewayListRequest::getIdentifier()const
{
	return identifier_;
}

void DescribeBackupGatewayListRequest::setIdentifier(const std::string& identifier)
{
	identifier_ = identifier;
	setCoreParameter("Identifier", identifier);
}

std::string DescribeBackupGatewayListRequest::getRegionId()const
{
	return regionId_;
}

void DescribeBackupGatewayListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeBackupGatewayListRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeBackupGatewayListRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

int DescribeBackupGatewayListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeBackupGatewayListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeBackupGatewayListRequest::getRegion()const
{
	return region_;
}

void DescribeBackupGatewayListRequest::setRegion(const std::string& region)
{
	region_ = region;
	setCoreParameter("Region", region);
}

int DescribeBackupGatewayListRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeBackupGatewayListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", std::to_string(pageNum));
}

std::string DescribeBackupGatewayListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeBackupGatewayListRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

