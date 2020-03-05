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

#include <alibabacloud/ehpc/model/CreateGWSImageRequest.h>

using AlibabaCloud::EHPC::Model::CreateGWSImageRequest;

CreateGWSImageRequest::CreateGWSImageRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "CreateGWSImage")
{
	setMethod(HttpRequest::Method::GET);
}

CreateGWSImageRequest::~CreateGWSImageRequest()
{}

std::string CreateGWSImageRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateGWSImageRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateGWSImageRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateGWSImageRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string CreateGWSImageRequest::getName()const
{
	return name_;
}

void CreateGWSImageRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

