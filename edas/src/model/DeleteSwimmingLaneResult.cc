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

#include <alibabacloud/edas/model/DeleteSwimmingLaneResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

DeleteSwimmingLaneResult::DeleteSwimmingLaneResult() :
	ServiceResult()
{}

DeleteSwimmingLaneResult::DeleteSwimmingLaneResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteSwimmingLaneResult::~DeleteSwimmingLaneResult()
{}

void DeleteSwimmingLaneResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Data"].isNull())
		data_ = std::stoi(value["Data"].asString());

}

std::string DeleteSwimmingLaneResult::getMessage()const
{
	return message_;
}

int DeleteSwimmingLaneResult::getData()const
{
	return data_;
}

int DeleteSwimmingLaneResult::getCode()const
{
	return code_;
}

