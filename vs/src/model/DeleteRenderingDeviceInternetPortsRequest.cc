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

#include <alibabacloud/vs/model/DeleteRenderingDeviceInternetPortsRequest.h>

using AlibabaCloud::Vs::Model::DeleteRenderingDeviceInternetPortsRequest;

DeleteRenderingDeviceInternetPortsRequest::DeleteRenderingDeviceInternetPortsRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DeleteRenderingDeviceInternetPorts")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteRenderingDeviceInternetPortsRequest::~DeleteRenderingDeviceInternetPortsRequest()
{}

std::string DeleteRenderingDeviceInternetPortsRequest::getISP()const
{
	return iSP_;
}

void DeleteRenderingDeviceInternetPortsRequest::setISP(const std::string& iSP)
{
	iSP_ = iSP;
	setParameter("ISP", iSP);
}

std::string DeleteRenderingDeviceInternetPortsRequest::getShowLog()const
{
	return showLog_;
}

void DeleteRenderingDeviceInternetPortsRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string DeleteRenderingDeviceInternetPortsRequest::getIpProtocol()const
{
	return ipProtocol_;
}

void DeleteRenderingDeviceInternetPortsRequest::setIpProtocol(const std::string& ipProtocol)
{
	ipProtocol_ = ipProtocol;
	setParameter("IpProtocol", ipProtocol);
}

long DeleteRenderingDeviceInternetPortsRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteRenderingDeviceInternetPortsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteRenderingDeviceInternetPortsRequest::getInstanceIds()const
{
	return instanceIds_;
}

void DeleteRenderingDeviceInternetPortsRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setParameter("InstanceIds", instanceIds);
}

std::string DeleteRenderingDeviceInternetPortsRequest::getInternalPort()const
{
	return internalPort_;
}

void DeleteRenderingDeviceInternetPortsRequest::setInternalPort(const std::string& internalPort)
{
	internalPort_ = internalPort;
	setParameter("InternalPort", internalPort);
}

