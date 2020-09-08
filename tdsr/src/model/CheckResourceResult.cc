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

#include <alibabacloud/tdsr/model/CheckResourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Tdsr;
using namespace AlibabaCloud::Tdsr::Model;

CheckResourceResult::CheckResourceResult() :
	ServiceResult()
{}

CheckResourceResult::CheckResourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CheckResourceResult::~CheckResourceResult()
{}

void CheckResourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Interrupt"].isNull())
		interrupt_ = value["Interrupt"].asString() == "true";
	if(!value["Invoker"].isNull())
		invoker_ = value["Invoker"].asString();
	if(!value["Pk"].isNull())
		pk_ = value["Pk"].asString();
	if(!value["Bid"].isNull())
		bid_ = value["Bid"].asString();
	if(!value["Hid"].isNull())
		hid_ = std::stol(value["Hid"].asString());
	if(!value["Country"].isNull())
		country_ = value["Country"].asString();
	if(!value["TaskIdentifier"].isNull())
		taskIdentifier_ = value["TaskIdentifier"].asString();
	if(!value["TaskExtraData"].isNull())
		taskExtraData_ = value["TaskExtraData"].asString();
	if(!value["GmtWakeup"].isNull())
		gmtWakeup_ = value["GmtWakeup"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Level"].isNull())
		level_ = std::stol(value["Level"].asString());
	if(!value["Url"].isNull())
		url_ = value["Url"].asString();
	if(!value["Prompt"].isNull())
		prompt_ = value["Prompt"].asString();

}

std::string CheckResourceResult::getGmtWakeup()const
{
	return gmtWakeup_;
}

long CheckResourceResult::getHid()const
{
	return hid_;
}

std::string CheckResourceResult::getTaskIdentifier()const
{
	return taskIdentifier_;
}

std::string CheckResourceResult::getMessage()const
{
	return message_;
}

bool CheckResourceResult::getInterrupt()const
{
	return interrupt_;
}

bool CheckResourceResult::getSuccess()const
{
	return success_;
}

std::string CheckResourceResult::getUrl()const
{
	return url_;
}

std::string CheckResourceResult::getInvoker()const
{
	return invoker_;
}

std::string CheckResourceResult::getTaskExtraData()const
{
	return taskExtraData_;
}

std::string CheckResourceResult::getCountry()const
{
	return country_;
}

long CheckResourceResult::getLevel()const
{
	return level_;
}

std::string CheckResourceResult::getPrompt()const
{
	return prompt_;
}

std::string CheckResourceResult::getPk()const
{
	return pk_;
}

std::string CheckResourceResult::getBid()const
{
	return bid_;
}

