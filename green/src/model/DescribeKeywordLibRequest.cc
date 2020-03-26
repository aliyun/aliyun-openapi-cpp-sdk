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

#include <alibabacloud/green/model/DescribeKeywordLibRequest.h>

using AlibabaCloud::Green::Model::DescribeKeywordLibRequest;

DescribeKeywordLibRequest::DescribeKeywordLibRequest() :
	RpcServiceRequest("green", "2017-08-23", "DescribeKeywordLib")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeKeywordLibRequest::~DescribeKeywordLibRequest()
{}

std::string DescribeKeywordLibRequest::getServiceModule()const
{
	return serviceModule_;
}

void DescribeKeywordLibRequest::setServiceModule(const std::string& serviceModule)
{
	serviceModule_ = serviceModule;
	setParameter("ServiceModule", serviceModule);
}

std::string DescribeKeywordLibRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeKeywordLibRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeKeywordLibRequest::getLang()const
{
	return lang_;
}

void DescribeKeywordLibRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

