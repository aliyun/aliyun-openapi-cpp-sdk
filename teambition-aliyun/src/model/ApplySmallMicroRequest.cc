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

#include <alibabacloud/teambition-aliyun/model/ApplySmallMicroRequest.h>

using AlibabaCloud::Teambition_aliyun::Model::ApplySmallMicroRequest;

ApplySmallMicroRequest::ApplySmallMicroRequest() :
	RpcServiceRequest("teambition-aliyun", "2020-02-26", "ApplySmallMicro")
{
	setMethod(HttpRequest::Method::Post);
}

ApplySmallMicroRequest::~ApplySmallMicroRequest()
{}

std::string ApplySmallMicroRequest::getApplicantEmail()const
{
	return applicantEmail_;
}

void ApplySmallMicroRequest::setApplicantEmail(const std::string& applicantEmail)
{
	applicantEmail_ = applicantEmail;
	setBodyParameter("ApplicantEmail", applicantEmail);
}

std::string ApplySmallMicroRequest::getDevelopScale()const
{
	return developScale_;
}

void ApplySmallMicroRequest::setDevelopScale(const std::string& developScale)
{
	developScale_ = developScale;
	setParameter("DevelopScale", developScale);
}

std::string ApplySmallMicroRequest::getType()const
{
	return type_;
}

void ApplySmallMicroRequest::setType(const std::string& type)
{
	type_ = type;
	setBodyParameter("Type", type);
}

std::string ApplySmallMicroRequest::getOrgId()const
{
	return orgId_;
}

void ApplySmallMicroRequest::setOrgId(const std::string& orgId)
{
	orgId_ = orgId;
	setBodyParameter("OrgId", orgId);
}

std::string ApplySmallMicroRequest::getApplicantPosition()const
{
	return applicantPosition_;
}

void ApplySmallMicroRequest::setApplicantPosition(const std::string& applicantPosition)
{
	applicantPosition_ = applicantPosition;
	setBodyParameter("ApplicantPosition", applicantPosition);
}

std::string ApplySmallMicroRequest::getDevelopLanguage()const
{
	return developLanguage_;
}

void ApplySmallMicroRequest::setDevelopLanguage(const std::string& developLanguage)
{
	developLanguage_ = developLanguage;
	setBodyParameter("DevelopLanguage", developLanguage);
}

std::string ApplySmallMicroRequest::getOrgName()const
{
	return orgName_;
}

void ApplySmallMicroRequest::setOrgName(const std::string& orgName)
{
	orgName_ = orgName;
	setBodyParameter("OrgName", orgName);
}

std::string ApplySmallMicroRequest::getApplicantTel()const
{
	return applicantTel_;
}

void ApplySmallMicroRequest::setApplicantTel(const std::string& applicantTel)
{
	applicantTel_ = applicantTel;
	setBodyParameter("ApplicantTel", applicantTel);
}

std::string ApplySmallMicroRequest::getSolution()const
{
	return solution_;
}

void ApplySmallMicroRequest::setSolution(const std::string& solution)
{
	solution_ = solution;
	setBodyParameter("Solution", solution);
}

std::string ApplySmallMicroRequest::getForHelp()const
{
	return forHelp_;
}

void ApplySmallMicroRequest::setForHelp(const std::string& forHelp)
{
	forHelp_ = forHelp;
	setBodyParameter("ForHelp", forHelp);
}

std::string ApplySmallMicroRequest::getApplicantName()const
{
	return applicantName_;
}

void ApplySmallMicroRequest::setApplicantName(const std::string& applicantName)
{
	applicantName_ = applicantName;
	setBodyParameter("ApplicantName", applicantName);
}

std::string ApplySmallMicroRequest::getBusinessModel()const
{
	return businessModel_;
}

void ApplySmallMicroRequest::setBusinessModel(const std::string& businessModel)
{
	businessModel_ = businessModel;
	setBodyParameter("BusinessModel", businessModel);
}

