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

#include <alibabacloud/hitsdb/model/CreateLindormInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Hitsdb;
using namespace AlibabaCloud::Hitsdb::Model;

CreateLindormInstanceResult::CreateLindormInstanceResult() :
	ServiceResult()
{}

CreateLindormInstanceResult::CreateLindormInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateLindormInstanceResult::~CreateLindormInstanceResult()
{}

void CreateLindormInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["OrderId"].isNull())
		orderId_ = std::stol(value["OrderId"].asString());

}

std::string CreateLindormInstanceResult::getInstanceId()const
{
	return instanceId_;
}

long CreateLindormInstanceResult::getOrderId()const
{
	return orderId_;
}

