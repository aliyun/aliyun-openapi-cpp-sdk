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

#include <alibabacloud/lmztest/model/GrayReleaseDemoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LmzTest;
using namespace AlibabaCloud::LmzTest::Model;

GrayReleaseDemoResult::GrayReleaseDemoResult() :
	ServiceResult()
{}

GrayReleaseDemoResult::GrayReleaseDemoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GrayReleaseDemoResult::~GrayReleaseDemoResult()
{}

void GrayReleaseDemoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Year"].isNull())
		year_ = value["Year"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

std::string GrayReleaseDemoResult::getYear()const
{
	return year_;
}

std::string GrayReleaseDemoResult::getCode()const
{
	return code_;
}

