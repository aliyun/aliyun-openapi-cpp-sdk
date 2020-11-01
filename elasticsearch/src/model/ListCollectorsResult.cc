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

#include <alibabacloud/elasticsearch/model/ListCollectorsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

ListCollectorsResult::ListCollectorsResult() :
	ServiceResult()
{}

ListCollectorsResult::ListCollectorsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCollectorsResult::~ListCollectorsResult()
{}

void ListCollectorsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["gmtCreatedTime"].isNull())
			resultObject.gmtCreatedTime = valueResultResultItem["gmtCreatedTime"].asString();
		if(!valueResultResultItem["gmtUpdateTime"].isNull())
			resultObject.gmtUpdateTime = valueResultResultItem["gmtUpdateTime"].asString();
		if(!valueResultResultItem["name"].isNull())
			resultObject.name = valueResultResultItem["name"].asString();
		if(!valueResultResultItem["resId"].isNull())
			resultObject.resId = valueResultResultItem["resId"].asString();
		if(!valueResultResultItem["resVersion"].isNull())
			resultObject.resVersion = valueResultResultItem["resVersion"].asString();
		if(!valueResultResultItem["vpcId"].isNull())
			resultObject.vpcId = valueResultResultItem["vpcId"].asString();
		if(!valueResultResultItem["resType"].isNull())
			resultObject.resType = valueResultResultItem["resType"].asString();
		if(!valueResultResultItem["ownerId"].isNull())
			resultObject.ownerId = valueResultResultItem["ownerId"].asString();
		if(!valueResultResultItem["status"].isNull())
			resultObject.status = valueResultResultItem["status"].asString();
		if(!valueResultResultItem["dryRun"].isNull())
			resultObject.dryRun = valueResultResultItem["dryRun"].asString() == "true";
		auto allconfigsNode = allResultNode["configs"]["configsItem"];
		for (auto allResultNodeconfigsconfigsItem : allconfigsNode)
		{
			ResultItem::ConfigsItem configsObject;
			if(!allResultNodeconfigsconfigsItem["fileName"].isNull())
				configsObject.fileName = allResultNodeconfigsconfigsItem["fileName"].asString();
			if(!allResultNodeconfigsconfigsItem["content"].isNull())
				configsObject.content = allResultNodeconfigsconfigsItem["content"].asString();
			resultObject.configs.push_back(configsObject);
		}
		auto allextendConfigsNode = allResultNode["extendConfigs"]["extendConfigsItem"];
		for (auto allResultNodeextendConfigsextendConfigsItem : allextendConfigsNode)
		{
			ResultItem::ExtendConfigsItem extendConfigsObject;
			if(!allResultNodeextendConfigsextendConfigsItem["configType"].isNull())
				extendConfigsObject.configType = allResultNodeextendConfigsextendConfigsItem["configType"].asString();
			if(!allResultNodeextendConfigsextendConfigsItem["instanceId"].isNull())
				extendConfigsObject.instanceId = allResultNodeextendConfigsextendConfigsItem["instanceId"].asString();
			if(!allResultNodeextendConfigsextendConfigsItem["instanceType"].isNull())
				extendConfigsObject.instanceType = allResultNodeextendConfigsextendConfigsItem["instanceType"].asString();
			if(!allResultNodeextendConfigsextendConfigsItem["protocol"].isNull())
				extendConfigsObject.protocol = allResultNodeextendConfigsextendConfigsItem["protocol"].asString();
			if(!allResultNodeextendConfigsextendConfigsItem["userName"].isNull())
				extendConfigsObject.userName = allResultNodeextendConfigsextendConfigsItem["userName"].asString();
			if(!allResultNodeextendConfigsextendConfigsItem["enableMonitoring"].isNull())
				extendConfigsObject.enableMonitoring = allResultNodeextendConfigsextendConfigsItem["enableMonitoring"].asString() == "true";
			if(!allResultNodeextendConfigsextendConfigsItem["type"].isNull())
				extendConfigsObject.type = allResultNodeextendConfigsextendConfigsItem["type"].asString();
			if(!allResultNodeextendConfigsextendConfigsItem["groupId"].isNull())
				extendConfigsObject.groupId = allResultNodeextendConfigsextendConfigsItem["groupId"].asString();
			auto allmachinesNode = allextendConfigsNode["machines"]["machinesItem"];
			for (auto allextendConfigsNodemachinesmachinesItem : allmachinesNode)
			{
				ResultItem::ExtendConfigsItem::MachinesItem machinesObject;
				if(!allextendConfigsNodemachinesmachinesItem["instanceId"].isNull())
					machinesObject.instanceId = allextendConfigsNodemachinesmachinesItem["instanceId"].asString();
				if(!allextendConfigsNodemachinesmachinesItem["agentStatus"].isNull())
					machinesObject.agentStatus = allextendConfigsNodemachinesmachinesItem["agentStatus"].asString();
				extendConfigsObject.machines.push_back(machinesObject);
			}
			auto allHosts = value["hosts"]["hosts"];
			for (auto value : allHosts)
				extendConfigsObject.hosts.push_back(value.asString());
			resultObject.extendConfigs.push_back(extendConfigsObject);
		}
		auto allCollectorPaths = value["collectorPaths"]["collectorPaths"];
		for (auto value : allCollectorPaths)
			resultObject.collectorPaths.push_back(value.asString());
		result_.push_back(resultObject);
	}
	auto headersNode = value["Headers"];
	if(!headersNode["X-Total-Count"].isNull())
		headers_.xTotalCount = std::stoi(headersNode["X-Total-Count"].asString());

}

ListCollectorsResult::Headers ListCollectorsResult::getHeaders()const
{
	return headers_;
}

std::vector<ListCollectorsResult::ResultItem> ListCollectorsResult::getResult()const
{
	return result_;
}

