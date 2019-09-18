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

#include <alibabacloud/emr/model/GetBackupInfoRequest.h>

using AlibabaCloud::Emr::Model::GetBackupInfoRequest;

GetBackupInfoRequest::GetBackupInfoRequest() :
	RpcServiceRequest("emr", "2016-04-08", "GetBackupInfo")
{}

GetBackupInfoRequest::~GetBackupInfoRequest()
{}

long GetBackupInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetBackupInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetBackupInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetBackupInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string GetBackupInfoRequest::getRegionId()const
{
	return regionId_;
}

void GetBackupInfoRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string GetBackupInfoRequest::getBackupId()const
{
	return backupId_;
}

void GetBackupInfoRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setCoreParameter("BackupId", backupId);
}

