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

#include <alibabacloud/cloudwf/model/ConfigAutoRenewResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudwf;
using namespace AlibabaCloud::Cloudwf::Model;

ConfigAutoRenewResult::ConfigAutoRenewResult() :
	ServiceResult()
{}

ConfigAutoRenewResult::ConfigAutoRenewResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ConfigAutoRenewResult::~ConfigAutoRenewResult()
{}

void ConfigAutoRenewResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["message"].isNull())
		message_ = value["message"].asString();
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["data"].isNull())
		data_ = value["data"].asString();

}

std::string ConfigAutoRenewResult::getMessage()const
{
	return message_;
}

std::string ConfigAutoRenewResult::getData()const
{
	return data_;
}

std::string ConfigAutoRenewResult::getCode()const
{
	return code_;
}

bool ConfigAutoRenewResult::getSuccess()const
{
	return success_;
}

