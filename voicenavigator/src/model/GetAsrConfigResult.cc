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

#include <alibabacloud/voicenavigator/model/GetAsrConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::VoiceNavigator;
using namespace AlibabaCloud::VoiceNavigator::Model;

GetAsrConfigResult::GetAsrConfigResult() :
	ServiceResult()
{}

GetAsrConfigResult::GetAsrConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAsrConfigResult::~GetAsrConfigResult()
{}

void GetAsrConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AsrVocabularyId"].isNull())
		data_.asrVocabularyId = dataNode["AsrVocabularyId"].asString();
	if(!dataNode["AsrCustomizationId"].isNull())
		data_.asrCustomizationId = dataNode["AsrCustomizationId"].asString();
	if(!dataNode["AsrAcousticModelId"].isNull())
		data_.asrAcousticModelId = dataNode["AsrAcousticModelId"].asString();
	if(!dataNode["AsrClassVocabularyId"].isNull())
		data_.asrClassVocabularyId = dataNode["AsrClassVocabularyId"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();

}

int GetAsrConfigResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetAsrConfigResult::getErrorMsg()const
{
	return errorMsg_;
}

GetAsrConfigResult::Data GetAsrConfigResult::getData()const
{
	return data_;
}

std::string GetAsrConfigResult::getCode()const
{
	return code_;
}

bool GetAsrConfigResult::getSuccess()const
{
	return success_;
}

