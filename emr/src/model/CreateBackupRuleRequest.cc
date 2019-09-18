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

#include <alibabacloud/emr/model/CreateBackupRuleRequest.h>

using AlibabaCloud::Emr::Model::CreateBackupRuleRequest;

CreateBackupRuleRequest::CreateBackupRuleRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateBackupRule")
{}

CreateBackupRuleRequest::~CreateBackupRuleRequest()
{}

long CreateBackupRuleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateBackupRuleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateBackupRuleRequest::getBackupMethodType()const
{
	return backupMethodType_;
}

void CreateBackupRuleRequest::setBackupMethodType(const std::string& backupMethodType)
{
	backupMethodType_ = backupMethodType;
	setCoreParameter("BackupMethodType", backupMethodType);
}

std::string CreateBackupRuleRequest::getDescription()const
{
	return description_;
}

void CreateBackupRuleRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateBackupRuleRequest::getBackupPlanId()const
{
	return backupPlanId_;
}

void CreateBackupRuleRequest::setBackupPlanId(const std::string& backupPlanId)
{
	backupPlanId_ = backupPlanId;
	setCoreParameter("BackupPlanId", backupPlanId);
}

std::string CreateBackupRuleRequest::getMetadataType()const
{
	return metadataType_;
}

void CreateBackupRuleRequest::setMetadataType(const std::string& metadataType)
{
	metadataType_ = metadataType;
	setCoreParameter("MetadataType", metadataType);
}

std::string CreateBackupRuleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateBackupRuleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateBackupRuleRequest::getRegionId()const
{
	return regionId_;
}

void CreateBackupRuleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateBackupRuleRequest::getName()const
{
	return name_;
}

void CreateBackupRuleRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

