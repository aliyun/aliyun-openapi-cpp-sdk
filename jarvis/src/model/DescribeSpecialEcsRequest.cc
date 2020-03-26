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

#include <alibabacloud/jarvis/model/DescribeSpecialEcsRequest.h>

using AlibabaCloud::Jarvis::Model::DescribeSpecialEcsRequest;

DescribeSpecialEcsRequest::DescribeSpecialEcsRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "DescribeSpecialEcs")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSpecialEcsRequest::~DescribeSpecialEcsRequest()
{}

std::string DescribeSpecialEcsRequest::getSourceCode()const
{
	return sourceCode_;
}

void DescribeSpecialEcsRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setParameter("SourceCode", sourceCode);
}

std::string DescribeSpecialEcsRequest::getTargetIp()const
{
	return targetIp_;
}

void DescribeSpecialEcsRequest::setTargetIp(const std::string& targetIp)
{
	targetIp_ = targetIp;
	setParameter("TargetIp", targetIp);
}

std::string DescribeSpecialEcsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeSpecialEcsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeSpecialEcsRequest::getLang()const
{
	return lang_;
}

void DescribeSpecialEcsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

