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

#include <alibabacloud/rds/model/DescribeDBInstanceDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDBInstanceDetailResult::DescribeDBInstanceDetailResult() :
	ServiceResult()
{}

DescribeDBInstanceDetailResult::DescribeDBInstanceDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceDetailResult::~DescribeDBInstanceDetailResult()
{}

void DescribeDBInstanceDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ActivationState"].isNull())
		activationState_ = value["ActivationState"].asString();
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["LicenseType"].isNull())
		licenseType_ = value["LicenseType"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

std::string DescribeDBInstanceDetailResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::string DescribeDBInstanceDetailResult::getActivationState()const
{
	return activationState_;
}

std::string DescribeDBInstanceDetailResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeDBInstanceDetailResult::getLicenseType()const
{
	return licenseType_;
}

