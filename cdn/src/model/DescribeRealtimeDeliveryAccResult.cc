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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allReatTimeDeliveryAccData = value["ReatTimeDeliveryAccData"]["AccData"];
	for (auto value : allReatTimeDeliveryAccData)
	{
		AccData reatTimeDeliveryAccDataObject;
		if(!value["TimeStamp"].isNull())
			reatTimeDeliveryAccDataObject.timeStamp = value["TimeStamp"].asString();
		if(!value["SuccessNum"].isNull())
			reatTimeDeliveryAccDataObject.successNum = std::stoi(value["SuccessNum"].asString());
		if(!value["FailedNum"].isNull())
			reatTimeDeliveryAccDataObject.failedNum = std::stoi(value["FailedNum"].asString());
		reatTimeDeliveryAccData_.push_back(reatTimeDeliveryAccDataObject);
	}

}

std::vector<DescribeRealtimeDeliveryAccResult::AccData> DescribeRealtimeDeliveryAccResult::getReatTimeDeliveryAccData()const
{
	return reatTimeDeliveryAccData_;
}

