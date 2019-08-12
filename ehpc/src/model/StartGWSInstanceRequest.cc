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

#include <alibabacloud/ehpc/model/StartGWSInstanceRequest.h>

using AlibabaCloud::EHPC::Model::StartGWSInstanceRequest;

StartGWSInstanceRequest::StartGWSInstanceRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "StartGWSInstance")
{}

StartGWSInstanceRequest::~StartGWSInstanceRequest()
{}

std::string StartGWSInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void StartGWSInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string StartGWSInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StartGWSInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

