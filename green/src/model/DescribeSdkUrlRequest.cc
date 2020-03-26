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

#include <alibabacloud/green/model/DescribeSdkUrlRequest.h>

using AlibabaCloud::Green::Model::DescribeSdkUrlRequest;

DescribeSdkUrlRequest::DescribeSdkUrlRequest() :
	RpcServiceRequest("green", "2017-08-23", "DescribeSdkUrl")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSdkUrlRequest::~DescribeSdkUrlRequest()
{}

bool DescribeSdkUrlRequest::getDebug()const
{
	return debug_;
}

void DescribeSdkUrlRequest::setDebug(bool debug)
{
	debug_ = debug;
	setParameter("Debug", debug ? "true" : "false");
}

std::string DescribeSdkUrlRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeSdkUrlRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

long DescribeSdkUrlRequest::getId()const
{
	return id_;
}

void DescribeSdkUrlRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

std::string DescribeSdkUrlRequest::getLang()const
{
	return lang_;
}

void DescribeSdkUrlRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

