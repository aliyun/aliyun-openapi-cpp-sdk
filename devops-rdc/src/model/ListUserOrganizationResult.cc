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

#include <alibabacloud/devops-rdc/model/ListUserOrganizationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops_rdc;
using namespace AlibabaCloud::Devops_rdc::Model;

ListUserOrganizationResult::ListUserOrganizationResult() :
	ServiceResult()
{}

ListUserOrganizationResult::ListUserOrganizationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserOrganizationResult::~ListUserOrganizationResult()
{}

void ListUserOrganizationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allObjectNode = value["Object"]["Organization"];
	for (auto valueObjectOrganization : allObjectNode)
	{
		Organization objectObject;
		if(!valueObjectOrganization["Name"].isNull())
			objectObject.name = valueObjectOrganization["Name"].asString();
		if(!valueObjectOrganization["Id"].isNull())
			objectObject.id = valueObjectOrganization["Id"].asString();
		object_.push_back(objectObject);
	}
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::vector<ListUserOrganizationResult::Organization> ListUserOrganizationResult::getObject()const
{
	return object_;
}

std::string ListUserOrganizationResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListUserOrganizationResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListUserOrganizationResult::getSuccess()const
{
	return success_;
}

