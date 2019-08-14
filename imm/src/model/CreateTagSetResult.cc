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

#include <alibabacloud/imm/model/CreateTagSetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

CreateTagSetResult::CreateTagSetResult() :
	ServiceResult()
{}

CreateTagSetResult::CreateTagSetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateTagSetResult::~CreateTagSetResult()
{}

void CreateTagSetResult::parse(const std::string &payload)
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
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Photos"].isNull())
		photos_ = std::stol(value["Photos"].asString());
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["ModifyTime"].isNull())
		modifyTime_ = value["ModifyTime"].asString();

}

std::string CreateTagSetResult::getStatus()const
{
	return status_;
}

long CreateTagSetResult::getPhotos()const
{
	return photos_;
}

std::string CreateTagSetResult::getModifyTime()const
{
	return modifyTime_;
}

std::string CreateTagSetResult::getCreateTime()const
{
	return createTime_;
}

std::string CreateTagSetResult::getSetId()const
{
	return setId_;
}

