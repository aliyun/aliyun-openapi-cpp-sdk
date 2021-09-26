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

#include <alibabacloud/vs/model/AddRenderingDeviceInternetPortsRequest.h>

using AlibabaCloud::Vs::Model::AddRenderingDeviceInternetPortsRequest;

AddRenderingDeviceInternetPortsRequest::AddRenderingDeviceInternetPortsRequest() :
	RpcServiceRequest("vs", "2018-12-12", "AddRenderingDeviceInternetPorts")
{
	setMethod(HttpRequest::Method::Post);
}

AddRenderingDeviceInternetPortsRequest::~AddRenderingDeviceInternetPortsRequest()
{}

std::string AddRenderingDeviceInternetPortsRequest::getISP()const
{
	return iSP_;
}

void AddRenderingDeviceInternetPortsRequest::setISP(const std::string& iSP)
{
	iSP_ = iSP;
	setParameter("ISP", iSP);
}

std::string AddRenderingDeviceInternetPortsRequest::getShowLog()const
{
	return showLog_;
}

void AddRenderingDeviceInternetPortsRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string AddRenderingDeviceInternetPortsRequest::getIpProtocol()const
{
	return ipProtocol_;
}

void AddRenderingDeviceInternetPortsRequest::setIpProtocol(const std::string& ipProtocol)
{
	ipProtocol_ = ipProtocol;
	setParameter("IpProtocol", ipProtocol);
}

long AddRenderingDeviceInternetPortsRequest::getOwnerId()const
{
	return ownerId_;
}

void AddRenderingDeviceInternetPortsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string AddRenderingDeviceInternetPortsRequest::getInstanceIds()const
{
	return instanceIds_;
}

void AddRenderingDeviceInternetPortsRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setParameter("InstanceIds", instanceIds);
}

std::string AddRenderingDeviceInternetPortsRequest::getInternalPort()const
{
	return internalPort_;
}

void AddRenderingDeviceInternetPortsRequest::setInternalPort(const std::string& internalPort)
{
	internalPort_ = internalPort;
	setParameter("InternalPort", internalPort);
}

