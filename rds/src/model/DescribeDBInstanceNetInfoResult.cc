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

#include <alibabacloud/rds/model/DescribeDBInstanceNetInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

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
	auto allDBInstanceNetInfos = value["DBInstanceNetInfos"]["DBInstanceNetInfo"];
	for (auto value : allDBInstanceNetInfos)
	{
		DBInstanceNetInfo dBInstanceNetInfoObject;
		dBInstanceNetInfoObject.upgradeable = value["Upgradeable"].asString();
		dBInstanceNetInfoObject.expiredTime = value["ExpiredTime"].asString();
		dBInstanceNetInfoObject.connectionString = value["ConnectionString"].asString();
		dBInstanceNetInfoObject.iPAddress = value["IPAddress"].asString();
		dBInstanceNetInfoObject.iPType = value["IPType"].asString();
		dBInstanceNetInfoObject.port = value["Port"].asString();
		dBInstanceNetInfoObject.vPCId = value["VPCId"].asString();
		dBInstanceNetInfoObject.vSwitchId = value["VSwitchId"].asString();
		dBInstanceNetInfoObject.connectionStringType = value["ConnectionStringType"].asString();
		dBInstanceNetInfoObject.maxDelayTime = value["MaxDelayTime"].asString();
		dBInstanceNetInfoObject.distributionType = value["DistributionType"].asString();
		auto allSecurityIPGroups = value["SecurityIPGroups"]["securityIPGroup"];
		for (auto value : allSecurityIPGroups)
		{
			DBInstanceNetInfo::securityIPGroup securityIPGroupObject;
			securityIPGroupObject.securityIPGroupName = value["SecurityIPGroupName"].asString();
			securityIPGroupObject.securityIPs = value["SecurityIPs"].asString();
			dBInstanceNetInfoObject.securityIPGroups.push_back(securityIPGroupObject);
		}
		auto allDBInstanceWeights = value["DBInstanceWeights"]["DBInstanceWeight"];
		for (auto value : allDBInstanceWeights)
		{
			DBInstanceNetInfo::DBInstanceWeight dBInstanceWeightObject;
			dBInstanceWeightObject.dBInstanceId = value["DBInstanceId"].asString();
			dBInstanceWeightObject.dBInstanceType = value["DBInstanceType"].asString();
			dBInstanceWeightObject.availability = value["Availability"].asString();
			dBInstanceWeightObject.weight = value["Weight"].asString();
			dBInstanceNetInfoObject.dBInstanceWeights.push_back(dBInstanceWeightObject);
		}
		dBInstanceNetInfos_.push_back(dBInstanceNetInfoObject);
	}
	instanceNetworkType_ = value["InstanceNetworkType"].asString();

}

std::string DescribeDBInstanceNetInfoResult::getInstanceNetworkType()const
{
	return instanceNetworkType_;
}

void DescribeDBInstanceNetInfoResult::setInstanceNetworkType(const std::string& instanceNetworkType)
{
	instanceNetworkType_ = instanceNetworkType;
}

