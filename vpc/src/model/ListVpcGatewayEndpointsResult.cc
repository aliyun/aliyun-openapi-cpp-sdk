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

#include <alibabacloud/vpc/model/ListVpcGatewayEndpointsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ListVpcGatewayEndpointsResult::ListVpcGatewayEndpointsResult() :
	ServiceResult()
{}

ListVpcGatewayEndpointsResult::ListVpcGatewayEndpointsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVpcGatewayEndpointsResult::~ListVpcGatewayEndpointsResult()
{}

void ListVpcGatewayEndpointsResult::parse(const std::string &payload)
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
		if(!valueEndpointsEndpoint["ServiceName"].isNull())
			endpointsObject.serviceName = valueEndpointsEndpoint["ServiceName"].asString();
		if(!valueEndpointsEndpoint["VpcId"].isNull())
			endpointsObject.vpcId = valueEndpointsEndpoint["VpcId"].asString();
		if(!valueEndpointsEndpoint["PolicyDocument"].isNull())
			endpointsObject.policyDocument = valueEndpointsEndpoint["PolicyDocument"].asString();
		if(!valueEndpointsEndpoint["CreationTime"].isNull())
			endpointsObject.creationTime = valueEndpointsEndpoint["CreationTime"].asString();
		if(!valueEndpointsEndpoint["EndpointStatus"].isNull())
			endpointsObject.endpointStatus = valueEndpointsEndpoint["EndpointStatus"].asString();
		if(!valueEndpointsEndpoint["ResourceGroupId"].isNull())
			endpointsObject.resourceGroupId = valueEndpointsEndpoint["ResourceGroupId"].asString();
		auto allTagsNode = valueEndpointsEndpoint["Tags"]["Tag"];
		for (auto valueEndpointsEndpointTagsTag : allTagsNode)
		{
			Endpoint::Tag tagsObject;
			if(!valueEndpointsEndpointTagsTag["Key"].isNull())
				tagsObject.key = valueEndpointsEndpointTagsTag["Key"].asString();
			if(!valueEndpointsEndpointTagsTag["Value"].isNull())
				tagsObject.value = valueEndpointsEndpointTagsTag["Value"].asString();
			endpointsObject.tags.push_back(tagsObject);
		}
		auto allAssociatedRouteTables = value["AssociatedRouteTables"]["RouteTable"];
		for (auto value : allAssociatedRouteTables)
			endpointsObject.associatedRouteTables.push_back(value.asString());
		endpoints_.push_back(endpointsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stol(value["MaxResults"].asString());

}

std::vector<ListVpcGatewayEndpointsResult::Endpoint> ListVpcGatewayEndpointsResult::getEndpoints()const
{
	return endpoints_;
}

long ListVpcGatewayEndpointsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListVpcGatewayEndpointsResult::getNextToken()const
{
	return nextToken_;
}

long ListVpcGatewayEndpointsResult::getMaxResults()const
{
	return maxResults_;
}

