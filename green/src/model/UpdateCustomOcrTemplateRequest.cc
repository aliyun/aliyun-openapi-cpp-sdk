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

#include <alibabacloud/green/model/UpdateCustomOcrTemplateRequest.h>

using AlibabaCloud::Green::Model::UpdateCustomOcrTemplateRequest;

UpdateCustomOcrTemplateRequest::UpdateCustomOcrTemplateRequest() :
	RpcServiceRequest("green", "2017-08-23", "UpdateCustomOcrTemplate")
{}

UpdateCustomOcrTemplateRequest::~UpdateCustomOcrTemplateRequest()
{}

std::string UpdateCustomOcrTemplateRequest::getSourceIp()const
{
	return sourceIp_;
}

void UpdateCustomOcrTemplateRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

std::string UpdateCustomOcrTemplateRequest::getReferArea()const
{
	return referArea_;
}

void UpdateCustomOcrTemplateRequest::setReferArea(const std::string& referArea)
{
	referArea_ = referArea;
	setCoreParameter("ReferArea", std::to_string(referArea));
}

std::string UpdateCustomOcrTemplateRequest::getRecognizeArea()const
{
	return recognizeArea_;
}

void UpdateCustomOcrTemplateRequest::setRecognizeArea(const std::string& recognizeArea)
{
	recognizeArea_ = recognizeArea;
	setCoreParameter("RecognizeArea", std::to_string(recognizeArea));
}

std::string UpdateCustomOcrTemplateRequest::getName()const
{
	return name_;
}

void UpdateCustomOcrTemplateRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

long UpdateCustomOcrTemplateRequest::getId()const
{
	return id_;
}

void UpdateCustomOcrTemplateRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

