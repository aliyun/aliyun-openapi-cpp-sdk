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

#include <alibabacloud/edas/model/UpdateK8sServiceRequest.h>

using AlibabaCloud::Edas::Model::UpdateK8sServiceRequest;

UpdateK8sServiceRequest::UpdateK8sServiceRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/k8s/acs/k8s_service");
	setMethod(HttpRequest::Method::Put);
}

UpdateK8sServiceRequest::~UpdateK8sServiceRequest()
{}

std::string UpdateK8sServiceRequest::getAppId()const
{
	return appId_;
}

void UpdateK8sServiceRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string UpdateK8sServiceRequest::getName()const
{
	return name_;
}

void UpdateK8sServiceRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string UpdateK8sServiceRequest::getType()const
{
	return type_;
}

void UpdateK8sServiceRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string UpdateK8sServiceRequest::getServicePorts()const
{
	return servicePorts_;
}

void UpdateK8sServiceRequest::setServicePorts(const std::string& servicePorts)
{
	servicePorts_ = servicePorts;
	setParameter("ServicePorts", servicePorts);
}

