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

#include <alibabacloud/rds/model/UpgradeDBInstanceMajorVersionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

UpgradeDBInstanceMajorVersionResult::UpgradeDBInstanceMajorVersionResult() :
	ServiceResult()
{}

UpgradeDBInstanceMajorVersionResult::UpgradeDBInstanceMajorVersionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpgradeDBInstanceMajorVersionResult::~UpgradeDBInstanceMajorVersionResult()
{}

void UpgradeDBInstanceMajorVersionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ConnectionString"].isNull())
		connectionString_ = value["ConnectionString"].asString();
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["OrderId"].isNull())
		orderId_ = value["OrderId"].asString();
	if(!value["Port"].isNull())
		port_ = value["Port"].asString();
	if(!value["TaskId"].isNull())
		taskId_ = std::stol(value["TaskId"].asString());

}

long UpgradeDBInstanceMajorVersionResult::getTaskId()const
{
	return taskId_;
}

std::string UpgradeDBInstanceMajorVersionResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::string UpgradeDBInstanceMajorVersionResult::getPort()const
{
	return port_;
}

std::string UpgradeDBInstanceMajorVersionResult::getConnectionString()const
{
	return connectionString_;
}

std::string UpgradeDBInstanceMajorVersionResult::getOrderId()const
{
	return orderId_;
}

