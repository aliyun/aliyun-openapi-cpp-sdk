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

#include <alibabacloud/aegis/model/DescribeSearchConditionRequest.h>

using AlibabaCloud::Aegis::Model::DescribeSearchConditionRequest;

DescribeSearchConditionRequest::DescribeSearchConditionRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeSearchCondition")
{}

DescribeSearchConditionRequest::~DescribeSearchConditionRequest()
{}

std::string DescribeSearchConditionRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeSearchConditionRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeSearchConditionRequest::getLang()const
{
	return lang_;
}

void DescribeSearchConditionRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

