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

#include <alibabacloud/elasticsearch/model/CapacityPlanResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

CapacityPlanResult::CapacityPlanResult() :
	ServiceResult()
{}

CapacityPlanResult::CapacityPlanResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CapacityPlanResult::~CapacityPlanResult()
{}

void CapacityPlanResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["InstanceCategory"].isNull())
		result_.instanceCategory = resultNode["InstanceCategory"].asString();
	if(!resultNode["OversizedCluster"].isNull())
		result_.oversizedCluster = resultNode["OversizedCluster"].asString() == "true";
	auto allExtendConfigsNode = resultNode["ExtendConfigs"]["ExtendConfigsItem"];
	for (auto resultNodeExtendConfigsExtendConfigsItem : allExtendConfigsNode)
	{
		Result::ExtendConfigsItem extendConfigsItemObject;
		if(!resultNodeExtendConfigsExtendConfigsItem["ConfigType"].isNull())
			extendConfigsItemObject.configType = resultNodeExtendConfigsExtendConfigsItem["ConfigType"].asString();
		if(!resultNodeExtendConfigsExtendConfigsItem["Disk"].isNull())
			extendConfigsItemObject.disk = std::stol(resultNodeExtendConfigsExtendConfigsItem["Disk"].asString());
		if(!resultNodeExtendConfigsExtendConfigsItem["DiskType"].isNull())
			extendConfigsItemObject.diskType = resultNodeExtendConfigsExtendConfigsItem["DiskType"].asString();
		result_.extendConfigs.push_back(extendConfigsItemObject);
	}
	auto allNodeConfigurationsNode = resultNode["NodeConfigurations"]["NodeConfigurationsItem"];
	for (auto resultNodeNodeConfigurationsNodeConfigurationsItem : allNodeConfigurationsNode)
	{
		Result::NodeConfigurationsItem nodeConfigurationsItemObject;
		if(!resultNodeNodeConfigurationsNodeConfigurationsItem["Amount"].isNull())
			nodeConfigurationsItemObject.amount = std::stol(resultNodeNodeConfigurationsNodeConfigurationsItem["Amount"].asString());
		if(!resultNodeNodeConfigurationsNodeConfigurationsItem["Cpu"].isNull())
			nodeConfigurationsItemObject.cpu = std::stol(resultNodeNodeConfigurationsNodeConfigurationsItem["Cpu"].asString());
		if(!resultNodeNodeConfigurationsNodeConfigurationsItem["Disk"].isNull())
			nodeConfigurationsItemObject.disk = std::stol(resultNodeNodeConfigurationsNodeConfigurationsItem["Disk"].asString());
		if(!resultNodeNodeConfigurationsNodeConfigurationsItem["DiskType"].isNull())
			nodeConfigurationsItemObject.diskType = resultNodeNodeConfigurationsNodeConfigurationsItem["DiskType"].asString();
		if(!resultNodeNodeConfigurationsNodeConfigurationsItem["Memory"].isNull())
			nodeConfigurationsItemObject.memory = std::stol(resultNodeNodeConfigurationsNodeConfigurationsItem["Memory"].asString());
		if(!resultNodeNodeConfigurationsNodeConfigurationsItem["NodeType"].isNull())
			nodeConfigurationsItemObject.nodeType = resultNodeNodeConfigurationsNodeConfigurationsItem["NodeType"].asString();
		result_.nodeConfigurations.push_back(nodeConfigurationsItemObject);
	}

}

CapacityPlanResult::Result CapacityPlanResult::getResult()const
{
	return result_;
}

