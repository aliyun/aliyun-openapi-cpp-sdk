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

#include <alibabacloud/qualitycheck/model/InsertScoreForApiResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

InsertScoreForApiResult::InsertScoreForApiResult() :
	ServiceResult()
{}

InsertScoreForApiResult::InsertScoreForApiResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

InsertScoreForApiResult::~InsertScoreForApiResult()
{}

void InsertScoreForApiResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ScoreId"].isNull())
		data_.scoreId = std::stol(dataNode["ScoreId"].asString());
	if(!dataNode["ScoreName"].isNull())
		data_.scoreName = dataNode["ScoreName"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string InsertScoreForApiResult::getMessage()const
{
	return message_;
}

InsertScoreForApiResult::Data InsertScoreForApiResult::getData()const
{
	return data_;
}

std::string InsertScoreForApiResult::getCode()const
{
	return code_;
}

bool InsertScoreForApiResult::getSuccess()const
{
	return success_;
}

