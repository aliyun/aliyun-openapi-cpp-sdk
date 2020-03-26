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

#include <alibabacloud/green/model/DescribeWebsiteIndexPageBaselineRequest.h>

using AlibabaCloud::Green::Model::DescribeWebsiteIndexPageBaselineRequest;

DescribeWebsiteIndexPageBaselineRequest::DescribeWebsiteIndexPageBaselineRequest() :
	RpcServiceRequest("green", "2017-08-23", "DescribeWebsiteIndexPageBaseline")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeWebsiteIndexPageBaselineRequest::~DescribeWebsiteIndexPageBaselineRequest()
{}

std::string DescribeWebsiteIndexPageBaselineRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeWebsiteIndexPageBaselineRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeWebsiteIndexPageBaselineRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeWebsiteIndexPageBaselineRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeWebsiteIndexPageBaselineRequest::getLang()const
{
	return lang_;
}

void DescribeWebsiteIndexPageBaselineRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

