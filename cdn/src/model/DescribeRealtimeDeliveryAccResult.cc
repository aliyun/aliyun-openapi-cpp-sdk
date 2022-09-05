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

#include <alibabacloud/cdn/model/DescribeRealtimeDeliveryAccResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeRealtimeDeliveryAccResult::DescribeRealtimeDeliveryAccResult() :
	ServiceResult()
{}

DescribeRealtimeDeliveryAccResult::DescribeRealtimeDeliveryAccResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRealtimeDeliveryAccResult::~DescribeRealtimeDeliveryAccResult()
{}

void DescribeRealtimeDeliveryAccResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allReatTimeDeliveryAccDataNode = value["ReatTimeDeliveryAccData"]["AccData"];
	for (auto valueReatTimeDeliveryAccDataAccData : allReatTimeDeliveryAccDataNode)
	{
		AccData reatTimeDeliveryAccDataObject;
		if(!valueReatTimeDeliveryAccDataAccData["TimeStamp"].isNull())
			reatTimeDeliveryAccDataObject.timeStamp = valueReatTimeDeliveryAccDataAccData["TimeStamp"].asString();
		if(!valueReatTimeDeliveryAccDataAccData["FailedNum"].isNull())
			reatTimeDeliveryAccDataObject.failedNum = std::stoi(valueReatTimeDeliveryAccDataAccData["FailedNum"].asString());
		if(!valueReatTimeDeliveryAccDataAccData["SuccessNum"].isNull())
			reatTimeDeliveryAccDataObject.successNum = std::stoi(valueReatTimeDeliveryAccDataAccData["SuccessNum"].asString());
		reatTimeDeliveryAccData_.push_back(reatTimeDeliveryAccDataObject);
	}

}

std::vector<DescribeRealtimeDeliveryAccResult::AccData> DescribeRealtimeDeliveryAccResult::getReatTimeDeliveryAccData()const
{
	return reatTimeDeliveryAccData_;
}

