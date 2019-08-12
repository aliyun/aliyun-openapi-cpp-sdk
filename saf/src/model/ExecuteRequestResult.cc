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

#include <alibabacloud/saf/model/ExecuteRequestResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Saf;
using namespace AlibabaCloud::Saf::Model;

ExecuteRequestResult::ExecuteRequestResult() :
	ServiceResult()
{}

ExecuteRequestResult::ExecuteRequestResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ExecuteRequestResult::~ExecuteRequestResult()
{}

void ExecuteRequestResult::parse(const std::string &payload)
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
	if(!dataNode["Tags"].isNull())
		data_.tags = dataNode["Tags"].asString();
	if(!dataNode["Score"].isNull())
		data_.score = dataNode["Score"].asString();
	if(!dataNode["Extend"].isNull())
		data_.extend = dataNode["Extend"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ExecuteRequestResult::getMessage()const
{
	return message_;
}

ExecuteRequestResult::Data ExecuteRequestResult::getData()const
{
	return data_;
}

int ExecuteRequestResult::getCode()const
{
	return code_;
}

