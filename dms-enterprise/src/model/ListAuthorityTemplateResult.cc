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

#include <alibabacloud/dms-enterprise/model/ListAuthorityTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListAuthorityTemplateResult::ListAuthorityTemplateResult() :
	ServiceResult()
{}

ListAuthorityTemplateResult::ListAuthorityTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAuthorityTemplateResult::~ListAuthorityTemplateResult()
{}

void ListAuthorityTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAuthorityTemplateViewListNode = value["AuthorityTemplateViewList"]["AuthorityTemplateView"];
	for (auto valueAuthorityTemplateViewListAuthorityTemplateView : allAuthorityTemplateViewListNode)
	{
		AuthorityTemplateView authorityTemplateViewListObject;
		if(!valueAuthorityTemplateViewListAuthorityTemplateView["TemplateId"].isNull())
			authorityTemplateViewListObject.templateId = std::stol(valueAuthorityTemplateViewListAuthorityTemplateView["TemplateId"].asString());
		if(!valueAuthorityTemplateViewListAuthorityTemplateView["CreatorId"].isNull())
			authorityTemplateViewListObject.creatorId = std::stol(valueAuthorityTemplateViewListAuthorityTemplateView["CreatorId"].asString());
		if(!valueAuthorityTemplateViewListAuthorityTemplateView["Name"].isNull())
			authorityTemplateViewListObject.name = valueAuthorityTemplateViewListAuthorityTemplateView["Name"].asString();
		if(!valueAuthorityTemplateViewListAuthorityTemplateView["Description"].isNull())
			authorityTemplateViewListObject.description = valueAuthorityTemplateViewListAuthorityTemplateView["Description"].asString();
		if(!valueAuthorityTemplateViewListAuthorityTemplateView["CreateTime"].isNull())
			authorityTemplateViewListObject.createTime = valueAuthorityTemplateViewListAuthorityTemplateView["CreateTime"].asString();
		authorityTemplateViewList_.push_back(authorityTemplateViewListObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Tid"].isNull())
		tid_ = std::stol(value["Tid"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListAuthorityTemplateResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListAuthorityTemplateResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListAuthorityTemplateResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListAuthorityTemplateResult::getSuccess()const
{
	return success_;
}

long ListAuthorityTemplateResult::getTid()const
{
	return tid_;
}

std::vector<ListAuthorityTemplateResult::AuthorityTemplateView> ListAuthorityTemplateResult::getAuthorityTemplateViewList()const
{
	return authorityTemplateViewList_;
}

