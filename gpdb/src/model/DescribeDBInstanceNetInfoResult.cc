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

#include <alibabacloud/gpdb/model/DescribeDBInstanceNetInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

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
	auto allDBInstanceNetInfosNode = value["DBInstanceNetInfos"]["DBInstanceNetInfo"];
	for (auto valueDBInstanceNetInfosDBInstanceNetInfo : allDBInstanceNetInfosNode)
	{
		DBInstanceNetInfo dBInstanceNetInfosObject;
		if(!valueDBInstanceNetInfosDBInstanceNetInfo["VSwitchId"].isNull())
			dBInstanceNetInfosObject.vSwitchId = valueDBInstanceNetInfosDBInstanceNetInfo["VSwitchId"].asString();
		if(!valueDBInstanceNetInfosDBInstanceNetInfo["ConnectionString"].isNull())
			dBInstanceNetInfosObject.connectionString = valueDBInstanceNetInfosDBInstanceNetInfo["ConnectionString"].asString();
		if(!valueDBInstanceNetInfosDBInstanceNetInfo["IPType"].isNull())
			dBInstanceNetInfosObject.iPType = valueDBInstanceNetInfosDBInstanceNetInfo["IPType"].asString();
		if(!valueDBInstanceNetInfosDBInstanceNetInfo["Port"].isNull())
			dBInstanceNetInfosObject.port = valueDBInstanceNetInfosDBInstanceNetInfo["Port"].asString();
		if(!valueDBInstanceNetInfosDBInstanceNetInfo["VpcInstanceId"].isNull())
			dBInstanceNetInfosObject.vpcInstanceId = valueDBInstanceNetInfosDBInstanceNetInfo["VpcInstanceId"].asString();
		if(!valueDBInstanceNetInfosDBInstanceNetInfo["VPCId"].isNull())
			dBInstanceNetInfosObject.vPCId = valueDBInstanceNetInfosDBInstanceNetInfo["VPCId"].asString();
		if(!valueDBInstanceNetInfosDBInstanceNetInfo["IPAddress"].isNull())
			dBInstanceNetInfosObject.iPAddress = valueDBInstanceNetInfosDBInstanceNetInfo["IPAddress"].asString();
		if(!valueDBInstanceNetInfosDBInstanceNetInfo["AddressType"].isNull())
			dBInstanceNetInfosObject.addressType = valueDBInstanceNetInfosDBInstanceNetInfo["AddressType"].asString();
		dBInstanceNetInfos_.push_back(dBInstanceNetInfosObject);
	}
	if(!value["InstanceNetworkType"].isNull())
		instanceNetworkType_ = value["InstanceNetworkType"].asString();

}

std::vector<DescribeDBInstanceNetInfoResult::DBInstanceNetInfo> DescribeDBInstanceNetInfoResult::getDBInstanceNetInfos()const
{
	return dBInstanceNetInfos_;
}

std::string DescribeDBInstanceNetInfoResult::getInstanceNetworkType()const
{
	return instanceNetworkType_;
}

