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

#include <alibabacloud/mts/model/RegisterMediaDetailScenarioRequest.h>

using AlibabaCloud::Mts::Model::RegisterMediaDetailScenarioRequest;

RegisterMediaDetailScenarioRequest::RegisterMediaDetailScenarioRequest() :
	RpcServiceRequest("mts", "2014-06-18", "RegisterMediaDetailScenario")
{
	setMethod(HttpRequest::Method::Post);
}

RegisterMediaDetailScenarioRequest::~RegisterMediaDetailScenarioRequest()
{}

long RegisterMediaDetailScenarioRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RegisterMediaDetailScenarioRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RegisterMediaDetailScenarioRequest::getDescription()const
{
	return description_;
}

void RegisterMediaDetailScenarioRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string RegisterMediaDetailScenarioRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RegisterMediaDetailScenarioRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string RegisterMediaDetailScenarioRequest::getJobId()const
{
	return jobId_;
}

void RegisterMediaDetailScenarioRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setCoreParameter("JobId", jobId);
}

std::string RegisterMediaDetailScenarioRequest::getScenario()const
{
	return scenario_;
}

void RegisterMediaDetailScenarioRequest::setScenario(const std::string& scenario)
{
	scenario_ = scenario;
	setCoreParameter("Scenario", scenario);
}

std::string RegisterMediaDetailScenarioRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RegisterMediaDetailScenarioRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RegisterMediaDetailScenarioRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RegisterMediaDetailScenarioRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long RegisterMediaDetailScenarioRequest::getOwnerId()const
{
	return ownerId_;
}

void RegisterMediaDetailScenarioRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

