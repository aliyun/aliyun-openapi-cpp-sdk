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

#include <alibabacloud/jarvis/model/DescribeUidWhiteBaselineRequest.h>

using AlibabaCloud::Jarvis::Model::DescribeUidWhiteBaselineRequest;

DescribeUidWhiteBaselineRequest::DescribeUidWhiteBaselineRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "DescribeUidWhiteBaseline")
{}

DescribeUidWhiteBaselineRequest::~DescribeUidWhiteBaselineRequest()
{}

std::string DescribeUidWhiteBaselineRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeUidWhiteBaselineRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeUidWhiteBaselineRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeUidWhiteBaselineRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

int DescribeUidWhiteBaselineRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeUidWhiteBaselineRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeUidWhiteBaselineRequest::getRemark()const
{
	return remark_;
}

void DescribeUidWhiteBaselineRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", remark);
}

std::string DescribeUidWhiteBaselineRequest::getLang()const
{
	return lang_;
}

void DescribeUidWhiteBaselineRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

long DescribeUidWhiteBaselineRequest::getSrcUid()const
{
	return srcUid_;
}

void DescribeUidWhiteBaselineRequest::setSrcUid(long srcUid)
{
	srcUid_ = srcUid;
	setCoreParameter("SrcUid", std::to_string(srcUid));
}

std::string DescribeUidWhiteBaselineRequest::getSourceCode()const
{
	return sourceCode_;
}

void DescribeUidWhiteBaselineRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setCoreParameter("SourceCode", sourceCode);
}

std::string DescribeUidWhiteBaselineRequest::getStatus()const
{
	return status_;
}

void DescribeUidWhiteBaselineRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

