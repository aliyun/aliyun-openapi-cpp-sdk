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

#include <alibabacloud/ehpc/model/UpdateQueueConfigRequest.h>

using AlibabaCloud::EHPC::Model::UpdateQueueConfigRequest;

UpdateQueueConfigRequest::UpdateQueueConfigRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "UpdateQueueConfig")
{
	setMethod(HttpRequest::Method::Get);
}

UpdateQueueConfigRequest::~UpdateQueueConfigRequest()
{}

std::string UpdateQueueConfigRequest::getQueueName()const
{
	return queueName_;
}

void UpdateQueueConfigRequest::setQueueName(const std::string& queueName)
{
	queueName_ = queueName;
	setCoreParameter("QueueName", queueName);
}

std::string UpdateQueueConfigRequest::getClusterId()const
{
	return clusterId_;
}

void UpdateQueueConfigRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string UpdateQueueConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateQueueConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string UpdateQueueConfigRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void UpdateQueueConfigRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string UpdateQueueConfigRequest::getComputeInstanceType()const
{
	return computeInstanceType_;
}

void UpdateQueueConfigRequest::setComputeInstanceType(const std::string& computeInstanceType)
{
	computeInstanceType_ = computeInstanceType;
	setCoreParameter("ComputeInstanceType", computeInstanceType);
}

