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

#include <alibabacloud/dms-enterprise/model/GetAuthorityTemplateItemResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetAuthorityTemplateItemResult::GetAuthorityTemplateItemResult() :
	ServiceResult()
{}

GetAuthorityTemplateItemResult::GetAuthorityTemplateItemResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAuthorityTemplateItemResult::~GetAuthorityTemplateItemResult()
{}

void GetAuthorityTemplateItemResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAuthorityTemplateItemListNode = value["AuthorityTemplateItemList"]["AuthorityTemplateItem"];
	for (auto valueAuthorityTemplateItemListAuthorityTemplateItem : allAuthorityTemplateItemListNode)
	{
		AuthorityTemplateItem authorityTemplateItemListObject;
		if(!valueAuthorityTemplateItemListAuthorityTemplateItem["ItemId"].isNull())
			authorityTemplateItemListObject.itemId = std::stol(valueAuthorityTemplateItemListAuthorityTemplateItem["ItemId"].asString());
		if(!valueAuthorityTemplateItemListAuthorityTemplateItem["TemplateId"].isNull())
			authorityTemplateItemListObject.templateId = std::stol(valueAuthorityTemplateItemListAuthorityTemplateItem["TemplateId"].asString());
		if(!valueAuthorityTemplateItemListAuthorityTemplateItem["ModifierId"].isNull())
			authorityTemplateItemListObject.modifierId = std::stol(valueAuthorityTemplateItemListAuthorityTemplateItem["ModifierId"].asString());
		if(!valueAuthorityTemplateItemListAuthorityTemplateItem["ResourceType"].isNull())
			authorityTemplateItemListObject.resourceType = valueAuthorityTemplateItemListAuthorityTemplateItem["ResourceType"].asString();
		if(!valueAuthorityTemplateItemListAuthorityTemplateItem["InstanceId"].isNull())
			authorityTemplateItemListObject.instanceId = std::stol(valueAuthorityTemplateItemListAuthorityTemplateItem["InstanceId"].asString());
		if(!valueAuthorityTemplateItemListAuthorityTemplateItem["DbId"].isNull())
			authorityTemplateItemListObject.dbId = std::stol(valueAuthorityTemplateItemListAuthorityTemplateItem["DbId"].asString());
		if(!valueAuthorityTemplateItemListAuthorityTemplateItem["TableName"].isNull())
			authorityTemplateItemListObject.tableName = valueAuthorityTemplateItemListAuthorityTemplateItem["TableName"].asString();
		if(!valueAuthorityTemplateItemListAuthorityTemplateItem["Attribute"].isNull())
			authorityTemplateItemListObject.attribute = valueAuthorityTemplateItemListAuthorityTemplateItem["Attribute"].asString();
		authorityTemplateItemList_.push_back(authorityTemplateItemListObject);
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

std::vector<GetAuthorityTemplateItemResult::AuthorityTemplateItem> GetAuthorityTemplateItemResult::getAuthorityTemplateItemList()const
{
	return authorityTemplateItemList_;
}

std::string GetAuthorityTemplateItemResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetAuthorityTemplateItemResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetAuthorityTemplateItemResult::getSuccess()const
{
	return success_;
}

long GetAuthorityTemplateItemResult::getTid()const
{
	return tid_;
}

