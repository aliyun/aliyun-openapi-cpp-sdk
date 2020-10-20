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

#include <alibabacloud/hbase/model/DescribeClusterConnectionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::HBase;
using namespace AlibabaCloud::HBase::Model;

DescribeClusterConnectionResult::DescribeClusterConnectionResult() :
	ServiceResult()
{}

DescribeClusterConnectionResult::DescribeClusterConnectionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterConnectionResult::~DescribeClusterConnectionResult()
{}

void DescribeClusterConnectionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allZkConnAddrsNode = value["ZkConnAddrs"]["ZkConnAddr"];
	for (auto valueZkConnAddrsZkConnAddr : allZkConnAddrsNode)
	{
		ZkConnAddr zkConnAddrsObject;
		if(!valueZkConnAddrsZkConnAddr["ConnAddr"].isNull())
			zkConnAddrsObject.connAddr = valueZkConnAddrsZkConnAddr["ConnAddr"].asString();
		if(!valueZkConnAddrsZkConnAddr["ConnAddrPort"].isNull())
			zkConnAddrsObject.connAddrPort = valueZkConnAddrsZkConnAddr["ConnAddrPort"].asString();
		if(!valueZkConnAddrsZkConnAddr["NetType"].isNull())
			zkConnAddrsObject.netType = valueZkConnAddrsZkConnAddr["NetType"].asString();
		zkConnAddrs_.push_back(zkConnAddrsObject);
	}
	auto allSlbConnAddrsNode = value["SlbConnAddrs"]["SlbConnAddr"];
	for (auto valueSlbConnAddrsSlbConnAddr : allSlbConnAddrsNode)
	{
		SlbConnAddr slbConnAddrsObject;
		if(!valueSlbConnAddrsSlbConnAddr["SlbType"].isNull())
			slbConnAddrsObject.slbType = valueSlbConnAddrsSlbConnAddr["SlbType"].asString();
		auto connAddrInfoNode = value["ConnAddrInfo"];
		if(!connAddrInfoNode["ConnAddr"].isNull())
			slbConnAddrsObject.connAddrInfo.connAddr = connAddrInfoNode["ConnAddr"].asString();
		if(!connAddrInfoNode["ConnAddrPort"].isNull())
			slbConnAddrsObject.connAddrInfo.connAddrPort = connAddrInfoNode["ConnAddrPort"].asString();
		if(!connAddrInfoNode["NetType"].isNull())
			slbConnAddrsObject.connAddrInfo.netType = connAddrInfoNode["NetType"].asString();
		slbConnAddrs_.push_back(slbConnAddrsObject);
	}
	auto allServiceConnAddrsNode = value["ServiceConnAddrs"]["ServiceConnAddr"];
	for (auto valueServiceConnAddrsServiceConnAddr : allServiceConnAddrsNode)
	{
		ServiceConnAddr serviceConnAddrsObject;
		if(!valueServiceConnAddrsServiceConnAddr["ConnType"].isNull())
			serviceConnAddrsObject.connType = valueServiceConnAddrsServiceConnAddr["ConnType"].asString();
		auto connAddrInfo1Node = value["ConnAddrInfo"];
		if(!connAddrInfo1Node["ConnAddr"].isNull())
			serviceConnAddrsObject.connAddrInfo1.connAddr = connAddrInfo1Node["ConnAddr"].asString();
		if(!connAddrInfo1Node["ConnAddrPort"].isNull())
			serviceConnAddrsObject.connAddrInfo1.connAddrPort = connAddrInfo1Node["ConnAddrPort"].asString();
		if(!connAddrInfo1Node["NetType"].isNull())
			serviceConnAddrsObject.connAddrInfo1.netType = connAddrInfo1Node["NetType"].asString();
		serviceConnAddrs_.push_back(serviceConnAddrsObject);
	}
	auto uiProxyConnAddrInfoNode = value["UiProxyConnAddrInfo"];
	if(!uiProxyConnAddrInfoNode["ConnAddr"].isNull())
		uiProxyConnAddrInfo_.connAddr = uiProxyConnAddrInfoNode["ConnAddr"].asString();
	if(!uiProxyConnAddrInfoNode["ConnAddrPort"].isNull())
		uiProxyConnAddrInfo_.connAddrPort = uiProxyConnAddrInfoNode["ConnAddrPort"].asString();
	if(!uiProxyConnAddrInfoNode["NetType"].isNull())
		uiProxyConnAddrInfo_.netType = uiProxyConnAddrInfoNode["NetType"].asString();
	auto thriftConnNode = value["ThriftConn"];
	if(!thriftConnNode["ConnAddr"].isNull())
		thriftConn_.connAddr = thriftConnNode["ConnAddr"].asString();
	if(!thriftConnNode["ConnAddrPort"].isNull())
		thriftConn_.connAddrPort = thriftConnNode["ConnAddrPort"].asString();
	if(!thriftConnNode["NetType"].isNull())
		thriftConn_.netType = thriftConnNode["NetType"].asString();
	if(!value["NetType"].isNull())
		netType_ = value["NetType"].asString();
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["VSwitchId"].isNull())
		vSwitchId_ = value["VSwitchId"].asString();
	if(!value["DbType"].isNull())
		dbType_ = value["DbType"].asString();
	if(!value["IsMultimod"].isNull())
		isMultimod_ = value["IsMultimod"].asString();

}

std::string DescribeClusterConnectionResult::getIsMultimod()const
{
	return isMultimod_;
}

DescribeClusterConnectionResult::UiProxyConnAddrInfo DescribeClusterConnectionResult::getUiProxyConnAddrInfo()const
{
	return uiProxyConnAddrInfo_;
}

std::string DescribeClusterConnectionResult::getVpcId()const
{
	return vpcId_;
}

std::string DescribeClusterConnectionResult::getVSwitchId()const
{
	return vSwitchId_;
}

std::vector<DescribeClusterConnectionResult::ServiceConnAddr> DescribeClusterConnectionResult::getServiceConnAddrs()const
{
	return serviceConnAddrs_;
}

std::string DescribeClusterConnectionResult::getNetType()const
{
	return netType_;
}

DescribeClusterConnectionResult::ThriftConn DescribeClusterConnectionResult::getThriftConn()const
{
	return thriftConn_;
}

std::string DescribeClusterConnectionResult::getDbType()const
{
	return dbType_;
}

std::vector<DescribeClusterConnectionResult::ZkConnAddr> DescribeClusterConnectionResult::getZkConnAddrs()const
{
	return zkConnAddrs_;
}

std::vector<DescribeClusterConnectionResult::SlbConnAddr> DescribeClusterConnectionResult::getSlbConnAddrs()const
{
	return slbConnAddrs_;
}

