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

#include <alibabacloud/ehpc/model/ListAccountMappingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListAccountMappingResult::ListAccountMappingResult() :
	ServiceResult()
{}

ListAccountMappingResult::ListAccountMappingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAccountMappingResult::~ListAccountMappingResult()
{}

void ListAccountMappingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUserMappingsNode = value["UserMappings"]["UserMapping"];
	for (auto valueUserMappingsUserMapping : allUserMappingsNode)
	{
		UserMapping userMappingsObject;
		if(!valueUserMappingsUserMapping["UserName"].isNull())
			userMappingsObject.userName = valueUserMappingsUserMapping["UserName"].asString();
		if(!valueUserMappingsUserMapping["AccountId"].isNull())
			userMappingsObject.accountId = valueUserMappingsUserMapping["AccountId"].asString();
		if(!valueUserMappingsUserMapping["AccountName"].isNull())
			userMappingsObject.accountName = valueUserMappingsUserMapping["AccountName"].asString();
		userMappings_.push_back(userMappingsObject);
	}

}

std::vector<ListAccountMappingResult::UserMapping> ListAccountMappingResult::getUserMappings()const
{
	return userMappings_;
}

