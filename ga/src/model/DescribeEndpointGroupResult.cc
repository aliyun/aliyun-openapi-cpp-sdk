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

#include <alibabacloud/ga/model/DescribeEndpointGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

DescribeEndpointGroupResult::DescribeEndpointGroupResult() :
	ServiceResult()
{}

DescribeEndpointGroupResult::DescribeEndpointGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEndpointGroupResult::~DescribeEndpointGroupResult()
{}

void DescribeEndpointGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEndpointConfigurationsNode = value["EndpointConfigurations"]["EndpointConfigurationsItem"];
	for (auto valueEndpointConfigurationsEndpointConfigurationsItem : allEndpointConfigurationsNode)
	{
		EndpointConfigurationsItem endpointConfigurationsObject;
		if(!valueEndpointConfigurationsEndpointConfigurationsItem["Type"].isNull())
			endpointConfigurationsObject.type = valueEndpointConfigurationsEndpointConfigurationsItem["Type"].asString();
		if(!valueEndpointConfigurationsEndpointConfigurationsItem["EnableClientIPPreservation"].isNull())
			endpointConfigurationsObject.enableClientIPPreservation = valueEndpointConfigurationsEndpointConfigurationsItem["EnableClientIPPreservation"].asString() == "true";
		if(!valueEndpointConfigurationsEndpointConfigurationsItem["Weight"].isNull())
			endpointConfigurationsObject.weight = std::stoi(valueEndpointConfigurationsEndpointConfigurationsItem["Weight"].asString());
		if(!valueEndpointConfigurationsEndpointConfigurationsItem["ProbeProtocol"].isNull())
			endpointConfigurationsObject.probeProtocol = valueEndpointConfigurationsEndpointConfigurationsItem["ProbeProtocol"].asString();
		if(!valueEndpointConfigurationsEndpointConfigurationsItem["Endpoint"].isNull())
			endpointConfigurationsObject.endpoint = valueEndpointConfigurationsEndpointConfigurationsItem["Endpoint"].asString();
		if(!valueEndpointConfigurationsEndpointConfigurationsItem["EnableProxyProtocol"].isNull())
			endpointConfigurationsObject.enableProxyProtocol = valueEndpointConfigurationsEndpointConfigurationsItem["EnableProxyProtocol"].asString() == "true";
		if(!valueEndpointConfigurationsEndpointConfigurationsItem["ProbePort"].isNull())
			endpointConfigurationsObject.probePort = std::stoi(valueEndpointConfigurationsEndpointConfigurationsItem["ProbePort"].asString());
		endpointConfigurations_.push_back(endpointConfigurationsObject);
	}
	auto allPortOverridesNode = value["PortOverrides"]["PortOverridesItem"];
	for (auto valuePortOverridesPortOverridesItem : allPortOverridesNode)
	{
		PortOverridesItem portOverridesObject;
		if(!valuePortOverridesPortOverridesItem["ListenerPort"].isNull())
			portOverridesObject.listenerPort = std::stoi(valuePortOverridesPortOverridesItem["ListenerPort"].asString());
		if(!valuePortOverridesPortOverridesItem["EndpointPort"].isNull())
			portOverridesObject.endpointPort = std::stoi(valuePortOverridesPortOverridesItem["EndpointPort"].asString());
		portOverrides_.push_back(portOverridesObject);
	}
	auto allTagsNode = value["Tags"]["TagsItem"];
	for (auto valueTagsTagsItem : allTagsNode)
	{
		TagsItem tagsObject;
		if(!valueTagsTagsItem["Key"].isNull())
			tagsObject.key = valueTagsTagsItem["Key"].asString();
		if(!valueTagsTagsItem["Value"].isNull())
			tagsObject.value = valueTagsTagsItem["Value"].asString();
		tags_.push_back(tagsObject);
	}
	auto allEndpointGroupIpList = value["EndpointGroupIpList"]["EndpointGroupIpList"];
	for (const auto &item : allEndpointGroupIpList)
		endpointGroupIpList_.push_back(item.asString());
	auto allEndpointGroupUnconfirmedIpList = value["EndpointGroupUnconfirmedIpList"]["endpointGroupUnconfirmedIpList"];
	for (const auto &item : allEndpointGroupUnconfirmedIpList)
		endpointGroupUnconfirmedIpList_.push_back(item.asString());
	auto allForwardingRuleIds = value["ForwardingRuleIds"]["ForwardingRuleIds"];
	for (const auto &item : allForwardingRuleIds)
		forwardingRuleIds_.push_back(item.asString());
	if(!value["HealthCheckIntervalSeconds"].isNull())
		healthCheckIntervalSeconds_ = std::stoi(value["HealthCheckIntervalSeconds"].asString());
	if(!value["TrafficPercentage"].isNull())
		trafficPercentage_ = std::stoi(value["TrafficPercentage"].asString());
	if(!value["EndpointGroupId"].isNull())
		endpointGroupId_ = value["EndpointGroupId"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["HealthCheckPath"].isNull())
		healthCheckPath_ = value["HealthCheckPath"].asString();
	if(!value["ThresholdCount"].isNull())
		thresholdCount_ = std::stoi(value["ThresholdCount"].asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["EndpointGroupRegion"].isNull())
		endpointGroupRegion_ = value["EndpointGroupRegion"].asString();
	if(!value["State"].isNull())
		state_ = value["State"].asString();
	if(!value["HealthCheckProtocol"].isNull())
		healthCheckProtocol_ = value["HealthCheckProtocol"].asString();
	if(!value["HealthCheckPort"].isNull())
		healthCheckPort_ = std::stoi(value["HealthCheckPort"].asString());
	if(!value["EndpointRequestProtocol"].isNull())
		endpointRequestProtocol_ = value["EndpointRequestProtocol"].asString();
	if(!value["EndpointGroupType"].isNull())
		endpointGroupType_ = value["EndpointGroupType"].asString();
	if(!value["AcceleratorId"].isNull())
		acceleratorId_ = value["AcceleratorId"].asString();
	if(!value["ListenerId"].isNull())
		listenerId_ = value["ListenerId"].asString();
	if(!value["SlsRegion"].isNull())
		slsRegion_ = value["SlsRegion"].asString();
	if(!value["SlsProjectName"].isNull())
		slsProjectName_ = value["SlsProjectName"].asString();
	if(!value["SlsLogStoreName"].isNull())
		slsLogStoreName_ = value["SlsLogStoreName"].asString();
	if(!value["AccessLogSwitch"].isNull())
		accessLogSwitch_ = value["AccessLogSwitch"].asString();
	if(!value["EnableAccessLog"].isNull())
		enableAccessLog_ = value["EnableAccessLog"].asString() == "true";
	if(!value["HealthCheckEnabled"].isNull())
		healthCheckEnabled_ = value["HealthCheckEnabled"].asString() == "true";

}

