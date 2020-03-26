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

#include <alibabacloud/jarvis/model/DescribeAccessWhiteListEipListRequest.h>

using AlibabaCloud::Jarvis::Model::DescribeAccessWhiteListEipListRequest;

DescribeAccessWhiteListEipListRequest::DescribeAccessWhiteListEipListRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "DescribeAccessWhiteListEipList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeAccessWhiteListEipListRequest::~DescribeAccessWhiteListEipListRequest()
{}

std::string DescribeAccessWhiteListEipListRequest::getSourceCode()const
{
	return sourceCode_;
}

void DescribeAccessWhiteListEipListRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setParameter("SourceCode", sourceCode);
}

std::string DescribeAccessWhiteListEipListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeAccessWhiteListEipListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeAccessWhiteListEipListRequest::getLang()const
{
	return lang_;
}

void DescribeAccessWhiteListEipListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

