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

#include <alibabacloud/ess/model/SuspendProcessesRequest.h>

using AlibabaCloud::Ess::Model::SuspendProcessesRequest;

SuspendProcessesRequest::SuspendProcessesRequest() :
	RpcServiceRequest("ess", "2014-08-28", "SuspendProcesses")
{
	setMethod(HttpRequest::Method::Post);
}

SuspendProcessesRequest::~SuspendProcessesRequest()
{}

std::vector<std::string> SuspendProcessesRequest::getProcess()const
{
	return process_;
}

void SuspendProcessesRequest::setProcess(const std::vector<std::string>& process)
{
	process_ = process;
	for(int dep1 = 0; dep1!= process.size(); dep1++) {
		setParameter("Process."+ std::to_string(dep1), process.at(dep1));
	}
}

std::string SuspendProcessesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SuspendProcessesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SuspendProcessesRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void SuspendProcessesRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setParameter("ScalingGroupId", scalingGroupId);
}

long SuspendProcessesRequest::getOwnerId()const
{
	return ownerId_;
}

void SuspendProcessesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SuspendProcessesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SuspendProcessesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

