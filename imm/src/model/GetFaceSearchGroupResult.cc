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

#include <alibabacloud/imm/model/GetFaceSearchGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

GetFaceSearchGroupResult::GetFaceSearchGroupResult() :
	ServiceResult()
{}

GetFaceSearchGroupResult::GetFaceSearchGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetFaceSearchGroupResult::~GetFaceSearchGroupResult()
{}

void GetFaceSearchGroupResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["GroupName"].isNull())
		groupName_ = value["GroupName"].asString();
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["ModifyTime"].isNull())
		modifyTime_ = value["ModifyTime"].asString();
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();

}

std::string GetFaceSearchGroupResult::getGroupName()const
{
	return groupName_;
}

std::string GetFaceSearchGroupResult::getStatus()const
{
	return status_;
}

std::string GetFaceSearchGroupResult::getModifyTime()const
{
	return modifyTime_;
}

std::string GetFaceSearchGroupResult::getCreateTime()const
{
	return createTime_;
}

int GetFaceSearchGroupResult::getCount()const
{
	return count_;
}

std::string GetFaceSearchGroupResult::getGroupId()const
{
	return groupId_;
}

