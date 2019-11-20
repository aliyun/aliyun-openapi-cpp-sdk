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

#include <alibabacloud/ehpc/model/ModifyContainerAppAttributesRequest.h>

using AlibabaCloud::EHPC::Model::ModifyContainerAppAttributesRequest;

ModifyContainerAppAttributesRequest::ModifyContainerAppAttributesRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "ModifyContainerAppAttributes")
{
	setMethod(HttpRequest::Method::Get);
}

ModifyContainerAppAttributesRequest::~ModifyContainerAppAttributesRequest()
{}

std::string ModifyContainerAppAttributesRequest::getDescription()const
{
	return description_;
}

void ModifyContainerAppAttributesRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string ModifyContainerAppAttributesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyContainerAppAttributesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyContainerAppAttributesRequest::getContainerId()const
{
	return containerId_;
}

void ModifyContainerAppAttributesRequest::setContainerId(const std::string& containerId)
{
	containerId_ = containerId;
	setCoreParameter("ContainerId", containerId);
}

