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

#include <alibabacloud/polardb/model/TransformDBClusterPayTypeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

TransformDBClusterPayTypeResult::TransformDBClusterPayTypeResult() :
	ServiceResult()
{}

TransformDBClusterPayTypeResult::TransformDBClusterPayTypeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

TransformDBClusterPayTypeResult::~TransformDBClusterPayTypeResult()
{}

void TransformDBClusterPayTypeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ChargeType"].isNull())
		chargeType_ = value["ChargeType"].asString();
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();
	if(!value["ExpiredTime"].isNull())
		expiredTime_ = value["ExpiredTime"].asString();
	if(!value["OrderId"].isNull())
		orderId_ = value["OrderId"].asString();

}

std::string TransformDBClusterPayTypeResult::getChargeType()const
{
	return chargeType_;
}

std::string TransformDBClusterPayTypeResult::getExpiredTime()const
{
	return expiredTime_;
}

std::string TransformDBClusterPayTypeResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::string TransformDBClusterPayTypeResult::getOrderId()const
{
	return orderId_;
}

