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

#include <alibabacloud/cc5g/model/ListGroupAuthorizationRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CC5G;
using namespace AlibabaCloud::CC5G::Model;

ListGroupAuthorizationRulesResult::ListGroupAuthorizationRulesResult() :
	ServiceResult()
{}

ListGroupAuthorizationRulesResult::ListGroupAuthorizationRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGroupAuthorizationRulesResult::~ListGroupAuthorizationRulesResult()
{}

void ListGroupAuthorizationRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGroupAuthorizationRulesNode = value["GroupAuthorizationRules"]["GroupAuthorizationRule"];
	for (auto valueGroupAuthorizationRulesGroupAuthorizationRule : allGroupAuthorizationRulesNode)
	{
		GroupAuthorizationRule groupAuthorizationRulesObject;
		if(!valueGroupAuthorizationRulesGroupAuthorizationRule["AuthorizationRuleId"].isNull())
			groupAuthorizationRulesObject.authorizationRuleId = valueGroupAuthorizationRulesGroupAuthorizationRule["AuthorizationRuleId"].asString();
		if(!valueGroupAuthorizationRulesGroupAuthorizationRule["Status"].isNull())
			groupAuthorizationRulesObject.status = valueGroupAuthorizationRulesGroupAuthorizationRule["Status"].asString();
		if(!valueGroupAuthorizationRulesGroupAuthorizationRule["Name"].isNull())
			groupAuthorizationRulesObject.name = valueGroupAuthorizationRulesGroupAuthorizationRule["Name"].asString();
		if(!valueGroupAuthorizationRulesGroupAuthorizationRule["Description"].isNull())
			groupAuthorizationRulesObject.description = valueGroupAuthorizationRulesGroupAuthorizationRule["Description"].asString();
		if(!valueGroupAuthorizationRulesGroupAuthorizationRule["Type"].isNull())
			groupAuthorizationRulesObject.type = valueGroupAuthorizationRulesGroupAuthorizationRule["Type"].asString();
		if(!valueGroupAuthorizationRulesGroupAuthorizationRule["SourceCidr"].isNull())
			groupAuthorizationRulesObject.sourceCidr = valueGroupAuthorizationRulesGroupAuthorizationRule["SourceCidr"].asString();
		if(!valueGroupAuthorizationRulesGroupAuthorizationRule["DestinationType"].isNull())
			groupAuthorizationRulesObject.destinationType = valueGroupAuthorizationRulesGroupAuthorizationRule["DestinationType"].asString();
		if(!valueGroupAuthorizationRulesGroupAuthorizationRule["Protocol"].isNull())
			groupAuthorizationRulesObject.protocol = valueGroupAuthorizationRulesGroupAuthorizationRule["Protocol"].asString();
		if(!valueGroupAuthorizationRulesGroupAuthorizationRule["DestinationPort"].isNull())
			groupAuthorizationRulesObject.destinationPort = valueGroupAuthorizationRulesGroupAuthorizationRule["DestinationPort"].asString();
		if(!valueGroupAuthorizationRulesGroupAuthorizationRule["Destination"].isNull())
			groupAuthorizationRulesObject.destination = valueGroupAuthorizationRulesGroupAuthorizationRule["Destination"].asString();
		if(!valueGroupAuthorizationRulesGroupAuthorizationRule["Policy"].isNull())
			groupAuthorizationRulesObject.policy = valueGroupAuthorizationRulesGroupAuthorizationRule["Policy"].asString();
		if(!valueGroupAuthorizationRulesGroupAuthorizationRule["Dns"].isNull())
			groupAuthorizationRulesObject.dns = valueGroupAuthorizationRulesGroupAuthorizationRule["Dns"].asString() == "true";
		if(!valueGroupAuthorizationRulesGroupAuthorizationRule["CreateTime"].isNull())
			groupAuthorizationRulesObject.createTime = valueGroupAuthorizationRulesGroupAuthorizationRule["CreateTime"].asString();
		groupAuthorizationRules_.push_back(groupAuthorizationRulesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = value["MaxResults"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::vector<ListGroupAuthorizationRulesResult::GroupAuthorizationRule> ListGroupAuthorizationRulesResult::getGroupAuthorizationRules()const
{
	return groupAuthorizationRules_;
}

std::string ListGroupAuthorizationRulesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListGroupAuthorizationRulesResult::getNextToken()const
{
	return nextToken_;
}

std::string ListGroupAuthorizationRulesResult::getMaxResults()const
{
	return maxResults_;
}

