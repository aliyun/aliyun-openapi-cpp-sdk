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
		auto allSupportedEnginesNode = valueResourcesResource["SupportedEngines"]["SupportedEngine"];
		for (auto valueResourcesResourceSupportedEnginesSupportedEngine : allSupportedEnginesNode)
		{
			Resource::SupportedEngine supportedEnginesObject;
			if(!valueResourcesResourceSupportedEnginesSupportedEngine["SupportedEngineVersion"].isNull())
				supportedEnginesObject.supportedEngineVersion = valueResourcesResourceSupportedEnginesSupportedEngine["SupportedEngineVersion"].asString();
			if(!valueResourcesResourceSupportedEnginesSupportedEngine["Mode"].isNull())
				supportedEnginesObject.mode = valueResourcesResourceSupportedEnginesSupportedEngine["Mode"].asString();
			auto allSupportedInstanceClassesNode = valueResourcesResourceSupportedEnginesSupportedEngine["SupportedInstanceClasses"]["SupportedInstanceClass"];
			for (auto valueResourcesResourceSupportedEnginesSupportedEngineSupportedInstanceClassesSupportedInstanceClass : allSupportedInstanceClassesNode)
			{
				Resource::SupportedEngine::SupportedInstanceClass supportedInstanceClassesObject;
				if(!valueResourcesResourceSupportedEnginesSupportedEngineSupportedInstanceClassesSupportedInstanceClass["Description"].isNull())
					supportedInstanceClassesObject.description = valueResourcesResourceSupportedEnginesSupportedEngineSupportedInstanceClassesSupportedInstanceClass["Description"].asString();
				if(!valueResourcesResourceSupportedEnginesSupportedEngineSupportedInstanceClassesSupportedInstanceClass["DisplayClass"].isNull())
					supportedInstanceClassesObject.displayClass = valueResourcesResourceSupportedEnginesSupportedEngineSupportedInstanceClassesSupportedInstanceClass["DisplayClass"].asString();
				if(!valueResourcesResourceSupportedEnginesSupportedEngineSupportedInstanceClassesSupportedInstanceClass["InstanceClass"].isNull())
					supportedInstanceClassesObject.instanceClass = valueResourcesResourceSupportedEnginesSupportedEngineSupportedInstanceClassesSupportedInstanceClass["InstanceClass"].asString();
				if(!valueResourcesResourceSupportedEnginesSupportedEngineSupportedInstanceClassesSupportedInstanceClass["StorageType"].isNull())
					supportedInstanceClassesObject.storageType = valueResourcesResourceSupportedEnginesSupportedEngineSupportedInstanceClassesSupportedInstanceClass["StorageType"].asString();
				if(!valueResourcesResourceSupportedEnginesSupportedEngineSupportedInstanceClassesSupportedInstanceClass["Category"].isNull())
					supportedInstanceClassesObject.category = valueResourcesResourceSupportedEnginesSupportedEngineSupportedInstanceClassesSupportedInstanceClass["Category"].asString();
				auto nodeCountNode = value["NodeCount"];
				if(!nodeCountNode["Step"].isNull())
					supportedInstanceClassesObject.nodeCount.step = nodeCountNode["Step"].asString();
				if(!nodeCountNode["MinCount"].isNull())
					supportedInstanceClassesObject.nodeCount.minCount = nodeCountNode["MinCount"].asString();
				if(!nodeCountNode["MaxCount"].isNull())
					supportedInstanceClassesObject.nodeCount.maxCount = nodeCountNode["MaxCount"].asString();
				auto storageSizeNode = value["StorageSize"];
				if(!storageSizeNode["Step"].isNull())
					supportedInstanceClassesObject.storageSize.step = storageSizeNode["Step"].asString();
				if(!storageSizeNode["MinCount"].isNull())
					supportedInstanceClassesObject.storageSize.minCount = storageSizeNode["MinCount"].asString();
				if(!storageSizeNode["MaxCount"].isNull())
					supportedInstanceClassesObject.storageSize.maxCount = storageSizeNode["MaxCount"].asString();
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

