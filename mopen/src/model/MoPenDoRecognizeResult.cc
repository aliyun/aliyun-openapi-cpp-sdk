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

#include <alibabacloud/mopen/model/MoPenDoRecognizeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::MoPen;
using namespace AlibabaCloud::MoPen::Model;

MoPenDoRecognizeResult::MoPenDoRecognizeResult() :
	ServiceResult()
{}

MoPenDoRecognizeResult::MoPenDoRecognizeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

MoPenDoRecognizeResult::~MoPenDoRecognizeResult()
{}

void MoPenDoRecognizeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Result"].isNull())
		data_.result = dataNode["Result"].asString();
	if(!dataNode["ResultType"].isNull())
		data_.resultType = dataNode["ResultType"].asString();
	if(!dataNode["CanvasId"].isNull())
		data_.canvasId = std::stol(dataNode["CanvasId"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();

}

std::string MoPenDoRecognizeResult::getDescription()const
{
	return description_;
}

std::string MoPenDoRecognizeResult::getMessage()const
{
	return message_;
}

MoPenDoRecognizeResult::Data MoPenDoRecognizeResult::getData()const
{
	return data_;
}

std::string MoPenDoRecognizeResult::getCode()const
{
	return code_;
}

bool MoPenDoRecognizeResult::getSuccess()const
{
	return success_;
}

