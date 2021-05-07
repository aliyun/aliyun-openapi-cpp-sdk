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

#include <alibabacloud/rds/model/DescribeMetaListRequest.h>

using AlibabaCloud::Rds::Model::DescribeMetaListRequest;

DescribeMetaListRequest::DescribeMetaListRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeMetaList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeMetaListRequest::~DescribeMetaListRequest()
{}

long DescribeMetaListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeMetaListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeMetaListRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeMetaListRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DescribeMetaListRequest::getPattern()const
{
	return pattern_;
}

void DescribeMetaListRequest::setPattern(const std::string& pattern)
{
	pattern_ = pattern;
	setParameter("Pattern", pattern);
}

std::string DescribeMetaListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeMetaListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int DescribeMetaListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeMetaListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeMetaListRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeMetaListRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

int DescribeMetaListRequest::getPageIndex()const
{
	return pageIndex_;
}

void DescribeMetaListRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setParameter("PageIndex", std::to_string(pageIndex));
}

std::string DescribeMetaListRequest::getRestoreTime()const
{
	return restoreTime_;
}

void DescribeMetaListRequest::setRestoreTime(const std::string& restoreTime)
{
	restoreTime_ = restoreTime;
	setParameter("RestoreTime", restoreTime);
}

std::string DescribeMetaListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeMetaListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int DescribeMetaListRequest::getBackupSetID()const
{
	return backupSetID_;
}

void DescribeMetaListRequest::setBackupSetID(int backupSetID)
{
	backupSetID_ = backupSetID;
	setParameter("BackupSetID", std::to_string(backupSetID));
}

long DescribeMetaListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeMetaListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeMetaListRequest::getGetDbName()const
{
	return getDbName_;
}

void DescribeMetaListRequest::setGetDbName(const std::string& getDbName)
{
	getDbName_ = getDbName;
	setParameter("GetDbName", getDbName);
}

std::string DescribeMetaListRequest::getRestoreType()const
{
	return restoreType_;
}

void DescribeMetaListRequest::setRestoreType(const std::string& restoreType)
{
	restoreType_ = restoreType;
	setParameter("RestoreType", restoreType);
}

