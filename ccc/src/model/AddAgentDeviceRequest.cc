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

#include <alibabacloud/ccc/model/AddAgentDeviceRequest.h>

using AlibabaCloud::CCC::Model::AddAgentDeviceRequest;

AddAgentDeviceRequest::AddAgentDeviceRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "AddAgentDevice")
{}

AddAgentDeviceRequest::~AddAgentDeviceRequest()
{}

std::string AddAgentDeviceRequest::getInstanceId()const
{
	return instanceId_;
}

void AddAgentDeviceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string AddAgentDeviceRequest::getClientIp()const
{
	return clientIp_;
}

void AddAgentDeviceRequest::setClientIp(const std::string& clientIp)
{
	clientIp_ = clientIp;
	setCoreParameter("ClientIp", clientIp);
}

std::string AddAgentDeviceRequest::getRemark()const
{
	return remark_;
}

void AddAgentDeviceRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", remark);
}

std::string AddAgentDeviceRequest::getClientPort()const
{
	return clientPort_;
}

void AddAgentDeviceRequest::setClientPort(const std::string& clientPort)
{
	clientPort_ = clientPort;
	setCoreParameter("ClientPort", clientPort);
}

std::string AddAgentDeviceRequest::getBrowserVersion()const
{
	return browserVersion_;
}

void AddAgentDeviceRequest::setBrowserVersion(const std::string& browserVersion)
{
	browserVersion_ = browserVersion;
	setCoreParameter("BrowserVersion", browserVersion);
}

std::string AddAgentDeviceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddAgentDeviceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

