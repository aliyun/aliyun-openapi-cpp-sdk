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

#include <alibabacloud/ehpc/model/SetGWSInstanceNameRequest.h>

using AlibabaCloud::EHPC::Model::SetGWSInstanceNameRequest;

SetGWSInstanceNameRequest::SetGWSInstanceNameRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "SetGWSInstanceName")
{
	setMethod(HttpRequest::Method::Get);
}

SetGWSInstanceNameRequest::~SetGWSInstanceNameRequest()
{}

std::string SetGWSInstanceNameRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetGWSInstanceNameRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SetGWSInstanceNameRequest::getInstanceId()const
{
	return instanceId_;
}

void SetGWSInstanceNameRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string SetGWSInstanceNameRequest::getName()const
{
	return name_;
}

void SetGWSInstanceNameRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

