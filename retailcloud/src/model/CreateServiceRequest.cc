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

#include <alibabacloud/retailcloud/model/CreateServiceRequest.h>

using AlibabaCloud::Retailcloud::Model::CreateServiceRequest;

CreateServiceRequest::CreateServiceRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "CreateService")
{
	setMethod(HttpRequest::Method::Post);
}

CreateServiceRequest::~CreateServiceRequest()
{}

bool CreateServiceRequest::getHeadless()const
{
	return headless_;
}

void CreateServiceRequest::setHeadless(bool headless)
{
	headless_ = headless;
	setParameter("Headless", headless ? "true" : "false");
}

std::string CreateServiceRequest::getServiceType()const
{
	return serviceType_;
}

void CreateServiceRequest::setServiceType(const std::string& serviceType)
{
	serviceType_ = serviceType;
	setParameter("ServiceType", serviceType);
}

std::string CreateServiceRequest::getK8sServiceId()const
{
	return k8sServiceId_;
}

void CreateServiceRequest::setK8sServiceId(const std::string& k8sServiceId)
{
	k8sServiceId_ = k8sServiceId;
	setParameter("K8sServiceId", k8sServiceId);
}

std::string CreateServiceRequest::getName()const
{
	return name_;
}

void CreateServiceRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::vector<CreateServiceRequest::PortMappings> CreateServiceRequest::getPortMappings()const
{
	return portMappings_;
}

void CreateServiceRequest::setPortMappings(const std::vector<PortMappings>& portMappings)
{
	portMappings_ = portMappings;
	for(int dep1 = 0; dep1!= portMappings.size(); dep1++) {
		auto portMappingsObj = portMappings.at(dep1);
		std::string portMappingsObjStr = "PortMappings." + std::to_string(dep1 + 1);
		setParameter(portMappingsObjStr + ".Protocol", portMappingsObj.protocol);
		setParameter(portMappingsObjStr + ".Port", std::to_string(portMappingsObj.port));
		setParameter(portMappingsObjStr + ".Name", portMappingsObj.name);
		setParameter(portMappingsObjStr + ".NodePort", std::to_string(portMappingsObj.nodePort));
		setParameter(portMappingsObjStr + ".TargetPort", portMappingsObj.targetPort);
	}
}

long CreateServiceRequest::getEnvId()const
{
	return envId_;
}

void CreateServiceRequest::setEnvId(long envId)
{
	envId_ = envId;
	setParameter("EnvId", std::to_string(envId));
}

