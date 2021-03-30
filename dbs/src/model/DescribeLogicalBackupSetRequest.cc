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

#include <alibabacloud/dbs/model/DescribeLogicalBackupSetRequest.h>

using AlibabaCloud::Dbs::Model::DescribeLogicalBackupSetRequest;

DescribeLogicalBackupSetRequest::DescribeLogicalBackupSetRequest() :
	RpcServiceRequest("dbs", "2019-03-06", "DescribeLogicalBackupSet")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeLogicalBackupSetRequest::~DescribeLogicalBackupSetRequest()
{}

std::string DescribeLogicalBackupSetRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeLogicalBackupSetRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DescribeLogicalBackupSetRequest::getBackupPlanId()const
{
	return backupPlanId_;
}

void DescribeLogicalBackupSetRequest::setBackupPlanId(const std::string& backupPlanId)
{
	backupPlanId_ = backupPlanId;
	setParameter("BackupPlanId", backupPlanId);
}

std::string DescribeLogicalBackupSetRequest::getBackupsetId()const
{
	return backupsetId_;
}

void DescribeLogicalBackupSetRequest::setBackupsetId(const std::string& backupsetId)
{
	backupsetId_ = backupsetId;
	setParameter("BackupsetId", backupsetId);
}

std::string DescribeLogicalBackupSetRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLogicalBackupSetRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

