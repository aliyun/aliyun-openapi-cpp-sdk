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

#include <alibabacloud/vod/model/UpdateDetectionTemplateRequest.h>

using AlibabaCloud::Vod::Model::UpdateDetectionTemplateRequest;

UpdateDetectionTemplateRequest::UpdateDetectionTemplateRequest() :
	RpcServiceRequest("vod", "2017-03-21", "UpdateDetectionTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateDetectionTemplateRequest::~UpdateDetectionTemplateRequest()
{}

std::string UpdateDetectionTemplateRequest::getLetterSendTime()const
{
	return letterSendTime_;
}

void UpdateDetectionTemplateRequest::setLetterSendTime(const std::string& letterSendTime)
{
	letterSendTime_ = letterSendTime;
	setParameter("LetterSendTime", letterSendTime);
}

bool UpdateDetectionTemplateRequest::getAutoLetterSuspect()const
{
	return autoLetterSuspect_;
}

void UpdateDetectionTemplateRequest::setAutoLetterSuspect(bool autoLetterSuspect)
{
	autoLetterSuspect_ = autoLetterSuspect;
	setParameter("AutoLetterSuspect", autoLetterSuspect ? "true" : "false");
}

std::string UpdateDetectionTemplateRequest::getPlatform()const
{
	return platform_;
}

void UpdateDetectionTemplateRequest::setPlatform(const std::string& platform)
{
	platform_ = platform;
	setParameter("Platform", platform);
}

bool UpdateDetectionTemplateRequest::getAutoLetter()const
{
	return autoLetter_;
}

void UpdateDetectionTemplateRequest::setAutoLetter(bool autoLetter)
{
	autoLetter_ = autoLetter;
	setParameter("AutoLetter", autoLetter ? "true" : "false");
}

std::string UpdateDetectionTemplateRequest::getTemplateName()const
{
	return templateName_;
}

void UpdateDetectionTemplateRequest::setTemplateName(const std::string& templateName)
{
	templateName_ = templateName;
	setParameter("TemplateName", templateName);
}

bool UpdateDetectionTemplateRequest::getAutoEvidence()const
{
	return autoEvidence_;
}

void UpdateDetectionTemplateRequest::setAutoEvidence(bool autoEvidence)
{
	autoEvidence_ = autoEvidence;
	setParameter("AutoEvidence", autoEvidence ? "true" : "false");
}

std::string UpdateDetectionTemplateRequest::getLetterTemplateId()const
{
	return letterTemplateId_;
}

void UpdateDetectionTemplateRequest::setLetterTemplateId(const std::string& letterTemplateId)
{
	letterTemplateId_ = letterTemplateId;
	setParameter("LetterTemplateId", letterTemplateId);
}

std::string UpdateDetectionTemplateRequest::getPeriod()const
{
	return period_;
}

void UpdateDetectionTemplateRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

bool UpdateDetectionTemplateRequest::getAutoEvidenceSuspect()const
{
	return autoEvidenceSuspect_;
}

void UpdateDetectionTemplateRequest::setAutoEvidenceSuspect(bool autoEvidenceSuspect)
{
	autoEvidenceSuspect_ = autoEvidenceSuspect;
	setParameter("AutoEvidenceSuspect", autoEvidenceSuspect ? "true" : "false");
}

std::string UpdateDetectionTemplateRequest::getTemplateId()const
{
	return templateId_;
}

void UpdateDetectionTemplateRequest::setTemplateId(const std::string& templateId)
{
	templateId_ = templateId;
	setParameter("TemplateId", templateId);
}

