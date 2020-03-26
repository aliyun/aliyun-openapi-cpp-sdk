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

#include <alibabacloud/jarvis/model/DescribeResetRecordListRequest.h>

using AlibabaCloud::Jarvis::Model::DescribeResetRecordListRequest;

DescribeResetRecordListRequest::DescribeResetRecordListRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "DescribeResetRecordList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeResetRecordListRequest::~DescribeResetRecordListRequest()
{}

std::string DescribeResetRecordListRequest::getSrcIP()const
{
	return srcIP_;
}

void DescribeResetRecordListRequest::setSrcIP(const std::string& srcIP)
{
	srcIP_ = srcIP;
	setParameter("SrcIP", srcIP);
}

std::string DescribeResetRecordListRequest::getSourceCode()const
{
	return sourceCode_;
}

void DescribeResetRecordListRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setParameter("SourceCode", sourceCode);
}

std::string DescribeResetRecordListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeResetRecordListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeResetRecordListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeResetRecordListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeResetRecordListRequest::getDstIP()const
{
	return dstIP_;
}

void DescribeResetRecordListRequest::setDstIP(const std::string& dstIP)
{
	dstIP_ = dstIP;
	setParameter("DstIP", dstIP);
}

std::string DescribeResetRecordListRequest::getLang()const
{
	return lang_;
}

void DescribeResetRecordListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeResetRecordListRequest::getPeriod()const
{
	return period_;
}

void DescribeResetRecordListRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

int DescribeResetRecordListRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeResetRecordListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeResetRecordListRequest::getRegion()const
{
	return region_;
}

void DescribeResetRecordListRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

