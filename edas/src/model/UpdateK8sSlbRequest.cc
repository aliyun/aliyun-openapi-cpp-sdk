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

#include <alibabacloud/edas/model/UpdateK8sSlbRequest.h>

using AlibabaCloud::Edas::Model::UpdateK8sSlbRequest;

UpdateK8sSlbRequest::UpdateK8sSlbRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/k8s/acs/k8s_slb_binding");
	setMethod(HttpRequest::Method::Put);
}

UpdateK8sSlbRequest::~UpdateK8sSlbRequest()
{}

std::string UpdateK8sSlbRequest::getScheduler()const
{
	return scheduler_;
}

void UpdateK8sSlbRequest::setScheduler(const std::string& scheduler)
{
	scheduler_ = scheduler;
	setParameter("Scheduler", scheduler);
}

std::string UpdateK8sSlbRequest::getServicePortInfos()const
{
	return servicePortInfos_;
}

void UpdateK8sSlbRequest::setServicePortInfos(const std::string& servicePortInfos)
{
	servicePortInfos_ = servicePortInfos;
	setParameter("ServicePortInfos", servicePortInfos);
}

std::string UpdateK8sSlbRequest::getSlbProtocol()const
{
	return slbProtocol_;
}

void UpdateK8sSlbRequest::setSlbProtocol(const std::string& slbProtocol)
{
	slbProtocol_ = slbProtocol;
	setParameter("SlbProtocol", slbProtocol);
}

std::string UpdateK8sSlbRequest::getSlbName()const
{
	return slbName_;
}

void UpdateK8sSlbRequest::setSlbName(const std::string& slbName)
{
	slbName_ = slbName;
	setParameter("SlbName", slbName);
}

std::string UpdateK8sSlbRequest::getPort()const
{
	return port_;
}

void UpdateK8sSlbRequest::setPort(const std::string& port)
{
	port_ = port;
	setParameter("Port", port);
}

std::string UpdateK8sSlbRequest::getAppId()const
{
	return appId_;
}

void UpdateK8sSlbRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

bool UpdateK8sSlbRequest::getDisableForceOverride()const
{
	return disableForceOverride_;
}

void UpdateK8sSlbRequest::setDisableForceOverride(bool disableForceOverride)
{
	disableForceOverride_ = disableForceOverride;
	setParameter("DisableForceOverride", disableForceOverride ? "true" : "false");
}

std::string UpdateK8sSlbRequest::getSpecification()const
{
	return specification_;
}

void UpdateK8sSlbRequest::setSpecification(const std::string& specification)
{
	specification_ = specification;
	setParameter("Specification", specification);
}

std::string UpdateK8sSlbRequest::getClusterId()const
{
	return clusterId_;
}

void UpdateK8sSlbRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string UpdateK8sSlbRequest::getType()const
{
	return type_;
}

void UpdateK8sSlbRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string UpdateK8sSlbRequest::getTargetPort()const
{
	return targetPort_;
}

void UpdateK8sSlbRequest::setTargetPort(const std::string& targetPort)
{
	targetPort_ = targetPort;
	setParameter("TargetPort", targetPort);
}

