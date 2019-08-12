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

#include <alibabacloud/sas/model/DescribeAlarmEventDetailRequest.h>

using AlibabaCloud::Sas::Model::DescribeAlarmEventDetailRequest;

DescribeAlarmEventDetailRequest::DescribeAlarmEventDetailRequest() :
	RpcServiceRequest("sas", "2018-12-03", "DescribeAlarmEventDetail")
{}

DescribeAlarmEventDetailRequest::~DescribeAlarmEventDetailRequest()
{}

std::string DescribeAlarmEventDetailRequest::getAlarmUniqueInfo()const
{
	return alarmUniqueInfo_;
}

void DescribeAlarmEventDetailRequest::setAlarmUniqueInfo(const std::string& alarmUniqueInfo)
{
	alarmUniqueInfo_ = alarmUniqueInfo;
	setCoreParameter("AlarmUniqueInfo", std::to_string(alarmUniqueInfo));
}

std::string DescribeAlarmEventDetailRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeAlarmEventDetailRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

std::string DescribeAlarmEventDetailRequest::getFrom()const
{
	return from_;
}

void DescribeAlarmEventDetailRequest::setFrom(const std::string& from)
{
	from_ = from;
	setCoreParameter("From", std::to_string(from));
}

std::string DescribeAlarmEventDetailRequest::getLang()const
{
	return lang_;
}

void DescribeAlarmEventDetailRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

