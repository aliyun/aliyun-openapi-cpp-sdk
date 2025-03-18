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

#include <alibabacloud/ens/model/DescribeLoadBalancerListenersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeLoadBalancerListenersResult::DescribeLoadBalancerListenersResult() :
	ServiceResult()
{}

DescribeLoadBalancerListenersResult::DescribeLoadBalancerListenersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLoadBalancerListenersResult::~DescribeLoadBalancerListenersResult()
{}

void DescribeLoadBalancerListenersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListenersNode = value["Listeners"]["Listener"];
	for (auto valueListenersListener : allListenersNode)
	{
		Listener listenersObject;
		if(!valueListenersListener["LoadBalancerId"].isNull())
			listenersObject.loadBalancerId = valueListenersListener["LoadBalancerId"].asString();
		if(!valueListenersListener["ListenerPort"].isNull())
			listenersObject.listenerPort = valueListenersListener["ListenerPort"].asString();
		if(!valueListenersListener["Protocol"].isNull())
			listenersObject.protocol = valueListenersListener["Protocol"].asString();
		if(!valueListenersListener["Description"].isNull())
			listenersObject.description = valueListenersListener["Description"].asString();
		if(!valueListenersListener["Status"].isNull())
			listenersObject.status = valueListenersListener["Status"].asString();
		if(!valueListenersListener["ListenerForward"].isNull())
			listenersObject.listenerForward = valueListenersListener["ListenerForward"].asString();
		if(!valueListenersListener["ForwardPort"].isNull())
			listenersObject.forwardPort = valueListenersListener["ForwardPort"].asString();
		if(!valueListenersListener["CreateTime"].isNull())
			listenersObject.createTime = valueListenersListener["CreateTime"].asString();
		if(!valueListenersListener["BackendServerPort"].isNull())
			listenersObject.backendServerPort = std::stoi(valueListenersListener["BackendServerPort"].asString());
		listeners_.push_back(listenersObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeLoadBalancerListenersResult::Listener> DescribeLoadBalancerListenersResult::getListeners()const
{
	return listeners_;
}

int DescribeLoadBalancerListenersResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeLoadBalancerListenersResult::getPageSize()const
{
	return pageSize_;
}

int DescribeLoadBalancerListenersResult::getPageNumber()const
{
	return pageNumber_;
}

