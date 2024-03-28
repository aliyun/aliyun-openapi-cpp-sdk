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

#include <alibabacloud/devops/model/ListOrganizationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

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
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["id"].isNull())
			resultObject.id = std::stol(valueresultresultItem["id"].asString());
		if(!valueresultresultItem["accessLevel"].isNull())
			resultObject.accessLevel = std::stoi(valueresultresultItem["accessLevel"].asString());
		if(!valueresultresultItem["organizationId"].isNull())
			resultObject.organizationId = valueresultresultItem["organizationId"].asString();
		if(!valueresultresultItem["organizationName"].isNull())
			resultObject.organizationName = valueresultresultItem["organizationName"].asString();
		if(!valueresultresultItem["organizationRole"].isNull())
			resultObject.organizationRole = valueresultresultItem["organizationRole"].asString();
		if(!valueresultresultItem["organizationAlias"].isNull())
			resultObject.organizationAlias = valueresultresultItem["organizationAlias"].asString();
		if(!valueresultresultItem["namespaceId"].isNull())
			resultObject.namespaceId = valueresultresultItem["namespaceId"].asString();
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["total"].isNull())
		total_ = std::stol(value["total"].asString());
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::vector<ListOrganizationsResult::ResultItem> ListOrganizationsResult::getresult()const
{
	return result_;
}

std::string ListOrganizationsResult::getRequestId()const
{
	return requestId_;
}

long ListOrganizationsResult::getTotal()const
{
	return total_;
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

