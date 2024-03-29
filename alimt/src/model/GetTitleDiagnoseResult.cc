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

#include <alibabacloud/alimt/model/GetTitleDiagnoseResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alimt;
using namespace AlibabaCloud::Alimt::Model;

GetTitleDiagnoseResult::GetTitleDiagnoseResult() :
	ServiceResult()
{}

GetTitleDiagnoseResult::GetTitleDiagnoseResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTitleDiagnoseResult::~GetTitleDiagnoseResult()
{}

void GetTitleDiagnoseResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["DuplicateWords"].isNull())
		data_.duplicateWords = dataNode["DuplicateWords"].asString();
	if(!dataNode["ContainCoreClasses"].isNull())
		data_.containCoreClasses = dataNode["ContainCoreClasses"].asString();
	if(!dataNode["WordCount"].isNull())
		data_.wordCount = dataNode["WordCount"].asString();
	if(!dataNode["LanguageQualityScore"].isNull())
		data_.languageQualityScore = dataNode["LanguageQualityScore"].asString();
	if(!dataNode["AllUppercaseWords"].isNull())
		data_.allUppercaseWords = dataNode["AllUppercaseWords"].asString();
	if(!dataNode["OverLengthLimit"].isNull())
		data_.overLengthLimit = dataNode["OverLengthLimit"].asString();
	if(!dataNode["DisableWords"].isNull())
		data_.disableWords = dataNode["DisableWords"].asString();
	if(!dataNode["NoFirstUppercaseList"].isNull())
		data_.noFirstUppercaseList = dataNode["NoFirstUppercaseList"].asString();
	if(!dataNode["TotalScore"].isNull())
		data_.totalScore = dataNode["TotalScore"].asString();
	if(!dataNode["WordSpelledCorrectError"].isNull())
		data_.wordSpelledCorrectError = dataNode["WordSpelledCorrectError"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetTitleDiagnoseResult::getMessage()const
{
	return message_;
}

GetTitleDiagnoseResult::Data GetTitleDiagnoseResult::getData()const
{
	return data_;
}

int GetTitleDiagnoseResult::getCode()const
{
	return code_;
}

