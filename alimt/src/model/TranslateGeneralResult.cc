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

#include <alibabacloud/alimt/model/TranslateGeneralResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alimt;
using namespace AlibabaCloud::Alimt::Model;

TranslateGeneralResult::TranslateGeneralResult() :
	ServiceResult()
{}

TranslateGeneralResult::TranslateGeneralResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

TranslateGeneralResult::~TranslateGeneralResult()
{}

void TranslateGeneralResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Translated"].isNull())
		data_.translated = dataNode["Translated"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string TranslateGeneralResult::getMessage()const
{
	return message_;
}

TranslateGeneralResult::Data TranslateGeneralResult::getData()const
{
	return data_;
}

int TranslateGeneralResult::getCode()const
{
	return code_;
}

