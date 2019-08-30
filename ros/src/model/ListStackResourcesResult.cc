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

#include <alibabacloud/ros/model/ListStackResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ROS;
using namespace AlibabaCloud::ROS::Model;

ListStackResourcesResult::ListStackResourcesResult() :
	ServiceResult()
{}

ListStackResourcesResult::ListStackResourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListStackResourcesResult::~ListStackResourcesResult()
{}

void ListStackResourcesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allResources = value["Resources"]["Resource"];
	for (auto value : allResources)
	{
		Resource resourcesObject;
		if(!value["CreateTime"].isNull())
			resourcesObject.createTime = value["CreateTime"].asString();
		if(!value["LogicalResourceId"].isNull())
			resourcesObject.logicalResourceId = value["LogicalResourceId"].asString();
		if(!value["PhysicalResourceId"].isNull())
			resourcesObject.physicalResourceId = value["PhysicalResourceId"].asString();
		if(!value["ResourceType"].isNull())
			resourcesObject.resourceType = value["ResourceType"].asString();
		if(!value["StackId"].isNull())
			resourcesObject.stackId = value["StackId"].asString();
		if(!value["StackName"].isNull())
			resourcesObject.stackName = value["StackName"].asString();
		if(!value["Status"].isNull())
			resourcesObject.status = value["Status"].asString();
		if(!value["StatusReason"].isNull())
			resourcesObject.statusReason = value["StatusReason"].asString();
		if(!value["UpdateTime"].isNull())
			resourcesObject.updateTime = value["UpdateTime"].asString();
		resources_.push_back(resourcesObject);
	}

}

std::vector<ListStackResourcesResult::Resource> ListStackResourcesResult::getResources()const
{
	return resources_;
}

