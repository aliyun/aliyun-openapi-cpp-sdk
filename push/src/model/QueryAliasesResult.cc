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

#include <alibabacloud/push/model/QueryAliasesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Push;
using namespace AlibabaCloud::Push::Model;

QueryAliasesResult::QueryAliasesResult() :
	ServiceResult()
{}

QueryAliasesResult::QueryAliasesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryAliasesResult::~QueryAliasesResult()
{}

void QueryAliasesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAliasInfosNode = value["AliasInfos"]["AliasInfo"];
	for (auto valueAliasInfosAliasInfo : allAliasInfosNode)
	{
		AliasInfo aliasInfosObject;
		if(!valueAliasInfosAliasInfo["AliasName"].isNull())
			aliasInfosObject.aliasName = valueAliasInfosAliasInfo["AliasName"].asString();
		aliasInfos_.push_back(aliasInfosObject);
	}

}

std::vector<QueryAliasesResult::AliasInfo> QueryAliasesResult::getAliasInfos()const
{
	return aliasInfos_;
}

