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

#include <alibabacloud/retailcloud/model/ModifyServiceRequest.h>

using AlibabaCloud::Retailcloud::Model::ModifyServiceRequest;

ModifyServiceRequest::ModifyServiceRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "ModifyService")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyServiceRequest::~ModifyServiceRequest()
{}

std::string ModifyServiceRequest::getName()const
{
	return name_;
}

void ModifyServiceRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::vector<ModifyServiceRequest::PortMappings> ModifyServiceRequest::getPortMappings()const
{
	return portMappings_;
}

void ModifyServiceRequest::setPortMappings(const std::vector<PortMappings>& portMappings)
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

long ModifyServiceRequest::getServiceId()const
{
	return serviceId_;
}

void ModifyServiceRequest::setServiceId(long serviceId)
{
	serviceId_ = serviceId;
	setParameter("ServiceId", std::to_string(serviceId));
}

