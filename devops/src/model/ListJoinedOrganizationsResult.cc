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

#include <alibabacloud/devops/model/ListJoinedOrganizationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListJoinedOrganizationsResult::ListJoinedOrganizationsResult() :
	ServiceResult()
{}

ListJoinedOrganizationsResult::ListJoinedOrganizationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListJoinedOrganizationsResult::~ListJoinedOrganizationsResult()
{}

void ListJoinedOrganizationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allorganizationsNode = value["organizations"]["result"];
	for (auto valueorganizationsresult : allorganizationsNode)
	{
		Result organizationsObject;
		if(!valueorganizationsresult["id"].isNull())
			organizationsObject.id = valueorganizationsresult["id"].asString();
		if(!valueorganizationsresult["name"].isNull())
			organizationsObject.name = valueorganizationsresult["name"].asString();
		organizations_.push_back(organizationsObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();

}

std::string ListJoinedOrganizationsResult::getRequestId()const
{
	return requestId_;
}

std::vector<ListJoinedOrganizationsResult::Result> ListJoinedOrganizationsResult::getorganizations()const
{
	return organizations_;
}

std::string ListJoinedOrganizationsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListJoinedOrganizationsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListJoinedOrganizationsResult::getSuccess()const
{
	return success_;
}

