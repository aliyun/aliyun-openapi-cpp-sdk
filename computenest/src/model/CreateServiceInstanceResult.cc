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

#include <alibabacloud/computenest/model/CreateServiceInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ComputeNest;
using namespace AlibabaCloud::ComputeNest::Model;

CreateServiceInstanceResult::CreateServiceInstanceResult() :
	ServiceResult()
{}

CreateServiceInstanceResult::CreateServiceInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateServiceInstanceResult::~CreateServiceInstanceResult()
{}

void CreateServiceInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["ServiceInstanceId"].isNull())
		serviceInstanceId_ = value["ServiceInstanceId"].asString();
	if(!value["MarketInstanceId"].isNull())
		marketInstanceId_ = value["MarketInstanceId"].asString();
	if(!value["OrderId"].isNull())
		orderId_ = value["OrderId"].asString();

}

std::string CreateServiceInstanceResult::getStatus()const
{
	return status_;
}

std::string CreateServiceInstanceResult::getServiceInstanceId()const
{
	return serviceInstanceId_;
}

std::string CreateServiceInstanceResult::getMarketInstanceId()const
{
	return marketInstanceId_;
}

std::string CreateServiceInstanceResult::getOrderId()const
{
	return orderId_;
}

