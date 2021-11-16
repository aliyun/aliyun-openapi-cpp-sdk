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

#include <alibabacloud/ddoscoo/model/ConfigLayer4RuleAttributeRequest.h>

using AlibabaCloud::Ddoscoo::Model::ConfigLayer4RuleAttributeRequest;

ConfigLayer4RuleAttributeRequest::ConfigLayer4RuleAttributeRequest() :
	RpcServiceRequest("ddoscoo", "2017-12-28", "ConfigLayer4RuleAttribute")
{
	setMethod(HttpRequest::Method::Post);
}

ConfigLayer4RuleAttributeRequest::~ConfigLayer4RuleAttributeRequest()
{}

std::string ConfigLayer4RuleAttributeRequest::getInstanceId()const
{
	return instanceId_;
}

void ConfigLayer4RuleAttributeRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ConfigLayer4RuleAttributeRequest::getSourceIp()const
{
	return sourceIp_;
}

void ConfigLayer4RuleAttributeRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int ConfigLayer4RuleAttributeRequest::getFrontendPort()const
{
	return frontendPort_;
}

void ConfigLayer4RuleAttributeRequest::setFrontendPort(int frontendPort)
{
	frontendPort_ = frontendPort;
	setParameter("FrontendPort", std::to_string(frontendPort));
}

std::string ConfigLayer4RuleAttributeRequest::getForwardProtocol()const
{
	return forwardProtocol_;
}

void ConfigLayer4RuleAttributeRequest::setForwardProtocol(const std::string& forwardProtocol)
{
	forwardProtocol_ = forwardProtocol;
	setParameter("ForwardProtocol", forwardProtocol);
}

std::string ConfigLayer4RuleAttributeRequest::getConfig()const
{
	return config_;
}

void ConfigLayer4RuleAttributeRequest::setConfig(const std::string& config)
{
	config_ = config;
	setParameter("Config", config);
}

