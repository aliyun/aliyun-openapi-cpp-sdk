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

#include <alibabacloud/dbs/model/DescribeIncrementBackupListRequest.h>

using AlibabaCloud::Dbs::Model::DescribeIncrementBackupListRequest;

DescribeIncrementBackupListRequest::DescribeIncrementBackupListRequest() :
	RpcServiceRequest("dbs", "2019-03-06", "DescribeIncrementBackupList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeIncrementBackupListRequest::~DescribeIncrementBackupListRequest()
{}

std::string DescribeIncrementBackupListRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeIncrementBackupListRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DescribeIncrementBackupListRequest::getBackupPlanId()const
{
	return backupPlanId_;
}

void DescribeIncrementBackupListRequest::setBackupPlanId(const std::string& backupPlanId)
{
	backupPlanId_ = backupPlanId;
	setParameter("BackupPlanId", backupPlanId);
}

int DescribeIncrementBackupListRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeIncrementBackupListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string DescribeIncrementBackupListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeIncrementBackupListRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

bool DescribeIncrementBackupListRequest::getShowStorageType()const
{
	return showStorageType_;
}

void DescribeIncrementBackupListRequest::setShowStorageType(bool showStorageType)
{
	showStorageType_ = showStorageType;
	setParameter("ShowStorageType", showStorageType ? "true" : "false");
}

int DescribeIncrementBackupListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeIncrementBackupListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