std::vector<std::string> DescribeEndpointGroupResult::getForwardingRuleIds()const
{
	return forwardingRuleIds_;
}

int DescribeEndpointGroupResult::getTrafficPercentage()const
{
	return trafficPercentage_;
}

std::string DescribeEndpointGroupResult::getEndpointGroupId()const
{
	return endpointGroupId_;
}

std::string DescribeEndpointGroupResult::getDescription()const
{
	return description_;
}

std::string DescribeEndpointGroupResult::getHealthCheckPath()const
{
	return healthCheckPath_;
}

std::string DescribeEndpointGroupResult::getEndpointRequestProtocol()const
{
	return endpointRequestProtocol_;
}

std::string DescribeEndpointGroupResult::getName()const
{
	return name_;
}

std::vector<DescribeEndpointGroupResult::PortOverridesItem> DescribeEndpointGroupResult::getPortOverrides()const
{
	return portOverrides_;
}

std::string DescribeEndpointGroupResult::getEndpointGroupRegion()const
{
	return endpointGroupRegion_;
}

std::string DescribeEndpointGroupResult::getSlsProjectName()const
{
	return slsProjectName_;
}

std::string DescribeEndpointGroupResult::getHealthCheckProtocol()const
{
	return healthCheckProtocol_;
}

std::string DescribeEndpointGroupResult::getAccessLogSwitch()const
{
	return accessLogSwitch_;
}

std::vector<DescribeEndpointGroupResult::EndpointConfigurationsItem> DescribeEndpointGroupResult::getEndpointConfigurations()const
{
	return endpointConfigurations_;
}

std::vector<DescribeEndpointGroupResult::TagsItem> DescribeEndpointGroupResult::getTags()const
{
	return tags_;
}

std::string DescribeEndpointGroupResult::getEndpointGroupType()const
{
	return endpointGroupType_;
}

int DescribeEndpointGroupResult::getHealthCheckIntervalSeconds()const
{
	return healthCheckIntervalSeconds_;
}

std::string DescribeEndpointGroupResult::getSlsRegion()const
{
	return slsRegion_;
}

int DescribeEndpointGroupResult::getThresholdCount()const
{
	return thresholdCount_;
}

bool DescribeEndpointGroupResult::getHealthCheckEnabled()const
{
	return healthCheckEnabled_;
}

std::string DescribeEndpointGroupResult::getSlsLogStoreName()const
{
	return slsLogStoreName_;
}

std::vector<std::string> DescribeEndpointGroupResult::getEndpointGroupIpList()const
{
	return endpointGroupIpList_;
}

bool DescribeEndpointGroupResult::getEnableAccessLog()const
{
	return enableAccessLog_;
}

std::vector<std::string> DescribeEndpointGroupResult::getEndpointGroupUnconfirmedIpList()const
{
	return endpointGroupUnconfirmedIpList_;
}

std::string DescribeEndpointGroupResult::getState()const
{
	return state_;
}

int DescribeEndpointGroupResult::getHealthCheckPort()const
{
	return healthCheckPort_;
}

std::string DescribeEndpointGroupResult::getAcceleratorId()const
{
	return acceleratorId_;
}

std::string DescribeEndpointGroupResult::getListenerId()const
{
	return listenerId_;
}

