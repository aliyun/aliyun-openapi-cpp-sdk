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
{
	setMethod(HttpRequest::Method::Post);
}

CreateAccessWhiteListGroupRequest::~CreateAccessWhiteListGroupRequest()
{}

std::string CreateAccessWhiteListGroupRequest::getNote()const
{
	return note_;
}

void CreateAccessWhiteListGroupRequest::setNote(const std::string& note)
{
	note_ = note;
	setParameter("Note", note);
}

long CreateAccessWhiteListGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateAccessWhiteListGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateAccessWhiteListGroupRequest::getSrcIP()const
{
	return srcIP_;
}

void CreateAccessWhiteListGroupRequest::setSrcIP(const std::string& srcIP)
{
	srcIP_ = srcIP;
	setParameter("SrcIP", srcIP);
}

int CreateAccessWhiteListGroupRequest::getDstPort()const
{
	return dstPort_;
}

void CreateAccessWhiteListGroupRequest::setDstPort(int dstPort)
{
	dstPort_ = dstPort;
	setParameter("DstPort", std::to_string(dstPort));
}

std::string CreateAccessWhiteListGroupRequest::getSourceCode()const
{
	return sourceCode_;
}

void CreateAccessWhiteListGroupRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setParameter("SourceCode", sourceCode);
}

std::string CreateAccessWhiteListGroupRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateAccessWhiteListGroupRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string CreateAccessWhiteListGroupRequest::getProductName()const
{
	return productName_;
}

void CreateAccessWhiteListGroupRequest::setProductName(const std::string& productName)
{
	productName_ = productName;
	setParameter("ProductName", productName);
}

std::string CreateAccessWhiteListGroupRequest::getInstanceInfoList()const
{
	return instanceInfoList_;
}

void CreateAccessWhiteListGroupRequest::setInstanceInfoList(const std::string& instanceInfoList)
{
	instanceInfoList_ = instanceInfoList;
	setParameter("InstanceInfoList", instanceInfoList);
}

std::string CreateAccessWhiteListGroupRequest::getLang()const
{
	return lang_;
}

void CreateAccessWhiteListGroupRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

int CreateAccessWhiteListGroupRequest::getWhiteListType()const
{
	return whiteListType_;
}

void CreateAccessWhiteListGroupRequest::setWhiteListType(int whiteListType)
{
	whiteListType_ = whiteListType;
	setParameter("WhiteListType", std::to_string(whiteListType));
}

std::string CreateAccessWhiteListGroupRequest::getInstanceIdList()const
{
	return instanceIdList_;
}

void CreateAccessWhiteListGroupRequest::setInstanceIdList(const std::string& instanceIdList)
{
	instanceIdList_ = instanceIdList;
	setParameter("InstanceIdList", instanceIdList);
}

int CreateAccessWhiteListGroupRequest::getLiveTime()const
{
	return liveTime_;
}

void CreateAccessWhiteListGroupRequest::setLiveTime(int liveTime)
{
	liveTime_ = liveTime;
	setParameter("LiveTime", std::to_string(liveTime));
}

