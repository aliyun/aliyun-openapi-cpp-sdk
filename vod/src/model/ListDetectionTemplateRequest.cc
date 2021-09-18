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

#include <alibabacloud/vod/model/ListDetectionTemplateRequest.h>

using AlibabaCloud::Vod::Model::ListDetectionTemplateRequest;

ListDetectionTemplateRequest::ListDetectionTemplateRequest() :
	RpcServiceRequest("vod", "2017-03-21", "ListDetectionTemplate")
{
	setMethod(HttpRequest::Method::Get);
}

ListDetectionTemplateRequest::~ListDetectionTemplateRequest()
{}

std::string ListDetectionTemplateRequest::getPeriod()const
{
	return period_;
}

void ListDetectionTemplateRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

std::string ListDetectionTemplateRequest::getTemplateName()const
{
	return templateName_;
}

void ListDetectionTemplateRequest::setTemplateName(const std::string& templateName)
{
	templateName_ = templateName;
	setParameter("TemplateName", templateName);
}

std::string ListDetectionTemplateRequest::getLetterTemplateId()const
{
	return letterTemplateId_;
}

void ListDetectionTemplateRequest::setLetterTemplateId(const std::string& letterTemplateId)
{
	letterTemplateId_ = letterTemplateId;
	setParameter("LetterTemplateId", letterTemplateId);
}

