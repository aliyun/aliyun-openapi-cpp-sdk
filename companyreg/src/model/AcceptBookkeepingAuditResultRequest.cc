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

#include <alibabacloud/companyreg/model/AcceptBookkeepingAuditResultRequest.h>

using AlibabaCloud::Companyreg::Model::AcceptBookkeepingAuditResultRequest;

AcceptBookkeepingAuditResultRequest::AcceptBookkeepingAuditResultRequest() :
	RpcServiceRequest("companyreg", "2019-05-08", "AcceptBookkeepingAuditResult")
{
	setMethod(HttpRequest::Method::Post);
}

AcceptBookkeepingAuditResultRequest::~AcceptBookkeepingAuditResultRequest()
{}

std::string AcceptBookkeepingAuditResultRequest::getNote()const
{
	return note_;
}

void AcceptBookkeepingAuditResultRequest::setNote(const std::string& note)
{
	note_ = note;
	setParameter("Note", note);
}

std::string AcceptBookkeepingAuditResultRequest::getOrgCode()const
{
	return orgCode_;
}

void AcceptBookkeepingAuditResultRequest::setOrgCode(const std::string& orgCode)
{
	orgCode_ = orgCode;
	setParameter("OrgCode", orgCode);
}

std::string AcceptBookkeepingAuditResultRequest::getOrgAddress()const
{
	return orgAddress_;
}

void AcceptBookkeepingAuditResultRequest::setOrgAddress(const std::string& orgAddress)
{
	orgAddress_ = orgAddress;
	setParameter("OrgAddress", orgAddress);
}

std::string AcceptBookkeepingAuditResultRequest::getOrgName()const
{
	return orgName_;
}

void AcceptBookkeepingAuditResultRequest::setOrgName(const std::string& orgName)
{
	orgName_ = orgName;
	setParameter("OrgName", orgName);
}

long AcceptBookkeepingAuditResultRequest::getServiceStartTime()const
{
	return serviceStartTime_;
}

void AcceptBookkeepingAuditResultRequest::setServiceStartTime(long serviceStartTime)
{
	serviceStartTime_ = serviceStartTime;
	setParameter("ServiceStartTime", std::to_string(serviceStartTime));
}

bool AcceptBookkeepingAuditResultRequest::getAuditResult()const
{
	return auditResult_;
}

void AcceptBookkeepingAuditResultRequest::setAuditResult(bool auditResult)
{
	auditResult_ = auditResult;
	setParameter("AuditResult", auditResult ? "true" : "false");
}

std::string AcceptBookkeepingAuditResultRequest::getBizId()const
{
	return bizId_;
}

void AcceptBookkeepingAuditResultRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

std::string AcceptBookkeepingAuditResultRequest::getOrgMobile()const
{
	return orgMobile_;
}

void AcceptBookkeepingAuditResultRequest::setOrgMobile(const std::string& orgMobile)
{
	orgMobile_ = orgMobile;
	setParameter("OrgMobile", orgMobile);
}

