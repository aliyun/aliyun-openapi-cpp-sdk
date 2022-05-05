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

#include <alibabacloud/ocr/model/RecognizePdfResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ocr;
using namespace AlibabaCloud::Ocr::Model;

RecognizePdfResult::RecognizePdfResult() :
	ServiceResult()
{}

RecognizePdfResult::RecognizePdfResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RecognizePdfResult::~RecognizePdfResult()
{}

void RecognizePdfResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Height"].isNull())
		data_.height = std::stol(dataNode["Height"].asString());
	if(!dataNode["Width"].isNull())
		data_.width = std::stol(dataNode["Width"].asString());
	if(!dataNode["OrgHeight"].isNull())
		data_.orgHeight = std::stol(dataNode["OrgHeight"].asString());
	if(!dataNode["OrgWidth"].isNull())
		data_.orgWidth = std::stol(dataNode["OrgWidth"].asString());
	if(!dataNode["PageIndex"].isNull())
		data_.pageIndex = std::stol(dataNode["PageIndex"].asString());
	if(!dataNode["Angle"].isNull())
		data_.angle = std::stol(dataNode["Angle"].asString());
	auto allWordsInfoNode = dataNode["WordsInfo"]["wordsInfoItem"];
	for (auto dataNodeWordsInfowordsInfoItem : allWordsInfoNode)
	{
		Data::WordsInfoItem wordsInfoItemObject;
		if(!dataNodeWordsInfowordsInfoItem["Angle"].isNull())
			wordsInfoItemObject.angle = std::stol(dataNodeWordsInfowordsInfoItem["Angle"].asString());
		if(!dataNodeWordsInfowordsInfoItem["Word"].isNull())
			wordsInfoItemObject.word = dataNodeWordsInfowordsInfoItem["Word"].asString();
		if(!dataNodeWordsInfowordsInfoItem["Height"].isNull())
			wordsInfoItemObject.height = std::stol(dataNodeWordsInfowordsInfoItem["Height"].asString());
		if(!dataNodeWordsInfowordsInfoItem["Width"].isNull())
			wordsInfoItemObject.width = std::stol(dataNodeWordsInfowordsInfoItem["Width"].asString());
		if(!dataNodeWordsInfowordsInfoItem["X"].isNull())
			wordsInfoItemObject.x = std::stol(dataNodeWordsInfowordsInfoItem["X"].asString());
		if(!dataNodeWordsInfowordsInfoItem["Y"].isNull())
			wordsInfoItemObject.y = std::stol(dataNodeWordsInfowordsInfoItem["Y"].asString());
		auto allPositionsNode = dataNodeWordsInfowordsInfoItem["Positions"]["positionsItem"];
		for (auto dataNodeWordsInfowordsInfoItemPositionspositionsItem : allPositionsNode)
		{
			Data::WordsInfoItem::PositionsItem positionsObject;
			if(!dataNodeWordsInfowordsInfoItemPositionspositionsItem["X"].isNull())
				positionsObject.x = std::stol(dataNodeWordsInfowordsInfoItemPositionspositionsItem["X"].asString());
			if(!dataNodeWordsInfowordsInfoItemPositionspositionsItem["Y"].isNull())
				positionsObject.y = std::stol(dataNodeWordsInfowordsInfoItemPositionspositionsItem["Y"].asString());
			wordsInfoItemObject.positions.push_back(positionsObject);
		}
		data_.wordsInfo.push_back(wordsInfoItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string RecognizePdfResult::getMessage()const
{
	return message_;
}

RecognizePdfResult::Data RecognizePdfResult::getData()const
{
	return data_;
}

std::string RecognizePdfResult::getCode()const
{
	return code_;
}

