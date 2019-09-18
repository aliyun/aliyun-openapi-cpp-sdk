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

#include <alibabacloud/cloudwf/model/InnerCheckOrderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudwf;
using namespace AlibabaCloud::Cloudwf::Model;

InnerCheckOrderResult::InnerCheckOrderResult() :
	ServiceResult()
{}

InnerCheckOrderResult::InnerCheckOrderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

InnerCheckOrderResult::~InnerCheckOrderResult()
{}

void InnerCheckOrderResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
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

std::string InnerCheckOrderResult::getMessage()const
{
	return message_;
}

std::string InnerCheckOrderResult::getData()const
{
	return data_;
}

std::string InnerCheckOrderResult::getCode()const
{
	return code_;
}

bool InnerCheckOrderResult::getSuccess()const
{
	return success_;
}

