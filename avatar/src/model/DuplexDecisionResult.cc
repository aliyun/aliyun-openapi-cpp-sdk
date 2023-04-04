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

#include <alibabacloud/avatar/model/DuplexDecisionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Avatar;
using namespace AlibabaCloud::Avatar::Model;

DuplexDecisionResult::DuplexDecisionResult() :
	ServiceResult()
{}

DuplexDecisionResult::DuplexDecisionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DuplexDecisionResult::~DuplexDecisionResult()
{}

void DuplexDecisionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ActionType"].isNull())
		data_.actionType = dataNode["ActionType"].asString();
	if(!dataNode["OutputText"].isNull())
		data_.outputText = dataNode["OutputText"].asString();
	if(!dataNode["GrabType"].isNull())
		data_.grabType = dataNode["GrabType"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();

}

std::string DuplexDecisionResult::getMessage()const
{
	return message_;
}

DuplexDecisionResult::Data DuplexDecisionResult::getData()const
{
	return data_;
}

std::string DuplexDecisionResult::getCode()const
{
	return code_;
}

std::string DuplexDecisionResult::getSuccess()const
{
	return success_;
}

