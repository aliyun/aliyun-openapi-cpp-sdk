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

#include <alibabacloud/aegis/model/DescribeScreenAttackAnalysisDataRequest.h>

using AlibabaCloud::Aegis::Model::DescribeScreenAttackAnalysisDataRequest;

DescribeScreenAttackAnalysisDataRequest::DescribeScreenAttackAnalysisDataRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeScreenAttackAnalysisData")
{}

DescribeScreenAttackAnalysisDataRequest::~DescribeScreenAttackAnalysisDataRequest()
{}

std::string DescribeScreenAttackAnalysisDataRequest::getData()const
{
	return data_;
}

void DescribeScreenAttackAnalysisDataRequest::setData(const std::string& data)
{
	data_ = data;
	setCoreParameter("Data", data);
}

std::string DescribeScreenAttackAnalysisDataRequest::getBase64()const
{
	return base64_;
}

void DescribeScreenAttackAnalysisDataRequest::setBase64(const std::string& base64)
{
	base64_ = base64;
	setCoreParameter("Base64", base64);
}

long DescribeScreenAttackAnalysisDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeScreenAttackAnalysisDataRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string DescribeScreenAttackAnalysisDataRequest::getType()const
{
	return type_;
}

void DescribeScreenAttackAnalysisDataRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string DescribeScreenAttackAnalysisDataRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeScreenAttackAnalysisDataRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeScreenAttackAnalysisDataRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeScreenAttackAnalysisDataRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeScreenAttackAnalysisDataRequest::getLang()const
{
	return lang_;
}

void DescribeScreenAttackAnalysisDataRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

long DescribeScreenAttackAnalysisDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeScreenAttackAnalysisDataRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

int DescribeScreenAttackAnalysisDataRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeScreenAttackAnalysisDataRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

