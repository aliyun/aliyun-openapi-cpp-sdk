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

#include <alibabacloud/gpdb/model/DescribeAvailableResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeAvailableResourcesResult::DescribeAvailableResourcesResult() :
	ServiceResult()
{}

DescribeAvailableResourcesResult::DescribeAvailableResourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAvailableResourcesResult::~DescribeAvailableResourcesResult()
{}

void DescribeAvailableResourcesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourcesNode = value["Resources"]["Resource"];
	for (auto valueResourcesResource : allResourcesNode)
	{
		Resource resourcesObject;
		if(!valueResourcesResource["ZoneId"].isNull())
			resourcesObject.zoneId = valueResourcesResource["ZoneId"].asString();
		auto allSupportedEnginesNode = allResourcesNode["SupportedEngines"]["SupportedEngine"];
		for (auto allResourcesNodeSupportedEnginesSupportedEngine : allSupportedEnginesNode)
		{
			Resource::SupportedEngine supportedEnginesObject;
			if(!allResourcesNodeSupportedEnginesSupportedEngine["SupportedEngineVersion"].isNull())
				supportedEnginesObject.supportedEngineVersion = allResourcesNodeSupportedEnginesSupportedEngine["SupportedEngineVersion"].asString();
			auto allSupportedInstanceClassesNode = allSupportedEnginesNode["SupportedInstanceClasses"]["SupportedInstanceClass"];
			for (auto allSupportedEnginesNodeSupportedInstanceClassesSupportedInstanceClass : allSupportedInstanceClassesNode)
			{
				Resource::SupportedEngine::SupportedInstanceClass supportedInstanceClassesObject;
				if(!allSupportedEnginesNodeSupportedInstanceClassesSupportedInstanceClass["DisplayClass"].isNull())
					supportedInstanceClassesObject.displayClass = allSupportedEnginesNodeSupportedInstanceClassesSupportedInstanceClass["DisplayClass"].asString();
				if(!allSupportedEnginesNodeSupportedInstanceClassesSupportedInstanceClass["InstanceClass"].isNull())
					supportedInstanceClassesObject.instanceClass = allSupportedEnginesNodeSupportedInstanceClassesSupportedInstanceClass["InstanceClass"].asString();
				if(!allSupportedEnginesNodeSupportedInstanceClassesSupportedInstanceClass["Description"].isNull())
					supportedInstanceClassesObject.description = allSupportedEnginesNodeSupportedInstanceClassesSupportedInstanceClass["Description"].asString();
				auto allNodeCount = value["NodeCount"]["NodeCount"];
				for (auto value : allNodeCount)
					supportedInstanceClassesObject.nodeCount.push_back(value.asString());
				supportedEnginesObject.supportedInstanceClasses.push_back(supportedInstanceClassesObject);
			}
			resourcesObject.supportedEngines.push_back(supportedEnginesObject);
		}
		resources_.push_back(resourcesObject);
	}
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

std::vector<DescribeAvailableResourcesResult::Resource> DescribeAvailableResourcesResult::getResources()const
{
	return resources_;
}

std::string DescribeAvailableResourcesResult::getRegionId()const
{
	return regionId_;
}

