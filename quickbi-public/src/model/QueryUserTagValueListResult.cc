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

#include <alibabacloud/quickbi-public/model/QueryUserTagValueListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

QueryUserTagValueListResult::QueryUserTagValueListResult() :
	ServiceResult()
{}

QueryUserTagValueListResult::QueryUserTagValueListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryUserTagValueListResult::~QueryUserTagValueListResult()
{}

void QueryUserTagValueListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["Data"];
	for (auto valueResultData : allResultNode)
	{
		Data resultObject;
		if(!valueResultData["TagId"].isNull())
			resultObject.tagId = valueResultData["TagId"].asString();
		if(!valueResultData["TagName"].isNull())
			resultObject.tagName = valueResultData["TagName"].asString();
		if(!valueResultData["TagValue"].isNull())
			resultObject.tagValue = valueResultData["TagValue"].asString();
		result_.push_back(resultObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool QueryUserTagValueListResult::getSuccess()const
{
	return success_;
}

std::vector<QueryUserTagValueListResult::Data> QueryUserTagValueListResult::getResult()const
{
	return result_;
}

