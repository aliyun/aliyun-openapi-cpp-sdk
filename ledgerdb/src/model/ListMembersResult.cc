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

#include <alibabacloud/ledgerdb/model/ListMembersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ledgerdb;
using namespace AlibabaCloud::Ledgerdb::Model;

ListMembersResult::ListMembersResult() :
	ServiceResult()
{}

ListMembersResult::ListMembersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMembersResult::~ListMembersResult()
{}

void ListMembersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMembersNode = value["Members"]["Member"];
	for (auto valueMembersMember : allMembersNode)
	{
		Member membersObject;
		if(!valueMembersMember["LedgerId"].isNull())
			membersObject.ledgerId = valueMembersMember["LedgerId"].asString();
		if(!valueMembersMember["MemberId"].isNull())
			membersObject.memberId = valueMembersMember["MemberId"].asString();
		if(!valueMembersMember["AliUid"].isNull())
			membersObject.aliUid = valueMembersMember["AliUid"].asString();
		if(!valueMembersMember["KeyType"].isNull())
			membersObject.keyType = valueMembersMember["KeyType"].asString();
		if(!valueMembersMember["PublicKey"].isNull())
			membersObject.publicKey = valueMembersMember["PublicKey"].asString();
		if(!valueMembersMember["Role"].isNull())
			membersObject.role = valueMembersMember["Role"].asString();
		if(!valueMembersMember["State"].isNull())
			membersObject.state = valueMembersMember["State"].asString();
		if(!valueMembersMember["CreateTime"].isNull())
			membersObject.createTime = std::stol(valueMembersMember["CreateTime"].asString());
		if(!valueMembersMember["UpdateTime"].isNull())
			membersObject.updateTime = std::stol(valueMembersMember["UpdateTime"].asString());
		members_.push_back(membersObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::string ListMembersResult::getNextToken()const
{
	return nextToken_;
}

int ListMembersResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListMembersResult::Member> ListMembersResult::getMembers()const
{
	return members_;
}

