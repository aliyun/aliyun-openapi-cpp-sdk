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

#include <alibabacloud/privatelink/model/ListVpcEndpointsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Privatelink;
using namespace AlibabaCloud::Privatelink::Model;

ListVpcEndpointsResult::ListVpcEndpointsResult() :
	ServiceResult()
{}

ListVpcEndpointsResult::ListVpcEndpointsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVpcEndpointsResult::~ListVpcEndpointsResult()
{}

void ListVpcEndpointsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEndpointsNode = value["Endpoints"]["Endpoint"];
	for (auto valueEndpointsEndpoint : allEndpointsNode)
	{
		Endpoint endpointsObject;
		if(!valueEndpointsEndpoint["EndpointId"].isNull())
			endpointsObject.endpointId = valueEndpointsEndpoint["EndpointId"].asString();
		if(!valueEndpointsEndpoint["EndpointName"].isNull())
			endpointsObject.endpointName = valueEndpointsEndpoint["EndpointName"].asString();
		if(!valueEndpointsEndpoint["EndpointDescription"].isNull())
			endpointsObject.endpointDescription = valueEndpointsEndpoint["EndpointDescription"].asString();
		if(!valueEndpointsEndpoint["EndpointStatus"].isNull())
			endpointsObject.endpointStatus = valueEndpointsEndpoint["EndpointStatus"].asString();
		if(!valueEndpointsEndpoint["EndpointBusinessStatus"].isNull())
			endpointsObject.endpointBusinessStatus = valueEndpointsEndpoint["EndpointBusinessStatus"].asString();
		if(!valueEndpointsEndpoint["EndpointDomain"].isNull())
			endpointsObject.endpointDomain = valueEndpointsEndpoint["EndpointDomain"].asString();
		if(!valueEndpointsEndpoint["Bandwidth"].isNull())
			endpointsObject.bandwidth = std::stol(valueEndpointsEndpoint["Bandwidth"].asString());
		if(!valueEndpointsEndpoint["ConnectionStatus"].isNull())
			endpointsObject.connectionStatus = valueEndpointsEndpoint["ConnectionStatus"].asString();
		if(!valueEndpointsEndpoint["ServiceId"].isNull())
			endpointsObject.serviceId = valueEndpointsEndpoint["ServiceId"].asString();
		if(!valueEndpointsEndpoint["ServiceName"].isNull())
			endpointsObject.serviceName = valueEndpointsEndpoint["ServiceName"].asString();
		if(!valueEndpointsEndpoint["VpcId"].isNull())
			endpointsObject.vpcId = valueEndpointsEndpoint["VpcId"].asString();
		if(!valueEndpointsEndpoint["CreateTime"].isNull())
			endpointsObject.createTime = valueEndpointsEndpoint["CreateTime"].asString();
		if(!valueEndpointsEndpoint["RegionId"].isNull())
			endpointsObject.regionId = valueEndpointsEndpoint["RegionId"].asString();
		if(!valueEndpointsEndpoint["ResourceOwner"].isNull())
			endpointsObject.resourceOwner = valueEndpointsEndpoint["ResourceOwner"].asString() == "true";
		endpoints_.push_back(endpointsObject);
	}
	if(!value["MaxResults"].isNull())
		maxResults_ = value["MaxResults"].asString();
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::vector<ListVpcEndpointsResult::Endpoint> ListVpcEndpointsResult::getEndpoints()const
{
	return endpoints_;
}

std::string ListVpcEndpointsResult::getNextToken()const
{
	return nextToken_;
}

std::string ListVpcEndpointsResult::getMaxResults()const
{
	return maxResults_;
}

