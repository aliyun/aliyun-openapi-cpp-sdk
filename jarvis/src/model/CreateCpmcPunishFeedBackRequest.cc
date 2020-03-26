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
{
	setMethod(HttpRequest::Method::Post);
}

CreateCpmcPunishFeedBackRequest::~CreateCpmcPunishFeedBackRequest()
{}

std::string CreateCpmcPunishFeedBackRequest::getSrcIP()const
{
	return srcIP_;
}

void CreateCpmcPunishFeedBackRequest::setSrcIP(const std::string& srcIP)
{
	srcIP_ = srcIP;
	setParameter("SrcIP", srcIP);
}

int CreateCpmcPunishFeedBackRequest::getDstPort()const
{
	return dstPort_;
}

void CreateCpmcPunishFeedBackRequest::setDstPort(int dstPort)
{
	dstPort_ = dstPort;
	setParameter("DstPort", std::to_string(dstPort));
}

std::string CreateCpmcPunishFeedBackRequest::getProtocolName()const
{
	return protocolName_;
}

void CreateCpmcPunishFeedBackRequest::setProtocolName(const std::string& protocolName)
{
	protocolName_ = protocolName;
	setParameter("ProtocolName", protocolName);
}

std::string CreateCpmcPunishFeedBackRequest::getPunishType()const
{
	return punishType_;
}

void CreateCpmcPunishFeedBackRequest::setPunishType(const std::string& punishType)
{
	punishType_ = punishType;
	setParameter("PunishType", punishType);
}

std::string CreateCpmcPunishFeedBackRequest::getSourceCode()const
{
	return sourceCode_;
}

void CreateCpmcPunishFeedBackRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setParameter("SourceCode", sourceCode);
}

int CreateCpmcPunishFeedBackRequest::getFeedBack()const
{
	return feedBack_;
}

void CreateCpmcPunishFeedBackRequest::setFeedBack(int feedBack)
{
	feedBack_ = feedBack;
	setParameter("FeedBack", std::to_string(feedBack));
}

std::string CreateCpmcPunishFeedBackRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateCpmcPunishFeedBackRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string CreateCpmcPunishFeedBackRequest::getDstIP()const
{
	return dstIP_;
}

void CreateCpmcPunishFeedBackRequest::setDstIP(const std::string& dstIP)
{
	dstIP_ = dstIP;
	setParameter("DstIP", dstIP);
}

std::string CreateCpmcPunishFeedBackRequest::getLang()const
{
	return lang_;
}

void CreateCpmcPunishFeedBackRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string CreateCpmcPunishFeedBackRequest::getGmtCreate()const
{
	return gmtCreate_;
}

void CreateCpmcPunishFeedBackRequest::setGmtCreate(const std::string& gmtCreate)
{
	gmtCreate_ = gmtCreate;
	setParameter("GmtCreate", gmtCreate);
}

int CreateCpmcPunishFeedBackRequest::getSrcPort()const
{
	return srcPort_;
}

void CreateCpmcPunishFeedBackRequest::setSrcPort(int srcPort)
{
	srcPort_ = srcPort;
	setParameter("SrcPort", std::to_string(srcPort));
}

