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

#include <alibabacloud/ccc/model/CreateFaultRequest.h>

using AlibabaCloud::CCC::Model::CreateFaultRequest;

CreateFaultRequest::CreateFaultRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "CreateFault")
{
	setMethod(HttpRequest::Method::Post);
}

CreateFaultRequest::~CreateFaultRequest()
{}

std::string CreateFaultRequest::getAgentOssFileName()const
{
	return agentOssFileName_;
}

void CreateFaultRequest::setAgentOssFileName(const std::string& agentOssFileName)
{
	agentOssFileName_ = agentOssFileName;
	setCoreParameter("AgentOssFileName", agentOssFileName);
}

std::string CreateFaultRequest::getDescription()const
{
	return description_;
}

void CreateFaultRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateFaultRequest::getOperatingSystemVersion()const
{
	return operatingSystemVersion_;
}

void CreateFaultRequest::setOperatingSystemVersion(const std::string& operatingSystemVersion)
{
	operatingSystemVersion_ = operatingSystemVersion;
	setCoreParameter("OperatingSystemVersion", operatingSystemVersion);
}

long CreateFaultRequest::getStartTime()const
{
	return startTime_;
}

void CreateFaultRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string CreateFaultRequest::getMicrophoneList()const
{
	return microphoneList_;
}

void CreateFaultRequest::setMicrophoneList(const std::string& microphoneList)
{
	microphoneList_ = microphoneList;
	setCoreParameter("MicrophoneList", microphoneList);
}

std::string CreateFaultRequest::getClientPort()const
{
	return clientPort_;
}

void CreateFaultRequest::setClientPort(const std::string& clientPort)
{
	clientPort_ = clientPort;
	setCoreParameter("ClientPort", clientPort);
}

std::string CreateFaultRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateFaultRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateFaultRequest::getCustomFilePath()const
{
	return customFilePath_;
}

void CreateFaultRequest::setCustomFilePath(const std::string& customFilePath)
{
	customFilePath_ = customFilePath;
	setCoreParameter("CustomFilePath", customFilePath);
}

std::string CreateFaultRequest::getClientIp()const
{
	return clientIp_;
}

void CreateFaultRequest::setClientIp(const std::string& clientIp)
{
	clientIp_ = clientIp;
	setCoreParameter("ClientIp", clientIp);
}

std::string CreateFaultRequest::getSpeakerList()const
{
	return speakerList_;
}

void CreateFaultRequest::setSpeakerList(const std::string& speakerList)
{
	speakerList_ = speakerList;
	setCoreParameter("SpeakerList", speakerList);
}

long CreateFaultRequest::getAgentId()const
{
	return agentId_;
}

void CreateFaultRequest::setAgentId(long agentId)
{
	agentId_ = agentId;
	setCoreParameter("AgentId", std::to_string(agentId));
}

long CreateFaultRequest::getEndTime()const
{
	return endTime_;
}

void CreateFaultRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string CreateFaultRequest::getSpeakerEquipment()const
{
	return speakerEquipment_;
}

void CreateFaultRequest::setSpeakerEquipment(const std::string& speakerEquipment)
{
	speakerEquipment_ = speakerEquipment;
	setCoreParameter("SpeakerEquipment", speakerEquipment);
}

std::string CreateFaultRequest::getServicePort()const
{
	return servicePort_;
}

void CreateFaultRequest::setServicePort(const std::string& servicePort)
{
	servicePort_ = servicePort;
	setCoreParameter("ServicePort", servicePort);
}

std::string CreateFaultRequest::getServiceIp()const
{
	return serviceIp_;
}

void CreateFaultRequest::setServiceIp(const std::string& serviceIp)
{
	serviceIp_ = serviceIp;
	setCoreParameter("ServiceIp", serviceIp);
}

std::string CreateFaultRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateFaultRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string CreateFaultRequest::getAgentFilePath()const
{
	return agentFilePath_;
}

void CreateFaultRequest::setAgentFilePath(const std::string& agentFilePath)
{
	agentFilePath_ = agentFilePath;
	setCoreParameter("AgentFilePath", agentFilePath);
}

std::string CreateFaultRequest::getConnectId()const
{
	return connectId_;
}

void CreateFaultRequest::setConnectId(const std::string& connectId)
{
	connectId_ = connectId;
	setCoreParameter("ConnectId", connectId);
}

std::string CreateFaultRequest::getCustomOssFileName()const
{
	return customOssFileName_;
}

void CreateFaultRequest::setCustomOssFileName(const std::string& customOssFileName)
{
	customOssFileName_ = customOssFileName;
	setCoreParameter("CustomOssFileName", customOssFileName);
}

std::string CreateFaultRequest::getMicrophoneEquipment()const
{
	return microphoneEquipment_;
}

void CreateFaultRequest::setMicrophoneEquipment(const std::string& microphoneEquipment)
{
	microphoneEquipment_ = microphoneEquipment;
	setCoreParameter("MicrophoneEquipment", microphoneEquipment);
}

std::string CreateFaultRequest::getBrowserVersion()const
{
	return browserVersion_;
}

void CreateFaultRequest::setBrowserVersion(const std::string& browserVersion)
{
	browserVersion_ = browserVersion;
	setCoreParameter("BrowserVersion", browserVersion);
}

