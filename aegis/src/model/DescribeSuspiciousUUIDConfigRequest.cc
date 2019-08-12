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

#include <alibabacloud/aegis/model/DescribeSuspiciousUUIDConfigRequest.h>

using AlibabaCloud::Aegis::Model::DescribeSuspiciousUUIDConfigRequest;

DescribeSuspiciousUUIDConfigRequest::DescribeSuspiciousUUIDConfigRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeSuspiciousUUIDConfig")
{}

DescribeSuspiciousUUIDConfigRequest::~DescribeSuspiciousUUIDConfigRequest()
{}

std::string DescribeSuspiciousUUIDConfigRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeSuspiciousUUIDConfigRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

std::string DescribeSuspiciousUUIDConfigRequest::getLang()const
{
	return lang_;
}

void DescribeSuspiciousUUIDConfigRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

std::string DescribeSuspiciousUUIDConfigRequest::getType()const
{
	return type_;
}

void DescribeSuspiciousUUIDConfigRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", std::to_string(type));
}

