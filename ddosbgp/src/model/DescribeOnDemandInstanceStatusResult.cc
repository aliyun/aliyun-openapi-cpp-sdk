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

#include <alibabacloud/ddosbgp/model/DescribeOnDemandInstanceStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddosbgp;
using namespace AlibabaCloud::Ddosbgp::Model;

DescribeOnDemandInstanceStatusResult::DescribeOnDemandInstanceStatusResult() :
	ServiceResult()
{}

DescribeOnDemandInstanceStatusResult::DescribeOnDemandInstanceStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOnDemandInstanceStatusResult::~DescribeOnDemandInstanceStatusResult()
{}

void DescribeOnDemandInstanceStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["instance"];
	for (auto valueInstancesinstance : allInstancesNode)
	{
		Instance instancesObject;
		if(!valueInstancesinstance["UserId"].isNull())
			instancesObject.userId = valueInstancesinstance["UserId"].asString();
		if(!valueInstancesinstance["Mode"].isNull())
			instancesObject.mode = valueInstancesinstance["Mode"].asString();
		if(!valueInstancesinstance["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesinstance["InstanceId"].asString();
		if(!valueInstancesinstance["Declared"].isNull())
			instancesObject.declared = valueInstancesinstance["Declared"].asString();
		if(!valueInstancesinstance["RegistedAs"].isNull())
			instancesObject.registedAs = valueInstancesinstance["RegistedAs"].asString();
		if(!valueInstancesinstance["Net"].isNull())
			instancesObject.net = valueInstancesinstance["Net"].asString();
		if(!valueInstancesinstance["Desc"].isNull())
			instancesObject.desc = valueInstancesinstance["Desc"].asString();
		instances_.push_back(instancesObject);
	}

}

std::vector<DescribeOnDemandInstanceStatusResult::Instance> DescribeOnDemandInstanceStatusResult::getInstances()const
{
	return instances_;
}

