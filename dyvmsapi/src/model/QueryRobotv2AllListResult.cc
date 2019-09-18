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

#include <alibabacloud/dyvmsapi/model/QueryRobotv2AllListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dyvmsapi;
using namespace AlibabaCloud::Dyvmsapi::Model;

QueryRobotv2AllListResult::QueryRobotv2AllListResult() :
	ServiceResult()
{}

QueryRobotv2AllListResult::QueryRobotv2AllListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryRobotv2AllListResult::~QueryRobotv2AllListResult()
{}

void QueryRobotv2AllListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Data"].isNull())
		data_ = value["Data"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryRobotv2AllListResult::getMessage()const
{
	return message_;
}

std::string QueryRobotv2AllListResult::getData()const
{
	return data_;
}

std::string QueryRobotv2AllListResult::getCode()const
{
	return code_;
}

