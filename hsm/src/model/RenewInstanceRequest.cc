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

#include <alibabacloud/hsm/model/RenewInstanceRequest.h>

using AlibabaCloud::Hsm::Model::RenewInstanceRequest;

RenewInstanceRequest::RenewInstanceRequest() :
	RpcServiceRequest("hsm", "2018-01-11", "RenewInstance")
{
	setMethod(HttpRequest::Method::Post);
}

RenewInstanceRequest::~RenewInstanceRequest()
{}

int RenewInstanceRequest::getPeriod()const
{
	return period_;
}

void RenewInstanceRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

std::string RenewInstanceRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void RenewInstanceRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setParameter("PeriodUnit", periodUnit);
}

std::string RenewInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RenewInstanceRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", resourceOwnerId);
}

std::string RenewInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void RenewInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string RenewInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void RenewInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

