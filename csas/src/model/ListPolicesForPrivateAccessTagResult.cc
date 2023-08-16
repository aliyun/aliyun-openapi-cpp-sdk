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

#include <alibabacloud/csas/model/ListPolicesForPrivateAccessTagResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListPolicesForPrivateAccessTagResult::ListPolicesForPrivateAccessTagResult() :
	ServiceResult()
{}

ListPolicesForPrivateAccessTagResult::ListPolicesForPrivateAccessTagResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPolicesForPrivateAccessTagResult::~ListPolicesForPrivateAccessTagResult()
{}

void ListPolicesForPrivateAccessTagResult::parse(const std::string &payload)
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
		auto allPolicesNode = valueTagstag["Polices"]["policy"];
		for (auto valueTagstagPolicespolicy : allPolicesNode)
		{
			Tag::Policy policesObject;
			if(!valueTagstagPolicespolicy["PolicyId"].isNull())
				policesObject.policyId = valueTagstagPolicespolicy["PolicyId"].asString();
			if(!valueTagstagPolicespolicy["Name"].isNull())
				policesObject.name = valueTagstagPolicespolicy["Name"].asString();
			if(!valueTagstagPolicespolicy["Description"].isNull())
				policesObject.description = valueTagstagPolicespolicy["Description"].asString();
			if(!valueTagstagPolicespolicy["PolicyAction"].isNull())
				policesObject.policyAction = valueTagstagPolicespolicy["PolicyAction"].asString();
			if(!valueTagstagPolicespolicy["Priority"].isNull())
				policesObject.priority = std::stoi(valueTagstagPolicespolicy["Priority"].asString());
			if(!valueTagstagPolicespolicy["Status"].isNull())
				policesObject.status = valueTagstagPolicespolicy["Status"].asString();
			if(!valueTagstagPolicespolicy["ApplicationType"].isNull())
				policesObject.applicationType = valueTagstagPolicespolicy["ApplicationType"].asString();
			if(!valueTagstagPolicespolicy["UserGroupType"].isNull())
				policesObject.userGroupType = valueTagstagPolicespolicy["UserGroupType"].asString();
			if(!valueTagstagPolicespolicy["CreateTime"].isNull())
				policesObject.createTime = valueTagstagPolicespolicy["CreateTime"].asString();
			auto allCustomUserAttributesNode = valueTagstagPolicespolicy["CustomUserAttributes"]["customUserAttribute"];
			for (auto valueTagstagPolicespolicyCustomUserAttributescustomUserAttribute : allCustomUserAttributesNode)
			{
				Tag::Policy::CustomUserAttribute customUserAttributesObject;
				if(!valueTagstagPolicespolicyCustomUserAttributescustomUserAttribute["UserGroupType"].isNull())
					customUserAttributesObject.userGroupType = valueTagstagPolicespolicyCustomUserAttributescustomUserAttribute["UserGroupType"].asString();
				if(!valueTagstagPolicespolicyCustomUserAttributescustomUserAttribute["Relation"].isNull())
					customUserAttributesObject.relation = valueTagstagPolicespolicyCustomUserAttributescustomUserAttribute["Relation"].asString();
				if(!valueTagstagPolicespolicyCustomUserAttributescustomUserAttribute["Value"].isNull())
					customUserAttributesObject.value = valueTagstagPolicespolicyCustomUserAttributescustomUserAttribute["Value"].asString();
				if(!valueTagstagPolicespolicyCustomUserAttributescustomUserAttribute["IdpId"].isNull())
					customUserAttributesObject.idpId = std::stoi(valueTagstagPolicespolicyCustomUserAttributescustomUserAttribute["IdpId"].asString());
				policesObject.customUserAttributes.push_back(customUserAttributesObject);
			}
			tagsObject.polices.push_back(policesObject);
		}
		tags_.push_back(tagsObject);
	}

}

std::vector<ListPolicesForPrivateAccessTagResult::Tag> ListPolicesForPrivateAccessTagResult::getTags()const
{
	return tags_;
}

