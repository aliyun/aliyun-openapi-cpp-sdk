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

#include <alibabacloud/vod/model/CreateDetectionTemplateRequest.h>

using AlibabaCloud::Vod::Model::CreateDetectionTemplateRequest;

CreateDetectionTemplateRequest::CreateDetectionTemplateRequest() :
	RpcServiceRequest("vod", "2017-03-21", "CreateDetectionTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDetectionTemplateRequest::~CreateDetectionTemplateRequest()
{}

std::string CreateDetectionTemplateRequest::getPeriod()const
{
	return period_;
}

void CreateDetectionTemplateRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

bool CreateDetectionTemplateRequest::getAutoEvidenceSuspect()const
{
	return autoEvidenceSuspect_;
}

void CreateDetectionTemplateRequest::setAutoEvidenceSuspect(bool autoEvidenceSuspect)
{
	autoEvidenceSuspect_ = autoEvidenceSuspect;
	setParameter("AutoEvidenceSuspect", autoEvidenceSuspect ? "true" : "false");
}

std::string CreateDetectionTemplateRequest::getLetterSendTime()const
{
	return letterSendTime_;
}

void CreateDetectionTemplateRequest::setLetterSendTime(const std::string& letterSendTime)
{
	letterSendTime_ = letterSendTime;
	setParameter("LetterSendTime", letterSendTime);
}

bool CreateDetectionTemplateRequest::getAutoLetterSuspect()const
{
	return autoLetterSuspect_;
}

void CreateDetectionTemplateRequest::setAutoLetterSuspect(bool autoLetterSuspect)
{
	autoLetterSuspect_ = autoLetterSuspect;
	setParameter("AutoLetterSuspect", autoLetterSuspect ? "true" : "false");
}

std::string CreateDetectionTemplateRequest::getPlatform()const
{
	return platform_;
}

void CreateDetectionTemplateRequest::setPlatform(const std::string& platform)
{
	platform_ = platform;
	setParameter("Platform", platform);
}

bool CreateDetectionTemplateRequest::getAutoLetter()const
{
	return autoLetter_;
}

void CreateDetectionTemplateRequest::setAutoLetter(bool autoLetter)
{
	autoLetter_ = autoLetter;
	setParameter("AutoLetter", autoLetter ? "true" : "false");
}

std::string CreateDetectionTemplateRequest::getTemplateName()const
{
	return templateName_;
}

void CreateDetectionTemplateRequest::setTemplateName(const std::string& templateName)
{
	templateName_ = templateName;
	setParameter("TemplateName", templateName);
}

bool CreateDetectionTemplateRequest::getAutoEvidence()const
{
	return autoEvidence_;
}

void CreateDetectionTemplateRequest::setAutoEvidence(bool autoEvidence)
{
	autoEvidence_ = autoEvidence;
	setParameter("AutoEvidence", autoEvidence ? "true" : "false");
}

std::string CreateDetectionTemplateRequest::getLetterTemplateId()const
{
	return letterTemplateId_;
}

void CreateDetectionTemplateRequest::setLetterTemplateId(const std::string& letterTemplateId)
{
	letterTemplateId_ = letterTemplateId;
	setParameter("LetterTemplateId", letterTemplateId);
}

