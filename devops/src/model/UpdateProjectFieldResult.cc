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

#include <alibabacloud/devops/model/UpdateProjectFieldResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

UpdateProjectFieldResult::UpdateProjectFieldResult() :
	ServiceResult()
{}

UpdateProjectFieldResult::UpdateProjectFieldResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateProjectFieldResult::~UpdateProjectFieldResult()
{}

void UpdateProjectFieldResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto projectNode = value["project"];
	if(!projectNode["category"].isNull())
		project_.category = projectNode["category"].asString();
	if(!projectNode["categoryIdentifier"].isNull())
		project_.categoryIdentifier = projectNode["categoryIdentifier"].asString();
	if(!projectNode["creator"].isNull())
		project_.creator = projectNode["creator"].asString();
	if(!projectNode["customCode"].isNull())
		project_.customCode = projectNode["customCode"].asString();
	if(!projectNode["description"].isNull())
		project_.description = projectNode["description"].asString();
	if(!projectNode["gmtCreate"].isNull())
		project_.gmtCreate = std::stol(projectNode["gmtCreate"].asString());
	if(!projectNode["gmtModified"].isNull())
		project_.gmtModified = std::stol(projectNode["gmtModified"].asString());
	if(!projectNode["iconGroup"].isNull())
		project_.iconGroup = projectNode["iconGroup"].asString();
	if(!projectNode["icon"].isNull())
		project_.icon = projectNode["icon"].asString();
	if(!projectNode["iconBig"].isNull())
		project_.iconBig = projectNode["iconBig"].asString();
	if(!projectNode["iconSmall"].isNull())
		project_.iconSmall = projectNode["iconSmall"].asString();
	if(!projectNode["id"].isNull())
		project_.id = projectNode["id"].asString();
	if(!projectNode["identifier"].isNull())
		project_.identifier = projectNode["identifier"].asString();
	if(!projectNode["identifierPath"].isNull())
		project_.identifierPath = projectNode["identifierPath"].asString();
	if(!projectNode["logicalStatus"].isNull())
		project_.logicalStatus = projectNode["logicalStatus"].asString();
	if(!projectNode["modifier"].isNull())
		project_.modifier = projectNode["modifier"].asString();
	if(!projectNode["name"].isNull())
		project_.name = projectNode["name"].asString();
	if(!projectNode["organizationIdentifier"].isNull())
		project_.organizationIdentifier = projectNode["organizationIdentifier"].asString();
	if(!projectNode["parentIdentifier"].isNull())
		project_.parentIdentifier = projectNode["parentIdentifier"].asString();
	if(!projectNode["scope"].isNull())
		project_.scope = projectNode["scope"].asString();
	if(!projectNode["statusIdentifier"].isNull())
		project_.statusIdentifier = projectNode["statusIdentifier"].asString();
	if(!projectNode["statusStageIdentifier"].isNull())
		project_.statusStageIdentifier = projectNode["statusStageIdentifier"].asString();
	if(!projectNode["subType"].isNull())
		project_.subType = projectNode["subType"].asString();
	if(!projectNode["typeIdentifier"].isNull())
		project_.typeIdentifier = projectNode["typeIdentifier"].asString();
	if(!projectNode["statusName"].isNull())
		project_.statusName = projectNode["statusName"].asString();
	auto allfieldListNode = projectNode["fieldList"]["fieldListItem"];
	for (auto projectNodefieldListfieldListItem : allfieldListNode)
	{
		Project::FieldListItem fieldListItemObject;
		if(!projectNodefieldListfieldListItem["identifier"].isNull())
			fieldListItemObject.identifier = projectNodefieldListfieldListItem["identifier"].asString();
		if(!projectNodefieldListfieldListItem["displayName"].isNull())
			fieldListItemObject.displayName = projectNodefieldListfieldListItem["displayName"].asString();
		if(!projectNodefieldListfieldListItem["valueType"].isNull())
			fieldListItemObject.valueType = projectNodefieldListfieldListItem["valueType"].asString();
		if(!projectNodefieldListfieldListItem["value"].isNull())
			fieldListItemObject.value = projectNodefieldListfieldListItem["value"].asString();
		project_.fieldList.push_back(fieldListItemObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

UpdateProjectFieldResult::Project UpdateProjectFieldResult::getProject()const
{
	return project_;
}

std::string UpdateProjectFieldResult::getRequestId()const
{
	return requestId_;
}

std::string UpdateProjectFieldResult::getErrorCode()const
{
	return errorCode_;
}

std::string UpdateProjectFieldResult::getErrorMessage()const
{
	return errorMessage_;
}

bool UpdateProjectFieldResult::getSuccess()const
{
	return success_;
}

