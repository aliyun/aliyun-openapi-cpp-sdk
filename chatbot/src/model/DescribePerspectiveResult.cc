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

#include <alibabacloud/chatbot/model/DescribePerspectiveResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Chatbot;
using namespace AlibabaCloud::Chatbot::Model;

DescribePerspectiveResult::DescribePerspectiveResult() :
	ServiceResult()
{}

DescribePerspectiveResult::DescribePerspectiveResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePerspectiveResult::~DescribePerspectiveResult()
{}

void DescribePerspectiveResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ModifyUserName"].isNull())
		modifyUserName_ = value["ModifyUserName"].asString();
	if(!value["ModifyTime"].isNull())
		modifyTime_ = value["ModifyTime"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["SelfDefine"].isNull())
		selfDefine_ = value["SelfDefine"].asString() == "true";
	if(!value["PerspectiveId"].isNull())
		perspectiveId_ = value["PerspectiveId"].asString();
	if(!value["CreateUserName"].isNull())
		createUserName_ = value["CreateUserName"].asString();
	if(!value["PerspectiveCode"].isNull())
		perspectiveCode_ = value["PerspectiveCode"].asString();
	if(!value["Status"].isNull())
		status_ = std::stoi(value["Status"].asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();

}

int DescribePerspectiveResult::getStatus()const
{
	return status_;
}

std::string DescribePerspectiveResult::getModifyTime()const
{
	return modifyTime_;
}

std::string DescribePerspectiveResult::getPerspectiveCode()const
{
	return perspectiveCode_;
}

bool DescribePerspectiveResult::getSelfDefine()const
{
	return selfDefine_;
}

std::string DescribePerspectiveResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribePerspectiveResult::getModifyUserName()const
{
	return modifyUserName_;
}

std::string DescribePerspectiveResult::getPerspectiveId()const
{
	return perspectiveId_;
}

std::string DescribePerspectiveResult::getCreateUserName()const
{
	return createUserName_;
}

std::string DescribePerspectiveResult::getName()const
{
	return name_;
}

