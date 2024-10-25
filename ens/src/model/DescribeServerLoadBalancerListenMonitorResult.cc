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

#include <alibabacloud/ens/model/DescribeServerLoadBalancerListenMonitorResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeServerLoadBalancerListenMonitorResult::DescribeServerLoadBalancerListenMonitorResult() :
	ServiceResult()
{}

DescribeServerLoadBalancerListenMonitorResult::DescribeServerLoadBalancerListenMonitorResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeServerLoadBalancerListenMonitorResult::~DescribeServerLoadBalancerListenMonitorResult()
{}

void DescribeServerLoadBalancerListenMonitorResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allServerLoadBalancerMonitorDataNode = value["ServerLoadBalancerMonitorData"]["EslbMonitorList"];
	for (auto valueServerLoadBalancerMonitorDataEslbMonitorList : allServerLoadBalancerMonitorDataNode)
	{
		EslbMonitorList serverLoadBalancerMonitorDataObject;
		if(!valueServerLoadBalancerMonitorDataEslbMonitorList["LoadBalancerId"].isNull())
			serverLoadBalancerMonitorDataObject.loadBalancerId = valueServerLoadBalancerMonitorDataEslbMonitorList["LoadBalancerId"].asString();
		if(!valueServerLoadBalancerMonitorDataEslbMonitorList["LoadBalancerName"].isNull())
			serverLoadBalancerMonitorDataObject.loadBalancerName = valueServerLoadBalancerMonitorDataEslbMonitorList["LoadBalancerName"].asString();
		if(!valueServerLoadBalancerMonitorDataEslbMonitorList["EnsRegionId"].isNull())
			serverLoadBalancerMonitorDataObject.ensRegionId = valueServerLoadBalancerMonitorDataEslbMonitorList["EnsRegionId"].asString();
		if(!valueServerLoadBalancerMonitorDataEslbMonitorList["LoadBalancerSpec"].isNull())
			serverLoadBalancerMonitorDataObject.loadBalancerSpec = valueServerLoadBalancerMonitorDataEslbMonitorList["LoadBalancerSpec"].asString();
		if(!valueServerLoadBalancerMonitorDataEslbMonitorList["Vip"].isNull())
			serverLoadBalancerMonitorDataObject.vip = valueServerLoadBalancerMonitorDataEslbMonitorList["Vip"].asString();
		if(!valueServerLoadBalancerMonitorDataEslbMonitorList["Vni"].isNull())
			serverLoadBalancerMonitorDataObject.vni = std::stoi(valueServerLoadBalancerMonitorDataEslbMonitorList["Vni"].asString());
		if(!valueServerLoadBalancerMonitorDataEslbMonitorList["Vport"].isNull())
			serverLoadBalancerMonitorDataObject.vport = std::stoi(valueServerLoadBalancerMonitorDataEslbMonitorList["Vport"].asString());
		if(!valueServerLoadBalancerMonitorDataEslbMonitorList["Proto"].isNull())
			serverLoadBalancerMonitorDataObject.proto = valueServerLoadBalancerMonitorDataEslbMonitorList["Proto"].asString();
		if(!valueServerLoadBalancerMonitorDataEslbMonitorList["Acc"].isNull())
			serverLoadBalancerMonitorDataObject.acc = std::stoi(valueServerLoadBalancerMonitorDataEslbMonitorList["Acc"].asString());
		if(!valueServerLoadBalancerMonitorDataEslbMonitorList["Reqs2xx"].isNull())
			serverLoadBalancerMonitorDataObject.reqs2xx = std::stoi(valueServerLoadBalancerMonitorDataEslbMonitorList["Reqs2xx"].asString());
		if(!valueServerLoadBalancerMonitorDataEslbMonitorList["Reqs3xx"].isNull())
			serverLoadBalancerMonitorDataObject.reqs3xx = std::stoi(valueServerLoadBalancerMonitorDataEslbMonitorList["Reqs3xx"].asString());
		if(!valueServerLoadBalancerMonitorDataEslbMonitorList["Reqs4xx"].isNull())
			serverLoadBalancerMonitorDataObject.reqs4xx = std::stoi(valueServerLoadBalancerMonitorDataEslbMonitorList["Reqs4xx"].asString());
		if(!valueServerLoadBalancerMonitorDataEslbMonitorList["Reqs5xx"].isNull())
			serverLoadBalancerMonitorDataObject.reqs5xx = std::stoi(valueServerLoadBalancerMonitorDataEslbMonitorList["Reqs5xx"].asString());
		if(!valueServerLoadBalancerMonitorDataEslbMonitorList["RtAvg"].isNull())
			serverLoadBalancerMonitorDataObject.rtAvg = std::stoi(valueServerLoadBalancerMonitorDataEslbMonitorList["RtAvg"].asString());
		if(!valueServerLoadBalancerMonitorDataEslbMonitorList["BizTime"].isNull())
			serverLoadBalancerMonitorDataObject.bizTime = valueServerLoadBalancerMonitorDataEslbMonitorList["BizTime"].asString();
		serverLoadBalancerMonitorData_.push_back(serverLoadBalancerMonitorDataObject);
	}

}

std::vector<DescribeServerLoadBalancerListenMonitorResult::EslbMonitorList> DescribeServerLoadBalancerListenMonitorResult::getServerLoadBalancerMonitorData()const
{
	return serverLoadBalancerMonitorData_;
}

