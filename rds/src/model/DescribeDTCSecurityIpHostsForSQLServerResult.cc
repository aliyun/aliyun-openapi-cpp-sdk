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

#include <alibabacloud/rds/model/DescribeDTCSecurityIpHostsForSQLServerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDTCSecurityIpHostsForSQLServerResult::DescribeDTCSecurityIpHostsForSQLServerResult() :
	ServiceResult()
{}

DescribeDTCSecurityIpHostsForSQLServerResult::DescribeDTCSecurityIpHostsForSQLServerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDTCSecurityIpHostsForSQLServerResult::~DescribeDTCSecurityIpHostsForSQLServerResult()
{}

void DescribeDTCSecurityIpHostsForSQLServerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["WhiteListGroups"];
	for (auto valueItemsWhiteListGroups : allItemsNode)
	{
		WhiteListGroups itemsObject;
		if(!valueItemsWhiteListGroups["SecurityIpHosts"].isNull())
			itemsObject.securityIpHosts = valueItemsWhiteListGroups["SecurityIpHosts"].asString();
		if(!valueItemsWhiteListGroups["WhitelistGroupName"].isNull())
			itemsObject.whitelistGroupName = valueItemsWhiteListGroups["WhitelistGroupName"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["IpHostPairNum"].isNull())
		ipHostPairNum_ = value["IpHostPairNum"].asString();

}

std::string DescribeDTCSecurityIpHostsForSQLServerResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::string DescribeDTCSecurityIpHostsForSQLServerResult::getIpHostPairNum()const
{
	return ipHostPairNum_;
}

std::vector<DescribeDTCSecurityIpHostsForSQLServerResult::WhiteListGroups> DescribeDTCSecurityIpHostsForSQLServerResult::getItems()const
{
	return items_;
}

