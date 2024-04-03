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

#include <alibabacloud/alikafka/model/DescribeSaslUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alikafka;
using namespace AlibabaCloud::Alikafka::Model;

DescribeSaslUsersResult::DescribeSaslUsersResult() :
	ServiceResult()
{}

DescribeSaslUsersResult::DescribeSaslUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSaslUsersResult::~DescribeSaslUsersResult()
{}

void DescribeSaslUsersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSaslUserListNode = value["SaslUserList"]["SaslUserVO"];
	for (auto valueSaslUserListSaslUserVO : allSaslUserListNode)
	{
		SaslUserVO saslUserListObject;
		if(!valueSaslUserListSaslUserVO["Type"].isNull())
			saslUserListObject.type = valueSaslUserListSaslUserVO["Type"].asString();
		if(!valueSaslUserListSaslUserVO["Password"].isNull())
			saslUserListObject.password = valueSaslUserListSaslUserVO["Password"].asString();
		if(!valueSaslUserListSaslUserVO["Username"].isNull())
			saslUserListObject.username = valueSaslUserListSaslUserVO["Username"].asString();
		if(!valueSaslUserListSaslUserVO["Mechanism"].isNull())
			saslUserListObject.mechanism = valueSaslUserListSaslUserVO["Mechanism"].asString();
		saslUserList_.push_back(saslUserListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeSaslUsersResult::SaslUserVO> DescribeSaslUsersResult::getSaslUserList()const
{
	return saslUserList_;
}

std::string DescribeSaslUsersResult::getMessage()const
{
	return message_;
}

int DescribeSaslUsersResult::getCode()const
{
	return code_;
}

bool DescribeSaslUsersResult::getSuccess()const
{
	return success_;
}

