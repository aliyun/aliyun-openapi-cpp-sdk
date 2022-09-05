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

#include <alibabacloud/arms/model/CreateSyntheticTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

CreateSyntheticTaskResult::CreateSyntheticTaskResult() :
	ServiceResult()
{}

CreateSyntheticTaskResult::CreateSyntheticTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateSyntheticTaskResult::~CreateSyntheticTaskResult()
{}

void CreateSyntheticTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TaskId"].isNull())
		data_.taskId = std::stol(dataNode["TaskId"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();

}

std::string CreateSyntheticTaskResult::getMsg()const
{
	return msg_;
}

CreateSyntheticTaskResult::Data CreateSyntheticTaskResult::getData()const
{
	return data_;
}

std::string CreateSyntheticTaskResult::getCode()const
{
	return code_;
}

