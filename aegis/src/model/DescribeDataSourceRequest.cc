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

#include <alibabacloud/aegis/model/DescribeDataSourceRequest.h>

using AlibabaCloud::Aegis::Model::DescribeDataSourceRequest;

DescribeDataSourceRequest::DescribeDataSourceRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeDataSource")
{}

DescribeDataSourceRequest::~DescribeDataSourceRequest()
{}

std::string DescribeDataSourceRequest::getConfigType()const
{
	return configType_;
}

void DescribeDataSourceRequest::setConfigType(const std::string& configType)
{
	configType_ = configType;
	setCoreParameter("ConfigType", configType);
}

std::string DescribeDataSourceRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeDataSourceRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeDataSourceRequest::getLang()const
{
	return lang_;
}

void DescribeDataSourceRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

