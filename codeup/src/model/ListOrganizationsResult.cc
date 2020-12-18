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

#include <alibabacloud/codeup/model/ListOrganizationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

ListOrganizationsResult::ListOrganizationsResult() :
	ServiceResult()
{}

ListOrganizationsResult::ListOrganizationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOrganizationsResult::~ListOrganizationsResult()
{}

void ListOrganizationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["OrganizationId"].isNull())
			resultObject.organizationId = valueResultResultItem["OrganizationId"].asString();
		if(!valueResultResultItem["OrganizationName"].isNull())
			resultObject.organizationName = valueResultResultItem["OrganizationName"].asString();
		if(!valueResultResultItem["OrganizationRole"].isNull())
			resultObject.organizationRole = valueResultResultItem["OrganizationRole"].asString();
		if(!valueResultResultItem["AccessLevel"].isNull())
			resultObject.accessLevel = std::stoi(valueResultResultItem["AccessLevel"].asString());
		result_.push_back(resultObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::string ListOrganizationsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListOrganizationsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListOrganizationsResult::getSuccess()const
{
	return success_;
}

std::vector<ListOrganizationsResult::ResultItem> ListOrganizationsResult::getResult()const
{
	return result_;
}

