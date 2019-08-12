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

#include <alibabacloud/jarvis/model/DescribeUidWhiteListGroupRequest.h>

using AlibabaCloud::Jarvis::Model::DescribeUidWhiteListGroupRequest;

DescribeUidWhiteListGroupRequest::DescribeUidWhiteListGroupRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "DescribeUidWhiteListGroup")
{}

DescribeUidWhiteListGroupRequest::~DescribeUidWhiteListGroupRequest()
{}

std::string DescribeUidWhiteListGroupRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeUidWhiteListGroupRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

int DescribeUidWhiteListGroupRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeUidWhiteListGroupRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

int DescribeUidWhiteListGroupRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeUidWhiteListGroupRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

int DescribeUidWhiteListGroupRequest::getWhiteListType()const
{
	return whiteListType_;
}

void DescribeUidWhiteListGroupRequest::setWhiteListType(int whiteListType)
{
	whiteListType_ = whiteListType;
	setCoreParameter("WhiteListType", whiteListType);
}

std::string DescribeUidWhiteListGroupRequest::getDstIP()const
{
	return dstIP_;
}

void DescribeUidWhiteListGroupRequest::setDstIP(const std::string& dstIP)
{
	dstIP_ = dstIP;
	setCoreParameter("DstIP", std::to_string(dstIP));
}

std::string DescribeUidWhiteListGroupRequest::getLang()const
{
	return lang_;
}

void DescribeUidWhiteListGroupRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

std::string DescribeUidWhiteListGroupRequest::getSrcUid()const
{
	return srcUid_;
}

void DescribeUidWhiteListGroupRequest::setSrcUid(const std::string& srcUid)
{
	srcUid_ = srcUid;
	setCoreParameter("SrcUid", std::to_string(srcUid));
}

std::string DescribeUidWhiteListGroupRequest::getStatus()const
{
	return status_;
}

void DescribeUidWhiteListGroupRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", std::to_string(status));
}

std::string DescribeUidWhiteListGroupRequest::getSourceCode()const
{
	return sourceCode_;
}

void DescribeUidWhiteListGroupRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setCoreParameter("SourceCode", std::to_string(sourceCode));
}

