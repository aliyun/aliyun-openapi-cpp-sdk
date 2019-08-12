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

#include <alibabacloud/jarvis/model/CreateUidWhiteListGroupRequest.h>

using AlibabaCloud::Jarvis::Model::CreateUidWhiteListGroupRequest;

CreateUidWhiteListGroupRequest::CreateUidWhiteListGroupRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "CreateUidWhiteListGroup")
{}

CreateUidWhiteListGroupRequest::~CreateUidWhiteListGroupRequest()
{}

std::string CreateUidWhiteListGroupRequest::getNote()const
{
	return note_;
}

void CreateUidWhiteListGroupRequest::setNote(const std::string& note)
{
	note_ = note;
	setCoreParameter("Note", std::to_string(note));
}

long CreateUidWhiteListGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateUidWhiteListGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateUidWhiteListGroupRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateUidWhiteListGroupRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

int CreateUidWhiteListGroupRequest::getDstPort()const
{
	return dstPort_;
}

void CreateUidWhiteListGroupRequest::setDstPort(int dstPort)
{
	dstPort_ = dstPort;
	setCoreParameter("DstPort", dstPort);
}

std::string CreateUidWhiteListGroupRequest::getInstanceIdList()const
{
	return instanceIdList_;
}

void CreateUidWhiteListGroupRequest::setInstanceIdList(const std::string& instanceIdList)
{
	instanceIdList_ = instanceIdList;
	setCoreParameter("InstanceIdList", std::to_string(instanceIdList));
}

int CreateUidWhiteListGroupRequest::getLiveTime()const
{
	return liveTime_;
}

void CreateUidWhiteListGroupRequest::setLiveTime(int liveTime)
{
	liveTime_ = liveTime;
	setCoreParameter("LiveTime", liveTime);
}

std::string CreateUidWhiteListGroupRequest::getProductName()const
{
	return productName_;
}

void CreateUidWhiteListGroupRequest::setProductName(const std::string& productName)
{
	productName_ = productName;
	setCoreParameter("ProductName", std::to_string(productName));
}

int CreateUidWhiteListGroupRequest::getWhiteListType()const
{
	return whiteListType_;
}

void CreateUidWhiteListGroupRequest::setWhiteListType(int whiteListType)
{
	whiteListType_ = whiteListType;
	setCoreParameter("WhiteListType", whiteListType);
}

std::string CreateUidWhiteListGroupRequest::getLang()const
{
	return lang_;
}

void CreateUidWhiteListGroupRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

std::string CreateUidWhiteListGroupRequest::getSrcUid()const
{
	return srcUid_;
}

void CreateUidWhiteListGroupRequest::setSrcUid(const std::string& srcUid)
{
	srcUid_ = srcUid;
	setCoreParameter("SrcUid", std::to_string(srcUid));
}

std::string CreateUidWhiteListGroupRequest::getSourceCode()const
{
	return sourceCode_;
}

void CreateUidWhiteListGroupRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setCoreParameter("SourceCode", std::to_string(sourceCode));
}

