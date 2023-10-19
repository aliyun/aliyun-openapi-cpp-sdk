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

#include <alibabacloud/dms-enterprise/model/GetAuthorityTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetAuthorityTemplateResult::GetAuthorityTemplateResult() :
	ServiceResult()
{}

GetAuthorityTemplateResult::GetAuthorityTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAuthorityTemplateResult::~GetAuthorityTemplateResult()
{}

void GetAuthorityTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto authorityTemplateViewNode = value["AuthorityTemplateView"];
	if(!authorityTemplateViewNode["TemplateId"].isNull())
		authorityTemplateView_.templateId = std::stol(authorityTemplateViewNode["TemplateId"].asString());
	if(!authorityTemplateViewNode["CreatorId"].isNull())
		authorityTemplateView_.creatorId = std::stol(authorityTemplateViewNode["CreatorId"].asString());
	if(!authorityTemplateViewNode["Name"].isNull())
		authorityTemplateView_.name = authorityTemplateViewNode["Name"].asString();
	if(!authorityTemplateViewNode["Description"].isNull())
		authorityTemplateView_.description = authorityTemplateViewNode["Description"].asString();
	if(!authorityTemplateViewNode["CreateTime"].isNull())
		authorityTemplateView_.createTime = authorityTemplateViewNode["CreateTime"].asString();
	auto allAuthorityTemplateItemListNode = authorityTemplateViewNode["AuthorityTemplateItemList"]["AuthorityTemplateItem"];
	for (auto authorityTemplateViewNodeAuthorityTemplateItemListAuthorityTemplateItem : allAuthorityTemplateItemListNode)
	{
		AuthorityTemplateView::AuthorityTemplateItem authorityTemplateItemObject;
		if(!authorityTemplateViewNodeAuthorityTemplateItemListAuthorityTemplateItem["ItemId"].isNull())
			authorityTemplateItemObject.itemId = std::stol(authorityTemplateViewNodeAuthorityTemplateItemListAuthorityTemplateItem["ItemId"].asString());
		if(!authorityTemplateViewNodeAuthorityTemplateItemListAuthorityTemplateItem["TemplateId"].isNull())
			authorityTemplateItemObject.templateId = std::stol(authorityTemplateViewNodeAuthorityTemplateItemListAuthorityTemplateItem["TemplateId"].asString());
		if(!authorityTemplateViewNodeAuthorityTemplateItemListAuthorityTemplateItem["ModifierId"].isNull())
			authorityTemplateItemObject.modifierId = std::stol(authorityTemplateViewNodeAuthorityTemplateItemListAuthorityTemplateItem["ModifierId"].asString());
		if(!authorityTemplateViewNodeAuthorityTemplateItemListAuthorityTemplateItem["ResourceType"].isNull())
			authorityTemplateItemObject.resourceType = authorityTemplateViewNodeAuthorityTemplateItemListAuthorityTemplateItem["ResourceType"].asString();
		if(!authorityTemplateViewNodeAuthorityTemplateItemListAuthorityTemplateItem["InstanceId"].isNull())
			authorityTemplateItemObject.instanceId = std::stol(authorityTemplateViewNodeAuthorityTemplateItemListAuthorityTemplateItem["InstanceId"].asString());
		if(!authorityTemplateViewNodeAuthorityTemplateItemListAuthorityTemplateItem["DbId"].isNull())
			authorityTemplateItemObject.dbId = std::stol(authorityTemplateViewNodeAuthorityTemplateItemListAuthorityTemplateItem["DbId"].asString());
		if(!authorityTemplateViewNodeAuthorityTemplateItemListAuthorityTemplateItem["TableName"].isNull())
			authorityTemplateItemObject.tableName = authorityTemplateViewNodeAuthorityTemplateItemListAuthorityTemplateItem["TableName"].asString();
		if(!authorityTemplateViewNodeAuthorityTemplateItemListAuthorityTemplateItem["Attribute"].isNull())
			authorityTemplateItemObject.attribute = authorityTemplateViewNodeAuthorityTemplateItemListAuthorityTemplateItem["Attribute"].asString();
		authorityTemplateView_.authorityTemplateItemList.push_back(authorityTemplateItemObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Tid"].isNull())
		tid_ = std::stol(value["Tid"].asString());

}

std::string GetAuthorityTemplateResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetAuthorityTemplateResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetAuthorityTemplateResult::getSuccess()const
{
	return success_;
}

long GetAuthorityTemplateResult::getTid()const
{
	return tid_;
}

GetAuthorityTemplateResult::AuthorityTemplateView GetAuthorityTemplateResult::getAuthorityTemplateView()const
{
	return authorityTemplateView_;
}

