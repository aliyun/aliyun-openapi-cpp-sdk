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

#include <alibabacloud/codeup/model/ListOrganizationSecurityScoresResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

ListOrganizationSecurityScoresResult::ListOrganizationSecurityScoresResult() :
	ServiceResult()
{}

ListOrganizationSecurityScoresResult::ListOrganizationSecurityScoresResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOrganizationSecurityScoresResult::~ListOrganizationSecurityScoresResult()
{}

void ListOrganizationSecurityScoresResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["Enable"].isNull())
			resultObject.enable = valueResultResultItem["Enable"].asString() == "true";
		if(!valueResultResultItem["Id"].isNull())
			resultObject.id = std::stol(valueResultResultItem["Id"].asString());
		if(!valueResultResultItem["OrganizationId"].isNull())
			resultObject.organizationId = valueResultResultItem["OrganizationId"].asString();
		auto organizationSecurityScoreNode = value["OrganizationSecurityScore"];
		if(!organizationSecurityScoreNode["AuthorityControlScore"].isNull())
			resultObject.organizationSecurityScore.authorityControlScore = std::stoi(organizationSecurityScoreNode["AuthorityControlScore"].asString());
		if(!organizationSecurityScoreNode["CodeContentScore"].isNull())
			resultObject.organizationSecurityScore.codeContentScore = std::stoi(organizationSecurityScoreNode["CodeContentScore"].asString());
		if(!organizationSecurityScoreNode["MemberBehaviorScore"].isNull())
			resultObject.organizationSecurityScore.memberBehaviorScore = std::stoi(organizationSecurityScoreNode["MemberBehaviorScore"].asString());
		if(!organizationSecurityScoreNode["Level"].isNull())
			resultObject.organizationSecurityScore.level = organizationSecurityScoreNode["Level"].asString();
		result_.push_back(resultObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListOrganizationSecurityScoresResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListOrganizationSecurityScoresResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListOrganizationSecurityScoresResult::getSuccess()const
{
	return success_;
}

std::vector<ListOrganizationSecurityScoresResult::ResultItem> ListOrganizationSecurityScoresResult::getResult()const
{
	return result_;
}

