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

#include <alibabacloud/mopen/model/MoPenBindIsvResult.h>
#include <json/json.h>

using namespace AlibabaCloud::MoPen;
using namespace AlibabaCloud::MoPen::Model;

MoPenBindIsvResult::MoPenBindIsvResult() :
	ServiceResult()
{}

MoPenBindIsvResult::MoPenBindIsvResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

MoPenBindIsvResult::~MoPenBindIsvResult()
{}

void MoPenBindIsvResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();

}

std::string MoPenBindIsvResult::getDescription()const
{
	return description_;
}

std::string MoPenBindIsvResult::getMessage()const
{
	return message_;
}

bool MoPenBindIsvResult::getCode()const
{
	return code_;
}

bool MoPenBindIsvResult::getSuccess()const
{
	return success_;
}

