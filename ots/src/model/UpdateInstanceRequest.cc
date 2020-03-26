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

#include <alibabacloud/ots/model/UpdateInstanceRequest.h>

using AlibabaCloud::Ots::Model::UpdateInstanceRequest;

UpdateInstanceRequest::UpdateInstanceRequest() :
	RpcServiceRequest("ots", "2016-06-20", "UpdateInstance")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateInstanceRequest::~UpdateInstanceRequest()
{}

long UpdateInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpdateInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string UpdateInstanceRequest::getNetwork()const
{
	return network_;
}

void UpdateInstanceRequest::setNetwork(const std::string& network)
{
	network_ = network;
	setParameter("Network", network);
}

std::string UpdateInstanceRequest::getInstanceName()const
{
	return instanceName_;
}

void UpdateInstanceRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setParameter("InstanceName", instanceName);
}

