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

#include <alibabacloud/eiam/model/ListNetworkAccessEndpointsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

ListNetworkAccessEndpointsResult::ListNetworkAccessEndpointsResult() :
	ServiceResult()
{}

ListNetworkAccessEndpointsResult::ListNetworkAccessEndpointsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNetworkAccessEndpointsResult::~ListNetworkAccessEndpointsResult()
{}

void ListNetworkAccessEndpointsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNetworkAccessEndpointsNode = value["NetworkAccessEndpoints"]["NetworkAccessEndpoint"];
	for (auto valueNetworkAccessEndpointsNetworkAccessEndpoint : allNetworkAccessEndpointsNode)
	{
		NetworkAccessEndpoint networkAccessEndpointsObject;
		if(!valueNetworkAccessEndpointsNetworkAccessEndpoint["InstanceId"].isNull())
			networkAccessEndpointsObject.instanceId = valueNetworkAccessEndpointsNetworkAccessEndpoint["InstanceId"].asString();
		if(!valueNetworkAccessEndpointsNetworkAccessEndpoint["NetworkAccessEndpointId"].isNull())
			networkAccessEndpointsObject.networkAccessEndpointId = valueNetworkAccessEndpointsNetworkAccessEndpoint["NetworkAccessEndpointId"].asString();
		if(!valueNetworkAccessEndpointsNetworkAccessEndpoint["NetworkAccessEndpointName"].isNull())
			networkAccessEndpointsObject.networkAccessEndpointName = valueNetworkAccessEndpointsNetworkAccessEndpoint["NetworkAccessEndpointName"].asString();
		if(!valueNetworkAccessEndpointsNetworkAccessEndpoint["VpcId"].isNull())
			networkAccessEndpointsObject.vpcId = valueNetworkAccessEndpointsNetworkAccessEndpoint["VpcId"].asString();
		if(!valueNetworkAccessEndpointsNetworkAccessEndpoint["VpcRegionId"].isNull())
			networkAccessEndpointsObject.vpcRegionId = valueNetworkAccessEndpointsNetworkAccessEndpoint["VpcRegionId"].asString();
		if(!valueNetworkAccessEndpointsNetworkAccessEndpoint["SecurityGroupId"].isNull())
			networkAccessEndpointsObject.securityGroupId = valueNetworkAccessEndpointsNetworkAccessEndpoint["SecurityGroupId"].asString();
		if(!valueNetworkAccessEndpointsNetworkAccessEndpoint["Status"].isNull())
			networkAccessEndpointsObject.status = valueNetworkAccessEndpointsNetworkAccessEndpoint["Status"].asString();
		if(!valueNetworkAccessEndpointsNetworkAccessEndpoint["NetworkAccessEndpointType"].isNull())
			networkAccessEndpointsObject.networkAccessEndpointType = valueNetworkAccessEndpointsNetworkAccessEndpoint["NetworkAccessEndpointType"].asString();
		if(!valueNetworkAccessEndpointsNetworkAccessEndpoint["CreateTime"].isNull())
			networkAccessEndpointsObject.createTime = std::stol(valueNetworkAccessEndpointsNetworkAccessEndpoint["CreateTime"].asString());
		if(!valueNetworkAccessEndpointsNetworkAccessEndpoint["UpdateTime"].isNull())
			networkAccessEndpointsObject.updateTime = std::stol(valueNetworkAccessEndpointsNetworkAccessEndpoint["UpdateTime"].asString());
		auto allVSwitchIds = value["VSwitchIds"]["VSwitchId"];
		for (auto value : allVSwitchIds)
			networkAccessEndpointsObject.vSwitchIds.push_back(value.asString());
		networkAccessEndpoints_.push_back(networkAccessEndpointsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

long ListNetworkAccessEndpointsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListNetworkAccessEndpointsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListNetworkAccessEndpointsResult::NetworkAccessEndpoint> ListNetworkAccessEndpointsResult::getNetworkAccessEndpoints()const
{
	return networkAccessEndpoints_;
}

