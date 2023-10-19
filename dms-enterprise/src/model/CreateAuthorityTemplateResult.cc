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

#include <alibabacloud/dms-enterprise/model/CreateAuthorityTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

CreateAuthorityTemplateResult::CreateAuthorityTemplateResult() :
	ServiceResult()
{}

CreateAuthorityTemplateResult::CreateAuthorityTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateAuthorityTemplateResult::~CreateAuthorityTemplateResult()
{}

void CreateAuthorityTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto authorityTemplateViewNode = value["AuthorityTemplateView"];
	if(!authorityTemplateViewNode["TemplateId"].isNull())
		authorityTemplateView_.templateId = std::stol(authorityTemplateViewNode["TemplateId"].asString());
	if(!authorityTemplateViewNode["Name"].isNull())
		authorityTemplateView_.name = authorityTemplateViewNode["Name"].asString();
	if(!authorityTemplateViewNode["CreatorId"].isNull())
		authorityTemplateView_.creatorId = std::stol(authorityTemplateViewNode["CreatorId"].asString());
	if(!authorityTemplateViewNode["Description"].isNull())
		authorityTemplateView_.description = authorityTemplateViewNode["Description"].asString();
	if(!authorityTemplateViewNode["CreateTime"].isNull())
		authorityTemplateView_.createTime = authorityTemplateViewNode["CreateTime"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Tid"].isNull())
		tid_ = std::stol(value["Tid"].asString());

}

std::string CreateAuthorityTemplateResult::getErrorCode()const
{
	return errorCode_;
}

std::string CreateAuthorityTemplateResult::getErrorMessage()const
{
	return errorMessage_;
}

bool CreateAuthorityTemplateResult::getSuccess()const
{
	return success_;
}

long CreateAuthorityTemplateResult::getTid()const
{
	return tid_;
}

CreateAuthorityTemplateResult::AuthorityTemplateView CreateAuthorityTemplateResult::getAuthorityTemplateView()const
{
	return authorityTemplateView_;
}

