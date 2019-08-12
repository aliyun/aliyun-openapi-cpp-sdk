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

#include <alibabacloud/aegis/model/DescribeAttackAnalysisDataRequest.h>

using AlibabaCloud::Aegis::Model::DescribeAttackAnalysisDataRequest;

DescribeAttackAnalysisDataRequest::DescribeAttackAnalysisDataRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeAttackAnalysisData")
{}

DescribeAttackAnalysisDataRequest::~DescribeAttackAnalysisDataRequest()
{}

std::string DescribeAttackAnalysisDataRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeAttackAnalysisDataRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

std::string DescribeAttackAnalysisDataRequest::getData()const
{
	return data_;
}

void DescribeAttackAnalysisDataRequest::setData(const std::string& data)
{
	data_ = data;
	setCoreParameter("Data", std::to_string(data));
}

std::string DescribeAttackAnalysisDataRequest::getBase64()const
{
	return base64_;
}

void DescribeAttackAnalysisDataRequest::setBase64(const std::string& base64)
{
	base64_ = base64;
	setCoreParameter("Base64", std::to_string(base64));
}

int DescribeAttackAnalysisDataRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAttackAnalysisDataRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

long DescribeAttackAnalysisDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeAttackAnalysisDataRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

int DescribeAttackAnalysisDataRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeAttackAnalysisDataRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

long DescribeAttackAnalysisDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeAttackAnalysisDataRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeAttackAnalysisDataRequest::getLang()const
{
	return lang_;
}

void DescribeAttackAnalysisDataRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

std::string DescribeAttackAnalysisDataRequest::getType()const
{
	return type_;
}

void DescribeAttackAnalysisDataRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", std::to_string(type));
}

