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

#include <alibabacloud/ccc/model/DeleteMediaRequest.h>

using AlibabaCloud::CCC::Model::DeleteMediaRequest;

DeleteMediaRequest::DeleteMediaRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "DeleteMedia")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteMediaRequest::~DeleteMediaRequest()
{}

std::string DeleteMediaRequest::getInstanceId()const
{
	return instanceId_;
}

void DeleteMediaRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DeleteMediaRequest::getName()const
{
	return name_;
}

void DeleteMediaRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string DeleteMediaRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteMediaRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

