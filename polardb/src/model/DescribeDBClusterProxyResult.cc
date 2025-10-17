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

#include <alibabacloud/polardb/model/DescribeDBClusterProxyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDBClusterProxyResult::DescribeDBClusterProxyResult() :
	ServiceResult()
{}

DescribeDBClusterProxyResult::DescribeDBClusterProxyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterProxyResult::~DescribeDBClusterProxyResult()
{}

void DescribeDBClusterProxyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allChildInstancesNode = value["ChildInstances"]["ChildInstance"];
	for (auto valueChildInstancesChildInstance : allChildInstancesNode)
	{
		ChildInstance childInstancesObject;
		if(!valueChildInstancesChildInstance["DBNodeClass"].isNull())
			childInstancesObject.dBNodeClass = valueChildInstancesChildInstance["DBNodeClass"].asString();
		if(!valueChildInstancesChildInstance["DBNodeIP"].isNull())
			childInstancesObject.dBNodeIP = valueChildInstancesChildInstance["DBNodeIP"].asString();
		if(!valueChildInstancesChildInstance["DBNodeId"].isNull())
			childInstancesObject.dBNodeId = valueChildInstancesChildInstance["DBNodeId"].asString();
		if(!valueChildInstancesChildInstance["DBNodePort"].isNull())
			childInstancesObject.dBNodePort = valueChildInstancesChildInstance["DBNodePort"].asString();
		if(!valueChildInstancesChildInstance["DBNodeStatus"].isNull())
			childInstancesObject.dBNodeStatus = valueChildInstancesChildInstance["DBNodeStatus"].asString();
		if(!valueChildInstancesChildInstance["HostName"].isNull())
			childInstancesObject.hostName = valueChildInstancesChildInstance["HostName"].asString();
		childInstances_.push_back(childInstancesObject);
	}
	if(!value["DBProxyClusterId"].isNull())
		dBProxyClusterId_ = value["DBProxyClusterId"].asString();
	if(!value["DBProxyClusterNum"].isNull())
		dBProxyClusterNum_ = std::stol(value["DBProxyClusterNum"].asString());
	if(!value["DBProxyClusterStatus"].isNull())
		dBProxyClusterStatus_ = value["DBProxyClusterStatus"].asString();

}

std::string DescribeDBClusterProxyResult::getDBProxyClusterStatus()const
{
	return dBProxyClusterStatus_;
}

std::string DescribeDBClusterProxyResult::getDBProxyClusterId()const
{
	return dBProxyClusterId_;
}

long DescribeDBClusterProxyResult::getDBProxyClusterNum()const
{
	return dBProxyClusterNum_;
}

std::vector<DescribeDBClusterProxyResult::ChildInstance> DescribeDBClusterProxyResult::getChildInstances()const
{
	return childInstances_;
}

