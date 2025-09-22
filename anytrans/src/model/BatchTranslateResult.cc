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

#include <alibabacloud/anytrans/model/BatchTranslateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AnyTrans;
using namespace AlibabaCloud::AnyTrans::Model;

BatchTranslateResult::BatchTranslateResult() :
	ServiceResult()
{}

BatchTranslateResult::BatchTranslateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchTranslateResult::~BatchTranslateResult()
{}

void BatchTranslateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["data"];
	auto alltranslationListNode = dataNode["translationList"]["translationListItem"];
	for (auto dataNodetranslationListtranslationListItem : alltranslationListNode)
	{
		Data::TranslationListItem translationListItemObject;
		if(!dataNodetranslationListtranslationListItem["code"].isNull())
			translationListItemObject.code = std::stol(dataNodetranslationListtranslationListItem["code"].asString());
		if(!dataNodetranslationListtranslationListItem["message"].isNull())
			translationListItemObject.message = dataNodetranslationListtranslationListItem["message"].asString();
		if(!dataNodetranslationListtranslationListItem["index"].isNull())
			translationListItemObject.index = dataNodetranslationListtranslationListItem["index"].asString();
		if(!dataNodetranslationListtranslationListItem["translation"].isNull())
			translationListItemObject.translation = dataNodetranslationListtranslationListItem["translation"].asString();
		auto usageNode = value["usage"];
		if(!usageNode["inputTokens"].isNull())
			translationListItemObject.usage.inputTokens = std::stol(usageNode["inputTokens"].asString());
		if(!usageNode["outputTokens"].isNull())
			translationListItemObject.usage.outputTokens = std::stol(usageNode["outputTokens"].asString());
		if(!usageNode["totalTokens"].isNull())
			translationListItemObject.usage.totalTokens = std::stol(usageNode["totalTokens"].asString());
		data_.translationList.push_back(translationListItemObject);
	}
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

std::string BatchTranslateResult::getMessage()const
{
	return message_;
}

std::string BatchTranslateResult::getRequestId()const
{
	return requestId_;
}

std::string BatchTranslateResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

BatchTranslateResult::Data BatchTranslateResult::getData()const
{
	return data_;
}

std::string BatchTranslateResult::getCode()const
{
	return code_;
}

bool BatchTranslateResult::getSuccess()const
{
	return success_;
}

