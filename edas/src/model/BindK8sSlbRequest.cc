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

#include <alibabacloud/edas/model/BindK8sSlbRequest.h>

using AlibabaCloud::Edas::Model::BindK8sSlbRequest;

BindK8sSlbRequest::BindK8sSlbRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/k8s/acs/k8s_slb_binding");
	setMethod(HttpRequest::Method::Post);
}

BindK8sSlbRequest::~BindK8sSlbRequest()
{}

std::string BindK8sSlbRequest::getScheduler()const
{
	return scheduler_;
}

void BindK8sSlbRequest::setScheduler(const std::string& scheduler)
{
	scheduler_ = scheduler;
	setParameter("Scheduler", scheduler);
}

std::string BindK8sSlbRequest::getServicePortInfos()const
{
	return servicePortInfos_;
}

void BindK8sSlbRequest::setServicePortInfos(const std::string& servicePortInfos)
{
	servicePortInfos_ = servicePortInfos;
	setParameter("ServicePortInfos", servicePortInfos);
}

std::string BindK8sSlbRequest::getSlbId()const
{
	return slbId_;
}

void BindK8sSlbRequest::setSlbId(const std::string& slbId)
{
	slbId_ = slbId;
	setParameter("SlbId", slbId);
}

std::string BindK8sSlbRequest::getSlbProtocol()const
{
	return slbProtocol_;
}

void BindK8sSlbRequest::setSlbProtocol(const std::string& slbProtocol)
{
	slbProtocol_ = slbProtocol;
	setParameter("SlbProtocol", slbProtocol);
}

std::string BindK8sSlbRequest::getPort()const
{
	return port_;
}

void BindK8sSlbRequest::setPort(const std::string& port)
{
	port_ = port;
	setParameter("Port", port);
}

std::string BindK8sSlbRequest::getAppId()const
{
	return appId_;
}

void BindK8sSlbRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string BindK8sSlbRequest::getSpecification()const
{
	return specification_;
}

void BindK8sSlbRequest::setSpecification(const std::string& specification)
{
	specification_ = specification;
	setParameter("Specification", specification);
}

std::string BindK8sSlbRequest::getClusterId()const
{
	return clusterId_;
}

void BindK8sSlbRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string BindK8sSlbRequest::getType()const
{
	return type_;
}

void BindK8sSlbRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string BindK8sSlbRequest::getTargetPort()const
{
	return targetPort_;
}

void BindK8sSlbRequest::setTargetPort(const std::string& targetPort)
{
	targetPort_ = targetPort;
	setParameter("TargetPort", targetPort);
}

