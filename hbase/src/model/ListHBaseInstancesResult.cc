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

#include <alibabacloud/hbase/model/ListHBaseInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::HBase;
using namespace AlibabaCloud::HBase::Model;

ListHBaseInstancesResult::ListHBaseInstancesResult() :
	ServiceResult()
{}

ListHBaseInstancesResult::ListHBaseInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListHBaseInstancesResult::~ListHBaseInstancesResult()
{}

void ListHBaseInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["Instance"];
	for (auto valueInstancesInstance : allInstancesNode)
	{
		Instance instancesObject;
		if(!valueInstancesInstance["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesInstance["InstanceId"].asString();
		if(!valueInstancesInstance["InstanceName"].isNull())
			instancesObject.instanceName = valueInstancesInstance["InstanceName"].asString();
		if(!valueInstancesInstance["IsDefault"].isNull())
			instancesObject.isDefault = valueInstancesInstance["IsDefault"].asString() == "true";
		instances_.push_back(instancesObject);
	}

}

std::vector<ListHBaseInstancesResult::Instance> ListHBaseInstancesResult::getInstances()const
{
	return instances_;
}

