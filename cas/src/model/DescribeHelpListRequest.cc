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

#include <alibabacloud/cas/model/DescribeHelpListRequest.h>

using AlibabaCloud::Cas::Model::DescribeHelpListRequest;

DescribeHelpListRequest::DescribeHelpListRequest() :
	RpcServiceRequest("cas", "2018-08-13", "DescribeHelpList")
{}

DescribeHelpListRequest::~DescribeHelpListRequest()
{}

std::string DescribeHelpListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeHelpListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeHelpListRequest::getCategory()const
{
	return category_;
}

void DescribeHelpListRequest::setCategory(const std::string& category)
{
	category_ = category;
	setCoreParameter("Category", category);
}

std::string DescribeHelpListRequest::getLang()const
{
	return lang_;
}

void DescribeHelpListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

