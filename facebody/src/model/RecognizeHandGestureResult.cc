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

#include <alibabacloud/facebody/model/RecognizeHandGestureResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Facebody;
using namespace AlibabaCloud::Facebody::Model;

RecognizeHandGestureResult::RecognizeHandGestureResult() :
	ServiceResult()
{}

RecognizeHandGestureResult::RecognizeHandGestureResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RecognizeHandGestureResult::~RecognizeHandGestureResult()
{}

void RecognizeHandGestureResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Type"].isNull())
		data_.type = dataNode["Type"].asString();
	if(!dataNode["X"].isNull())
		data_.x = std::stol(dataNode["X"].asString());
	if(!dataNode["Y"].isNull())
		data_.y = std::stol(dataNode["Y"].asString());
	if(!dataNode["Width"].isNull())
		data_.width = std::stol(dataNode["Width"].asString());
	if(!dataNode["Height"].isNull())
		data_.height = std::stol(dataNode["Height"].asString());
	if(!dataNode["Score"].isNull())
		data_.score = std::stof(dataNode["Score"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string RecognizeHandGestureResult::getMessage()const
{
	return message_;
}

RecognizeHandGestureResult::Data RecognizeHandGestureResult::getData()const
{
	return data_;
}

std::string RecognizeHandGestureResult::getCode()const
{
	return code_;
}

