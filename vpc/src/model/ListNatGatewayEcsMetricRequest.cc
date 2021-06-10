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

#include <alibabacloud/vpc/model/ListNatGatewayEcsMetricRequest.h>

using AlibabaCloud::Vpc::Model::ListNatGatewayEcsMetricRequest;

ListNatGatewayEcsMetricRequest::ListNatGatewayEcsMetricRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ListNatGatewayEcsMetric")
{
	setMethod(HttpRequest::Method::Post);
}

ListNatGatewayEcsMetricRequest::~ListNatGatewayEcsMetricRequest()
{}

std::string ListNatGatewayEcsMetricRequest::getOrderKey()const
{
	return orderKey_;
}

void ListNatGatewayEcsMetricRequest::setOrderKey(const std::string& orderKey)
{
	orderKey_ = orderKey;
	setParameter("OrderKey", orderKey);
}

std::string ListNatGatewayEcsMetricRequest::getRegionId()const
{
	return regionId_;
}

void ListNatGatewayEcsMetricRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListNatGatewayEcsMetricRequest::getNextToken()const
{
	return nextToken_;
}

void ListNatGatewayEcsMetricRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListNatGatewayEcsMetricRequest::getNatGatewayId()const
{
	return natGatewayId_;
}

void ListNatGatewayEcsMetricRequest::setNatGatewayId(const std::string& natGatewayId)
{
	natGatewayId_ = natGatewayId;
	setParameter("NatGatewayId", natGatewayId);
}

bool ListNatGatewayEcsMetricRequest::getDryRun()const
{
	return dryRun_;
}

void ListNatGatewayEcsMetricRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", dryRun ? "true" : "false");
}

std::string ListNatGatewayEcsMetricRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void ListNatGatewayEcsMetricRequest::setPrivateIpAddress(const std::string& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	setParameter("PrivateIpAddress", privateIpAddress);
}

std::string ListNatGatewayEcsMetricRequest::getMaxResults()const
{
	return maxResults_;
}

void ListNatGatewayEcsMetricRequest::setMaxResults(const std::string& maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", maxResults);
}

long ListNatGatewayEcsMetricRequest::getTimePoint()const
{
	return timePoint_;
}

void ListNatGatewayEcsMetricRequest::setTimePoint(long timePoint)
{
	timePoint_ = timePoint;
	setParameter("TimePoint", std::to_string(timePoint));
}

std::string ListNatGatewayEcsMetricRequest::getOrderType()const
{
	return orderType_;
}

void ListNatGatewayEcsMetricRequest::setOrderType(const std::string& orderType)
{
	orderType_ = orderType;
	setParameter("OrderType", orderType);
}

