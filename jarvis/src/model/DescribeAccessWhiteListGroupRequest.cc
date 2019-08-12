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

#include <alibabacloud/jarvis/model/DescribeAccessWhiteListGroupRequest.h>

using AlibabaCloud::Jarvis::Model::DescribeAccessWhiteListGroupRequest;

DescribeAccessWhiteListGroupRequest::DescribeAccessWhiteListGroupRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "DescribeAccessWhiteListGroup")
{}

DescribeAccessWhiteListGroupRequest::~DescribeAccessWhiteListGroupRequest()
{}

std::string DescribeAccessWhiteListGroupRequest::getSrcIP()const
{
	return srcIP_;
}

void DescribeAccessWhiteListGroupRequest::setSrcIP(const std::string& srcIP)
{
	srcIP_ = srcIP;
	setCoreParameter("SrcIP", std::to_string(srcIP));
}

std::string DescribeAccessWhiteListGroupRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeAccessWhiteListGroupRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

int DescribeAccessWhiteListGroupRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAccessWhiteListGroupRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeAccessWhiteListGroupRequest::getQueryProduct()const
{
	return queryProduct_;
}

void DescribeAccessWhiteListGroupRequest::setQueryProduct(const std::string& queryProduct)
{
	queryProduct_ = queryProduct;
	setCoreParameter("QueryProduct", std::to_string(queryProduct));
}

int DescribeAccessWhiteListGroupRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeAccessWhiteListGroupRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

int DescribeAccessWhiteListGroupRequest::getWhiteListType()const
{
	return whiteListType_;
}

void DescribeAccessWhiteListGroupRequest::setWhiteListType(int whiteListType)
{
	whiteListType_ = whiteListType;
	setCoreParameter("WhiteListType", whiteListType);
}

std::string DescribeAccessWhiteListGroupRequest::getDstIP()const
{
	return dstIP_;
}

void DescribeAccessWhiteListGroupRequest::setDstIP(const std::string& dstIP)
{
	dstIP_ = dstIP;
	setCoreParameter("DstIP", std::to_string(dstIP));
}

std::string DescribeAccessWhiteListGroupRequest::getLang()const
{
	return lang_;
}

void DescribeAccessWhiteListGroupRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

std::string DescribeAccessWhiteListGroupRequest::getStatus()const
{
	return status_;
}

void DescribeAccessWhiteListGroupRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", std::to_string(status));
}

std::string DescribeAccessWhiteListGroupRequest::getSourceCode()const
{
	return sourceCode_;
}

void DescribeAccessWhiteListGroupRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setCoreParameter("SourceCode", std::to_string(sourceCode));
}

