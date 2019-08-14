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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["OrderId"].isNull())
		orderId_ = value["OrderId"].asString();
	if(!value["ConnectionString"].isNull())
		connectionString_ = value["ConnectionString"].asString();
	if(!value["Port"].isNull())
		port_ = value["Port"].asString();

}

std::string CloneDBInstanceResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::string CloneDBInstanceResult::getPort()const
{
	return port_;
}

std::string CloneDBInstanceResult::getOrderId()const
{
	return orderId_;
}

std::string CloneDBInstanceResult::getConnectionString()const
{
	return connectionString_;
}

