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

#include <alibabacloud/aegis/model/DescribeCheckWarningDetailRequest.h>

using AlibabaCloud::Aegis::Model::DescribeCheckWarningDetailRequest;

DescribeCheckWarningDetailRequest::DescribeCheckWarningDetailRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeCheckWarningDetail")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCheckWarningDetailRequest::~DescribeCheckWarningDetailRequest()
{}

std::string DescribeCheckWarningDetailRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeCheckWarningDetailRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeCheckWarningDetailRequest::getLang()const
{
	return lang_;
}

void DescribeCheckWarningDetailRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

long DescribeCheckWarningDetailRequest::getCheckWarningId()const
{
	return checkWarningId_;
}

void DescribeCheckWarningDetailRequest::setCheckWarningId(long checkWarningId)
{
	checkWarningId_ = checkWarningId;
	setCoreParameter("CheckWarningId", std::to_string(checkWarningId));
}

