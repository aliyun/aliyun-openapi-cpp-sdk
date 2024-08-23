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

#include <alibabacloud/governance/model/ListEnrolledAccountsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Governance;
using namespace AlibabaCloud::Governance::Model;

ListEnrolledAccountsResult::ListEnrolledAccountsResult() :
	ServiceResult()
{}

ListEnrolledAccountsResult::ListEnrolledAccountsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEnrolledAccountsResult::~ListEnrolledAccountsResult()
{}

void ListEnrolledAccountsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEnrolledAccountsNode = value["EnrolledAccounts"]["EnrolledAccountsItem"];
	for (auto valueEnrolledAccountsEnrolledAccountsItem : allEnrolledAccountsNode)
	{
		EnrolledAccountsItem enrolledAccountsObject;
		if(!valueEnrolledAccountsEnrolledAccountsItem["AccountUid"].isNull())
			enrolledAccountsObject.accountUid = std::stol(valueEnrolledAccountsEnrolledAccountsItem["AccountUid"].asString());
		if(!valueEnrolledAccountsEnrolledAccountsItem["BaselineId"].isNull())
			enrolledAccountsObject.baselineId = valueEnrolledAccountsEnrolledAccountsItem["BaselineId"].asString();
		if(!valueEnrolledAccountsEnrolledAccountsItem["CreateTime"].isNull())
			enrolledAccountsObject.createTime = valueEnrolledAccountsEnrolledAccountsItem["CreateTime"].asString();
		if(!valueEnrolledAccountsEnrolledAccountsItem["DisplayName"].isNull())
			enrolledAccountsObject.displayName = valueEnrolledAccountsEnrolledAccountsItem["DisplayName"].asString();
		if(!valueEnrolledAccountsEnrolledAccountsItem["FolderId"].isNull())
			enrolledAccountsObject.folderId = valueEnrolledAccountsEnrolledAccountsItem["FolderId"].asString();
		if(!valueEnrolledAccountsEnrolledAccountsItem["PayerAccountUid"].isNull())
			enrolledAccountsObject.payerAccountUid = std::stol(valueEnrolledAccountsEnrolledAccountsItem["PayerAccountUid"].asString());
		if(!valueEnrolledAccountsEnrolledAccountsItem["Status"].isNull())
			enrolledAccountsObject.status = valueEnrolledAccountsEnrolledAccountsItem["Status"].asString();
		if(!valueEnrolledAccountsEnrolledAccountsItem["UpdateTime"].isNull())
			enrolledAccountsObject.updateTime = valueEnrolledAccountsEnrolledAccountsItem["UpdateTime"].asString();
		enrolledAccounts_.push_back(enrolledAccountsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListEnrolledAccountsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListEnrolledAccountsResult::EnrolledAccountsItem> ListEnrolledAccountsResult::getEnrolledAccounts()const
{
	return enrolledAccounts_;
}

