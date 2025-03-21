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

#include <alibabacloud/eiam/model/ListEiamInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

ListEiamInstancesResult::ListEiamInstancesResult() :
	ServiceResult()
{}

ListEiamInstancesResult::ListEiamInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEiamInstancesResult::~ListEiamInstancesResult()
{}

void ListEiamInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["Instance"];
	for (auto valueInstancesInstance : allInstancesNode)
	{
		Instance instancesObject;
		if(!valueInstancesInstance["Description"].isNull())
			instancesObject.description = valueInstancesInstance["Description"].asString();
		if(!valueInstancesInstance["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesInstance["InstanceId"].asString();
		if(!valueInstancesInstance["StartTime"].isNull())
			instancesObject.startTime = std::stol(valueInstancesInstance["StartTime"].asString());
		if(!valueInstancesInstance["SSODomain"].isNull())
			instancesObject.sSODomain = valueInstancesInstance["SSODomain"].asString();
		if(!valueInstancesInstance["DeveloperAPIPrivateDomain"].isNull())
			instancesObject.developerAPIPrivateDomain = valueInstancesInstance["DeveloperAPIPrivateDomain"].asString();
		if(!valueInstancesInstance["DeveloperAPIPublicDomain"].isNull())
			instancesObject.developerAPIPublicDomain = valueInstancesInstance["DeveloperAPIPublicDomain"].asString();
		if(!valueInstancesInstance["OpenAPIPrivateDomain"].isNull())
			instancesObject.openAPIPrivateDomain = valueInstancesInstance["OpenAPIPrivateDomain"].asString();
		if(!valueInstancesInstance["OpenAPIPublicDomain"].isNull())
			instancesObject.openAPIPublicDomain = valueInstancesInstance["OpenAPIPublicDomain"].asString();
		if(!valueInstancesInstance["InstanceStatus"].isNull())
			instancesObject.instanceStatus = valueInstancesInstance["InstanceStatus"].asString();
		if(!valueInstancesInstance["InstanceVersion"].isNull())
			instancesObject.instanceVersion = valueInstancesInstance["InstanceVersion"].asString();
		instances_.push_back(instancesObject);
	}

}

std::vector<ListEiamInstancesResult::Instance> ListEiamInstancesResult::getInstances()const
{
	return instances_;
}

