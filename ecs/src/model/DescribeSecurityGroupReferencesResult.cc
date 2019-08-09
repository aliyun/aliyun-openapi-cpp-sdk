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

#include <alibabacloud/ecs/model/DescribeSecurityGroupReferencesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeSecurityGroupReferencesResult::DescribeSecurityGroupReferencesResult() :
	ServiceResult()
{}

DescribeSecurityGroupReferencesResult::DescribeSecurityGroupReferencesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSecurityGroupReferencesResult::~DescribeSecurityGroupReferencesResult()
{}

void DescribeSecurityGroupReferencesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allSecurityGroupReferences = value["SecurityGroupReferences"]["SecurityGroupReference"];
	for (auto value : allSecurityGroupReferences)
	{
		SecurityGroupReference securityGroupReferencesObject;
		if(!value["SecurityGroupId"].isNull())
			securityGroupReferencesObject.securityGroupId = value["SecurityGroupId"].asString();
		auto allReferencingSecurityGroups = value["ReferencingSecurityGroups"]["ReferencingSecurityGroup"];
		for (auto value : allReferencingSecurityGroups)
		{
			SecurityGroupReference::ReferencingSecurityGroup referencingSecurityGroupsObject;
			if(!value["AliUid"].isNull())
				referencingSecurityGroupsObject.aliUid = value["AliUid"].asString();
			if(!value["SecurityGroupId"].isNull())
				referencingSecurityGroupsObject.securityGroupId = value["SecurityGroupId"].asString();
			securityGroupReferencesObject.referencingSecurityGroups.push_back(referencingSecurityGroupsObject);
		}
		securityGroupReferences_.push_back(securityGroupReferencesObject);
	}

}

std::vector<DescribeSecurityGroupReferencesResult::SecurityGroupReference> DescribeSecurityGroupReferencesResult::getSecurityGroupReferences()const
{
	return securityGroupReferences_;
}

