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

#include <alibabacloud/csas/model/ListPrivateAccessTagsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListPrivateAccessTagsResult::ListPrivateAccessTagsResult() :
	ServiceResult()
{}

ListPrivateAccessTagsResult::ListPrivateAccessTagsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPrivateAccessTagsResult::~ListPrivateAccessTagsResult()
{}

void ListPrivateAccessTagsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTagsNode = value["Tags"]["tag"];
	for (auto valueTagstag : allTagsNode)
	{
		Tag tagsObject;
		if(!valueTagstag["TagId"].isNull())
			tagsObject.tagId = valueTagstag["TagId"].asString();
		if(!valueTagstag["Name"].isNull())
			tagsObject.name = valueTagstag["Name"].asString();
		if(!valueTagstag["Description"].isNull())
			tagsObject.description = valueTagstag["Description"].asString();
		if(!valueTagstag["TagType"].isNull())
			tagsObject.tagType = valueTagstag["TagType"].asString();
		if(!valueTagstag["CreateTime"].isNull())
			tagsObject.createTime = valueTagstag["CreateTime"].asString();
		auto allApplicationIds = value["ApplicationIds"]["applicationId"];
		for (auto value : allApplicationIds)
			tagsObject.applicationIds.push_back(value.asString());
		auto allPolicyIds = value["PolicyIds"]["policyId"];
		for (auto value : allPolicyIds)
			tagsObject.policyIds.push_back(value.asString());
		tags_.push_back(tagsObject);
	}
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stoi(value["TotalNum"].asString());

}

int ListPrivateAccessTagsResult::getTotalNum()const
{
	return totalNum_;
}

std::vector<ListPrivateAccessTagsResult::Tag> ListPrivateAccessTagsResult::getTags()const
{
	return tags_;
}

