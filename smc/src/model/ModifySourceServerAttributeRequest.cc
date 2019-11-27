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

#include <alibabacloud/smc/model/ModifySourceServerAttributeRequest.h>

using AlibabaCloud::Smc::Model::ModifySourceServerAttributeRequest;

ModifySourceServerAttributeRequest::ModifySourceServerAttributeRequest() :
	RpcServiceRequest("smc", "2019-06-01", "ModifySourceServerAttribute")
{
	setMethod(HttpRequest::Method::Post);
}

ModifySourceServerAttributeRequest::~ModifySourceServerAttributeRequest()
{}

std::string ModifySourceServerAttributeRequest::getDescription()const
{
	return description_;
}

void ModifySourceServerAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string ModifySourceServerAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifySourceServerAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifySourceServerAttributeRequest::getSourceId()const
{
	return sourceId_;
}

void ModifySourceServerAttributeRequest::setSourceId(const std::string& sourceId)
{
	sourceId_ = sourceId;
	setCoreParameter("SourceId", sourceId);
}

std::string ModifySourceServerAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifySourceServerAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long ModifySourceServerAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifySourceServerAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifySourceServerAttributeRequest::getName()const
{
	return name_;
}

void ModifySourceServerAttributeRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

