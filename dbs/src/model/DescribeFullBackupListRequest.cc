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

#include <alibabacloud/dbs/model/DescribeFullBackupListRequest.h>

using AlibabaCloud::Dbs::Model::DescribeFullBackupListRequest;

DescribeFullBackupListRequest::DescribeFullBackupListRequest() :
	RpcServiceRequest("dbs", "2019-03-06", "DescribeFullBackupList")
{}

DescribeFullBackupListRequest::~DescribeFullBackupListRequest()
{}

std::string DescribeFullBackupListRequest::getRegionId()const
{
	return regionId_;
}

void DescribeFullBackupListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeFullBackupListRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeFullBackupListRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

int DescribeFullBackupListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeFullBackupListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeFullBackupListRequest::getBackupPlanId()const
{
	return backupPlanId_;
}

void DescribeFullBackupListRequest::setBackupPlanId(const std::string& backupPlanId)
{
	backupPlanId_ = backupPlanId;
	setCoreParameter("BackupPlanId", backupPlanId);
}

int DescribeFullBackupListRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeFullBackupListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", pageNum);
}

std::string DescribeFullBackupListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeFullBackupListRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

