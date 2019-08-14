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

#include <alibabacloud/alimt/model/TranslateGeneralRequest.h>

using AlibabaCloud::Alimt::Model::TranslateGeneralRequest;

TranslateGeneralRequest::TranslateGeneralRequest() :
	RpcServiceRequest("alimt", "2018-10-12", "TranslateGeneral")
{}

TranslateGeneralRequest::~TranslateGeneralRequest()
{}

std::string TranslateGeneralRequest::getSourceLanguage()const
{
	return sourceLanguage_;
}

void TranslateGeneralRequest::setSourceLanguage(const std::string& sourceLanguage)
{
	sourceLanguage_ = sourceLanguage;
	setCoreParameter("SourceLanguage", sourceLanguage);
}

std::string TranslateGeneralRequest::getSourceText()const
{
	return sourceText_;
}

void TranslateGeneralRequest::setSourceText(const std::string& sourceText)
{
	sourceText_ = sourceText;
	setCoreParameter("SourceText", sourceText);
}

std::string TranslateGeneralRequest::getFormatType()const
{
	return formatType_;
}

void TranslateGeneralRequest::setFormatType(const std::string& formatType)
{
	formatType_ = formatType;
	setCoreParameter("FormatType", formatType);
}

std::string TranslateGeneralRequest::getTargetLanguage()const
{
	return targetLanguage_;
}

void TranslateGeneralRequest::setTargetLanguage(const std::string& targetLanguage)
{
	targetLanguage_ = targetLanguage;
	setCoreParameter("TargetLanguage", targetLanguage);
}

std::string TranslateGeneralRequest::getScene()const
{
	return scene_;
}

void TranslateGeneralRequest::setScene(const std::string& scene)
{
	scene_ = scene;
	setCoreParameter("Scene", scene);
}

