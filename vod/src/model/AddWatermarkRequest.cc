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

#include <alibabacloud/vod/model/AddWatermarkRequest.h>

using AlibabaCloud::Vod::Model::AddWatermarkRequest;

AddWatermarkRequest::AddWatermarkRequest() :
	RpcServiceRequest("vod", "2017-03-21", "AddWatermark")
{}

AddWatermarkRequest::~AddWatermarkRequest()
{}

long AddWatermarkRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddWatermarkRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string AddWatermarkRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddWatermarkRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string AddWatermarkRequest::getAppId()const
{
	return appId_;
}

void AddWatermarkRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

std::string AddWatermarkRequest::getName()const
{
	return name_;
}

void AddWatermarkRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string AddWatermarkRequest::getFileUrl()const
{
	return fileUrl_;
}

void AddWatermarkRequest::setFileUrl(const std::string& fileUrl)
{
	fileUrl_ = fileUrl;
	setCoreParameter("FileUrl", std::to_string(fileUrl));
}

long AddWatermarkRequest::getOwnerId()const
{
	return ownerId_;
}

void AddWatermarkRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string AddWatermarkRequest::getType()const
{
	return type_;
}

void AddWatermarkRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", std::to_string(type));
}

std::string AddWatermarkRequest::getWatermarkConfig()const
{
	return watermarkConfig_;
}

void AddWatermarkRequest::setWatermarkConfig(const std::string& watermarkConfig)
{
	watermarkConfig_ = watermarkConfig;
	setCoreParameter("WatermarkConfig", std::to_string(watermarkConfig));
}

std::string AddWatermarkRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddWatermarkRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

