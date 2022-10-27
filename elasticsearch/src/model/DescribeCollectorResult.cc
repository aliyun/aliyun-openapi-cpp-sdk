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

#include <alibabacloud/elasticsearch/model/DescribeCollectorResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

DescribeCollectorResult::DescribeCollectorResult() :
	ServiceResult()
{}

DescribeCollectorResult::DescribeCollectorResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCollectorResult::~DescribeCollectorResult()
{}

void DescribeCollectorResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["resId"].isNull())
		result_.resId = resultNode["resId"].asString();
	if(!resultNode["gmtUpdateTime"].isNull())
		result_.gmtUpdateTime = resultNode["gmtUpdateTime"].asString();
	if(!resultNode["dryRun"].isNull())
		result_.dryRun = resultNode["dryRun"].asString() == "true";
	if(!resultNode["ownerId"].isNull())
		result_.ownerId = resultNode["ownerId"].asString();
	if(!resultNode["vpcId"].isNull())
		result_.vpcId = resultNode["vpcId"].asString();
	if(!resultNode["resType"].isNull())
		result_.resType = resultNode["resType"].asString();
	if(!resultNode["resVersion"].isNull())
		result_.resVersion = resultNode["resVersion"].asString();
	if(!resultNode["gmtCreatedTime"].isNull())
		result_.gmtCreatedTime = resultNode["gmtCreatedTime"].asString();
	if(!resultNode["status"].isNull())
		result_.status = resultNode["status"].asString();
	if(!resultNode["name"].isNull())
		result_.name = resultNode["name"].asString();
	auto allconfigsNode = resultNode["configs"]["configsItem"];
	for (auto resultNodeconfigsconfigsItem : allconfigsNode)
	{
		Result::ConfigsItem configsItemObject;
		if(!resultNodeconfigsconfigsItem["content"].isNull())
			configsItemObject.content = resultNodeconfigsconfigsItem["content"].asString();
		if(!resultNodeconfigsconfigsItem["fileName"].isNull())
			configsItemObject.fileName = resultNodeconfigsconfigsItem["fileName"].asString();
		result_.configs.push_back(configsItemObject);
	}
	auto allextendConfigsNode = resultNode["extendConfigs"]["extendConfigsItem"];
	for (auto resultNodeextendConfigsextendConfigsItem : allextendConfigsNode)
	{
		Result::ExtendConfigsItem extendConfigsItemObject;
		if(!resultNodeextendConfigsextendConfigsItem["successPodsCount"].isNull())
			extendConfigsItemObject.successPodsCount = resultNodeextendConfigsextendConfigsItem["successPodsCount"].asString();
		if(!resultNodeextendConfigsextendConfigsItem["protocol"].isNull())
			extendConfigsItemObject.protocol = resultNodeextendConfigsextendConfigsItem["protocol"].asString();
		if(!resultNodeextendConfigsextendConfigsItem["userName"].isNull())
			extendConfigsItemObject.userName = resultNodeextendConfigsextendConfigsItem["userName"].asString();
		if(!resultNodeextendConfigsextendConfigsItem["totalPodsCount"].isNull())
			extendConfigsItemObject.totalPodsCount = resultNodeextendConfigsextendConfigsItem["totalPodsCount"].asString();
		if(!resultNodeextendConfigsextendConfigsItem["type"].isNull())
			extendConfigsItemObject.type = resultNodeextendConfigsextendConfigsItem["type"].asString();
		if(!resultNodeextendConfigsextendConfigsItem["kibanaHost"].isNull())
			extendConfigsItemObject.kibanaHost = resultNodeextendConfigsextendConfigsItem["kibanaHost"].asString();
		if(!resultNodeextendConfigsextendConfigsItem["enableMonitoring"].isNull())
			extendConfigsItemObject.enableMonitoring = resultNodeextendConfigsextendConfigsItem["enableMonitoring"].asString() == "true";
		if(!resultNodeextendConfigsextendConfigsItem["configType"].isNull())
			extendConfigsItemObject.configType = resultNodeextendConfigsextendConfigsItem["configType"].asString();
		if(!resultNodeextendConfigsextendConfigsItem["instanceType"].isNull())
			extendConfigsItemObject.instanceType = resultNodeextendConfigsextendConfigsItem["instanceType"].asString();
		if(!resultNodeextendConfigsextendConfigsItem["groupId"].isNull())
			extendConfigsItemObject.groupId = resultNodeextendConfigsextendConfigsItem["groupId"].asString();
		if(!resultNodeextendConfigsextendConfigsItem["host"].isNull())
			extendConfigsItemObject.host = resultNodeextendConfigsextendConfigsItem["host"].asString();
		if(!resultNodeextendConfigsextendConfigsItem["instanceId"].isNull())
			extendConfigsItemObject.instanceId = resultNodeextendConfigsextendConfigsItem["instanceId"].asString();
		auto allmachinesNode = resultNodeextendConfigsextendConfigsItem["machines"]["machinesItem"];
		for (auto resultNodeextendConfigsextendConfigsItemmachinesmachinesItem : allmachinesNode)
		{
			Result::ExtendConfigsItem::MachinesItem machinesObject;
			if(!resultNodeextendConfigsextendConfigsItemmachinesmachinesItem["agentStatus"].isNull())
				machinesObject.agentStatus = resultNodeextendConfigsextendConfigsItemmachinesmachinesItem["agentStatus"].asString();
			if(!resultNodeextendConfigsextendConfigsItemmachinesmachinesItem["instanceId"].isNull())
				machinesObject.instanceId = resultNodeextendConfigsextendConfigsItemmachinesmachinesItem["instanceId"].asString();
			extendConfigsItemObject.machines.push_back(machinesObject);
		}
		auto allHosts = value["hosts"]["hosts"];
		for (auto value : allHosts)
			extendConfigsItemObject.hosts.push_back(value.asString());
		result_.extendConfigs.push_back(extendConfigsItemObject);
	}
		auto allCollectorPaths = resultNode["collectorPaths"]["collectorPaths"];
		for (auto value : allCollectorPaths)
			result_.collectorPaths.push_back(value.asString());

}

DescribeCollectorResult::Result DescribeCollectorResult::getResult()const
{
	return result_;
}

