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

#include <alibabacloud/linkface/model/DeleteGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkFace;
using namespace AlibabaCloud::LinkFace::Model;

DeleteGroupResult::DeleteGroupResult() :
	ServiceResult()
{}

DeleteGroupResult::DeleteGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteGroupResult::~DeleteGroupResult()
{}

void DeleteGroupResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DeleteGroupResult::getMessage()const
{
	return message_;
}

int DeleteGroupResult::getCode()const
{
	return code_;
}

bool DeleteGroupResult::getSuccess()const
{
	return success_;
}

