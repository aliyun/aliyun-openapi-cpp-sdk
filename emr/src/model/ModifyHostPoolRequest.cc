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

#include <alibabacloud/emr/model/ModifyHostPoolRequest.h>

using AlibabaCloud::Emr::Model::ModifyHostPoolRequest;

ModifyHostPoolRequest::ModifyHostPoolRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyHostPool")
{}

ModifyHostPoolRequest::~ModifyHostPoolRequest()
{}

long ModifyHostPoolRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyHostPoolRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyHostPoolRequest::getRegionId()const
{
	return regionId_;
}

void ModifyHostPoolRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyHostPoolRequest::getName()const
{
	return name_;
}

void ModifyHostPoolRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string ModifyHostPoolRequest::getBizId()const
{
	return bizId_;
}

void ModifyHostPoolRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setCoreParameter("BizId", bizId);
}

std::string ModifyHostPoolRequest::getDescription()const
{
	return description_;
}

void ModifyHostPoolRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string ModifyHostPoolRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyHostPoolRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

