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

#include <alibabacloud/aegis/model/DescribeWhiteListProcessRequest.h>

using AlibabaCloud::Aegis::Model::DescribeWhiteListProcessRequest;

DescribeWhiteListProcessRequest::DescribeWhiteListProcessRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeWhiteListProcess")
{}

DescribeWhiteListProcessRequest::~DescribeWhiteListProcessRequest()
{}

int DescribeWhiteListProcessRequest::getProcessType()const
{
	return processType_;
}

void DescribeWhiteListProcessRequest::setProcessType(int processType)
{
	processType_ = processType;
	setCoreParameter("ProcessType", std::to_string(processType));
}

std::string DescribeWhiteListProcessRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeWhiteListProcessRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeWhiteListProcessRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeWhiteListProcessRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeWhiteListProcessRequest::getLang()const
{
	return lang_;
}

void DescribeWhiteListProcessRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string DescribeWhiteListProcessRequest::getProcessName()const
{
	return processName_;
}

void DescribeWhiteListProcessRequest::setProcessName(const std::string& processName)
{
	processName_ = processName;
	setCoreParameter("ProcessName", processName);
}

int DescribeWhiteListProcessRequest::getOrderBy()const
{
	return orderBy_;
}

void DescribeWhiteListProcessRequest::setOrderBy(int orderBy)
{
	orderBy_ = orderBy;
	setCoreParameter("OrderBy", std::to_string(orderBy));
}

int DescribeWhiteListProcessRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeWhiteListProcessRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

long DescribeWhiteListProcessRequest::getStrategyId()const
{
	return strategyId_;
}

void DescribeWhiteListProcessRequest::setStrategyId(long strategyId)
{
	strategyId_ = strategyId;
	setCoreParameter("StrategyId", std::to_string(strategyId));
}

int DescribeWhiteListProcessRequest::getDesc()const
{
	return desc_;
}

void DescribeWhiteListProcessRequest::setDesc(int desc)
{
	desc_ = desc;
	setCoreParameter("Desc", std::to_string(desc));
}

