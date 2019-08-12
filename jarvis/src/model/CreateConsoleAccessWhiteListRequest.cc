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
{}

CreateConsoleAccessWhiteListRequest::~CreateConsoleAccessWhiteListRequest()
{}

std::string CreateConsoleAccessWhiteListRequest::getNote()const
{
	return note_;
}

void CreateConsoleAccessWhiteListRequest::setNote(const std::string& note)
{
	note_ = note;
	setCoreParameter("Note", note);
}

long CreateConsoleAccessWhiteListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateConsoleAccessWhiteListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateConsoleAccessWhiteListRequest::getSrcIP()const
{
	return srcIP_;
}

void CreateConsoleAccessWhiteListRequest::setSrcIP(const std::string& srcIP)
{
	srcIP_ = srcIP;
	setCoreParameter("SrcIP", srcIP);
}

std::string CreateConsoleAccessWhiteListRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateConsoleAccessWhiteListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int CreateConsoleAccessWhiteListRequest::getDstPort()const
{
	return dstPort_;
}

void CreateConsoleAccessWhiteListRequest::setDstPort(int dstPort)
{
	dstPort_ = dstPort;
	setCoreParameter("DstPort", std::to_string(dstPort));
}

std::string CreateConsoleAccessWhiteListRequest::getInstanceIdList()const
{
	return instanceIdList_;
}

void CreateConsoleAccessWhiteListRequest::setInstanceIdList(const std::string& instanceIdList)
{
	instanceIdList_ = instanceIdList;
	setCoreParameter("InstanceIdList", instanceIdList);
}

int CreateConsoleAccessWhiteListRequest::getLiveTime()const
{
	return liveTime_;
}

void CreateConsoleAccessWhiteListRequest::setLiveTime(int liveTime)
{
	liveTime_ = liveTime;
	setCoreParameter("LiveTime", std::to_string(liveTime));
}

std::string CreateConsoleAccessWhiteListRequest::getProductName()const
{
	return productName_;
}

void CreateConsoleAccessWhiteListRequest::setProductName(const std::string& productName)
{
	productName_ = productName;
	setCoreParameter("ProductName", productName);
}

int CreateConsoleAccessWhiteListRequest::getWhiteListType()const
{
	return whiteListType_;
}

void CreateConsoleAccessWhiteListRequest::setWhiteListType(int whiteListType)
{
	whiteListType_ = whiteListType;
	setCoreParameter("WhiteListType", std::to_string(whiteListType));
}

std::string CreateConsoleAccessWhiteListRequest::getInstanceInfoList()const
{
	return instanceInfoList_;
}

void CreateConsoleAccessWhiteListRequest::setInstanceInfoList(const std::string& instanceInfoList)
{
	instanceInfoList_ = instanceInfoList;
	setCoreParameter("InstanceInfoList", instanceInfoList);
}

std::string CreateConsoleAccessWhiteListRequest::getLang()const
{
	return lang_;
}

void CreateConsoleAccessWhiteListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string CreateConsoleAccessWhiteListRequest::getSourceCode()const
{
	return sourceCode_;
}

void CreateConsoleAccessWhiteListRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setCoreParameter("SourceCode", sourceCode);
}

