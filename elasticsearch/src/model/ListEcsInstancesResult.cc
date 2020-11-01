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

#include <alibabacloud/elasticsearch/model/ListEcsInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

ListEcsInstancesResult::ListEcsInstancesResult() :
	ServiceResult()
{}

ListEcsInstancesResult::ListEcsInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEcsInstancesResult::~ListEcsInstancesResult()
{}

void ListEcsInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["ecsInstanceId"].isNull())
			resultObject.ecsInstanceId = valueResultResultItem["ecsInstanceId"].asString();
		if(!valueResultResultItem["ecsInstanceName"].isNull())
			resultObject.ecsInstanceName = valueResultResultItem["ecsInstanceName"].asString();
		if(!valueResultResultItem["status"].isNull())
			resultObject.status = valueResultResultItem["status"].asString();
		if(!valueResultResultItem["tags"].isNull())
			resultObject.tags = valueResultResultItem["tags"].asString();
		if(!valueResultResultItem["osType"].isNull())
			resultObject.osType = valueResultResultItem["osType"].asString();
		if(!valueResultResultItem["cloudAssistantStatus"].isNull())
			resultObject.cloudAssistantStatus = valueResultResultItem["cloudAssistantStatus"].asString();
		auto allipAddressNode = allResultNode["ipAddress"]["ipAddressItem"];
		for (auto allResultNodeipAddressipAddressItem : allipAddressNode)
		{
			ResultItem::IpAddressItem ipAddressObject;
			if(!allResultNodeipAddressipAddressItem["host"].isNull())
				ipAddressObject.host = allResultNodeipAddressipAddressItem["host"].asString();
			if(!allResultNodeipAddressipAddressItem["ipType"].isNull())
				ipAddressObject.ipType = allResultNodeipAddressipAddressItem["ipType"].asString();
			resultObject.ipAddress.push_back(ipAddressObject);
		}
		auto allcollectorsNode = allResultNode["collectors"]["collectorsItem"];
		for (auto allResultNodecollectorscollectorsItem : allcollectorsNode)
		{
			ResultItem::CollectorsItem collectorsObject;
			if(!allResultNodecollectorscollectorsItem["gmtCreatedTime"].isNull())
				collectorsObject.gmtCreatedTime = allResultNodecollectorscollectorsItem["gmtCreatedTime"].asString();
			if(!allResultNodecollectorscollectorsItem["gmtUpdateTime"].isNull())
				collectorsObject.gmtUpdateTime = allResultNodecollectorscollectorsItem["gmtUpdateTime"].asString();
			if(!allResultNodecollectorscollectorsItem["name"].isNull())
				collectorsObject.name = allResultNodecollectorscollectorsItem["name"].asString();
			if(!allResultNodecollectorscollectorsItem["resId"].isNull())
				collectorsObject.resId = allResultNodecollectorscollectorsItem["resId"].asString();
			if(!allResultNodecollectorscollectorsItem["resVersion"].isNull())
				collectorsObject.resVersion = allResultNodecollectorscollectorsItem["resVersion"].asString();
			if(!allResultNodecollectorscollectorsItem["vpcId"].isNull())
				collectorsObject.vpcId = allResultNodecollectorscollectorsItem["vpcId"].asString();
			if(!allResultNodecollectorscollectorsItem["resType"].isNull())
				collectorsObject.resType = allResultNodecollectorscollectorsItem["resType"].asString();
			if(!allResultNodecollectorscollectorsItem["ownerId"].isNull())
				collectorsObject.ownerId = allResultNodecollectorscollectorsItem["ownerId"].asString();
			if(!allResultNodecollectorscollectorsItem["status"].isNull())
				collectorsObject.status = allResultNodecollectorscollectorsItem["status"].asString();
			if(!allResultNodecollectorscollectorsItem["dryRun"].isNull())
				collectorsObject.dryRun = allResultNodecollectorscollectorsItem["dryRun"].asString() == "true";
			auto allconfigsNode = allcollectorsNode["configs"]["configsItem"];
			for (auto allcollectorsNodeconfigsconfigsItem : allconfigsNode)
			{
				ResultItem::CollectorsItem::ConfigsItem configsObject;
				if(!allcollectorsNodeconfigsconfigsItem["fileName"].isNull())
					configsObject.fileName = allcollectorsNodeconfigsconfigsItem["fileName"].asString();
				if(!allcollectorsNodeconfigsconfigsItem["content"].isNull())
					configsObject.content = allcollectorsNodeconfigsconfigsItem["content"].asString();
				collectorsObject.configs.push_back(configsObject);
			}
			auto allextendConfigsNode = allcollectorsNode["extendConfigs"]["extendConfigsItem"];
			for (auto allcollectorsNodeextendConfigsextendConfigsItem : allextendConfigsNode)
			{
				ResultItem::CollectorsItem::ExtendConfigsItem extendConfigsObject;
				if(!allcollectorsNodeextendConfigsextendConfigsItem["configType"].isNull())
					extendConfigsObject.configType = allcollectorsNodeextendConfigsextendConfigsItem["configType"].asString();
				if(!allcollectorsNodeextendConfigsextendConfigsItem["instanceId"].isNull())
					extendConfigsObject.instanceId = allcollectorsNodeextendConfigsextendConfigsItem["instanceId"].asString();
				if(!allcollectorsNodeextendConfigsextendConfigsItem["instanceType"].isNull())
					extendConfigsObject.instanceType = allcollectorsNodeextendConfigsextendConfigsItem["instanceType"].asString();
				if(!allcollectorsNodeextendConfigsextendConfigsItem["protocol"].isNull())
					extendConfigsObject.protocol = allcollectorsNodeextendConfigsextendConfigsItem["protocol"].asString();
				if(!allcollectorsNodeextendConfigsextendConfigsItem["userName"].isNull())
					extendConfigsObject.userName = allcollectorsNodeextendConfigsextendConfigsItem["userName"].asString();
				if(!allcollectorsNodeextendConfigsextendConfigsItem["enableMonitoring"].isNull())
					extendConfigsObject.enableMonitoring = allcollectorsNodeextendConfigsextendConfigsItem["enableMonitoring"].asString() == "true";
				if(!allcollectorsNodeextendConfigsextendConfigsItem["type"].isNull())
					extendConfigsObject.type = allcollectorsNodeextendConfigsextendConfigsItem["type"].asString();
				if(!allcollectorsNodeextendConfigsextendConfigsItem["groupId"].isNull())
					extendConfigsObject.groupId = allcollectorsNodeextendConfigsextendConfigsItem["groupId"].asString();
				auto allmachinesNode = allextendConfigsNode["machines"]["machinesItem"];
				for (auto allextendConfigsNodemachinesmachinesItem : allmachinesNode)
				{
					ResultItem::CollectorsItem::ExtendConfigsItem::MachinesItem machinesObject;
					if(!allextendConfigsNodemachinesmachinesItem["instanceId"].isNull())
						machinesObject.instanceId = allextendConfigsNodemachinesmachinesItem["instanceId"].asString();
					if(!allextendConfigsNodemachinesmachinesItem["agentStatus"].isNull())
						machinesObject.agentStatus = allextendConfigsNodemachinesmachinesItem["agentStatus"].asString();
					extendConfigsObject.machines.push_back(machinesObject);
				}
				auto allHosts = value["hosts"]["hosts"];
				for (auto value : allHosts)
					extendConfigsObject.hosts.push_back(value.asString());
				collectorsObject.extendConfigs.push_back(extendConfigsObject);
			}
			auto allCollectorPaths = value["collectorPaths"]["collectorPaths"];
			for (auto value : allCollectorPaths)
				collectorsObject.collectorPaths.push_back(value.asString());
			resultObject.collectors.push_back(collectorsObject);
		}
		result_.push_back(resultObject);
	}
	auto headersNode = value["Headers"];
	if(!headersNode["X-Total-Count"].isNull())
		headers_.xTotalCount = std::stoi(headersNode["X-Total-Count"].asString());

}

ListEcsInstancesResult::Headers ListEcsInstancesResult::getHeaders()const
{
	return headers_;
}

std::vector<ListEcsInstancesResult::ResultItem> ListEcsInstancesResult::getResult()const
{
	return result_;
}

