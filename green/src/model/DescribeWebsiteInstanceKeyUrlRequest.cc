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

#include <alibabacloud/green/model/DescribeWebsiteInstanceKeyUrlRequest.h>

using AlibabaCloud::Green::Model::DescribeWebsiteInstanceKeyUrlRequest;

DescribeWebsiteInstanceKeyUrlRequest::DescribeWebsiteInstanceKeyUrlRequest() :
	RpcServiceRequest("green", "2017-08-23", "DescribeWebsiteInstanceKeyUrl")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeWebsiteInstanceKeyUrlRequest::~DescribeWebsiteInstanceKeyUrlRequest()
{}

std::string DescribeWebsiteInstanceKeyUrlRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeWebsiteInstanceKeyUrlRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeWebsiteInstanceKeyUrlRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeWebsiteInstanceKeyUrlRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeWebsiteInstanceKeyUrlRequest::getLang()const
{
	return lang_;
}

void DescribeWebsiteInstanceKeyUrlRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

