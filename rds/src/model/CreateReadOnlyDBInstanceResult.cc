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

#include <alibabacloud/rds/model/CreateReadOnlyDBInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

CreateReadOnlyDBInstanceResult::CreateReadOnlyDBInstanceResult() :
	ServiceResult()
{}

CreateReadOnlyDBInstanceResult::CreateReadOnlyDBInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateReadOnlyDBInstanceResult::~CreateReadOnlyDBInstanceResult()
{}

void CreateReadOnlyDBInstanceResult::parse(const std::string &payload)
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

std::string CreateReadOnlyDBInstanceResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

void CreateReadOnlyDBInstanceResult::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
}

std::string CreateReadOnlyDBInstanceResult::getPort()const
{
	return port_;
}

void CreateReadOnlyDBInstanceResult::setPort(const std::string& port)
{
	port_ = port;
}

std::string CreateReadOnlyDBInstanceResult::getOrderId()const
{
	return orderId_;
}

void CreateReadOnlyDBInstanceResult::setOrderId(const std::string& orderId)
{
	orderId_ = orderId;
}

std::string CreateReadOnlyDBInstanceResult::getConnectionString()const
{
	return connectionString_;
}

void CreateReadOnlyDBInstanceResult::setConnectionString(const std::string& connectionString)
{
	connectionString_ = connectionString;
}

