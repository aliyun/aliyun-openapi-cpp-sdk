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

#include <alibabacloud/devops-rdc/model/GetDevopsProjectInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops_rdc;
using namespace AlibabaCloud::Devops_rdc::Model;

GetDevopsProjectInfoResult::GetDevopsProjectInfoResult() :
	ServiceResult()
{}

GetDevopsProjectInfoResult::GetDevopsProjectInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDevopsProjectInfoResult::~GetDevopsProjectInfoResult()
{}

void GetDevopsProjectInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto objectNode = value["Object"];
	if(!objectNode["SortMethod"].isNull())
		object_.sortMethod = objectNode["SortMethod"].asString();
	if(!objectNode["UniqueIdPrefix"].isNull())
		object_.uniqueIdPrefix = objectNode["UniqueIdPrefix"].asString();
	if(!objectNode["NormalType"].isNull())
		object_.normalType = objectNode["NormalType"].asString();
	if(!objectNode["ModifierId"].isNull())
		object_.modifierId = objectNode["ModifierId"].asString();
	if(!objectNode["SourceType"].isNull())
		object_.sourceType = objectNode["SourceType"].asString();
	if(!objectNode["IsTemplate"].isNull())
		object_.isTemplate = objectNode["IsTemplate"].asString() == "true";
	if(!objectNode["Description"].isNull())
		object_.description = objectNode["Description"].asString();
	if(!objectNode["DefaultRoleId"].isNull())
		object_.defaultRoleId = objectNode["DefaultRoleId"].asString();
	if(!objectNode["RootCollectionId"].isNull())
		object_.rootCollectionId = objectNode["RootCollectionId"].asString();
	if(!objectNode["IsDeleted"].isNull())
		object_.isDeleted = objectNode["IsDeleted"].asString() == "true";
	if(!objectNode["Updated"].isNull())
		object_.updated = objectNode["Updated"].asString();
	if(!objectNode["Name"].isNull())
		object_.name = objectNode["Name"].asString();
	if(!objectNode["IsArchived"].isNull())
		object_.isArchived = objectNode["IsArchived"].asString() == "true";
	if(!objectNode["EndDate"].isNull())
		object_.endDate = objectNode["EndDate"].asString();
	if(!objectNode["Logo"].isNull())
		object_.logo = objectNode["Logo"].asString();
	if(!objectNode["StartDate"].isNull())
		object_.startDate = objectNode["StartDate"].asString();
	if(!objectNode["Pinyin"].isNull())
		object_.pinyin = objectNode["Pinyin"].asString();
	if(!objectNode["CreatorId"].isNull())
		object_.creatorId = objectNode["CreatorId"].asString();
	if(!objectNode["SourceId"].isNull())
		object_.sourceId = objectNode["SourceId"].asString();
	if(!objectNode["DefaultCollectionId"].isNull())
		object_.defaultCollectionId = objectNode["DefaultCollectionId"].asString();
	if(!objectNode["IsSuspended"].isNull())
		object_.isSuspended = objectNode["IsSuspended"].asString() == "true";
	if(!objectNode["OrganizationId"].isNull())
		object_.organizationId = objectNode["OrganizationId"].asString();
	if(!objectNode["Visibility"].isNull())
		object_.visibility = objectNode["Visibility"].asString();
	if(!objectNode["Py"].isNull())
		object_.py = objectNode["Py"].asString();
	if(!objectNode["Category"].isNull())
		object_.category = objectNode["Category"].asString();
	if(!objectNode["NextTaskUniqueId"].isNull())
		object_.nextTaskUniqueId = std::stoi(objectNode["NextTaskUniqueId"].asString());
	if(!objectNode["Customfields"].isNull())
		object_.customfields = objectNode["Customfields"].asString();
	if(!objectNode["Created"].isNull())
		object_.created = objectNode["Created"].asString();
	if(!objectNode["Id"].isNull())
		object_.id = objectNode["Id"].asString();
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["Successful"].isNull())
		successful_ = value["Successful"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string GetDevopsProjectInfoResult::getErrorMsg()const
{
	return errorMsg_;
}

GetDevopsProjectInfoResult::Object GetDevopsProjectInfoResult::getObject()const
{
	return object_;
}

std::string GetDevopsProjectInfoResult::getErrorCode()const
{
	return errorCode_;
}

bool GetDevopsProjectInfoResult::getSuccessful()const
{
	return successful_;
}

