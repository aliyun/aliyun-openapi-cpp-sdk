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

#include <alibabacloud/green/model/MarkAuditContentItemRequest.h>

using AlibabaCloud::Green::Model::MarkAuditContentItemRequest;

MarkAuditContentItemRequest::MarkAuditContentItemRequest() :
	RpcServiceRequest("green", "2017-08-23", "MarkAuditContentItem")
{}

MarkAuditContentItemRequest::~MarkAuditContentItemRequest()
{}

std::string MarkAuditContentItemRequest::getAuditIllegalReasons()const
{
	return auditIllegalReasons_;
}

void MarkAuditContentItemRequest::setAuditIllegalReasons(const std::string& auditIllegalReasons)
{
	auditIllegalReasons_ = auditIllegalReasons;
	setCoreParameter("AuditIllegalReasons", std::to_string(auditIllegalReasons));
}

std::string MarkAuditContentItemRequest::getSourceIp()const
{
	return sourceIp_;
}

void MarkAuditContentItemRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

std::string MarkAuditContentItemRequest::getAuditResult()const
{
	return auditResult_;
}

void MarkAuditContentItemRequest::setAuditResult(const std::string& auditResult)
{
	auditResult_ = auditResult;
	setCoreParameter("AuditResult", std::to_string(auditResult));
}

std::string MarkAuditContentItemRequest::getIds()const
{
	return ids_;
}

void MarkAuditContentItemRequest::setIds(const std::string& ids)
{
	ids_ = ids;
	setCoreParameter("Ids", std::to_string(ids));
}

std::string MarkAuditContentItemRequest::getLang()const
{
	return lang_;
}

void MarkAuditContentItemRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

