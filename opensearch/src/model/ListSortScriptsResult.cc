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

#include <alibabacloud/opensearch/model/ListSortScriptsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

ListSortScriptsResult::ListSortScriptsResult() :
	ServiceResult()
{}

ListSortScriptsResult::ListSortScriptsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSortScriptsResult::~ListSortScriptsResult()
{}

void ListSortScriptsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["scriptInfo"];
	for (auto valueresultscriptInfo : allresultNode)
	{
		ScriptInfo resultObject;
		if(!valueresultscriptInfo["type"].isNull())
			resultObject.type = valueresultscriptInfo["type"].asString();
		if(!valueresultscriptInfo["scope"].isNull())
			resultObject.scope = valueresultscriptInfo["scope"].asString();
		if(!valueresultscriptInfo["createTime"].isNull())
			resultObject.createTime = valueresultscriptInfo["createTime"].asString();
		if(!valueresultscriptInfo["status"].isNull())
			resultObject.status = valueresultscriptInfo["status"].asString();
		if(!valueresultscriptInfo["modifyTime"].isNull())
			resultObject.modifyTime = valueresultscriptInfo["modifyTime"].asString();
		if(!valueresultscriptInfo["scriptName"].isNull())
			resultObject.scriptName = valueresultscriptInfo["scriptName"].asString();
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::vector<ListSortScriptsResult::ScriptInfo> ListSortScriptsResult::getresult()const
{
	return result_;
}

std::string ListSortScriptsResult::getRequestId()const
{
	return requestId_;
}

