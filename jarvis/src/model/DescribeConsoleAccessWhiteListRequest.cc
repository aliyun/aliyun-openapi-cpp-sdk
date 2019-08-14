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

#include <alibabacloud/jarvis/model/DescribeConsoleAccessWhiteListRequest.h>

using AlibabaCloud::Jarvis::Model::DescribeConsoleAccessWhiteListRequest;

DescribeConsoleAccessWhiteListRequest::DescribeConsoleAccessWhiteListRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "DescribeConsoleAccessWhiteList")
{}

DescribeConsoleAccessWhiteListRequest::~DescribeConsoleAccessWhiteListRequest()
{}

std::string DescribeConsoleAccessWhiteListRequest::getSrcIP()const
{
	return srcIP_;
}

void DescribeConsoleAccessWhiteListRequest::setSrcIP(const std::string& srcIP)
{
	srcIP_ = srcIP;
	setCoreParameter("SrcIP", srcIP);
}

std::string DescribeConsoleAccessWhiteListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeConsoleAccessWhiteListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeConsoleAccessWhiteListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeConsoleAccessWhiteListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeConsoleAccessWhiteListRequest::getQueryProduct()const
{
	return queryProduct_;
}

void DescribeConsoleAccessWhiteListRequest::setQueryProduct(const std::string& queryProduct)
{
	queryProduct_ = queryProduct;
	setCoreParameter("QueryProduct", queryProduct);
}

int DescribeConsoleAccessWhiteListRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeConsoleAccessWhiteListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

int DescribeConsoleAccessWhiteListRequest::getWhiteListType()const
{
	return whiteListType_;
}

void DescribeConsoleAccessWhiteListRequest::setWhiteListType(int whiteListType)
{
	whiteListType_ = whiteListType;
	setCoreParameter("WhiteListType", std::to_string(whiteListType));
}

std::string DescribeConsoleAccessWhiteListRequest::getDstIP()const
{
	return dstIP_;
}

void DescribeConsoleAccessWhiteListRequest::setDstIP(const std::string& dstIP)
{
	dstIP_ = dstIP;
	setCoreParameter("DstIP", dstIP);
}

std::string DescribeConsoleAccessWhiteListRequest::getLang()const
{
	return lang_;
}

void DescribeConsoleAccessWhiteListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string DescribeConsoleAccessWhiteListRequest::getStatus()const
{
	return status_;
}

void DescribeConsoleAccessWhiteListRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

std::string DescribeConsoleAccessWhiteListRequest::getSourceCode()const
{
	return sourceCode_;
}

void DescribeConsoleAccessWhiteListRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setCoreParameter("SourceCode", sourceCode);
}

