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

#include <alibabacloud/nlb/model/ListServerGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Nlb;
using namespace AlibabaCloud::Nlb::Model;

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
		if(!valueServerGroupsServerGroup["RegionId"].isNull())
			serverGroupsObject.regionId = valueServerGroupsServerGroup["RegionId"].asString();
		if(!valueServerGroupsServerGroup["ServerGroupId"].isNull())
			serverGroupsObject.serverGroupId = valueServerGroupsServerGroup["ServerGroupId"].asString();
		if(!valueServerGroupsServerGroup["ServerGroupName"].isNull())
			serverGroupsObject.serverGroupName = valueServerGroupsServerGroup["ServerGroupName"].asString();
		if(!valueServerGroupsServerGroup["ServerGroupType"].isNull())
			serverGroupsObject.serverGroupType = valueServerGroupsServerGroup["ServerGroupType"].asString();
		if(!valueServerGroupsServerGroup["AddressIPVersion"].isNull())
			serverGroupsObject.addressIPVersion = valueServerGroupsServerGroup["AddressIPVersion"].asString();
		if(!valueServerGroupsServerGroup["VpcId"].isNull())
			serverGroupsObject.vpcId = valueServerGroupsServerGroup["VpcId"].asString();
		if(!valueServerGroupsServerGroup["Scheduler"].isNull())
			serverGroupsObject.scheduler = valueServerGroupsServerGroup["Scheduler"].asString();
		if(!valueServerGroupsServerGroup["Protocol"].isNull())
			serverGroupsObject.protocol = valueServerGroupsServerGroup["Protocol"].asString();
		if(!valueServerGroupsServerGroup["PersistenceEnabled"].isNull())
			serverGroupsObject.persistenceEnabled = valueServerGroupsServerGroup["PersistenceEnabled"].asString() == "true";
		if(!valueServerGroupsServerGroup["PersistenceTimeout"].isNull())
			serverGroupsObject.persistenceTimeout = std::stoi(valueServerGroupsServerGroup["PersistenceTimeout"].asString());
		if(!valueServerGroupsServerGroup["ConnectionDrainEnabled"].isNull())
			serverGroupsObject.connectionDrainEnabled = valueServerGroupsServerGroup["ConnectionDrainEnabled"].asString() == "true";
		if(!valueServerGroupsServerGroup["ConnectionDrainTimeout"].isNull())
			serverGroupsObject.connectionDrainTimeout = std::stoi(valueServerGroupsServerGroup["ConnectionDrainTimeout"].asString());
		if(!valueServerGroupsServerGroup["PreserveClientIpEnabled"].isNull())
			serverGroupsObject.preserveClientIpEnabled = valueServerGroupsServerGroup["PreserveClientIpEnabled"].asString() == "true";
		if(!valueServerGroupsServerGroup["AnyPortEnabled"].isNull())
			serverGroupsObject.anyPortEnabled = valueServerGroupsServerGroup["AnyPortEnabled"].asString() == "true";
		if(!valueServerGroupsServerGroup["ResourceGroupId"].isNull())
			serverGroupsObject.resourceGroupId = valueServerGroupsServerGroup["ResourceGroupId"].asString();
		if(!valueServerGroupsServerGroup["ServerGroupStatus"].isNull())
			serverGroupsObject.serverGroupStatus = valueServerGroupsServerGroup["ServerGroupStatus"].asString();
		if(!valueServerGroupsServerGroup["AliUid"].isNull())
			serverGroupsObject.aliUid = std::stol(valueServerGroupsServerGroup["AliUid"].asString());
		if(!valueServerGroupsServerGroup["ServerCount"].isNull())
			serverGroupsObject.serverCount = std::stoi(valueServerGroupsServerGroup["ServerCount"].asString());
		if(!valueServerGroupsServerGroup["QuicVersion"].isNull())
			serverGroupsObject.quicVersion = valueServerGroupsServerGroup["QuicVersion"].asString();
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
		auto healthCheckNode = value["HealthCheck"];
		if(!healthCheckNode["HealthCheckEnabled"].isNull())
			serverGroupsObject.healthCheck.healthCheckEnabled = healthCheckNode["HealthCheckEnabled"].asString() == "true";
		if(!healthCheckNode["HealthCheckType"].isNull())
			serverGroupsObject.healthCheck.healthCheckType = healthCheckNode["HealthCheckType"].asString();
		if(!healthCheckNode["HealthCheckConnectPort"].isNull())
			serverGroupsObject.healthCheck.healthCheckConnectPort = std::stoi(healthCheckNode["HealthCheckConnectPort"].asString());
		if(!healthCheckNode["HealthyThreshold"].isNull())
			serverGroupsObject.healthCheck.healthyThreshold = std::stoi(healthCheckNode["HealthyThreshold"].asString());
		if(!healthCheckNode["UnhealthyThreshold"].isNull())
			serverGroupsObject.healthCheck.unhealthyThreshold = std::stoi(healthCheckNode["UnhealthyThreshold"].asString());
		if(!healthCheckNode["HealthCheckConnectTimeout"].isNull())
			serverGroupsObject.healthCheck.healthCheckConnectTimeout = std::stoi(healthCheckNode["HealthCheckConnectTimeout"].asString());
		if(!healthCheckNode["HealthCheckInterval"].isNull())
			serverGroupsObject.healthCheck.healthCheckInterval = std::stoi(healthCheckNode["HealthCheckInterval"].asString());
		if(!healthCheckNode["HealthCheckDomain"].isNull())
			serverGroupsObject.healthCheck.healthCheckDomain = healthCheckNode["HealthCheckDomain"].asString();
		if(!healthCheckNode["HealthCheckUrl"].isNull())
			serverGroupsObject.healthCheck.healthCheckUrl = healthCheckNode["HealthCheckUrl"].asString();
		if(!healthCheckNode["HttpCheckMethod"].isNull())
			serverGroupsObject.healthCheck.httpCheckMethod = healthCheckNode["HttpCheckMethod"].asString();
			auto allHealthCheckHttpCode = healthCheckNode["HealthCheckHttpCode"]["HealthCheckHttpCode"];
			for (auto value : allHealthCheckHttpCode)
				serverGroupsObject.healthCheck.healthCheckHttpCode.push_back(value.asString());
		auto allRelatedLoadBalancerIds = value["RelatedLoadBalancerIds"]["LoadbalancerId"];
		for (auto value : allRelatedLoadBalancerIds)
			serverGroupsObject.relatedLoadBalancerIds.push_back(value.asString());
		serverGroups_.push_back(serverGroupsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int ListServerGroupsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListServerGroupsResult::getMessage()const
{
	return message_;
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

int ListServerGroupsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListServerGroupsResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string ListServerGroupsResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string ListServerGroupsResult::getCode()const
{
	return code_;
}

bool ListServerGroupsResult::getSuccess()const
{
	return success_;
}

