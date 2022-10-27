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
		if(!valueResultResultItem["cloudAssistantStatus"].isNull())
			resultObject.cloudAssistantStatus = valueResultResultItem["cloudAssistantStatus"].asString();
		if(!valueResultResultItem["ecsInstanceName"].isNull())
			resultObject.ecsInstanceName = valueResultResultItem["ecsInstanceName"].asString();
		if(!valueResultResultItem["ecsInstanceId"].isNull())
			resultObject.ecsInstanceId = valueResultResultItem["ecsInstanceId"].asString();
		if(!valueResultResultItem["tags"].isNull())
			resultObject.tags = valueResultResultItem["tags"].asString();
		if(!valueResultResultItem["osType"].isNull())
			resultObject.osType = valueResultResultItem["osType"].asString();
		if(!valueResultResultItem["status"].isNull())
			resultObject.status = valueResultResultItem["status"].asString();
		auto allipAddressNode = valueResultResultItem["ipAddress"]["ipAddressItem"];
		for (auto valueResultResultItemipAddressipAddressItem : allipAddressNode)
		{
			ResultItem::IpAddressItem ipAddressObject;
			if(!valueResultResultItemipAddressipAddressItem["ipType"].isNull())
				ipAddressObject.ipType = valueResultResultItemipAddressipAddressItem["ipType"].asString();
			if(!valueResultResultItemipAddressipAddressItem["host"].isNull())
				ipAddressObject.host = valueResultResultItemipAddressipAddressItem["host"].asString();
			resultObject.ipAddress.push_back(ipAddressObject);
		}
		auto allcollectorsNode = valueResultResultItem["collectors"]["collectorsItem"];
		for (auto valueResultResultItemcollectorscollectorsItem : allcollectorsNode)
		{
			ResultItem::CollectorsItem collectorsObject;
			if(!valueResultResultItemcollectorscollectorsItem["resId"].isNull())
				collectorsObject.resId = valueResultResultItemcollectorscollectorsItem["resId"].asString();
			if(!valueResultResultItemcollectorscollectorsItem["gmtUpdateTime"].isNull())
				collectorsObject.gmtUpdateTime = valueResultResultItemcollectorscollectorsItem["gmtUpdateTime"].asString();
			if(!valueResultResultItemcollectorscollectorsItem["dryRun"].isNull())
				collectorsObject.dryRun = valueResultResultItemcollectorscollectorsItem["dryRun"].asString() == "true";
			if(!valueResultResultItemcollectorscollectorsItem["ownerId"].isNull())
				collectorsObject.ownerId = valueResultResultItemcollectorscollectorsItem["ownerId"].asString();
			if(!valueResultResultItemcollectorscollectorsItem["vpcId"].isNull())
				collectorsObject.vpcId = valueResultResultItemcollectorscollectorsItem["vpcId"].asString();
			if(!valueResultResultItemcollectorscollectorsItem["resType"].isNull())
				collectorsObject.resType = valueResultResultItemcollectorscollectorsItem["resType"].asString();
			if(!valueResultResultItemcollectorscollectorsItem["resVersion"].isNull())
				collectorsObject.resVersion = valueResultResultItemcollectorscollectorsItem["resVersion"].asString();
			if(!valueResultResultItemcollectorscollectorsItem["gmtCreatedTime"].isNull())
				collectorsObject.gmtCreatedTime = valueResultResultItemcollectorscollectorsItem["gmtCreatedTime"].asString();
			if(!valueResultResultItemcollectorscollectorsItem["status"].isNull())
				collectorsObject.status = valueResultResultItemcollectorscollectorsItem["status"].asString();
			if(!valueResultResultItemcollectorscollectorsItem["name"].isNull())
				collectorsObject.name = valueResultResultItemcollectorscollectorsItem["name"].asString();
			auto allconfigsNode = valueResultResultItemcollectorscollectorsItem["configs"]["configsItem"];
			for (auto valueResultResultItemcollectorscollectorsItemconfigsconfigsItem : allconfigsNode)
			{
				ResultItem::CollectorsItem::ConfigsItem configsObject;
				if(!valueResultResultItemcollectorscollectorsItemconfigsconfigsItem["content"].isNull())
					configsObject.content = valueResultResultItemcollectorscollectorsItemconfigsconfigsItem["content"].asString();
				if(!valueResultResultItemcollectorscollectorsItemconfigsconfigsItem["fileName"].isNull())
					configsObject.fileName = valueResultResultItemcollectorscollectorsItemconfigsconfigsItem["fileName"].asString();
				collectorsObject.configs.push_back(configsObject);
			}
			auto allextendConfigsNode = valueResultResultItemcollectorscollectorsItem["extendConfigs"]["extendConfigsItem"];
			for (auto valueResultResultItemcollectorscollectorsItemextendConfigsextendConfigsItem : allextendConfigsNode)
			{
				ResultItem::CollectorsItem::ExtendConfigsItem extendConfigsObject;
				if(!valueResultResultItemcollectorscollectorsItemextendConfigsextendConfigsItem["enableMonitoring"].isNull())
					extendConfigsObject.enableMonitoring = valueResultResultItemcollectorscollectorsItemextendConfigsextendConfigsItem["enableMonitoring"].asString() == "true";
				if(!valueResultResultItemcollectorscollectorsItemextendConfigsextendConfigsItem["groupId"].isNull())
					extendConfigsObject.groupId = valueResultResultItemcollectorscollectorsItemextendConfigsextendConfigsItem["groupId"].asString();
				if(!valueResultResultItemcollectorscollectorsItemextendConfigsextendConfigsItem["configType"].isNull())
					extendConfigsObject.configType = valueResultResultItemcollectorscollectorsItemextendConfigsextendConfigsItem["configType"].asString();
				if(!valueResultResultItemcollectorscollectorsItemextendConfigsextendConfigsItem["instanceType"].isNull())
					extendConfigsObject.instanceType = valueResultResultItemcollectorscollectorsItemextendConfigsextendConfigsItem["instanceType"].asString();
				if(!valueResultResultItemcollectorscollectorsItemextendConfigsextendConfigsItem["protocol"].isNull())
					extendConfigsObject.protocol = valueResultResultItemcollectorscollectorsItemextendConfigsextendConfigsItem["protocol"].asString();
				if(!valueResultResultItemcollectorscollectorsItemextendConfigsextendConfigsItem["userName"].isNull())
					extendConfigsObject.userName = valueResultResultItemcollectorscollectorsItemextendConfigsextendConfigsItem["userName"].asString();
				if(!valueResultResultItemcollectorscollectorsItemextendConfigsextendConfigsItem["type"].isNull())
					extendConfigsObject.type = valueResultResultItemcollectorscollectorsItemextendConfigsextendConfigsItem["type"].asString();
				if(!valueResultResultItemcollectorscollectorsItemextendConfigsextendConfigsItem["instanceId"].isNull())
					extendConfigsObject.instanceId = valueResultResultItemcollectorscollectorsItemextendConfigsextendConfigsItem["instanceId"].asString();
				auto allmachinesNode = valueResultResultItemcollectorscollectorsItemextendConfigsextendConfigsItem["machines"]["machinesItem"];
				for (auto valueResultResultItemcollectorscollectorsItemextendConfigsextendConfigsItemmachinesmachinesItem : allmachinesNode)
				{
					ResultItem::CollectorsItem::ExtendConfigsItem::MachinesItem machinesObject;
					if(!valueResultResultItemcollectorscollectorsItemextendConfigsextendConfigsItemmachinesmachinesItem["agentStatus"].isNull())
						machinesObject.agentStatus = valueResultResultItemcollectorscollectorsItemextendConfigsextendConfigsItemmachinesmachinesItem["agentStatus"].asString();
					if(!valueResultResultItemcollectorscollectorsItemextendConfigsextendConfigsItemmachinesmachinesItem["instanceId"].isNull())
						machinesObject.instanceId = valueResultResultItemcollectorscollectorsItemextendConfigsextendConfigsItemmachinesmachinesItem["instanceId"].asString();
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

