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

#include <alibabacloud/finmall/model/AddCustomInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Finmall;
using namespace AlibabaCloud::Finmall::Model;

AddCustomInfoResult::AddCustomInfoResult() :
	ServiceResult()
{}

AddCustomInfoResult::AddCustomInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddCustomInfoResult::~AddCustomInfoResult()
{}

void AddCustomInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CustomId"].isNull())
		data_.customId = dataNode["CustomId"].asString();
	if(!dataNode["ValidateState"].isNull())
		data_.validateState = dataNode["ValidateState"].asString();
	if(!dataNode["ValidateTime"].isNull())
		data_.validateTime = dataNode["ValidateTime"].asString();
	if(!dataNode["UserState"].isNull())
		data_.userState = dataNode["UserState"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string AddCustomInfoResult::getMessage()const
{
	return message_;
}

AddCustomInfoResult::Data AddCustomInfoResult::getData()const
{
	return data_;
}

std::string AddCustomInfoResult::getCode()const
{
	return code_;
}

