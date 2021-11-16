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

#include <alibabacloud/ddoscoo/model/ConfigHealthCheckRequest.h>

using AlibabaCloud::Ddoscoo::Model::ConfigHealthCheckRequest;

ConfigHealthCheckRequest::ConfigHealthCheckRequest() :
	RpcServiceRequest("ddoscoo", "2017-12-28", "ConfigHealthCheck")
{
	setMethod(HttpRequest::Method::Post);
}

ConfigHealthCheckRequest::~ConfigHealthCheckRequest()
{}

std::string ConfigHealthCheckRequest::getHealthCheck()const
{
	return healthCheck_;
}

void ConfigHealthCheckRequest::setHealthCheck(const std::string& healthCheck)
{
	healthCheck_ = healthCheck;
	setParameter("HealthCheck", healthCheck);
}

std::string ConfigHealthCheckRequest::getInstanceId()const
{
	return instanceId_;
}

void ConfigHealthCheckRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ConfigHealthCheckRequest::getSourceIp()const
{
	return sourceIp_;
}

void ConfigHealthCheckRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int ConfigHealthCheckRequest::getFrontendPort()const
{
	return frontendPort_;
}

void ConfigHealthCheckRequest::setFrontendPort(int frontendPort)
{
	frontendPort_ = frontendPort;
	setParameter("FrontendPort", std::to_string(frontendPort));
}

std::string ConfigHealthCheckRequest::getForwardProtocol()const
{
	return forwardProtocol_;
}

void ConfigHealthCheckRequest::setForwardProtocol(const std::string& forwardProtocol)
{
	forwardProtocol_ = forwardProtocol;
	setParameter("ForwardProtocol", forwardProtocol);
}

