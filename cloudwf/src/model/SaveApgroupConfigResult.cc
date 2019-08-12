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

#include <alibabacloud/cloudwf/model/SaveApgroupConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudwf;
using namespace AlibabaCloud::Cloudwf::Model;

SaveApgroupConfigResult::SaveApgroupConfigResult() :
	ServiceResult()
{}

SaveApgroupConfigResult::SaveApgroupConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SaveApgroupConfigResult::~SaveApgroupConfigResult()
{}

void SaveApgroupConfigResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Data"].isNull())
		data_ = value["Data"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();

}

std::string SaveApgroupConfigResult::getMessage()const
{
	return message_;
}

std::string SaveApgroupConfigResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string SaveApgroupConfigResult::getData()const
{
	return data_;
}

int SaveApgroupConfigResult::getErrorCode()const
{
	return errorCode_;
}

bool SaveApgroupConfigResult::getSuccess()const
{
	return success_;
}

