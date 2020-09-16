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

#include <alibabacloud/industry-brain/model/InvokeServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Industry_brain;
using namespace AlibabaCloud::Industry_brain::Model;

InvokeServiceResult::InvokeServiceResult() :
	ServiceResult()
{}

InvokeServiceResult::InvokeServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

InvokeServiceResult::~InvokeServiceResult()
{}

void InvokeServiceResult::parse(const std::string &payload)
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
	if(!value["Context"].isNull())
		context_ = value["Context"].asString();

}

std::string InvokeServiceResult::getContext()const
{
	return context_;
}

std::string InvokeServiceResult::getMessage()const
{
	return message_;
}

std::string InvokeServiceResult::getData()const
{
	return data_;
}

std::string InvokeServiceResult::getCode()const
{
	return code_;
}

