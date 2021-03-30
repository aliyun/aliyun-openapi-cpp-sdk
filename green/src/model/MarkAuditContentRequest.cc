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

#include <alibabacloud/green/model/MarkAuditContentRequest.h>

using AlibabaCloud::Green::Model::MarkAuditContentRequest;

MarkAuditContentRequest::MarkAuditContentRequest() :
	RpcServiceRequest("green", "2017-08-23", "MarkAuditContent")
{
	setMethod(HttpRequest::Method::Post);
}

MarkAuditContentRequest::~MarkAuditContentRequest()
{}

std::string MarkAuditContentRequest::getBizTypes()const
{
	return bizTypes_;
}

void MarkAuditContentRequest::setBizTypes(const std::string& bizTypes)
{
	bizTypes_ = bizTypes;
	setParameter("BizTypes", bizTypes);
}

std::string MarkAuditContentRequest::getAuditIllegalReasons()const
{
	return auditIllegalReasons_;
}

void MarkAuditContentRequest::setAuditIllegalReasons(const std::string& auditIllegalReasons)
{
	auditIllegalReasons_ = auditIllegalReasons;
	setParameter("AuditIllegalReasons", auditIllegalReasons);
}

std::string MarkAuditContentRequest::getSourceIp()const
{
	return sourceIp_;
}

void MarkAuditContentRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string MarkAuditContentRequest::getAuditResult()const
{
	return auditResult_;
}

void MarkAuditContentRequest::setAuditResult(const std::string& auditResult)
{
	auditResult_ = auditResult;
	setParameter("AuditResult", auditResult);
}

std::string MarkAuditContentRequest::getIds()const
{
	return ids_;
}

void MarkAuditContentRequest::setIds(const std::string& ids)
{
	ids_ = ids;
	setParameter("Ids", ids);
}

