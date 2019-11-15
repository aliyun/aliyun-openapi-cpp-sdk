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

#include <alibabacloud/cdn/model/ModifyUserCustomLogConfigRequest.h>

using AlibabaCloud::Cdn::Model::ModifyUserCustomLogConfigRequest;

ModifyUserCustomLogConfigRequest::ModifyUserCustomLogConfigRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "ModifyUserCustomLogConfig")
{
	setMethod(HttpRequest::Method::Get);
}

ModifyUserCustomLogConfigRequest::~ModifyUserCustomLogConfigRequest()
{}

long ModifyUserCustomLogConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyUserCustomLogConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyUserCustomLogConfigRequest::getConfigId()const
{
	return configId_;
}

void ModifyUserCustomLogConfigRequest::setConfigId(const std::string& configId)
{
	configId_ = configId;
	setCoreParameter("ConfigId", configId);
}

std::string ModifyUserCustomLogConfigRequest::getTag()const
{
	return tag_;
}

void ModifyUserCustomLogConfigRequest::setTag(const std::string& tag)
{
	tag_ = tag;
	setCoreParameter("Tag", tag);
}

