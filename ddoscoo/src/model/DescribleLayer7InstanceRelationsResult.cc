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

#include <alibabacloud/ddoscoo/model/DescribleLayer7InstanceRelationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribleLayer7InstanceRelationsResult::DescribleLayer7InstanceRelationsResult() :
	ServiceResult()
{}

DescribleLayer7InstanceRelationsResult::DescribleLayer7InstanceRelationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribleLayer7InstanceRelationsResult::~DescribleLayer7InstanceRelationsResult()
{}

void DescribleLayer7InstanceRelationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLayer7InstanceRelationsNode = value["Layer7InstanceRelations"]["Layer7InstanceRelation"];
	for (auto valueLayer7InstanceRelationsLayer7InstanceRelation : allLayer7InstanceRelationsNode)
	{
		Layer7InstanceRelation layer7InstanceRelationsObject;
		if(!valueLayer7InstanceRelationsLayer7InstanceRelation["Domain"].isNull())
			layer7InstanceRelationsObject.domain = valueLayer7InstanceRelationsLayer7InstanceRelation["Domain"].asString();
		auto allInstanceDetailsNode = valueLayer7InstanceRelationsLayer7InstanceRelation["InstanceDetails"]["InstanceDetail"];
		for (auto valueLayer7InstanceRelationsLayer7InstanceRelationInstanceDetailsInstanceDetail : allInstanceDetailsNode)
		{
			Layer7InstanceRelation::InstanceDetail instanceDetailsObject;
			if(!valueLayer7InstanceRelationsLayer7InstanceRelationInstanceDetailsInstanceDetail["InstanceId"].isNull())
				instanceDetailsObject.instanceId = valueLayer7InstanceRelationsLayer7InstanceRelationInstanceDetailsInstanceDetail["InstanceId"].asString();
			if(!valueLayer7InstanceRelationsLayer7InstanceRelationInstanceDetailsInstanceDetail["FunctionVersion"].isNull())
				instanceDetailsObject.functionVersion = valueLayer7InstanceRelationsLayer7InstanceRelationInstanceDetailsInstanceDetail["FunctionVersion"].asString();
			if(!valueLayer7InstanceRelationsLayer7InstanceRelationInstanceDetailsInstanceDetail["IpVersion"].isNull())
				instanceDetailsObject.ipVersion = valueLayer7InstanceRelationsLayer7InstanceRelationInstanceDetailsInstanceDetail["IpVersion"].asString();
			if(!valueLayer7InstanceRelationsLayer7InstanceRelationInstanceDetailsInstanceDetail["IpMode"].isNull())
				instanceDetailsObject.ipMode = valueLayer7InstanceRelationsLayer7InstanceRelationInstanceDetailsInstanceDetail["IpMode"].asString();
			auto allEipList = value["EipList"]["Eip"];
			for (auto value : allEipList)
				instanceDetailsObject.eipList.push_back(value.asString());
			layer7InstanceRelationsObject.instanceDetails.push_back(instanceDetailsObject);
		}
		layer7InstanceRelations_.push_back(layer7InstanceRelationsObject);
	}

}

std::vector<DescribleLayer7InstanceRelationsResult::Layer7InstanceRelation> DescribleLayer7InstanceRelationsResult::getLayer7InstanceRelations()const
{
	return layer7InstanceRelations_;
}

