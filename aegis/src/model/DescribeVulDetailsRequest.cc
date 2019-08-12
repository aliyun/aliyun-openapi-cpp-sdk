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

#include <alibabacloud/aegis/model/DescribeVulDetailsRequest.h>

using AlibabaCloud::Aegis::Model::DescribeVulDetailsRequest;

DescribeVulDetailsRequest::DescribeVulDetailsRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeVulDetails")
{}

DescribeVulDetailsRequest::~DescribeVulDetailsRequest()
{}

std::string DescribeVulDetailsRequest::getAliasName()const
{
	return aliasName_;
}

void DescribeVulDetailsRequest::setAliasName(const std::string& aliasName)
{
	aliasName_ = aliasName;
	setCoreParameter("AliasName", std::to_string(aliasName));
}

std::string DescribeVulDetailsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeVulDetailsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

std::string DescribeVulDetailsRequest::getName()const
{
	return name_;
}

void DescribeVulDetailsRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string DescribeVulDetailsRequest::getLang()const
{
	return lang_;
}

void DescribeVulDetailsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

std::string DescribeVulDetailsRequest::getType()const
{
	return type_;
}

void DescribeVulDetailsRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", std::to_string(type));
}

