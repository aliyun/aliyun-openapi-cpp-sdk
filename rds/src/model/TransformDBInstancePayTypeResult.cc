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

#include <alibabacloud/rds/model/TransformDBInstancePayTypeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

TransformDBInstancePayTypeResult::TransformDBInstancePayTypeResult() :
	ServiceResult()
{}

TransformDBInstancePayTypeResult::TransformDBInstancePayTypeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

TransformDBInstancePayTypeResult::~TransformDBInstancePayTypeResult()
{}

void TransformDBInstancePayTypeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["ExpiredTime"].isNull())
		expiredTime_ = value["ExpiredTime"].asString();
	if(!value["OrderId"].isNull())
		orderId_ = std::stol(value["OrderId"].asString());
	if(!value["ChargeType"].isNull())
		chargeType_ = value["ChargeType"].asString();

}

std::string TransformDBInstancePayTypeResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::string TransformDBInstancePayTypeResult::getChargeType()const
{
	return chargeType_;
}

std::string TransformDBInstancePayTypeResult::getExpiredTime()const
{
	return expiredTime_;
}

long TransformDBInstancePayTypeResult::getOrderId()const
{
	return orderId_;
}

