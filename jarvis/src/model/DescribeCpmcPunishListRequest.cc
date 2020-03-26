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

#include <alibabacloud/jarvis/model/DescribeCpmcPunishListRequest.h>

using AlibabaCloud::Jarvis::Model::DescribeCpmcPunishListRequest;

DescribeCpmcPunishListRequest::DescribeCpmcPunishListRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "DescribeCpmcPunishList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCpmcPunishListRequest::~DescribeCpmcPunishListRequest()
{}

std::string DescribeCpmcPunishListRequest::getSrcIP()const
{
	return srcIP_;
}

void DescribeCpmcPunishListRequest::setSrcIP(const std::string& srcIP)
{
	srcIP_ = srcIP;
	setParameter("SrcIP", srcIP);
}

std::string DescribeCpmcPunishListRequest::getPunishType()const
{
	return punishType_;
}

void DescribeCpmcPunishListRequest::setPunishType(const std::string& punishType)
{
	punishType_ = punishType;
	setParameter("PunishType", punishType);
}

std::string DescribeCpmcPunishListRequest::getSourceCode()const
{
	return sourceCode_;
}

void DescribeCpmcPunishListRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setParameter("SourceCode", sourceCode);
}

std::string DescribeCpmcPunishListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeCpmcPunishListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeCpmcPunishListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCpmcPunishListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeCpmcPunishListRequest::getPunishStatus()const
{
	return punishStatus_;
}

void DescribeCpmcPunishListRequest::setPunishStatus(const std::string& punishStatus)
{
	punishStatus_ = punishStatus;
	setParameter("PunishStatus", punishStatus);
}

std::string DescribeCpmcPunishListRequest::getLang()const
{
	return lang_;
}

void DescribeCpmcPunishListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

int DescribeCpmcPunishListRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeCpmcPunishListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeCpmcPunishListRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeCpmcPunishListRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

