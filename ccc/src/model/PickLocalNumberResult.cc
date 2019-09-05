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

#include <alibabacloud/ccc/model/PickLocalNumberResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

PickLocalNumberResult::PickLocalNumberResult() :
	ServiceResult()
{}

PickLocalNumberResult::PickLocalNumberResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PickLocalNumberResult::~PickLocalNumberResult()
{}

void PickLocalNumberResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto calleeNode = dataNode["Callee"];
	if(!calleeNode["Number"].isNull())
		data_.callee.number = calleeNode["Number"].asString();
	if(!calleeNode["Province"].isNull())
		data_.callee.province = calleeNode["Province"].asString();
	if(!calleeNode["City"].isNull())
		data_.callee.city = calleeNode["City"].asString();
	auto callerNode = dataNode["Caller"];
	if(!callerNode["Number"].isNull())
		data_.caller.number = callerNode["Number"].asString();
	if(!callerNode["Province"].isNull())
		data_.caller.province = callerNode["Province"].asString();
	if(!callerNode["City"].isNull())
		data_.caller.city = callerNode["City"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string PickLocalNumberResult::getMessage()const
{
	return message_;
}

PickLocalNumberResult::Data PickLocalNumberResult::getData()const
{
	return data_;
}

std::string PickLocalNumberResult::getCode()const
{
	return code_;
}

bool PickLocalNumberResult::getSuccess()const
{
	return success_;
}

