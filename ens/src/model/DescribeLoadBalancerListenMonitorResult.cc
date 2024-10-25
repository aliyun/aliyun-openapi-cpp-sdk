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

#include <alibabacloud/ens/model/DescribeLoadBalancerListenMonitorResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeLoadBalancerListenMonitorResult::DescribeLoadBalancerListenMonitorResult() :
	ServiceResult()
{}

DescribeLoadBalancerListenMonitorResult::DescribeLoadBalancerListenMonitorResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLoadBalancerListenMonitorResult::~DescribeLoadBalancerListenMonitorResult()
{}

void DescribeLoadBalancerListenMonitorResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLoadBalancerMonitorListenDataNode = value["LoadBalancerMonitorListenData"]["ElbListenMonitorList"];
	for (auto valueLoadBalancerMonitorListenDataElbListenMonitorList : allLoadBalancerMonitorListenDataNode)
	{
		ElbListenMonitorList loadBalancerMonitorListenDataObject;
		if(!valueLoadBalancerMonitorListenDataElbListenMonitorList["LoadBalancerId"].isNull())
			loadBalancerMonitorListenDataObject.loadBalancerId = valueLoadBalancerMonitorListenDataElbListenMonitorList["LoadBalancerId"].asString();
		if(!valueLoadBalancerMonitorListenDataElbListenMonitorList["EnsRegionId"].isNull())
			loadBalancerMonitorListenDataObject.ensRegionId = valueLoadBalancerMonitorListenDataElbListenMonitorList["EnsRegionId"].asString();
		if(!valueLoadBalancerMonitorListenDataElbListenMonitorList["Vip"].isNull())
			loadBalancerMonitorListenDataObject.vip = valueLoadBalancerMonitorListenDataElbListenMonitorList["Vip"].asString();
		if(!valueLoadBalancerMonitorListenDataElbListenMonitorList["Vni"].isNull())
			loadBalancerMonitorListenDataObject.vni = valueLoadBalancerMonitorListenDataElbListenMonitorList["Vni"].asString();
		if(!valueLoadBalancerMonitorListenDataElbListenMonitorList["VPort"].isNull())
			loadBalancerMonitorListenDataObject.vPort = valueLoadBalancerMonitorListenDataElbListenMonitorList["VPort"].asString();
		if(!valueLoadBalancerMonitorListenDataElbListenMonitorList["Proto"].isNull())
			loadBalancerMonitorListenDataObject.proto = valueLoadBalancerMonitorListenDataElbListenMonitorList["Proto"].asString();
		if(!valueLoadBalancerMonitorListenDataElbListenMonitorList["Conns"].isNull())
			loadBalancerMonitorListenDataObject.conns = valueLoadBalancerMonitorListenDataElbListenMonitorList["Conns"].asString();
		if(!valueLoadBalancerMonitorListenDataElbListenMonitorList["ActConns"].isNull())
			loadBalancerMonitorListenDataObject.actConns = valueLoadBalancerMonitorListenDataElbListenMonitorList["ActConns"].asString();
		if(!valueLoadBalancerMonitorListenDataElbListenMonitorList["InActConns"].isNull())
			loadBalancerMonitorListenDataObject.inActConns = valueLoadBalancerMonitorListenDataElbListenMonitorList["InActConns"].asString();
		if(!valueLoadBalancerMonitorListenDataElbListenMonitorList["DropConns"].isNull())
			loadBalancerMonitorListenDataObject.dropConns = valueLoadBalancerMonitorListenDataElbListenMonitorList["DropConns"].asString();
		if(!valueLoadBalancerMonitorListenDataElbListenMonitorList["InPkts"].isNull())
			loadBalancerMonitorListenDataObject.inPkts = valueLoadBalancerMonitorListenDataElbListenMonitorList["InPkts"].asString();
		if(!valueLoadBalancerMonitorListenDataElbListenMonitorList["OutPkts"].isNull())
			loadBalancerMonitorListenDataObject.outPkts = valueLoadBalancerMonitorListenDataElbListenMonitorList["OutPkts"].asString();
		if(!valueLoadBalancerMonitorListenDataElbListenMonitorList["InDropPkts"].isNull())
			loadBalancerMonitorListenDataObject.inDropPkts = valueLoadBalancerMonitorListenDataElbListenMonitorList["InDropPkts"].asString();
		if(!valueLoadBalancerMonitorListenDataElbListenMonitorList["OutDropPkts"].isNull())
			loadBalancerMonitorListenDataObject.outDropPkts = valueLoadBalancerMonitorListenDataElbListenMonitorList["OutDropPkts"].asString();
		if(!valueLoadBalancerMonitorListenDataElbListenMonitorList["InBytes"].isNull())
			loadBalancerMonitorListenDataObject.inBytes = valueLoadBalancerMonitorListenDataElbListenMonitorList["InBytes"].asString();
		if(!valueLoadBalancerMonitorListenDataElbListenMonitorList["OutBytes"].isNull())
			loadBalancerMonitorListenDataObject.outBytes = valueLoadBalancerMonitorListenDataElbListenMonitorList["OutBytes"].asString();
		if(!valueLoadBalancerMonitorListenDataElbListenMonitorList["InDropBytes"].isNull())
			loadBalancerMonitorListenDataObject.inDropBytes = valueLoadBalancerMonitorListenDataElbListenMonitorList["InDropBytes"].asString();
		if(!valueLoadBalancerMonitorListenDataElbListenMonitorList["OutDropBytes"].isNull())
			loadBalancerMonitorListenDataObject.outDropBytes = valueLoadBalancerMonitorListenDataElbListenMonitorList["OutDropBytes"].asString();
		if(!valueLoadBalancerMonitorListenDataElbListenMonitorList["ValidRsNum"].isNull())
			loadBalancerMonitorListenDataObject.validRsNum = valueLoadBalancerMonitorListenDataElbListenMonitorList["ValidRsNum"].asString();
		if(!valueLoadBalancerMonitorListenDataElbListenMonitorList["InValidRsNum"].isNull())
			loadBalancerMonitorListenDataObject.inValidRsNum = valueLoadBalancerMonitorListenDataElbListenMonitorList["InValidRsNum"].asString();
		if(!valueLoadBalancerMonitorListenDataElbListenMonitorList["BizTime"].isNull())
			loadBalancerMonitorListenDataObject.bizTime = valueLoadBalancerMonitorListenDataElbListenMonitorList["BizTime"].asString();
		loadBalancerMonitorListenData_.push_back(loadBalancerMonitorListenDataObject);
	}

}

std::vector<DescribeLoadBalancerListenMonitorResult::ElbListenMonitorList> DescribeLoadBalancerListenMonitorResult::getLoadBalancerMonitorListenData()const
{
	return loadBalancerMonitorListenData_;
}

