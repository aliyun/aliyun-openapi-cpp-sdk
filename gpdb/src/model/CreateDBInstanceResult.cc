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

#include <alibabacloud/gpdb/model/CreateDBInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

CreateDBInstanceResult::CreateDBInstanceResult() :
	ServiceResult()
{}

CreateDBInstanceResult::CreateDBInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateDBInstanceResult::~CreateDBInstanceResult()
{}

void CreateDBInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["Port"].isNull())
		port_ = value["Port"].asString();
	if(!value["ConnectionString"].isNull())
		connectionString_ = value["ConnectionString"].asString();
	if(!value["OrderId"].isNull())
		orderId_ = value["OrderId"].asString();

}

std::string CreateDBInstanceResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::string CreateDBInstanceResult::getPort()const
{
	return port_;
}

std::string CreateDBInstanceResult::getConnectionString()const
{
	return connectionString_;
}

std::string CreateDBInstanceResult::getOrderId()const
{
	return orderId_;
}

