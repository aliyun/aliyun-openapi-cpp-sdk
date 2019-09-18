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

#include <alibabacloud/emr/model/RemoveBackupRequest.h>

using AlibabaCloud::Emr::Model::RemoveBackupRequest;

RemoveBackupRequest::RemoveBackupRequest() :
	RpcServiceRequest("emr", "2016-04-08", "RemoveBackup")
{}

RemoveBackupRequest::~RemoveBackupRequest()
{}

long RemoveBackupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RemoveBackupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::vector<std::string> RemoveBackupRequest::getBackupId()const
{
	return backupId_;
}

void RemoveBackupRequest::setBackupId(const std::vector<std::string>& backupId)
{
	backupId_ = backupId;
	for(int i = 0; i!= backupId.size(); i++)
		setCoreParameter("BackupId."+ std::to_string(i), backupId.at(i));
}

std::string RemoveBackupRequest::getBackupPlanId()const
{
	return backupPlanId_;
}

void RemoveBackupRequest::setBackupPlanId(const std::string& backupPlanId)
{
	backupPlanId_ = backupPlanId;
	setCoreParameter("BackupPlanId", backupPlanId);
}

std::string RemoveBackupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RemoveBackupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string RemoveBackupRequest::getRegionId()const
{
	return regionId_;
}

void RemoveBackupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

