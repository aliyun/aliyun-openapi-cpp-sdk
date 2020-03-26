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

#include <alibabacloud/green/model/CreatCustomOcrTemplateRequest.h>

using AlibabaCloud::Green::Model::CreatCustomOcrTemplateRequest;

CreatCustomOcrTemplateRequest::CreatCustomOcrTemplateRequest() :
	RpcServiceRequest("green", "2017-08-23", "CreatCustomOcrTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

CreatCustomOcrTemplateRequest::~CreatCustomOcrTemplateRequest()
{}

std::string CreatCustomOcrTemplateRequest::getRecognizeArea()const
{
	return recognizeArea_;
}

void CreatCustomOcrTemplateRequest::setRecognizeArea(const std::string& recognizeArea)
{
	recognizeArea_ = recognizeArea;
	setParameter("RecognizeArea", recognizeArea);
}

std::string CreatCustomOcrTemplateRequest::getImgUrl()const
{
	return imgUrl_;
}

void CreatCustomOcrTemplateRequest::setImgUrl(const std::string& imgUrl)
{
	imgUrl_ = imgUrl;
	setParameter("ImgUrl", imgUrl);
}

std::string CreatCustomOcrTemplateRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreatCustomOcrTemplateRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string CreatCustomOcrTemplateRequest::getReferArea()const
{
	return referArea_;
}

void CreatCustomOcrTemplateRequest::setReferArea(const std::string& referArea)
{
	referArea_ = referArea;
	setParameter("ReferArea", referArea);
}

std::string CreatCustomOcrTemplateRequest::getName()const
{
	return name_;
}

void CreatCustomOcrTemplateRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

