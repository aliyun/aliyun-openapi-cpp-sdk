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

#include <alibabacloud/anytrans/model/TextTranslateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AnyTrans;
using namespace AlibabaCloud::AnyTrans::Model;

TextTranslateResult::TextTranslateResult() :
	ServiceResult()
{}

TextTranslateResult::TextTranslateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

TextTranslateResult::~TextTranslateResult()
{}

void TextTranslateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["data"];
	if(!dataNode["translation"].isNull())
		data_.translation = dataNode["translation"].asString();
	auto usageNode = dataNode["usage"];
	if(!usageNode["inputTokens"].isNull())
		data_.usage.inputTokens = std::stol(usageNode["inputTokens"].asString());
	if(!usageNode["outputTokens"].isNull())
		data_.usage.outputTokens = std::stol(usageNode["outputTokens"].asString());
	if(!usageNode["totalTokens"].isNull())
		data_.usage.totalTokens = std::stol(usageNode["totalTokens"].asString());
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["httpStatusCode"].isNull())
		httpStatusCode_ = value["httpStatusCode"].asString();

}

std::string TextTranslateResult::getMessage()const
{
	return message_;
}

std::string TextTranslateResult::getRequestId()const
{
	return requestId_;
}

std::string TextTranslateResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

TextTranslateResult::Data TextTranslateResult::getData()const
{
	return data_;
}

std::string TextTranslateResult::getCode()const
{
	return code_;
}

bool TextTranslateResult::getSuccess()const
{
	return success_;
}

