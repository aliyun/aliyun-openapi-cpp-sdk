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

#include <alibabacloud/yundun-ds/model/DescribeEventTypesRequest.h>

using AlibabaCloud::Yundun_ds::Model::DescribeEventTypesRequest;

DescribeEventTypesRequest::DescribeEventTypesRequest() :
	RpcServiceRequest("yundun-ds", "2019-01-03", "DescribeEventTypes")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeEventTypesRequest::~DescribeEventTypesRequest()
{}

long DescribeEventTypesRequest::getParentTypeId()const
{
	return parentTypeId_;
}

void DescribeEventTypesRequest::setParentTypeId(long parentTypeId)
{
	parentTypeId_ = parentTypeId;
	setParameter("ParentTypeId", std::to_string(parentTypeId));
}

std::string DescribeEventTypesRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeEventTypesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeEventTypesRequest::getLang()const
{
	return lang_;
}

void DescribeEventTypesRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

