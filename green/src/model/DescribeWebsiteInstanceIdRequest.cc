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

#include <alibabacloud/green/model/DescribeWebsiteInstanceIdRequest.h>

using AlibabaCloud::Green::Model::DescribeWebsiteInstanceIdRequest;

DescribeWebsiteInstanceIdRequest::DescribeWebsiteInstanceIdRequest() :
	RpcServiceRequest("green", "2017-08-23", "DescribeWebsiteInstanceId")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeWebsiteInstanceIdRequest::~DescribeWebsiteInstanceIdRequest()
{}

std::string DescribeWebsiteInstanceIdRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeWebsiteInstanceIdRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeWebsiteInstanceIdRequest::getLang()const
{
	return lang_;
}

void DescribeWebsiteInstanceIdRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

