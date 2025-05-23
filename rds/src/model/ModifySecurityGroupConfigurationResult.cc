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

#include <alibabacloud/rds/model/ModifySecurityGroupConfigurationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

ModifySecurityGroupConfigurationResult::ModifySecurityGroupConfigurationResult() :
	ServiceResult()
{}

ModifySecurityGroupConfigurationResult::ModifySecurityGroupConfigurationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifySecurityGroupConfigurationResult::~ModifySecurityGroupConfigurationResult()
{}

void ModifySecurityGroupConfigurationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["EcsSecurityGroupRelation"];
	for (auto valueItemsEcsSecurityGroupRelation : allItemsNode)
	{
		EcsSecurityGroupRelation itemsObject;
		if(!valueItemsEcsSecurityGroupRelation["NetworkType"].isNull())
			itemsObject.networkType = valueItemsEcsSecurityGroupRelation["NetworkType"].asString();
		if(!valueItemsEcsSecurityGroupRelation["RegionId"].isNull())
			itemsObject.regionId = valueItemsEcsSecurityGroupRelation["RegionId"].asString();
		if(!valueItemsEcsSecurityGroupRelation["SecurityGroupId"].isNull())
			itemsObject.securityGroupId = valueItemsEcsSecurityGroupRelation["SecurityGroupId"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["DBInstanceName"].isNull())
		dBInstanceName_ = value["DBInstanceName"].asString();

}

std::vector<ModifySecurityGroupConfigurationResult::EcsSecurityGroupRelation> ModifySecurityGroupConfigurationResult::getItems()const
{
	return items_;
}

std::string ModifySecurityGroupConfigurationResult::getDBInstanceName()const
{
	return dBInstanceName_;
}

