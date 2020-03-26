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

#include <alibabacloud/hiknoengine/model/TranslateTextRequest.h>

using AlibabaCloud::Hiknoengine::Model::TranslateTextRequest;

TranslateTextRequest::TranslateTextRequest() :
	RpcServiceRequest("hiknoengine", "2019-06-25", "TranslateText")
{
	setMethod(HttpRequest::Method::Post);
}

TranslateTextRequest::~TranslateTextRequest()
{}

std::string TranslateTextRequest::getFromLang()const
{
	return fromLang_;
}

void TranslateTextRequest::setFromLang(const std::string& fromLang)
{
	fromLang_ = fromLang;
	setBodyParameter("FromLang", fromLang);
}

std::string TranslateTextRequest::getToLang()const
{
	return toLang_;
}

void TranslateTextRequest::setToLang(const std::string& toLang)
{
	toLang_ = toLang;
	setBodyParameter("ToLang", toLang);
}

std::string TranslateTextRequest::getText()const
{
	return text_;
}

void TranslateTextRequest::setText(const std::string& text)
{
	text_ = text;
	setBodyParameter("Text", text);
}

