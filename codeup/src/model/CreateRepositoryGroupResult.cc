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

#include <alibabacloud/codeup/model/CreateRepositoryGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

CreateRepositoryGroupResult::CreateRepositoryGroupResult() :
	ServiceResult()
{}

CreateRepositoryGroupResult::CreateRepositoryGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateRepositoryGroupResult::~CreateRepositoryGroupResult()
{}

void CreateRepositoryGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Id"].isNull())
		result_.id = std::stol(resultNode["Id"].asString());
	if(!resultNode["Description"].isNull())
		result_.description = resultNode["Description"].asString();
	if(!resultNode["VisibilityLevel"].isNull())
		result_.visibilityLevel = resultNode["VisibilityLevel"].asString();
	if(!resultNode["WebUrl"].isNull())
		result_.webUrl = resultNode["WebUrl"].asString();
	if(!resultNode["Name"].isNull())
		result_.name = resultNode["Name"].asString();
	if(!resultNode["NameWithNamespace"].isNull())
		result_.nameWithNamespace = resultNode["NameWithNamespace"].asString();
	if(!resultNode["Path"].isNull())
		result_.path = resultNode["Path"].asString();
	if(!resultNode["PathWithNamespace"].isNull())
		result_.pathWithNamespace = resultNode["PathWithNamespace"].asString();
	if(!resultNode["ParentId"].isNull())
		result_.parentId = std::stol(resultNode["ParentId"].asString());
	if(!resultNode["OwnerId"].isNull())
		result_.ownerId = std::stol(resultNode["OwnerId"].asString());
	if(!resultNode["AvatarUrl"].isNull())
		result_.avatarUrl = resultNode["AvatarUrl"].asString();
	if(!resultNode["Type"].isNull())
		result_.type = resultNode["Type"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int CreateRepositoryGroupResult::getErrorCode()const
{
	return errorCode_;
}

std::string CreateRepositoryGroupResult::getErrorMessage()const
{
	return errorMessage_;
}

bool CreateRepositoryGroupResult::getSuccess()const
{
	return success_;
}

CreateRepositoryGroupResult::Result CreateRepositoryGroupResult::getResult()const
{
	return result_;
}

