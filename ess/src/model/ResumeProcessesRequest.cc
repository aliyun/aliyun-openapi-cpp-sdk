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

#include <alibabacloud/ess/model/ResumeProcessesRequest.h>

using AlibabaCloud::Ess::Model::ResumeProcessesRequest;

ResumeProcessesRequest::ResumeProcessesRequest() :
	RpcServiceRequest("ess", "2014-08-28", "ResumeProcesses")
{
	setMethod(HttpRequest::Method::Post);
}

ResumeProcessesRequest::~ResumeProcessesRequest()
{}

std::vector<std::string> ResumeProcessesRequest::getProcess()const
{
	return process_;
}

void ResumeProcessesRequest::setProcess(const std::vector<std::string>& process)
{
	process_ = process;
	for(int dep1 = 0; dep1!= process.size(); dep1++) {
		setParameter("Process."+ std::to_string(dep1), process.at(dep1));
	}
}

std::string ResumeProcessesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ResumeProcessesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ResumeProcessesRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void ResumeProcessesRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setParameter("ScalingGroupId", scalingGroupId);
}

long ResumeProcessesRequest::getOwnerId()const
{
	return ownerId_;
}

void ResumeProcessesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ResumeProcessesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ResumeProcessesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

