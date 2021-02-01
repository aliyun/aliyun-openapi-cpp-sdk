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

#include <alibabacloud/videorecog/model/UnderstandVideoContentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Videorecog;
using namespace AlibabaCloud::Videorecog::Model;

UnderstandVideoContentResult::UnderstandVideoContentResult() :
	ServiceResult()
{}

UnderstandVideoContentResult::UnderstandVideoContentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UnderstandVideoContentResult::~UnderstandVideoContentResult()
{}

void UnderstandVideoContentResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TagInfo"].isNull())
		data_.tagInfo = dataNode["TagInfo"].asString();
	auto videoInfoNode = dataNode["VideoInfo"];
	if(!videoInfoNode["Fps"].isNull())
		data_.videoInfo.fps = std::stof(videoInfoNode["Fps"].asString());
	if(!videoInfoNode["Duration"].isNull())
		data_.videoInfo.duration = std::stol(videoInfoNode["Duration"].asString());
	if(!videoInfoNode["Height"].isNull())
		data_.videoInfo.height = std::stol(videoInfoNode["Height"].asString());
	if(!videoInfoNode["Width"].isNull())
		data_.videoInfo.width = std::stol(videoInfoNode["Width"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

std::string UnderstandVideoContentResult::getMessage()const
{
	return message_;
}

UnderstandVideoContentResult::Data UnderstandVideoContentResult::getData()const
{
	return data_;
}

std::string UnderstandVideoContentResult::getCode()const
{
	return code_;
}

