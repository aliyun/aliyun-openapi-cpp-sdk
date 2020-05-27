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

#include <alibabacloud/hbase/model/CreateMultiZoneClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::HBase;
using namespace AlibabaCloud::HBase::Model;

CreateMultiZoneClusterResult::CreateMultiZoneClusterResult() :
	ServiceResult()
{}

CreateMultiZoneClusterResult::CreateMultiZoneClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateMultiZoneClusterResult::~CreateMultiZoneClusterResult()
{}

void CreateMultiZoneClusterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ClusterId"].isNull())
		clusterId_ = value["ClusterId"].asString();
	if(!value["OrderId"].isNull())
		orderId_ = value["OrderId"].asString();

}

std::string CreateMultiZoneClusterResult::getClusterId()const
{
	return clusterId_;
}

std::string CreateMultiZoneClusterResult::getOrderId()const
{
	return orderId_;
}

