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

#include <alibabacloud/rtc/model/CreateRecordIndexFileResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rtc;
using namespace AlibabaCloud::Rtc::Model;

CreateRecordIndexFileResult::CreateRecordIndexFileResult() :
	ServiceResult()
{}

CreateRecordIndexFileResult::CreateRecordIndexFileResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateRecordIndexFileResult::~CreateRecordIndexFileResult()
{}

void CreateRecordIndexFileResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Url"].isNull())
		url_ = value["Url"].asString();
	if(!value["Duration"].isNull())
		duration_ = std::stof(value["Duration"].asString());
	if(!value["Width"].isNull())
		width_ = std::stoi(value["Width"].asString());
	if(!value["Height"].isNull())
		height_ = std::stoi(value["Height"].asString());

}

float CreateRecordIndexFileResult::getDuration()const
{
	return duration_;
}

int CreateRecordIndexFileResult::getHeight()const
{
	return height_;
}

int CreateRecordIndexFileResult::getWidth()const
{
	return width_;
}

std::string CreateRecordIndexFileResult::getUrl()const
{
	return url_;
}

