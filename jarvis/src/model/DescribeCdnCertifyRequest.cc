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

#include <alibabacloud/jarvis/model/DescribeCdnCertifyRequest.h>

using AlibabaCloud::Jarvis::Model::DescribeCdnCertifyRequest;

DescribeCdnCertifyRequest::DescribeCdnCertifyRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "DescribeCdnCertify")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCdnCertifyRequest::~DescribeCdnCertifyRequest()
{}

std::string DescribeCdnCertifyRequest::getSourceCode()const
{
	return sourceCode_;
}

void DescribeCdnCertifyRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setParameter("SourceCode", sourceCode);
}

std::string DescribeCdnCertifyRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeCdnCertifyRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeCdnCertifyRequest::getLang()const
{
	return lang_;
}

void DescribeCdnCertifyRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

