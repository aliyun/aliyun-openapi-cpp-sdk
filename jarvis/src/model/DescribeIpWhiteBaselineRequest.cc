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

#include <alibabacloud/jarvis/model/DescribeIpWhiteBaselineRequest.h>

using AlibabaCloud::Jarvis::Model::DescribeIpWhiteBaselineRequest;

DescribeIpWhiteBaselineRequest::DescribeIpWhiteBaselineRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "DescribeIpWhiteBaseline")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeIpWhiteBaselineRequest::~DescribeIpWhiteBaselineRequest()
{}

std::string DescribeIpWhiteBaselineRequest::getSrcIp()const
{
	return srcIp_;
}

void DescribeIpWhiteBaselineRequest::setSrcIp(const std::string& srcIp)
{
	srcIp_ = srcIp;
	setParameter("SrcIp", srcIp);
}

std::string DescribeIpWhiteBaselineRequest::getRemark()const
{
	return remark_;
}

void DescribeIpWhiteBaselineRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setParameter("Remark", remark);
}

std::string DescribeIpWhiteBaselineRequest::getSourceCode()const
{
	return sourceCode_;
}

void DescribeIpWhiteBaselineRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setParameter("SourceCode", sourceCode);
}

std::string DescribeIpWhiteBaselineRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeIpWhiteBaselineRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeIpWhiteBaselineRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeIpWhiteBaselineRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeIpWhiteBaselineRequest::getLang()const
{
	return lang_;
}

void DescribeIpWhiteBaselineRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

int DescribeIpWhiteBaselineRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeIpWhiteBaselineRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeIpWhiteBaselineRequest::getStatus()const
{
	return status_;
}

void DescribeIpWhiteBaselineRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

