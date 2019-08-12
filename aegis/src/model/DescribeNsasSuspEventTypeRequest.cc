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

#include <alibabacloud/aegis/model/DescribeNsasSuspEventTypeRequest.h>

using AlibabaCloud::Aegis::Model::DescribeNsasSuspEventTypeRequest;

DescribeNsasSuspEventTypeRequest::DescribeNsasSuspEventTypeRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeNsasSuspEventType")
{}

DescribeNsasSuspEventTypeRequest::~DescribeNsasSuspEventTypeRequest()
{}

std::string DescribeNsasSuspEventTypeRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeNsasSuspEventTypeRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeNsasSuspEventTypeRequest::getName()const
{
	return name_;
}

void DescribeNsasSuspEventTypeRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string DescribeNsasSuspEventTypeRequest::getRemark()const
{
	return remark_;
}

void DescribeNsasSuspEventTypeRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", remark);
}

std::string DescribeNsasSuspEventTypeRequest::getFrom()const
{
	return from_;
}

void DescribeNsasSuspEventTypeRequest::setFrom(const std::string& from)
{
	from_ = from;
	setCoreParameter("From", from);
}

std::string DescribeNsasSuspEventTypeRequest::getLang()const
{
	return lang_;
}

void DescribeNsasSuspEventTypeRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

