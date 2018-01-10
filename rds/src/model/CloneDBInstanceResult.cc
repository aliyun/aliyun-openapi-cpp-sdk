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

#include <alibabacloud/rds/model/CloneDBInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

CloneDBInstanceResult::CloneDBInstanceResult() :
	ServiceResult()
{}

CloneDBInstanceResult::CloneDBInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CloneDBInstanceResult::~CloneDBInstanceResult()
{}

void CloneDBInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	dBInstanceId_ = value["DBInstanceId"].asString();
	orderId_ = value["OrderId"].asString();
	connectionString_ = value["ConnectionString"].asString();
	port_ = value["Port"].asString();

}

std::string CloneDBInstanceResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

void CloneDBInstanceResult::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
}

std::string CloneDBInstanceResult::getPort()const
{
	return port_;
}

void CloneDBInstanceResult::setPort(const std::string& port)
{
	port_ = port;
}

std::string CloneDBInstanceResult::getOrderId()const
{
	return orderId_;
}

void CloneDBInstanceResult::setOrderId(const std::string& orderId)
{
	orderId_ = orderId;
}

std::string CloneDBInstanceResult::getConnectionString()const
{
	return connectionString_;
}

void CloneDBInstanceResult::setConnectionString(const std::string& connectionString)
{
	connectionString_ = connectionString;
}

