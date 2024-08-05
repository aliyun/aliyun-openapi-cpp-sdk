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

#include <alibabacloud/arms/model/ListAddonsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListAddonsResult::ListAddonsResult() :
	ServiceResult()
{}

ListAddonsResult::ListAddonsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAddonsResult::~ListAddonsResult()
{}

void ListAddonsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["dataItem"];
	for (auto valueDatadataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDatadataItem["Alias"].isNull())
			dataObject.alias = valueDatadataItem["Alias"].asString();
		if(!valueDatadataItem["Description"].isNull())
			dataObject.description = valueDatadataItem["Description"].asString();
		if(!valueDatadataItem["Icon"].isNull())
			dataObject.icon = valueDatadataItem["Icon"].asString();
		if(!valueDatadataItem["Language"].isNull())
			dataObject.language = valueDatadataItem["Language"].asString();
		if(!valueDatadataItem["Name"].isNull())
			dataObject.name = valueDatadataItem["Name"].asString();
		if(!valueDatadataItem["Once"].isNull())
			dataObject.once = valueDatadataItem["Once"].asString() == "true";
		if(!valueDatadataItem["Scene"].isNull())
			dataObject.scene = valueDatadataItem["Scene"].asString();
		if(!valueDatadataItem["Version"].isNull())
			dataObject.version = valueDatadataItem["Version"].asString();
		if(!valueDatadataItem["Weight"].isNull())
			dataObject.weight = valueDatadataItem["Weight"].asString();
		if(!valueDatadataItem["LatestReleaseCreateTime"].isNull())
			dataObject.latestReleaseCreateTime = valueDatadataItem["LatestReleaseCreateTime"].asString();
		auto allDashboardsNode = valueDatadataItem["Dashboards"]["dashboardsItem"];
		for (auto valueDatadataItemDashboardsdashboardsItem : allDashboardsNode)
		{
			DataItem::DashboardsItem dashboardsObject;
			if(!valueDatadataItemDashboardsdashboardsItem["Description"].isNull())
				dashboardsObject.description = valueDatadataItemDashboardsdashboardsItem["Description"].asString();
			if(!valueDatadataItemDashboardsdashboardsItem["Name"].isNull())
				dashboardsObject.name = valueDatadataItemDashboardsdashboardsItem["Name"].asString();
			if(!valueDatadataItemDashboardsdashboardsItem["Url"].isNull())
				dashboardsObject.url = valueDatadataItemDashboardsdashboardsItem["Url"].asString();
			dataObject.dashboards.push_back(dashboardsObject);
		}
		auto allEnvironmentsNode = valueDatadataItem["Environments"]["environmentsItem"];
		for (auto valueDatadataItemEnvironmentsenvironmentsItem : allEnvironmentsNode)
		{
			DataItem::EnvironmentsItem environmentsObject;
			if(!valueDatadataItemEnvironmentsenvironmentsItem["Description"].isNull())
				environmentsObject.description = valueDatadataItemEnvironmentsenvironmentsItem["Description"].asString();
			if(!valueDatadataItemEnvironmentsenvironmentsItem["Enable"].isNull())
				environmentsObject.enable = valueDatadataItemEnvironmentsenvironmentsItem["Enable"].asString() == "true";
			if(!valueDatadataItemEnvironmentsenvironmentsItem["Label"].isNull())
				environmentsObject.label = valueDatadataItemEnvironmentsenvironmentsItem["Label"].asString();
			if(!valueDatadataItemEnvironmentsenvironmentsItem["Name"].isNull())
				environmentsObject.name = valueDatadataItemEnvironmentsenvironmentsItem["Name"].asString();
			auto dependenciesNode = value["Dependencies"];
			if(!dependenciesNode["Features"].isNull())
				environmentsObject.dependencies.features = dependenciesNode["Features"].asString();
				auto allServices = dependenciesNode["Services"]["services"];
				for (auto value : allServices)
					environmentsObject.dependencies.services.push_back(value.asString());
				auto allClusterTypes = dependenciesNode["ClusterTypes"]["clusterTypes"];
				for (auto value : allClusterTypes)
					environmentsObject.dependencies.clusterTypes.push_back(value.asString());
			auto policiesNode = value["Policies"];
			if(!policiesNode["AlertDefaultStatus"].isNull())
				environmentsObject.policies.alertDefaultStatus = policiesNode["AlertDefaultStatus"].asString();
			if(!policiesNode["DefaultInstall"].isNull())
				environmentsObject.policies.defaultInstall = policiesNode["DefaultInstall"].asString() == "true";
			if(!policiesNode["TargetAddonName"].isNull())
				environmentsObject.policies.targetAddonName = policiesNode["TargetAddonName"].asString();
			if(!policiesNode["EnableServiceAccount"].isNull())
				environmentsObject.policies.enableServiceAccount = policiesNode["EnableServiceAccount"].asString() == "true";
			if(!policiesNode["NeedRestartAfterIntegration"].isNull())
				environmentsObject.policies.needRestartAfterIntegration = policiesNode["NeedRestartAfterIntegration"].asString() == "true";
			auto allProtocolsNode = policiesNode["Protocols"]["protocolsItem"];
			for (auto policiesNodeProtocolsprotocolsItem : allProtocolsNode)
			{
				DataItem::EnvironmentsItem::Policies::ProtocolsItem protocolsItemObject;
				if(!policiesNodeProtocolsprotocolsItem["Name"].isNull())
					protocolsItemObject.name = policiesNodeProtocolsprotocolsItem["Name"].asString();
				if(!policiesNodeProtocolsprotocolsItem["Label"].isNull())
					protocolsItemObject.label = policiesNodeProtocolsprotocolsItem["Label"].asString();
				if(!policiesNodeProtocolsprotocolsItem["Icon"].isNull())
					protocolsItemObject.icon = policiesNodeProtocolsprotocolsItem["Icon"].asString();
				if(!policiesNodeProtocolsprotocolsItem["Description"].isNull())
					protocolsItemObject.description = policiesNodeProtocolsprotocolsItem["Description"].asString();
				environmentsObject.policies.protocols.push_back(protocolsItemObject);
			}
			auto metricCheckRuleNode = policiesNode["MetricCheckRule"];
				auto allPromQL = metricCheckRuleNode["PromQL"]["promQL"];
				for (auto value : allPromQL)
					environmentsObject.policies.metricCheckRule.promQL.push_back(value.asString());
			dataObject.environments.push_back(environmentsObject);
		}
		auto allCategories = value["Categories"]["categories"];
		for (auto value : allCategories)
			dataObject.categories.push_back(value.asString());
		auto allKeywords = value["Keywords"]["keywords"];
		for (auto value : allKeywords)
			dataObject.keywords.push_back(value.asString());
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListAddonsResult::getMessage()const
{
	return message_;
}

std::vector<ListAddonsResult::DataItem> ListAddonsResult::getData()const
{
	return data_;
}

int ListAddonsResult::getCode()const
{
	return code_;
}

bool ListAddonsResult::getSuccess()const
{
	return success_;
}

