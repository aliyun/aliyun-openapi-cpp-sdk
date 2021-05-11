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

#include <alibabacloud/dataworks-public/model/ListTableGranteesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListTableGranteesResult::ListTableGranteesResult() :
	ServiceResult()
{}

ListTableGranteesResult::ListTableGranteesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTableGranteesResult::~ListTableGranteesResult()
{}

void ListTableGranteesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGranteeNode = value["Grantee"]["GranteeItem"];
	for (auto valueGranteeGranteeItem : allGranteeNode)
	{
		GranteeItem granteeObject;
		if(!valueGranteeGranteeItem["GranteeTypeDescription"].isNull())
			granteeObject.granteeTypeDescription = valueGranteeGranteeItem["GranteeTypeDescription"].asString();
		if(!valueGranteeGranteeItem["GranteeName"].isNull())
			granteeObject.granteeName = valueGranteeGranteeItem["GranteeName"].asString();
		if(!valueGranteeGranteeItem["GranteeId"].isNull())
			granteeObject.granteeId = valueGranteeGranteeItem["GranteeId"].asString();
		auto allActions = value["Actions"]["Actions"];
		for (auto value : allActions)
			granteeObject.actions.push_back(value.asString());
		grantee_.push_back(granteeObject);
	}

}

std::vector<ListTableGranteesResult::GranteeItem> ListTableGranteesResult::getGrantee()const
{
	return grantee_;
}

