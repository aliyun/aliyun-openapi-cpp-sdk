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

#include <alibabacloud/csas/model/ListTagsForPrivateAccessPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListTagsForPrivateAccessPolicyResult::ListTagsForPrivateAccessPolicyResult() :
	ServiceResult()
{}

ListTagsForPrivateAccessPolicyResult::ListTagsForPrivateAccessPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTagsForPrivateAccessPolicyResult::~ListTagsForPrivateAccessPolicyResult()
{}

void ListTagsForPrivateAccessPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPolicesNode = value["Polices"]["policy"];
	for (auto valuePolicespolicy : allPolicesNode)
	{
		Policy policesObject;
		if(!valuePolicespolicy["PolicyId"].isNull())
			policesObject.policyId = valuePolicespolicy["PolicyId"].asString();
		auto allTagsNode = valuePolicespolicy["Tags"]["tag"];
		for (auto valuePolicespolicyTagstag : allTagsNode)
		{
			Policy::Tag tagsObject;
			if(!valuePolicespolicyTagstag["TagId"].isNull())
				tagsObject.tagId = valuePolicespolicyTagstag["TagId"].asString();
			if(!valuePolicespolicyTagstag["Name"].isNull())
				tagsObject.name = valuePolicespolicyTagstag["Name"].asString();
			if(!valuePolicespolicyTagstag["Description"].isNull())
				tagsObject.description = valuePolicespolicyTagstag["Description"].asString();
			if(!valuePolicespolicyTagstag["TagType"].isNull())
				tagsObject.tagType = valuePolicespolicyTagstag["TagType"].asString();
			if(!valuePolicespolicyTagstag["CreateTime"].isNull())
				tagsObject.createTime = valuePolicespolicyTagstag["CreateTime"].asString();
			policesObject.tags.push_back(tagsObject);
		}
		polices_.push_back(policesObject);
	}

}

std::vector<ListTagsForPrivateAccessPolicyResult::Policy> ListTagsForPrivateAccessPolicyResult::getPolices()const
{
	return polices_;
}

