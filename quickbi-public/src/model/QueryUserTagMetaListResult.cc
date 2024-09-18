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

#include <alibabacloud/quickbi-public/model/QueryUserTagMetaListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

QueryUserTagMetaListResult::QueryUserTagMetaListResult() :
	ServiceResult()
{}

QueryUserTagMetaListResult::QueryUserTagMetaListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryUserTagMetaListResult::~QueryUserTagMetaListResult()
{}

void QueryUserTagMetaListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["TagDescription"].isNull())
			resultObject.tagDescription = valueResultResultItem["TagDescription"].asString();
		if(!valueResultResultItem["TagId"].isNull())
			resultObject.tagId = valueResultResultItem["TagId"].asString();
		if(!valueResultResultItem["TagName"].isNull())
			resultObject.tagName = valueResultResultItem["TagName"].asString();
		result_.push_back(resultObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool QueryUserTagMetaListResult::getSuccess()const
{
	return success_;
}

std::vector<QueryUserTagMetaListResult::ResultItem> QueryUserTagMetaListResult::getResult()const
{
	return result_;
}

