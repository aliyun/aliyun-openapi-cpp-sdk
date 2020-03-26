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

#include <alibabacloud/emr/model/RestoreBackupRequest.h>

using AlibabaCloud::Emr::Model::RestoreBackupRequest;

RestoreBackupRequest::RestoreBackupRequest() :
	RpcServiceRequest("emr", "2016-04-08", "RestoreBackup")
{
	setMethod(HttpRequest::Method::Post);
}

RestoreBackupRequest::~RestoreBackupRequest()
{}

long RestoreBackupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RestoreBackupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RestoreBackupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RestoreBackupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string RestoreBackupRequest::getRegionId()const
{
	return regionId_;
}

void RestoreBackupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string RestoreBackupRequest::getBackupPlanId()const
{
	return backupPlanId_;
}

void RestoreBackupRequest::setBackupPlanId(const std::string& backupPlanId)
{
	backupPlanId_ = backupPlanId;
	setParameter("BackupPlanId", backupPlanId);
}

std::string RestoreBackupRequest::getBackupId()const
{
	return backupId_;
}

void RestoreBackupRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setParameter("BackupId", backupId);
}

