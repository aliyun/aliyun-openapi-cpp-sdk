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
{
	setMethod(HttpRequest::Method::Post);
}

DescribeConsoleAccessWhiteListRequest::~DescribeConsoleAccessWhiteListRequest()
{}

std::string DescribeConsoleAccessWhiteListRequest::getSrcIP()const
{
	return srcIP_;
}

void DescribeConsoleAccessWhiteListRequest::setSrcIP(const std::string& srcIP)
{
	srcIP_ = srcIP;
	setParameter("SrcIP", srcIP);
}

std::string DescribeConsoleAccessWhiteListRequest::getSourceCode()const
{
	return sourceCode_;
}

void DescribeConsoleAccessWhiteListRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setParameter("SourceCode", sourceCode);
}

std::string DescribeConsoleAccessWhiteListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeConsoleAccessWhiteListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeConsoleAccessWhiteListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeConsoleAccessWhiteListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeConsoleAccessWhiteListRequest::getDstIP()const
{
	return dstIP_;
}

void DescribeConsoleAccessWhiteListRequest::setDstIP(const std::string& dstIP)
{
	dstIP_ = dstIP;
	setParameter("DstIP", dstIP);
}

std::string DescribeConsoleAccessWhiteListRequest::getLang()const
{
	return lang_;
}

void DescribeConsoleAccessWhiteListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

int DescribeConsoleAccessWhiteListRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeConsoleAccessWhiteListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

int DescribeConsoleAccessWhiteListRequest::getWhiteListType()const
{
	return whiteListType_;
}

void DescribeConsoleAccessWhiteListRequest::setWhiteListType(int whiteListType)
{
	whiteListType_ = whiteListType;
	setParameter("WhiteListType", std::to_string(whiteListType));
}

std::string DescribeConsoleAccessWhiteListRequest::getQueryProduct()const
{
	return queryProduct_;
}

void DescribeConsoleAccessWhiteListRequest::setQueryProduct(const std::string& queryProduct)
{
	queryProduct_ = queryProduct;
	setParameter("QueryProduct", queryProduct);
}

std::string DescribeConsoleAccessWhiteListRequest::getStatus()const
{
	return status_;
}

void DescribeConsoleAccessWhiteListRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

