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

#include <alibabacloud/gwlb/model/ListServerGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gwlb;
using namespace AlibabaCloud::Gwlb::Model;

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
	auto allServerGroupsNode = value["ServerGroups"]["serverGroup"];
	for (auto valueServerGroupsserverGroup : allServerGroupsNode)
	{
		ServerGroup serverGroupsObject;
		if(!valueServerGroupsserverGroup["CreateTime"].isNull())
			serverGroupsObject.createTime = valueServerGroupsserverGroup["CreateTime"].asString();
		if(!valueServerGroupsserverGroup["Protocol"].isNull())
			serverGroupsObject.protocol = valueServerGroupsserverGroup["Protocol"].asString();
		if(!valueServerGroupsserverGroup["ResourceGroupId"].isNull())
			serverGroupsObject.resourceGroupId = valueServerGroupsserverGroup["ResourceGroupId"].asString();
		if(!valueServerGroupsserverGroup["Scheduler"].isNull())
			serverGroupsObject.scheduler = valueServerGroupsserverGroup["Scheduler"].asString();
		if(!valueServerGroupsserverGroup["ServerCount"].isNull())
			serverGroupsObject.serverCount = std::stoi(valueServerGroupsserverGroup["ServerCount"].asString());
		if(!valueServerGroupsserverGroup["ServerGroupId"].isNull())
			serverGroupsObject.serverGroupId = valueServerGroupsserverGroup["ServerGroupId"].asString();
		if(!valueServerGroupsserverGroup["ServerGroupName"].isNull())
			serverGroupsObject.serverGroupName = valueServerGroupsserverGroup["ServerGroupName"].asString();
		if(!valueServerGroupsserverGroup["ServerGroupStatus"].isNull())
			serverGroupsObject.serverGroupStatus = valueServerGroupsserverGroup["ServerGroupStatus"].asString();
		if(!valueServerGroupsserverGroup["ServerGroupType"].isNull())
			serverGroupsObject.serverGroupType = valueServerGroupsserverGroup["ServerGroupType"].asString();
		if(!valueServerGroupsserverGroup["VpcId"].isNull())
			serverGroupsObject.vpcId = valueServerGroupsserverGroup["VpcId"].asString();
		auto allTagsNode = valueServerGroupsserverGroup["Tags"]["TagModel"];
		for (auto valueServerGroupsserverGroupTagsTagModel : allTagsNode)
		{
			ServerGroup::TagModel tagsObject;
			if(!valueServerGroupsserverGroupTagsTagModel["Key"].isNull())
				tagsObject.key = valueServerGroupsserverGroupTagsTagModel["Key"].asString();
			if(!valueServerGroupsserverGroupTagsTagModel["Value"].isNull())
				tagsObject.value = valueServerGroupsserverGroupTagsTagModel["Value"].asString();
			serverGroupsObject.tags.push_back(tagsObject);
		}
		auto connectionDrainConfigNode = value["ConnectionDrainConfig"];
		if(!connectionDrainConfigNode["ConnectionDrainEnabled"].isNull())
			serverGroupsObject.connectionDrainConfig.connectionDrainEnabled = connectionDrainConfigNode["ConnectionDrainEnabled"].asString() == "true";
		if(!connectionDrainConfigNode["ConnectionDrainTimeout"].isNull())
			serverGroupsObject.connectionDrainConfig.connectionDrainTimeout = std::stoi(connectionDrainConfigNode["ConnectionDrainTimeout"].asString());
		auto healthCheckConfigNode = value["HealthCheckConfig"];
		if(!healthCheckConfigNode["HealthCheckConnectPort"].isNull())
			serverGroupsObject.healthCheckConfig.healthCheckConnectPort = std::stoi(healthCheckConfigNode["HealthCheckConnectPort"].asString());
		if(!healthCheckConfigNode["HealthCheckConnectTimeout"].isNull())
			serverGroupsObject.healthCheckConfig.healthCheckConnectTimeout = std::stoi(healthCheckConfigNode["HealthCheckConnectTimeout"].asString());
		if(!healthCheckConfigNode["HealthCheckDomain"].isNull())
			serverGroupsObject.healthCheckConfig.healthCheckDomain = healthCheckConfigNode["HealthCheckDomain"].asString();
		if(!healthCheckConfigNode["HealthCheckEnabled"].isNull())
			serverGroupsObject.healthCheckConfig.healthCheckEnabled = healthCheckConfigNode["HealthCheckEnabled"].asString() == "true";
		if(!healthCheckConfigNode["HealthCheckInterval"].isNull())
			serverGroupsObject.healthCheckConfig.healthCheckInterval = std::stoi(healthCheckConfigNode["HealthCheckInterval"].asString());
		if(!healthCheckConfigNode["HealthCheckPath"].isNull())
			serverGroupsObject.healthCheckConfig.healthCheckPath = healthCheckConfigNode["HealthCheckPath"].asString();
		if(!healthCheckConfigNode["HealthCheckProtocol"].isNull())
			serverGroupsObject.healthCheckConfig.healthCheckProtocol = healthCheckConfigNode["HealthCheckProtocol"].asString();
		if(!healthCheckConfigNode["HealthyThreshold"].isNull())
			serverGroupsObject.healthCheckConfig.healthyThreshold = std::stoi(healthCheckConfigNode["HealthyThreshold"].asString());
		if(!healthCheckConfigNode["UnhealthyThreshold"].isNull())
			serverGroupsObject.healthCheckConfig.unhealthyThreshold = std::stoi(healthCheckConfigNode["UnhealthyThreshold"].asString());
			auto allHealthCheckHttpCode = healthCheckConfigNode["HealthCheckHttpCode"]["HealthCheckHttpCode"];
			for (auto value : allHealthCheckHttpCode)
				serverGroupsObject.healthCheckConfig.healthCheckHttpCode.push_back(value.asString());
		auto allRelatedLoadBalancerIds = value["RelatedLoadBalancerIds"]["LoadBalancerId"];
		for (auto value : allRelatedLoadBalancerIds)
			serverGroupsObject.relatedLoadBalancerIds.push_back(value.asString());
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

