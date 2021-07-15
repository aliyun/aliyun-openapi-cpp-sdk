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

#include <alibabacloud/alb/model/ListAclEntriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alb;
using namespace AlibabaCloud::Alb::Model;

ListAclEntriesResult::ListAclEntriesResult() :
	ServiceResult()
{}

ListAclEntriesResult::ListAclEntriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAclEntriesResult::~ListAclEntriesResult()
{}

void ListAclEntriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAclEntriesNode = value["AclEntries"]["AclEntry"];
	for (auto valueAclEntriesAclEntry : allAclEntriesNode)
	{
		AclEntry aclEntriesObject;
		if(!valueAclEntriesAclEntry["Description"].isNull())
			aclEntriesObject.description = valueAclEntriesAclEntry["Description"].asString();
		if(!valueAclEntriesAclEntry["Entry"].isNull())
			aclEntriesObject.entry = valueAclEntriesAclEntry["Entry"].asString();
		if(!valueAclEntriesAclEntry["Status"].isNull())
			aclEntriesObject.status = valueAclEntriesAclEntry["Status"].asString();
		aclEntries_.push_back(aclEntriesObject);
	}
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<ListAclEntriesResult::AclEntry> ListAclEntriesResult::getAclEntries()const
{
	return aclEntries_;
}

int ListAclEntriesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListAclEntriesResult::getNextToken()const
{
	return nextToken_;
}

int ListAclEntriesResult::getMaxResults()const
{
	return maxResults_;
}

