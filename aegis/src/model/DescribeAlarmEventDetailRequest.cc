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

#include <alibabacloud/aegis/model/DescribeAlarmEventDetailRequest.h>

using AlibabaCloud::Aegis::Model::DescribeAlarmEventDetailRequest;

DescribeAlarmEventDetailRequest::DescribeAlarmEventDetailRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeAlarmEventDetail")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeAlarmEventDetailRequest::~DescribeAlarmEventDetailRequest()
{}

std::string DescribeAlarmEventDetailRequest::getAlarmUniqueInfo()const
{
	return alarmUniqueInfo_;
}

void DescribeAlarmEventDetailRequest::setAlarmUniqueInfo(const std::string& alarmUniqueInfo)
{
	alarmUniqueInfo_ = alarmUniqueInfo;
	setParameter("AlarmUniqueInfo", alarmUniqueInfo);
}

std::string DescribeAlarmEventDetailRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeAlarmEventDetailRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeAlarmEventDetailRequest::getFrom()const
{
	return from_;
}

void DescribeAlarmEventDetailRequest::setFrom(const std::string& from)
{
	from_ = from;
	setParameter("From", from);
}

std::string DescribeAlarmEventDetailRequest::getLang()const
{
	return lang_;
}

void DescribeAlarmEventDetailRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

