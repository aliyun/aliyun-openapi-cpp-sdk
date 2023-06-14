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

#include <alibabacloud/ga/model/ListEndpointGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

ListEndpointGroupsResult::ListEndpointGroupsResult() :
	ServiceResult()
{}

ListEndpointGroupsResult::ListEndpointGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEndpointGroupsResult::~ListEndpointGroupsResult()
{}

void ListEndpointGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEndpointGroupsNode = value["EndpointGroups"]["EndpointGroupsItem"];
	for (auto valueEndpointGroupsEndpointGroupsItem : allEndpointGroupsNode)
	{
		EndpointGroupsItem endpointGroupsObject;
		if(!valueEndpointGroupsEndpointGroupsItem["EndpointGroupId"].isNull())
			endpointGroupsObject.endpointGroupId = valueEndpointGroupsEndpointGroupsItem["EndpointGroupId"].asString();
		if(!valueEndpointGroupsEndpointGroupsItem["State"].isNull())
			endpointGroupsObject.state = valueEndpointGroupsEndpointGroupsItem["State"].asString();
		if(!valueEndpointGroupsEndpointGroupsItem["HealthCheckPath"].isNull())
			endpointGroupsObject.healthCheckPath = valueEndpointGroupsEndpointGroupsItem["HealthCheckPath"].asString();
		if(!valueEndpointGroupsEndpointGroupsItem["EndpointGroupRegion"].isNull())
			endpointGroupsObject.endpointGroupRegion = valueEndpointGroupsEndpointGroupsItem["EndpointGroupRegion"].asString();
		if(!valueEndpointGroupsEndpointGroupsItem["HealthCheckIntervalSeconds"].isNull())
			endpointGroupsObject.healthCheckIntervalSeconds = std::stoi(valueEndpointGroupsEndpointGroupsItem["HealthCheckIntervalSeconds"].asString());
		if(!valueEndpointGroupsEndpointGroupsItem["TrafficPercentage"].isNull())
			endpointGroupsObject.trafficPercentage = std::stoi(valueEndpointGroupsEndpointGroupsItem["TrafficPercentage"].asString());
		if(!valueEndpointGroupsEndpointGroupsItem["HealthCheckProtocol"].isNull())
			endpointGroupsObject.healthCheckProtocol = valueEndpointGroupsEndpointGroupsItem["HealthCheckProtocol"].asString();
		if(!valueEndpointGroupsEndpointGroupsItem["ThresholdCount"].isNull())
			endpointGroupsObject.thresholdCount = std::stoi(valueEndpointGroupsEndpointGroupsItem["ThresholdCount"].asString());
		if(!valueEndpointGroupsEndpointGroupsItem["ListenerId"].isNull())
			endpointGroupsObject.listenerId = valueEndpointGroupsEndpointGroupsItem["ListenerId"].asString();
		if(!valueEndpointGroupsEndpointGroupsItem["AcceleratorId"].isNull())
			endpointGroupsObject.acceleratorId = valueEndpointGroupsEndpointGroupsItem["AcceleratorId"].asString();
		if(!valueEndpointGroupsEndpointGroupsItem["EndpointGroupType"].isNull())
			endpointGroupsObject.endpointGroupType = valueEndpointGroupsEndpointGroupsItem["EndpointGroupType"].asString();
		if(!valueEndpointGroupsEndpointGroupsItem["EndpointRequestProtocol"].isNull())
			endpointGroupsObject.endpointRequestProtocol = valueEndpointGroupsEndpointGroupsItem["EndpointRequestProtocol"].asString();
		if(!valueEndpointGroupsEndpointGroupsItem["Description"].isNull())
			endpointGroupsObject.description = valueEndpointGroupsEndpointGroupsItem["Description"].asString();
		if(!valueEndpointGroupsEndpointGroupsItem["Name"].isNull())
			endpointGroupsObject.name = valueEndpointGroupsEndpointGroupsItem["Name"].asString();
		if(!valueEndpointGroupsEndpointGroupsItem["HealthCheckPort"].isNull())
			endpointGroupsObject.healthCheckPort = std::stoi(valueEndpointGroupsEndpointGroupsItem["HealthCheckPort"].asString());
		if(!valueEndpointGroupsEndpointGroupsItem["HealthCheckEnabled"].isNull())
			endpointGroupsObject.healthCheckEnabled = valueEndpointGroupsEndpointGroupsItem["HealthCheckEnabled"].asString() == "true";
		auto allEndpointConfigurationsNode = valueEndpointGroupsEndpointGroupsItem["EndpointConfigurations"]["EndpointConfigurationsItem"];
		for (auto valueEndpointGroupsEndpointGroupsItemEndpointConfigurationsEndpointConfigurationsItem : allEndpointConfigurationsNode)
		{
			EndpointGroupsItem::EndpointConfigurationsItem endpointConfigurationsObject;
			if(!valueEndpointGroupsEndpointGroupsItemEndpointConfigurationsEndpointConfigurationsItem["Type"].isNull())
				endpointConfigurationsObject.type = valueEndpointGroupsEndpointGroupsItemEndpointConfigurationsEndpointConfigurationsItem["Type"].asString();
			if(!valueEndpointGroupsEndpointGroupsItemEndpointConfigurationsEndpointConfigurationsItem["EnableClientIPPreservation"].isNull())
				endpointConfigurationsObject.enableClientIPPreservation = valueEndpointGroupsEndpointGroupsItemEndpointConfigurationsEndpointConfigurationsItem["EnableClientIPPreservation"].asString() == "true";
			if(!valueEndpointGroupsEndpointGroupsItemEndpointConfigurationsEndpointConfigurationsItem["Weight"].isNull())
				endpointConfigurationsObject.weight = std::stoi(valueEndpointGroupsEndpointGroupsItemEndpointConfigurationsEndpointConfigurationsItem["Weight"].asString());
			if(!valueEndpointGroupsEndpointGroupsItemEndpointConfigurationsEndpointConfigurationsItem["ProbeProtocol"].isNull())
				endpointConfigurationsObject.probeProtocol = valueEndpointGroupsEndpointGroupsItemEndpointConfigurationsEndpointConfigurationsItem["ProbeProtocol"].asString();
			if(!valueEndpointGroupsEndpointGroupsItemEndpointConfigurationsEndpointConfigurationsItem["Endpoint"].isNull())
				endpointConfigurationsObject.endpoint = valueEndpointGroupsEndpointGroupsItemEndpointConfigurationsEndpointConfigurationsItem["Endpoint"].asString();
			if(!valueEndpointGroupsEndpointGroupsItemEndpointConfigurationsEndpointConfigurationsItem["EnableProxyProtocol"].isNull())
				endpointConfigurationsObject.enableProxyProtocol = valueEndpointGroupsEndpointGroupsItemEndpointConfigurationsEndpointConfigurationsItem["EnableProxyProtocol"].asString() == "true";
			if(!valueEndpointGroupsEndpointGroupsItemEndpointConfigurationsEndpointConfigurationsItem["ProbePort"].isNull())
				endpointConfigurationsObject.probePort = std::stoi(valueEndpointGroupsEndpointGroupsItemEndpointConfigurationsEndpointConfigurationsItem["ProbePort"].asString());
			if(!valueEndpointGroupsEndpointGroupsItemEndpointConfigurationsEndpointConfigurationsItem["EndpointId"].isNull())
				endpointConfigurationsObject.endpointId = valueEndpointGroupsEndpointGroupsItemEndpointConfigurationsEndpointConfigurationsItem["EndpointId"].asString();
			endpointGroupsObject.endpointConfigurations.push_back(endpointConfigurationsObject);
		}
		auto allPortOverridesNode = valueEndpointGroupsEndpointGroupsItem["PortOverrides"]["PortOverridesItem"];
		for (auto valueEndpointGroupsEndpointGroupsItemPortOverridesPortOverridesItem : allPortOverridesNode)
		{
			EndpointGroupsItem::PortOverridesItem portOverridesObject;
			if(!valueEndpointGroupsEndpointGroupsItemPortOverridesPortOverridesItem["ListenerPort"].isNull())
				portOverridesObject.listenerPort = std::stoi(valueEndpointGroupsEndpointGroupsItemPortOverridesPortOverridesItem["ListenerPort"].asString());
			if(!valueEndpointGroupsEndpointGroupsItemPortOverridesPortOverridesItem["EndpointPort"].isNull())
				portOverridesObject.endpointPort = std::stoi(valueEndpointGroupsEndpointGroupsItemPortOverridesPortOverridesItem["EndpointPort"].asString());
			endpointGroupsObject.portOverrides.push_back(portOverridesObject);
		}
		auto allTagsNode = valueEndpointGroupsEndpointGroupsItem["Tags"]["TagsItem"];
		for (auto valueEndpointGroupsEndpointGroupsItemTagsTagsItem : allTagsNode)
		{
			EndpointGroupsItem::TagsItem tagsObject;
			if(!valueEndpointGroupsEndpointGroupsItemTagsTagsItem["Key"].isNull())
				tagsObject.key = valueEndpointGroupsEndpointGroupsItemTagsTagsItem["Key"].asString();
			if(!valueEndpointGroupsEndpointGroupsItemTagsTagsItem["Value"].isNull())
				tagsObject.value = valueEndpointGroupsEndpointGroupsItemTagsTagsItem["Value"].asString();
			endpointGroupsObject.tags.push_back(tagsObject);
		}
		auto allEndpointGroupIpList = value["EndpointGroupIpList"]["EndpointGroupIpList"];
		for (auto value : allEndpointGroupIpList)
			endpointGroupsObject.endpointGroupIpList.push_back(value.asString());
		auto allEndpointGroupUnconfirmedIpList = value["EndpointGroupUnconfirmedIpList"]["endpointGroupUnconfirmedIpList"];
		for (auto value : allEndpointGroupUnconfirmedIpList)
			endpointGroupsObject.endpointGroupUnconfirmedIpList.push_back(value.asString());
		auto allForwardingRuleIds = value["ForwardingRuleIds"]["ForwardingRuleIds"];
		for (auto value : allForwardingRuleIds)
			endpointGroupsObject.forwardingRuleIds.push_back(value.asString());
		endpointGroups_.push_back(endpointGroupsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListEndpointGroupsResult::getTotalCount()const
{
	return totalCount_;
}

int ListEndpointGroupsResult::getPageSize()const
{
	return pageSize_;
}

int ListEndpointGroupsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListEndpointGroupsResult::EndpointGroupsItem> ListEndpointGroupsResult::getEndpointGroups()const
{
	return endpointGroups_;
}

