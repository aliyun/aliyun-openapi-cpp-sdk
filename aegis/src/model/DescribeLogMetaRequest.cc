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

#include <alibabacloud/aegis/model/DescribeLogMetaRequest.h>

using AlibabaCloud::Aegis::Model::DescribeLogMetaRequest;

DescribeLogMetaRequest::DescribeLogMetaRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeLogMeta")
{}

DescribeLogMetaRequest::~DescribeLogMetaRequest()
{}

std::string DescribeLogMetaRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeLogMetaRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeLogMetaRequest::getFrom()const
{
	return from_;
}

void DescribeLogMetaRequest::setFrom(const std::string& from)
{
	from_ = from;
	setCoreParameter("From", from);
}

std::string DescribeLogMetaRequest::getLang()const
{
	return lang_;
}

void DescribeLogMetaRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

