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

#include <alibabacloud/jarvis/model/CreateConsoleAccessWhiteListRequest.h>

using AlibabaCloud::Jarvis::Model::CreateConsoleAccessWhiteListRequest;

CreateConsoleAccessWhiteListRequest::CreateConsoleAccessWhiteListRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "CreateConsoleAccessWhiteList")
{
	setMethod(HttpRequest::Method::Post);
}

CreateConsoleAccessWhiteListRequest::~CreateConsoleAccessWhiteListRequest()
{}

std::string CreateConsoleAccessWhiteListRequest::getNote()const
{
	return note_;
}

void CreateConsoleAccessWhiteListRequest::setNote(const std::string& note)
{
	note_ = note;
	setParameter("Note", note);
}

long CreateConsoleAccessWhiteListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateConsoleAccessWhiteListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateConsoleAccessWhiteListRequest::getSrcIP()const
{
	return srcIP_;
}

void CreateConsoleAccessWhiteListRequest::setSrcIP(const std::string& srcIP)
{
	srcIP_ = srcIP;
	setParameter("SrcIP", srcIP);
}

int CreateConsoleAccessWhiteListRequest::getDstPort()const
{
	return dstPort_;
}

void CreateConsoleAccessWhiteListRequest::setDstPort(int dstPort)
{
	dstPort_ = dstPort;
	setParameter("DstPort", std::to_string(dstPort));
}

std::string CreateConsoleAccessWhiteListRequest::getSourceCode()const
{
	return sourceCode_;
}

void CreateConsoleAccessWhiteListRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setParameter("SourceCode", sourceCode);
}

std::string CreateConsoleAccessWhiteListRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateConsoleAccessWhiteListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string CreateConsoleAccessWhiteListRequest::getProductName()const
{
	return productName_;
}

void CreateConsoleAccessWhiteListRequest::setProductName(const std::string& productName)
{
	productName_ = productName;
	setParameter("ProductName", productName);
}

std::string CreateConsoleAccessWhiteListRequest::getInstanceInfoList()const
{
	return instanceInfoList_;
}

void CreateConsoleAccessWhiteListRequest::setInstanceInfoList(const std::string& instanceInfoList)
{
	instanceInfoList_ = instanceInfoList;
	setParameter("InstanceInfoList", instanceInfoList);
}

std::string CreateConsoleAccessWhiteListRequest::getLang()const
{
	return lang_;
}

void CreateConsoleAccessWhiteListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

int CreateConsoleAccessWhiteListRequest::getWhiteListType()const
{
	return whiteListType_;
}

void CreateConsoleAccessWhiteListRequest::setWhiteListType(int whiteListType)
{
	whiteListType_ = whiteListType;
	setParameter("WhiteListType", std::to_string(whiteListType));
}

std::string CreateConsoleAccessWhiteListRequest::getInstanceIdList()const
{
	return instanceIdList_;
}

void CreateConsoleAccessWhiteListRequest::setInstanceIdList(const std::string& instanceIdList)
{
	instanceIdList_ = instanceIdList;
	setParameter("InstanceIdList", instanceIdList);
}

int CreateConsoleAccessWhiteListRequest::getLiveTime()const
{
	return liveTime_;
}

void CreateConsoleAccessWhiteListRequest::setLiveTime(int liveTime)
{
	liveTime_ = liveTime;
	setParameter("LiveTime", std::to_string(liveTime));
}

