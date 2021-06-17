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

#include <alibabacloud/ga/model/CreateListenerRequest.h>

using AlibabaCloud::Ga::Model::CreateListenerRequest;

CreateListenerRequest::CreateListenerRequest() :
	RpcServiceRequest("ga", "2019-11-20", "CreateListener")
{
	setMethod(HttpRequest::Method::Post);
}

CreateListenerRequest::~CreateListenerRequest()
{}

std::string CreateListenerRequest::getClientToken()const
{
	return clientToken_;
}

void CreateListenerRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateListenerRequest::getDescription()const
{
	return description_;
}

void CreateListenerRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::vector<CreateListenerRequest::BackendPorts> CreateListenerRequest::getBackendPorts()const
{
	return backendPorts_;
}

void CreateListenerRequest::setBackendPorts(const std::vector<BackendPorts>& backendPorts)
{
	backendPorts_ = backendPorts;
	for(int dep1 = 0; dep1!= backendPorts.size(); dep1++) {
		auto backendPortsObj = backendPorts.at(dep1);
		std::string backendPortsObjStr = "BackendPorts." + std::to_string(dep1 + 1);
		setParameter(backendPortsObjStr + ".FromPort", std::to_string(backendPortsObj.fromPort));
		setParameter(backendPortsObjStr + ".ToPort", std::to_string(backendPortsObj.toPort));
	}
}

std::string CreateListenerRequest::getProtocol()const
{
	return protocol_;
}

void CreateListenerRequest::setProtocol(const std::string& protocol)
{
	protocol_ = protocol;
	setParameter("Protocol", protocol);
}

std::string CreateListenerRequest::getRegionId()const
{
	return regionId_;
}

void CreateListenerRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateListenerRequest::getAcceleratorId()const
{
	return acceleratorId_;
}

void CreateListenerRequest::setAcceleratorId(const std::string& acceleratorId)
{
	acceleratorId_ = acceleratorId;
	setParameter("AcceleratorId", acceleratorId);
}

bool CreateListenerRequest::getProxyProtocol()const
{
	return proxyProtocol_;
}

void CreateListenerRequest::setProxyProtocol(bool proxyProtocol)
{
	proxyProtocol_ = proxyProtocol;
	setParameter("ProxyProtocol", proxyProtocol ? "true" : "false");
}

std::vector<CreateListenerRequest::PortRanges> CreateListenerRequest::getPortRanges()const
{
	return portRanges_;
}

void CreateListenerRequest::setPortRanges(const std::vector<PortRanges>& portRanges)
{
	portRanges_ = portRanges;
	for(int dep1 = 0; dep1!= portRanges.size(); dep1++) {
		auto portRangesObj = portRanges.at(dep1);
		std::string portRangesObjStr = "PortRanges." + std::to_string(dep1 + 1);
		setParameter(portRangesObjStr + ".FromPort", std::to_string(portRangesObj.fromPort));
		setParameter(portRangesObjStr + ".ToPort", std::to_string(portRangesObj.toPort));
	}
}

std::vector<CreateListenerRequest::Certificates> CreateListenerRequest::getCertificates()const
{
	return certificates_;
}

void CreateListenerRequest::setCertificates(const std::vector<Certificates>& certificates)
{
	certificates_ = certificates;
	for(int dep1 = 0; dep1!= certificates.size(); dep1++) {
		auto certificatesObj = certificates.at(dep1);
		std::string certificatesObjStr = "Certificates." + std::to_string(dep1 + 1);
		setParameter(certificatesObjStr + ".Id", certificatesObj.id);
	}
}

std::string CreateListenerRequest::getName()const
{
	return name_;
}

void CreateListenerRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateListenerRequest::getClientAffinity()const
{
	return clientAffinity_;
}

void CreateListenerRequest::setClientAffinity(const std::string& clientAffinity)
{
	clientAffinity_ = clientAffinity;
	setParameter("ClientAffinity", clientAffinity);
}

