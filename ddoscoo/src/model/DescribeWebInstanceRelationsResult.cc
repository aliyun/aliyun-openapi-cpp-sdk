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

#include <alibabacloud/ddoscoo/model/DescribeWebInstanceRelationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeWebInstanceRelationsResult::DescribeWebInstanceRelationsResult() :
	ServiceResult()
{}

DescribeWebInstanceRelationsResult::DescribeWebInstanceRelationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWebInstanceRelationsResult::~DescribeWebInstanceRelationsResult()
{}

void DescribeWebInstanceRelationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allWebInstanceRelationsNode = value["WebInstanceRelations"]["WebInstanceRelation"];
	for (auto valueWebInstanceRelationsWebInstanceRelation : allWebInstanceRelationsNode)
	{
		WebInstanceRelation webInstanceRelationsObject;
		if(!valueWebInstanceRelationsWebInstanceRelation["Domain"].isNull())
			webInstanceRelationsObject.domain = valueWebInstanceRelationsWebInstanceRelation["Domain"].asString();
		auto allInstanceDetailsNode = valueWebInstanceRelationsWebInstanceRelation["InstanceDetails"]["InstanceDetail"];
		for (auto valueWebInstanceRelationsWebInstanceRelationInstanceDetailsInstanceDetail : allInstanceDetailsNode)
		{
			WebInstanceRelation::InstanceDetail instanceDetailsObject;
			if(!valueWebInstanceRelationsWebInstanceRelationInstanceDetailsInstanceDetail["FunctionVersion"].isNull())
				instanceDetailsObject.functionVersion = valueWebInstanceRelationsWebInstanceRelationInstanceDetailsInstanceDetail["FunctionVersion"].asString();
			if(!valueWebInstanceRelationsWebInstanceRelationInstanceDetailsInstanceDetail["InstanceId"].isNull())
				instanceDetailsObject.instanceId = valueWebInstanceRelationsWebInstanceRelationInstanceDetailsInstanceDetail["InstanceId"].asString();
			auto allEipList = value["EipList"]["Eip"];
			for (auto value : allEipList)
				instanceDetailsObject.eipList.push_back(value.asString());
			webInstanceRelationsObject.instanceDetails.push_back(instanceDetailsObject);
		}
		webInstanceRelations_.push_back(webInstanceRelationsObject);
	}

}

std::vector<DescribeWebInstanceRelationsResult::WebInstanceRelation> DescribeWebInstanceRelationsResult::getWebInstanceRelations()const
{
	return webInstanceRelations_;
}

