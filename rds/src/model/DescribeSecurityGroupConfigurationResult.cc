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

#include <alibabacloud/rds/model/DescribeSecurityGroupConfigurationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeSecurityGroupConfigurationResult::DescribeSecurityGroupConfigurationResult() :
	ServiceResult()
{}

DescribeSecurityGroupConfigurationResult::DescribeSecurityGroupConfigurationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSecurityGroupConfigurationResult::~DescribeSecurityGroupConfigurationResult()
{}

void DescribeSecurityGroupConfigurationResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["EcsSecurityGroupRelation"];
	for (auto value : allItems)
	{
		EcsSecurityGroupRelation itemsObject;
		if(!value["RegionId"].isNull())
			itemsObject.regionId = value["RegionId"].asString();
		if(!value["SecurityGroupId"].isNull())
			itemsObject.securityGroupId = value["SecurityGroupId"].asString();
		if(!value["NetworkType"].isNull())
			itemsObject.networkType = value["NetworkType"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["DBInstanceName"].isNull())
		dBInstanceName_ = value["DBInstanceName"].asString();

}

std::vector<DescribeSecurityGroupConfigurationResult::EcsSecurityGroupRelation> DescribeSecurityGroupConfigurationResult::getItems()const
{
	return items_;
}

std::string DescribeSecurityGroupConfigurationResult::getDBInstanceName()const
{
	return dBInstanceName_;
}

