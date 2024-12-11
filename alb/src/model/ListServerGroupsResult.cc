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

#include <alibabacloud/alb/model/ListServerGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alb;
using namespace AlibabaCloud::Alb::Model;

ListServerGroupsResult::ListServerGroupsResult() :
	ServiceResult()
{}

ListServerGroupsResult::ListServerGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListServerGroupsResult::~ListServerGroupsResult()
{}

void ListServerGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allServerGroupsNode = value["ServerGroups"]["ServerGroup"];
	for (auto valueServerGroupsServerGroup : allServerGroupsNode)
	{
		ServerGroup serverGroupsObject;
		if(!valueServerGroupsServerGroup["Protocol"].isNull())
			serverGroupsObject.protocol = valueServerGroupsServerGroup["Protocol"].asString();
		if(!valueServerGroupsServerGroup["ResourceGroupId"].isNull())
			serverGroupsObject.resourceGroupId = valueServerGroupsServerGroup["ResourceGroupId"].asString();
		if(!valueServerGroupsServerGroup["Scheduler"].isNull())
			serverGroupsObject.scheduler = valueServerGroupsServerGroup["Scheduler"].asString();
		if(!valueServerGroupsServerGroup["ServerGroupId"].isNull())
			serverGroupsObject.serverGroupId = valueServerGroupsServerGroup["ServerGroupId"].asString();
		if(!valueServerGroupsServerGroup["ServerGroupName"].isNull())
			serverGroupsObject.serverGroupName = valueServerGroupsServerGroup["ServerGroupName"].asString();
		if(!valueServerGroupsServerGroup["ServerGroupStatus"].isNull())
			serverGroupsObject.serverGroupStatus = valueServerGroupsServerGroup["ServerGroupStatus"].asString();
		if(!valueServerGroupsServerGroup["ServerGroupType"].isNull())
			serverGroupsObject.serverGroupType = valueServerGroupsServerGroup["ServerGroupType"].asString();
		if(!valueServerGroupsServerGroup["VpcId"].isNull())
			serverGroupsObject.vpcId = valueServerGroupsServerGroup["VpcId"].asString();
		if(!valueServerGroupsServerGroup["ServiceManagedEnabled"].isNull())
			serverGroupsObject.serviceManagedEnabled = valueServerGroupsServerGroup["ServiceManagedEnabled"].asString() == "true";
		if(!valueServerGroupsServerGroup["ServiceManagedMode"].isNull())
			serverGroupsObject.serviceManagedMode = valueServerGroupsServerGroup["ServiceManagedMode"].asString();
		if(!valueServerGroupsServerGroup["ConfigManagedEnabled"].isNull())
			serverGroupsObject.configManagedEnabled = valueServerGroupsServerGroup["ConfigManagedEnabled"].asString() == "true";
		if(!valueServerGroupsServerGroup["UpstreamKeepaliveEnabled"].isNull())
			serverGroupsObject.upstreamKeepaliveEnabled = valueServerGroupsServerGroup["UpstreamKeepaliveEnabled"].asString() == "true";
		if(!valueServerGroupsServerGroup["Ipv6Enabled"].isNull())
			serverGroupsObject.ipv6Enabled = valueServerGroupsServerGroup["Ipv6Enabled"].asString() == "true";
		if(!valueServerGroupsServerGroup["ServerCount"].isNull())
			serverGroupsObject.serverCount = std::stoi(valueServerGroupsServerGroup["ServerCount"].asString());
		if(!valueServerGroupsServerGroup["ServiceName"].isNull())
			serverGroupsObject.serviceName = valueServerGroupsServerGroup["ServiceName"].asString();
		if(!valueServerGroupsServerGroup["CreateTime"].isNull())
			serverGroupsObject.createTime = valueServerGroupsServerGroup["CreateTime"].asString();
		if(!valueServerGroupsServerGroup["CrossZoneEnabled"].isNull())
			serverGroupsObject.crossZoneEnabled = valueServerGroupsServerGroup["CrossZoneEnabled"].asString() == "true";
		auto allTagsNode = valueServerGroupsServerGroup["Tags"]["Tag"];
		for (auto valueServerGroupsServerGroupTagsTag : allTagsNode)
		{
			ServerGroup::Tag tagsObject;
			if(!valueServerGroupsServerGroupTagsTag["Key"].isNull())
				tagsObject.key = valueServerGroupsServerGroupTagsTag["Key"].asString();
			if(!valueServerGroupsServerGroupTagsTag["Value"].isNull())
				tagsObject.value = valueServerGroupsServerGroupTagsTag["Value"].asString();
			serverGroupsObject.tags.push_back(tagsObject);
		}
		auto healthCheckConfigNode = value["HealthCheckConfig"];
		if(!healthCheckConfigNode["HealthCheckConnectPort"].isNull())
			serverGroupsObject.healthCheckConfig.healthCheckConnectPort = std::stoi(healthCheckConfigNode["HealthCheckConnectPort"].asString());
		if(!healthCheckConfigNode["HealthCheckEnabled"].isNull())
			serverGroupsObject.healthCheckConfig.healthCheckEnabled = healthCheckConfigNode["HealthCheckEnabled"].asString() == "true";
		if(!healthCheckConfigNode["HealthCheckHost"].isNull())
			serverGroupsObject.healthCheckConfig.healthCheckHost = healthCheckConfigNode["HealthCheckHost"].asString();
		if(!healthCheckConfigNode["HealthCheckHttpVersion"].isNull())
			serverGroupsObject.healthCheckConfig.healthCheckHttpVersion = healthCheckConfigNode["HealthCheckHttpVersion"].asString();
		if(!healthCheckConfigNode["HealthCheckInterval"].isNull())
			serverGroupsObject.healthCheckConfig.healthCheckInterval = std::stoi(healthCheckConfigNode["HealthCheckInterval"].asString());
		if(!healthCheckConfigNode["HealthCheckMethod"].isNull())
			serverGroupsObject.healthCheckConfig.healthCheckMethod = healthCheckConfigNode["HealthCheckMethod"].asString();
		if(!healthCheckConfigNode["HealthCheckPath"].isNull())
			serverGroupsObject.healthCheckConfig.healthCheckPath = healthCheckConfigNode["HealthCheckPath"].asString();
		if(!healthCheckConfigNode["HealthCheckProtocol"].isNull())
			serverGroupsObject.healthCheckConfig.healthCheckProtocol = healthCheckConfigNode["HealthCheckProtocol"].asString();
		if(!healthCheckConfigNode["HealthCheckTimeout"].isNull())
			serverGroupsObject.healthCheckConfig.healthCheckTimeout = std::stoi(healthCheckConfigNode["HealthCheckTimeout"].asString());
		if(!healthCheckConfigNode["HealthyThreshold"].isNull())
			serverGroupsObject.healthCheckConfig.healthyThreshold = std::stoi(healthCheckConfigNode["HealthyThreshold"].asString());
		if(!healthCheckConfigNode["UnhealthyThreshold"].isNull())
			serverGroupsObject.healthCheckConfig.unhealthyThreshold = std::stoi(healthCheckConfigNode["UnhealthyThreshold"].asString());
		if(!healthCheckConfigNode["HealthCheckTcpFastCloseEnabled"].isNull())
			serverGroupsObject.healthCheckConfig.healthCheckTcpFastCloseEnabled = healthCheckConfigNode["HealthCheckTcpFastCloseEnabled"].asString() == "true";
			auto allHealthCheckHttpCodes = healthCheckConfigNode["HealthCheckHttpCodes"]["HealthCheckHttpCode"];
			for (auto value : allHealthCheckHttpCodes)
				serverGroupsObject.healthCheckConfig.healthCheckHttpCodes.push_back(value.asString());
			auto allHealthCheckCodes = healthCheckConfigNode["HealthCheckCodes"]["HealthCheckCode"];
			for (auto value : allHealthCheckCodes)
				serverGroupsObject.healthCheckConfig.healthCheckCodes.push_back(value.asString());
		auto stickySessionConfigNode = value["StickySessionConfig"];
		if(!stickySessionConfigNode["Cookie"].isNull())
			serverGroupsObject.stickySessionConfig.cookie = stickySessionConfigNode["Cookie"].asString();
		if(!stickySessionConfigNode["CookieTimeout"].isNull())
			serverGroupsObject.stickySessionConfig.cookieTimeout = std::stoi(stickySessionConfigNode["CookieTimeout"].asString());
		if(!stickySessionConfigNode["StickySessionEnabled"].isNull())
			serverGroupsObject.stickySessionConfig.stickySessionEnabled = stickySessionConfigNode["StickySessionEnabled"].asString() == "true";
		if(!stickySessionConfigNode["StickySessionType"].isNull())
			serverGroupsObject.stickySessionConfig.stickySessionType = stickySessionConfigNode["StickySessionType"].asString();
		auto uchConfigNode = value["UchConfig"];
		if(!uchConfigNode["Type"].isNull())
			serverGroupsObject.uchConfig.type = uchConfigNode["Type"].asString();
		if(!uchConfigNode["Value"].isNull())
			serverGroupsObject.uchConfig.value = uchConfigNode["Value"].asString();
		auto connectionDrainConfigNode = value["ConnectionDrainConfig"];
		if(!connectionDrainConfigNode["ConnectionDrainEnabled"].isNull())
			serverGroupsObject.connectionDrainConfig.connectionDrainEnabled = connectionDrainConfigNode["ConnectionDrainEnabled"].asString() == "true";
		if(!connectionDrainConfigNode["ConnectionDrainTimeout"].isNull())
			serverGroupsObject.connectionDrainConfig.connectionDrainTimeout = std::stoi(connectionDrainConfigNode["ConnectionDrainTimeout"].asString());
		auto slowStartConfigNode = value["SlowStartConfig"];
		if(!slowStartConfigNode["SlowStartEnabled"].isNull())
			serverGroupsObject.slowStartConfig.slowStartEnabled = slowStartConfigNode["SlowStartEnabled"].asString() == "true";
		if(!slowStartConfigNode["SlowStartDuration"].isNull())
			serverGroupsObject.slowStartConfig.slowStartDuration = std::stoi(slowStartConfigNode["SlowStartDuration"].asString());
		auto allRelatedLoadBalancerIds = value["RelatedLoadBalancerIds"]["RelatedLoadBalancerId"];
		for (auto value : allRelatedLoadBalancerIds)
			serverGroupsObject.relatedLoadBalancerIds.push_back(value.asString());
		auto allRelatedListenerIds = value["RelatedListenerIds"]["RelatedListenerIds"];
		for (auto value : allRelatedListenerIds)
			serverGroupsObject.relatedListenerIds.push_back(value.asString());
		auto allRelatedRuleIds = value["RelatedRuleIds"]["RelatedRuleIds"];
		for (auto value : allRelatedRuleIds)
			serverGroupsObject.relatedRuleIds.push_back(value.asString());
		serverGroups_.push_back(serverGroupsObject);
	}
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListServerGroupsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListServerGroupsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListServerGroupsResult::ServerGroup> ListServerGroupsResult::getServerGroups()const
{
	return serverGroups_;
}

int ListServerGroupsResult::getMaxResults()const
{
	return maxResults_;
}

