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

#include <alibabacloud/aegis/model/DescribeChartListRequest.h>

using AlibabaCloud::Aegis::Model::DescribeChartListRequest;

DescribeChartListRequest::DescribeChartListRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeChartList")
{}

DescribeChartListRequest::~DescribeChartListRequest()
{}

std::string DescribeChartListRequest::getProjectCode()const
{
	return projectCode_;
}

void DescribeChartListRequest::setProjectCode(const std::string& projectCode)
{
	projectCode_ = projectCode;
	setCoreParameter("ProjectCode", projectCode);
}

std::string DescribeChartListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeChartListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeChartListRequest::getLang()const
{
	return lang_;
}

void DescribeChartListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

