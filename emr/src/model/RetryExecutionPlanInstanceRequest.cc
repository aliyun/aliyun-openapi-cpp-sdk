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

#include <alibabacloud/emr/model/RetryExecutionPlanInstanceRequest.h>

using AlibabaCloud::Emr::Model::RetryExecutionPlanInstanceRequest;

RetryExecutionPlanInstanceRequest::RetryExecutionPlanInstanceRequest() :
	RpcServiceRequest("emr", "2016-04-08", "RetryExecutionPlanInstance")
{}

RetryExecutionPlanInstanceRequest::~RetryExecutionPlanInstanceRequest()
{}

long RetryExecutionPlanInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RetryExecutionPlanInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RetryExecutionPlanInstanceRequest::getRegionId()const
{
	return regionId_;
}

void RetryExecutionPlanInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string RetryExecutionPlanInstanceRequest::getArguments()const
{
	return arguments_;
}

void RetryExecutionPlanInstanceRequest::setArguments(const std::string& arguments)
{
	arguments_ = arguments;
	setParameter("Arguments", arguments);
}

std::string RetryExecutionPlanInstanceRequest::getId()const
{
	return id_;
}

void RetryExecutionPlanInstanceRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

bool RetryExecutionPlanInstanceRequest::getRerunFail()const
{
	return rerunFail_;
}

void RetryExecutionPlanInstanceRequest::setRerunFail(bool rerunFail)
{
	rerunFail_ = rerunFail;
	setParameter("RerunFail", std::to_string(rerunFail));
}

std::string RetryExecutionPlanInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RetryExecutionPlanInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

