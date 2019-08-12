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

#include <alibabacloud/jarvis/model/DescribePunishListRequest.h>

using AlibabaCloud::Jarvis::Model::DescribePunishListRequest;

DescribePunishListRequest::DescribePunishListRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "DescribePunishList")
{}

DescribePunishListRequest::~DescribePunishListRequest()
{}

std::string DescribePunishListRequest::getSrcIP()const
{
	return srcIP_;
}

void DescribePunishListRequest::setSrcIP(const std::string& srcIP)
{
	srcIP_ = srcIP;
	setCoreParameter("SrcIP", srcIP);
}

std::string DescribePunishListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribePunishListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribePunishListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribePunishListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

int DescribePunishListRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribePunishListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

std::string DescribePunishListRequest::getPunishStatus()const
{
	return punishStatus_;
}

void DescribePunishListRequest::setPunishStatus(const std::string& punishStatus)
{
	punishStatus_ = punishStatus;
	setCoreParameter("PunishStatus", punishStatus);
}

std::string DescribePunishListRequest::getLang()const
{
	return lang_;
}

void DescribePunishListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

long DescribePunishListRequest::getSrcUid()const
{
	return srcUid_;
}

void DescribePunishListRequest::setSrcUid(long srcUid)
{
	srcUid_ = srcUid;
	setCoreParameter("SrcUid", srcUid);
}

std::string DescribePunishListRequest::getSourceCode()const
{
	return sourceCode_;
}

void DescribePunishListRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setCoreParameter("SourceCode", sourceCode);
}

