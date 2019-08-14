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

#include <alibabacloud/ots/model/GetInstanceRequest.h>

using AlibabaCloud::Ots::Model::GetInstanceRequest;

GetInstanceRequest::GetInstanceRequest() :
	RpcServiceRequest("ots", "2016-06-20", "GetInstance")
{}

GetInstanceRequest::~GetInstanceRequest()
{}

std::string GetInstanceRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void GetInstanceRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", access_key_id);
}

long GetInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetInstanceRequest::getInstanceName()const
{
	return instanceName_;
}

void GetInstanceRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setCoreParameter("InstanceName", instanceName);
}

