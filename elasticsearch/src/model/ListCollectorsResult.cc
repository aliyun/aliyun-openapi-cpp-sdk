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
		if(!valueResultResultItem["resId"].isNull())
			resultObject.resId = valueResultResultItem["resId"].asString();
		if(!valueResultResultItem["gmtUpdateTime"].isNull())
			resultObject.gmtUpdateTime = valueResultResultItem["gmtUpdateTime"].asString();
		if(!valueResultResultItem["dryRun"].isNull())
			resultObject.dryRun = valueResultResultItem["dryRun"].asString() == "true";
		if(!valueResultResultItem["ownerId"].isNull())
			resultObject.ownerId = valueResultResultItem["ownerId"].asString();
		if(!valueResultResultItem["vpcId"].isNull())
			resultObject.vpcId = valueResultResultItem["vpcId"].asString();
		if(!valueResultResultItem["resType"].isNull())
			resultObject.resType = valueResultResultItem["resType"].asString();
		if(!valueResultResultItem["resVersion"].isNull())
			resultObject.resVersion = valueResultResultItem["resVersion"].asString();
		if(!valueResultResultItem["gmtCreatedTime"].isNull())
			resultObject.gmtCreatedTime = valueResultResultItem["gmtCreatedTime"].asString();
		if(!valueResultResultItem["status"].isNull())
			resultObject.status = valueResultResultItem["status"].asString();
		if(!valueResultResultItem["name"].isNull())
			resultObject.name = valueResultResultItem["name"].asString();
		auto allconfigsNode = valueResultResultItem["configs"]["configsItem"];
		for (auto valueResultResultItemconfigsconfigsItem : allconfigsNode)
		{
			ResultItem::ConfigsItem configsObject;
			if(!valueResultResultItemconfigsconfigsItem["content"].isNull())
				configsObject.content = valueResultResultItemconfigsconfigsItem["content"].asString();
			if(!valueResultResultItemconfigsconfigsItem["fileName"].isNull())
				configsObject.fileName = valueResultResultItemconfigsconfigsItem["fileName"].asString();
			resultObject.configs.push_back(configsObject);
		}
		auto allextendConfigsNode = valueResultResultItem["extendConfigs"]["extendConfigsItem"];
		for (auto valueResultResultItemextendConfigsextendConfigsItem : allextendConfigsNode)
		{
			ResultItem::ExtendConfigsItem extendConfigsObject;
			if(!valueResultResultItemextendConfigsextendConfigsItem["successPodsCount"].isNull())
				extendConfigsObject.successPodsCount = valueResultResultItemextendConfigsextendConfigsItem["successPodsCount"].asString();
			if(!valueResultResultItemextendConfigsextendConfigsItem["protocol"].isNull())
				extendConfigsObject.protocol = valueResultResultItemextendConfigsextendConfigsItem["protocol"].asString();
			if(!valueResultResultItemextendConfigsextendConfigsItem["userName"].isNull())
				extendConfigsObject.userName = valueResultResultItemextendConfigsextendConfigsItem["userName"].asString();
			if(!valueResultResultItemextendConfigsextendConfigsItem["totalPodsCount"].isNull())
				extendConfigsObject.totalPodsCount = valueResultResultItemextendConfigsextendConfigsItem["totalPodsCount"].asString();
			if(!valueResultResultItemextendConfigsextendConfigsItem["type"].isNull())
				extendConfigsObject.type = valueResultResultItemextendConfigsextendConfigsItem["type"].asString();
			if(!valueResultResultItemextendConfigsextendConfigsItem["kibanaHost"].isNull())
				extendConfigsObject.kibanaHost = valueResultResultItemextendConfigsextendConfigsItem["kibanaHost"].asString();
			if(!valueResultResultItemextendConfigsextendConfigsItem["enableMonitoring"].isNull())
				extendConfigsObject.enableMonitoring = valueResultResultItemextendConfigsextendConfigsItem["enableMonitoring"].asString() == "true";
			if(!valueResultResultItemextendConfigsextendConfigsItem["configType"].isNull())
				extendConfigsObject.configType = valueResultResultItemextendConfigsextendConfigsItem["configType"].asString();
			if(!valueResultResultItemextendConfigsextendConfigsItem["instanceType"].isNull())
				extendConfigsObject.instanceType = valueResultResultItemextendConfigsextendConfigsItem["instanceType"].asString();
			if(!valueResultResultItemextendConfigsextendConfigsItem["groupId"].isNull())
				extendConfigsObject.groupId = valueResultResultItemextendConfigsextendConfigsItem["groupId"].asString();
			if(!valueResultResultItemextendConfigsextendConfigsItem["host"].isNull())
				extendConfigsObject.host = valueResultResultItemextendConfigsextendConfigsItem["host"].asString();
			if(!valueResultResultItemextendConfigsextendConfigsItem["instanceId"].isNull())
				extendConfigsObject.instanceId = valueResultResultItemextendConfigsextendConfigsItem["instanceId"].asString();
			auto allmachinesNode = valueResultResultItemextendConfigsextendConfigsItem["machines"]["machinesItem"];
			for (auto valueResultResultItemextendConfigsextendConfigsItemmachinesmachinesItem : allmachinesNode)
			{
				ResultItem::ExtendConfigsItem::MachinesItem machinesObject;
				if(!valueResultResultItemextendConfigsextendConfigsItemmachinesmachinesItem["agentStatus"].isNull())
					machinesObject.agentStatus = valueResultResultItemextendConfigsextendConfigsItemmachinesmachinesItem["agentStatus"].asString();
				if(!valueResultResultItemextendConfigsextendConfigsItemmachinesmachinesItem["instanceId"].isNull())
					machinesObject.instanceId = valueResultResultItemextendConfigsextendConfigsItemmachinesmachinesItem["instanceId"].asString();
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

