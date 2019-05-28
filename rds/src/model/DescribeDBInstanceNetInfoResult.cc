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
		DBInstanceNetInfo dBInstanceNetInfosObject;
		if(!value["Upgradeable"].isNull())
			dBInstanceNetInfosObject.upgradeable = value["Upgradeable"].asString();
		if(!value["ExpiredTime"].isNull())
			dBInstanceNetInfosObject.expiredTime = value["ExpiredTime"].asString();
		if(!value["ConnectionString"].isNull())
			dBInstanceNetInfosObject.connectionString = value["ConnectionString"].asString();
		if(!value["IPAddress"].isNull())
			dBInstanceNetInfosObject.iPAddress = value["IPAddress"].asString();
		if(!value["IPType"].isNull())
			dBInstanceNetInfosObject.iPType = value["IPType"].asString();
		if(!value["Port"].isNull())
			dBInstanceNetInfosObject.port = value["Port"].asString();
		if(!value["VPCId"].isNull())
			dBInstanceNetInfosObject.vPCId = value["VPCId"].asString();
		if(!value["VSwitchId"].isNull())
			dBInstanceNetInfosObject.vSwitchId = value["VSwitchId"].asString();
		if(!value["ConnectionStringType"].isNull())
			dBInstanceNetInfosObject.connectionStringType = value["ConnectionStringType"].asString();
		if(!value["MaxDelayTime"].isNull())
			dBInstanceNetInfosObject.maxDelayTime = value["MaxDelayTime"].asString();
		if(!value["DistributionType"].isNull())
			dBInstanceNetInfosObject.distributionType = value["DistributionType"].asString();
		auto allSecurityIPGroups = value["SecurityIPGroups"]["securityIPGroup"];
		for (auto value : allSecurityIPGroups)
		{
			DBInstanceNetInfo::SecurityIPGroup securityIPGroupsObject;
			if(!value["SecurityIPGroupName"].isNull())
				securityIPGroupsObject.securityIPGroupName = value["SecurityIPGroupName"].asString();
			if(!value["SecurityIPs"].isNull())
				securityIPGroupsObject.securityIPs = value["SecurityIPs"].asString();
			dBInstanceNetInfosObject.securityIPGroups.push_back(securityIPGroupsObject);
		}
		auto allDBInstanceWeights = value["DBInstanceWeights"]["DBInstanceWeight"];
		for (auto value : allDBInstanceWeights)
		{
			DBInstanceNetInfo::DBInstanceWeight dBInstanceWeightsObject;
			if(!value["DBInstanceId"].isNull())
				dBInstanceWeightsObject.dBInstanceId = value["DBInstanceId"].asString();
			if(!value["DBInstanceType"].isNull())
				dBInstanceWeightsObject.dBInstanceType = value["DBInstanceType"].asString();
			if(!value["Availability"].isNull())
				dBInstanceWeightsObject.availability = value["Availability"].asString();
			if(!value["Weight"].isNull())
				dBInstanceWeightsObject.weight = value["Weight"].asString();
			dBInstanceNetInfosObject.dBInstanceWeights.push_back(dBInstanceWeightsObject);
		}
		dBInstanceNetInfos_.push_back(dBInstanceNetInfosObject);
	}
	if(!value["InstanceNetworkType"].isNull())
		instanceNetworkType_ = value["InstanceNetworkType"].asString();
	if(!value["SecurityIPMode"].isNull())
		securityIPMode_ = value["SecurityIPMode"].asString();

}

std::vector<DescribeDBInstanceNetInfoResult::DBInstanceNetInfo> DescribeDBInstanceNetInfoResult::getDBInstanceNetInfos()const
{
	return dBInstanceNetInfos_;
}

std::string DescribeDBInstanceNetInfoResult::getSecurityIPMode()const
{
	return securityIPMode_;
}

std::string DescribeDBInstanceNetInfoResult::getInstanceNetworkType()const
{
	return instanceNetworkType_;
}

