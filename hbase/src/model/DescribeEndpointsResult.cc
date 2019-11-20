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

#include <alibabacloud/hbase/model/DescribeEndpointsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::HBase;
using namespace AlibabaCloud::HBase::Model;

DescribeEndpointsResult::DescribeEndpointsResult() :
	ServiceResult()
{}

DescribeEndpointsResult::DescribeEndpointsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEndpointsResult::~DescribeEndpointsResult()
{}

void DescribeEndpointsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConnAddrsNode = value["ConnAddrs"]["ConnAddrInfo"];
	for (auto valueConnAddrsConnAddrInfo : allConnAddrsNode)
	{
		ConnAddrInfo connAddrsObject;
		if(!valueConnAddrsConnAddrInfo["ConnType"].isNull())
			connAddrsObject.connType = valueConnAddrsConnAddrInfo["ConnType"].asString();
		if(!valueConnAddrsConnAddrInfo["ConnAddr"].isNull())
			connAddrsObject.connAddr = valueConnAddrsConnAddrInfo["ConnAddr"].asString();
		if(!valueConnAddrsConnAddrInfo["ConnAddrPort"].isNull())
			connAddrsObject.connAddrPort = valueConnAddrsConnAddrInfo["ConnAddrPort"].asString();
		if(!valueConnAddrsConnAddrInfo["NetType"].isNull())
			connAddrsObject.netType = valueConnAddrsConnAddrInfo["NetType"].asString();
		connAddrs_.push_back(connAddrsObject);
	}
	if(!value["NetType"].isNull())
		netType_ = value["NetType"].asString();
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["VSwitchId"].isNull())
		vSwitchId_ = value["VSwitchId"].asString();
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();

}

std::string DescribeEndpointsResult::getVpcId()const
{
	return vpcId_;
}

std::vector<DescribeEndpointsResult::ConnAddrInfo> DescribeEndpointsResult::getConnAddrs()const
{
	return connAddrs_;
}

std::string DescribeEndpointsResult::getVSwitchId()const
{
	return vSwitchId_;
}

std::string DescribeEndpointsResult::getNetType()const
{
	return netType_;
}

std::string DescribeEndpointsResult::getEngine()const
{
	return engine_;
}

