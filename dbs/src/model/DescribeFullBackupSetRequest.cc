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

#include <alibabacloud/dbs/model/DescribeFullBackupSetRequest.h>

using AlibabaCloud::Dbs::Model::DescribeFullBackupSetRequest;

DescribeFullBackupSetRequest::DescribeFullBackupSetRequest() :
	RpcServiceRequest("dbs", "2019-03-06", "DescribeFullBackupSet")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeFullBackupSetRequest::~DescribeFullBackupSetRequest()
{}

std::string DescribeFullBackupSetRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeFullBackupSetRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DescribeFullBackupSetRequest::getBackupPlanId()const
{
	return backupPlanId_;
}

void DescribeFullBackupSetRequest::setBackupPlanId(const std::string& backupPlanId)
{
	backupPlanId_ = backupPlanId;
	setParameter("BackupPlanId", backupPlanId);
}

std::string DescribeFullBackupSetRequest::getBackupsetId()const
{
	return backupsetId_;
}

void DescribeFullBackupSetRequest::setBackupsetId(const std::string& backupsetId)
{
	backupsetId_ = backupsetId;
	setParameter("BackupsetId", backupsetId);
}

std::string DescribeFullBackupSetRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeFullBackupSetRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

