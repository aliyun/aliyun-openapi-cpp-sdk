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

#include <alibabacloud/jarvis/model/DescribeUidGcLevelRequest.h>

using AlibabaCloud::Jarvis::Model::DescribeUidGcLevelRequest;

DescribeUidGcLevelRequest::DescribeUidGcLevelRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "DescribeUidGcLevel")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeUidGcLevelRequest::~DescribeUidGcLevelRequest()
{}

std::string DescribeUidGcLevelRequest::getSourceCode()const
{
	return sourceCode_;
}

void DescribeUidGcLevelRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setParameter("SourceCode", sourceCode);
}

std::string DescribeUidGcLevelRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeUidGcLevelRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeUidGcLevelRequest::getLang()const
{
	return lang_;
}

void DescribeUidGcLevelRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

