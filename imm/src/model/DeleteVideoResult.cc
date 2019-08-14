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

#include <alibabacloud/imm/model/DeleteVideoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

DeleteVideoResult::DeleteVideoResult() :
	ServiceResult()
{}

DeleteVideoResult::DeleteVideoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteVideoResult::~DeleteVideoResult()
{}

void DeleteVideoResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["SetId"].isNull())
		setId_ = value["SetId"].asString();
	if(!value["VideoUri"].isNull())
		videoUri_ = value["VideoUri"].asString();

}

std::string DeleteVideoResult::getVideoUri()const
{
	return videoUri_;
}

std::string DeleteVideoResult::getSetId()const
{
	return setId_;
}

