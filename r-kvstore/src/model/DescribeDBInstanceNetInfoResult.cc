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

#include <alibabacloud/r-kvstore/model/DescribeDBInstanceNetInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeDBInstanceNetInfoResult::DescribeDBInstanceNetInfoResult() :
	ServiceResult()
{}

DescribeDBInstanceNetInfoResult::DescribeDBInstanceNetInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceNetInfoResult::~DescribeDBInstanceNetInfoResult()
{}

void DescribeDBInstanceNetInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNetInfoItemsNode = value["NetInfoItems"]["InstanceNetInfo"];
	for (auto valueNetInfoItemsInstanceNetInfo : allNetInfoItemsNode)
	{
		InstanceNetInfo netInfoItemsObject;
		if(!valueNetInfoItemsInstanceNetInfo["DirectConnection"].isNull())
			netInfoItemsObject.directConnection = std::stoi(valueNetInfoItemsInstanceNetInfo["DirectConnection"].asString());
		if(!valueNetInfoItemsInstanceNetInfo["VSwitchId"].isNull())
			netInfoItemsObject.vSwitchId = valueNetInfoItemsInstanceNetInfo["VSwitchId"].asString();
		if(!valueNetInfoItemsInstanceNetInfo["DBInstanceNetType"].isNull())
			netInfoItemsObject.dBInstanceNetType = valueNetInfoItemsInstanceNetInfo["DBInstanceNetType"].asString();
		if(!valueNetInfoItemsInstanceNetInfo["Upgradeable"].isNull())
			netInfoItemsObject.upgradeable = valueNetInfoItemsInstanceNetInfo["Upgradeable"].asString();
		if(!valueNetInfoItemsInstanceNetInfo["ExpiredTime"].isNull())
			netInfoItemsObject.expiredTime = valueNetInfoItemsInstanceNetInfo["ExpiredTime"].asString();
		if(!valueNetInfoItemsInstanceNetInfo["ConnectionString"].isNull())
			netInfoItemsObject.connectionString = valueNetInfoItemsInstanceNetInfo["ConnectionString"].asString();
		if(!valueNetInfoItemsInstanceNetInfo["IPType"].isNull())
			netInfoItemsObject.iPType = valueNetInfoItemsInstanceNetInfo["IPType"].asString();
		if(!valueNetInfoItemsInstanceNetInfo["VPCInstanceId"].isNull())
			netInfoItemsObject.vPCInstanceId = valueNetInfoItemsInstanceNetInfo["VPCInstanceId"].asString();
		if(!valueNetInfoItemsInstanceNetInfo["Port"].isNull())
			netInfoItemsObject.port = valueNetInfoItemsInstanceNetInfo["Port"].asString();
		if(!valueNetInfoItemsInstanceNetInfo["VPCId"].isNull())
			netInfoItemsObject.vPCId = valueNetInfoItemsInstanceNetInfo["VPCId"].asString();
		if(!valueNetInfoItemsInstanceNetInfo["IPAddress"].isNull())
			netInfoItemsObject.iPAddress = valueNetInfoItemsInstanceNetInfo["IPAddress"].asString();
		if(!valueNetInfoItemsInstanceNetInfo["IsSlaveProxy"].isNull())
			netInfoItemsObject.isSlaveProxy = std::stoi(valueNetInfoItemsInstanceNetInfo["IsSlaveProxy"].asString());
		netInfoItems_.push_back(netInfoItemsObject);
	}
	if(!value["InstanceNetworkType"].isNull())
		instanceNetworkType_ = value["InstanceNetworkType"].asString();

}

std::vector<DescribeDBInstanceNetInfoResult::InstanceNetInfo> DescribeDBInstanceNetInfoResult::getNetInfoItems()const
{
	return netInfoItems_;
}

std::string DescribeDBInstanceNetInfoResult::getInstanceNetworkType()const
{
	return instanceNetworkType_;
}

