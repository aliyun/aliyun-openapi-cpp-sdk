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

#include <alibabacloud/rds/model/DescribeBackupPolicyRequest.h>

using AlibabaCloud::Rds::Model::DescribeBackupPolicyRequest;

DescribeBackupPolicyRequest::DescribeBackupPolicyRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeBackupPolicy")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeBackupPolicyRequest::~DescribeBackupPolicyRequest()
{}

long DescribeBackupPolicyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeBackupPolicyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeBackupPolicyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeBackupPolicyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeBackupPolicyRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeBackupPolicyRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeBackupPolicyRequest::getBackupPolicyMode()const
{
	return backupPolicyMode_;
}

void DescribeBackupPolicyRequest::setBackupPolicyMode(const std::string& backupPolicyMode)
{
	backupPolicyMode_ = backupPolicyMode;
	setParameter("BackupPolicyMode", backupPolicyMode);
}

std::string DescribeBackupPolicyRequest::getReleasedKeepPolicy()const
{
	return releasedKeepPolicy_;
}

void DescribeBackupPolicyRequest::setReleasedKeepPolicy(const std::string& releasedKeepPolicy)
{
	releasedKeepPolicy_ = releasedKeepPolicy;
	setParameter("ReleasedKeepPolicy", releasedKeepPolicy);
}

std::string DescribeBackupPolicyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeBackupPolicyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeBackupPolicyRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeBackupPolicyRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeBackupPolicyRequest::getCompressType()const
{
	return compressType_;
}

void DescribeBackupPolicyRequest::setCompressType(const std::string& compressType)
{
	compressType_ = compressType;
	setParameter("CompressType", compressType);
}

long DescribeBackupPolicyRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeBackupPolicyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

