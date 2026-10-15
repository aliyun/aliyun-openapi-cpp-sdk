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

#include <alibabacloud/quickbi-public/model/ListAuthConfigByResourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

ListAuthConfigByResourceResult::ListAuthConfigByResourceResult() :
	ServiceResult()
{}

ListAuthConfigByResourceResult::ListAuthConfigByResourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAuthConfigByResourceResult::~ListAuthConfigByResourceResult()
{}

void ListAuthConfigByResourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["Data"];
	for (auto valueResultData : allResultNode)
	{
		Data resultObject;
		if(!valueResultData["GmtCreate"].isNull())
			resultObject.gmtCreate = valueResultData["GmtCreate"].asString();
		if(!valueResultData["Scope"].isNull())
			resultObject.scope = std::stoi(valueResultData["Scope"].asString());
		if(!valueResultData["ExpireDate"].isNull())
			resultObject.expireDate = valueResultData["ExpireDate"].asString();
		if(!valueResultData["ResourceId"].isNull())
			resultObject.resourceId = valueResultData["ResourceId"].asString();
		if(!valueResultData["AuthorizedId"].isNull())
			resultObject.authorizedId = valueResultData["AuthorizedId"].asString();
		if(!valueResultData["AuthorizedName"].isNull())
			resultObject.authorizedName = valueResultData["AuthorizedName"].asString();
		if(!valueResultData["ResourceType"].isNull())
			resultObject.resourceType = valueResultData["ResourceType"].asString();
		auto allAuthorities = value["Authorities"]["Authorities"];
		for (auto value : allAuthorities)
			resultObject.authorities.push_back(value.asString());
		result_.push_back(resultObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool ListAuthConfigByResourceResult::getSuccess()const
{
	return success_;
}

std::vector<ListAuthConfigByResourceResult::Data> ListAuthConfigByResourceResult::getResult()const
{
	return result_;
}

