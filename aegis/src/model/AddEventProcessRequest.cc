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

#include <alibabacloud/aegis/model/AddEventProcessRequest.h>

using AlibabaCloud::Aegis::Model::AddEventProcessRequest;

AddEventProcessRequest::AddEventProcessRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "AddEventProcess")
{}

AddEventProcessRequest::~AddEventProcessRequest()
{}

std::string AddEventProcessRequest::getSuspiciousEventIds()const
{
	return suspiciousEventIds_;
}

void AddEventProcessRequest::setSuspiciousEventIds(const std::string& suspiciousEventIds)
{
	suspiciousEventIds_ = suspiciousEventIds;
	setCoreParameter("SuspiciousEventIds", suspiciousEventIds);
}

std::string AddEventProcessRequest::getSourceIp()const
{
	return sourceIp_;
}

void AddEventProcessRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string AddEventProcessRequest::getWarningType()const
{
	return warningType_;
}

void AddEventProcessRequest::setWarningType(const std::string& warningType)
{
	warningType_ = warningType;
	setCoreParameter("WarningType", warningType);
}

std::string AddEventProcessRequest::getFrom()const
{
	return from_;
}

void AddEventProcessRequest::setFrom(const std::string& from)
{
	from_ = from;
	setCoreParameter("From", from);
}

std::string AddEventProcessRequest::getLang()const
{
	return lang_;
}

void AddEventProcessRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

