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

#include <alibabacloud/emr/model/UpdateProjectSettingRequest.h>

using AlibabaCloud::Emr::Model::UpdateProjectSettingRequest;

UpdateProjectSettingRequest::UpdateProjectSettingRequest() :
	RpcServiceRequest("emr", "2016-04-08", "UpdateProjectSetting")
{}

UpdateProjectSettingRequest::~UpdateProjectSettingRequest()
{}

long UpdateProjectSettingRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateProjectSettingRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string UpdateProjectSettingRequest::getRegionId()const
{
	return regionId_;
}

void UpdateProjectSettingRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UpdateProjectSettingRequest::getDefaultOssPath()const
{
	return defaultOssPath_;
}

void UpdateProjectSettingRequest::setDefaultOssPath(const std::string& defaultOssPath)
{
	defaultOssPath_ = defaultOssPath;
	setCoreParameter("DefaultOssPath", defaultOssPath);
}

std::string UpdateProjectSettingRequest::getProjectId()const
{
	return projectId_;
}

void UpdateProjectSettingRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string UpdateProjectSettingRequest::getOssConfig()const
{
	return ossConfig_;
}

void UpdateProjectSettingRequest::setOssConfig(const std::string& ossConfig)
{
	ossConfig_ = ossConfig;
	setCoreParameter("OssConfig", ossConfig);
}

std::string UpdateProjectSettingRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateProjectSettingRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

