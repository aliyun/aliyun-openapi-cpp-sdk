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

#include <alibabacloud/jarvis/model/CreateAccessWhiteListGroupRequest.h>

using AlibabaCloud::Jarvis::Model::CreateAccessWhiteListGroupRequest;

CreateAccessWhiteListGroupRequest::CreateAccessWhiteListGroupRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "CreateAccessWhiteListGroup")
{}

CreateAccessWhiteListGroupRequest::~CreateAccessWhiteListGroupRequest()
{}

std::string CreateAccessWhiteListGroupRequest::getNote()const
{
	return note_;
}

void CreateAccessWhiteListGroupRequest::setNote(const std::string& note)
{
	note_ = note;
	setCoreParameter("Note", std::to_string(note));
}

long CreateAccessWhiteListGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateAccessWhiteListGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateAccessWhiteListGroupRequest::getSrcIP()const
{
	return srcIP_;
}

void CreateAccessWhiteListGroupRequest::setSrcIP(const std::string& srcIP)
{
	srcIP_ = srcIP;
	setCoreParameter("SrcIP", std::to_string(srcIP));
}

std::string CreateAccessWhiteListGroupRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateAccessWhiteListGroupRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

int CreateAccessWhiteListGroupRequest::getDstPort()const
{
	return dstPort_;
}

void CreateAccessWhiteListGroupRequest::setDstPort(int dstPort)
{
	dstPort_ = dstPort;
	setCoreParameter("DstPort", dstPort);
}

std::string CreateAccessWhiteListGroupRequest::getInstanceIdList()const
{
	return instanceIdList_;
}

void CreateAccessWhiteListGroupRequest::setInstanceIdList(const std::string& instanceIdList)
{
	instanceIdList_ = instanceIdList;
	setCoreParameter("InstanceIdList", std::to_string(instanceIdList));
}

int CreateAccessWhiteListGroupRequest::getLiveTime()const
{
	return liveTime_;
}

void CreateAccessWhiteListGroupRequest::setLiveTime(int liveTime)
{
	liveTime_ = liveTime;
	setCoreParameter("LiveTime", liveTime);
}

std::string CreateAccessWhiteListGroupRequest::getProductName()const
{
	return productName_;
}

void CreateAccessWhiteListGroupRequest::setProductName(const std::string& productName)
{
	productName_ = productName;
	setCoreParameter("ProductName", std::to_string(productName));
}

int CreateAccessWhiteListGroupRequest::getWhiteListType()const
{
	return whiteListType_;
}

void CreateAccessWhiteListGroupRequest::setWhiteListType(int whiteListType)
{
	whiteListType_ = whiteListType;
	setCoreParameter("WhiteListType", whiteListType);
}

std::string CreateAccessWhiteListGroupRequest::getInstanceInfoList()const
{
	return instanceInfoList_;
}

void CreateAccessWhiteListGroupRequest::setInstanceInfoList(const std::string& instanceInfoList)
{
	instanceInfoList_ = instanceInfoList;
	setCoreParameter("InstanceInfoList", std::to_string(instanceInfoList));
}

std::string CreateAccessWhiteListGroupRequest::getLang()const
{
	return lang_;
}

void CreateAccessWhiteListGroupRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

std::string CreateAccessWhiteListGroupRequest::getSourceCode()const
{
	return sourceCode_;
}

void CreateAccessWhiteListGroupRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setCoreParameter("SourceCode", std::to_string(sourceCode));
}

