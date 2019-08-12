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

#include <alibabacloud/jarvis/model/CreateCpmcPunishFeedBackRequest.h>

using AlibabaCloud::Jarvis::Model::CreateCpmcPunishFeedBackRequest;

CreateCpmcPunishFeedBackRequest::CreateCpmcPunishFeedBackRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "CreateCpmcPunishFeedBack")
{}

CreateCpmcPunishFeedBackRequest::~CreateCpmcPunishFeedBackRequest()
{}

int CreateCpmcPunishFeedBackRequest::getFeedBack()const
{
	return feedBack_;
}

void CreateCpmcPunishFeedBackRequest::setFeedBack(int feedBack)
{
	feedBack_ = feedBack;
	setCoreParameter("FeedBack", feedBack);
}

std::string CreateCpmcPunishFeedBackRequest::getSrcIP()const
{
	return srcIP_;
}

void CreateCpmcPunishFeedBackRequest::setSrcIP(const std::string& srcIP)
{
	srcIP_ = srcIP;
	setCoreParameter("SrcIP", std::to_string(srcIP));
}

std::string CreateCpmcPunishFeedBackRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateCpmcPunishFeedBackRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

int CreateCpmcPunishFeedBackRequest::getDstPort()const
{
	return dstPort_;
}

void CreateCpmcPunishFeedBackRequest::setDstPort(int dstPort)
{
	dstPort_ = dstPort;
	setCoreParameter("DstPort", dstPort);
}

std::string CreateCpmcPunishFeedBackRequest::getProtocolName()const
{
	return protocolName_;
}

void CreateCpmcPunishFeedBackRequest::setProtocolName(const std::string& protocolName)
{
	protocolName_ = protocolName;
	setCoreParameter("ProtocolName", std::to_string(protocolName));
}

int CreateCpmcPunishFeedBackRequest::getSrcPort()const
{
	return srcPort_;
}

void CreateCpmcPunishFeedBackRequest::setSrcPort(int srcPort)
{
	srcPort_ = srcPort;
	setCoreParameter("SrcPort", srcPort);
}

std::string CreateCpmcPunishFeedBackRequest::getPunishType()const
{
	return punishType_;
}

void CreateCpmcPunishFeedBackRequest::setPunishType(const std::string& punishType)
{
	punishType_ = punishType;
	setCoreParameter("PunishType", std::to_string(punishType));
}

std::string CreateCpmcPunishFeedBackRequest::getGmtCreate()const
{
	return gmtCreate_;
}

void CreateCpmcPunishFeedBackRequest::setGmtCreate(const std::string& gmtCreate)
{
	gmtCreate_ = gmtCreate;
	setCoreParameter("GmtCreate", std::to_string(gmtCreate));
}

std::string CreateCpmcPunishFeedBackRequest::getDstIP()const
{
	return dstIP_;
}

void CreateCpmcPunishFeedBackRequest::setDstIP(const std::string& dstIP)
{
	dstIP_ = dstIP;
	setCoreParameter("DstIP", std::to_string(dstIP));
}

std::string CreateCpmcPunishFeedBackRequest::getLang()const
{
	return lang_;
}

void CreateCpmcPunishFeedBackRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

std::string CreateCpmcPunishFeedBackRequest::getSourceCode()const
{
	return sourceCode_;
}

void CreateCpmcPunishFeedBackRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setCoreParameter("SourceCode", std::to_string(sourceCode));
}

