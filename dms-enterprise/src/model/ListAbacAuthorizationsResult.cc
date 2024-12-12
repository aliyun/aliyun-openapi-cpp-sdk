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

#include <alibabacloud/dms-enterprise/model/ListAbacAuthorizationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListAbacAuthorizationsResult::ListAbacAuthorizationsResult() :
	ServiceResult()
{}

ListAbacAuthorizationsResult::ListAbacAuthorizationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAbacAuthorizationsResult::~ListAbacAuthorizationsResult()
{}

void ListAbacAuthorizationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAuthorizationListNode = value["AuthorizationList"]["AuthorizationListItem"];
	for (auto valueAuthorizationListAuthorizationListItem : allAuthorizationListNode)
	{
		AuthorizationListItem authorizationListObject;
		if(!valueAuthorizationListAuthorizationListItem["PolicyId"].isNull())
			authorizationListObject.policyId = std::stol(valueAuthorizationListAuthorizationListItem["PolicyId"].asString());
		if(!valueAuthorizationListAuthorizationListItem["PolicyName"].isNull())
			authorizationListObject.policyName = valueAuthorizationListAuthorizationListItem["PolicyName"].asString();
		if(!valueAuthorizationListAuthorizationListItem["PolicySource"].isNull())
			authorizationListObject.policySource = valueAuthorizationListAuthorizationListItem["PolicySource"].asString();
		if(!valueAuthorizationListAuthorizationListItem["AuthorizationId"].isNull())
			authorizationListObject.authorizationId = std::stol(valueAuthorizationListAuthorizationListItem["AuthorizationId"].asString());
		if(!valueAuthorizationListAuthorizationListItem["IdentityId"].isNull())
			authorizationListObject.identityId = std::stol(valueAuthorizationListAuthorizationListItem["IdentityId"].asString());
		if(!valueAuthorizationListAuthorizationListItem["IdentityName"].isNull())
			authorizationListObject.identityName = valueAuthorizationListAuthorizationListItem["IdentityName"].asString();
		if(!valueAuthorizationListAuthorizationListItem["IdentityType"].isNull())
			authorizationListObject.identityType = valueAuthorizationListAuthorizationListItem["IdentityType"].asString();
		authorizationList_.push_back(authorizationListObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListAbacAuthorizationsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListAbacAuthorizationsResult::getErrorCode()const
{
	return errorCode_;
}

std::vector<ListAbacAuthorizationsResult::AuthorizationListItem> ListAbacAuthorizationsResult::getAuthorizationList()const
{
	return authorizationList_;
}

std::string ListAbacAuthorizationsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListAbacAuthorizationsResult::getSuccess()const
{
	return success_;
}

