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

#include <alibabacloud/aegis/model/DescribeScreenSecurityStatInfoRequest.h>

using AlibabaCloud::Aegis::Model::DescribeScreenSecurityStatInfoRequest;

DescribeScreenSecurityStatInfoRequest::DescribeScreenSecurityStatInfoRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeScreenSecurityStatInfo")
{}

DescribeScreenSecurityStatInfoRequest::~DescribeScreenSecurityStatInfoRequest()
{}

std::string DescribeScreenSecurityStatInfoRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeScreenSecurityStatInfoRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeScreenSecurityStatInfoRequest::getLang()const
{
	return lang_;
}

void DescribeScreenSecurityStatInfoRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

