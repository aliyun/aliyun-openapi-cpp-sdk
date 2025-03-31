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

#include <alibabacloud/cloud-siem/model/DescribeUserBuyStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

DescribeUserBuyStatusResult::DescribeUserBuyStatusResult() :
	ServiceResult()
{}

DescribeUserBuyStatusResult::DescribeUserBuyStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUserBuyStatusResult::~DescribeUserBuyStatusResult()
{}

void DescribeUserBuyStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["MasterUserId"].isNull())
		data_.masterUserId = std::stol(dataNode["MasterUserId"].asString());
	if(!dataNode["MasterUserName"].isNull())
		data_.masterUserName = dataNode["MasterUserName"].asString();
	if(!dataNode["MainUserId"].isNull())
		data_.mainUserId = std::stol(dataNode["MainUserId"].asString());
	if(!dataNode["MainUserName"].isNull())
		data_.mainUserName = dataNode["MainUserName"].asString();
	if(!dataNode["SubUserId"].isNull())
		data_.subUserId = std::stol(dataNode["SubUserId"].asString());
	if(!dataNode["SubUserName"].isNull())
		data_.subUserName = dataNode["SubUserName"].asString();
	if(!dataNode["Capacity"].isNull())
		data_.capacity = std::stoi(dataNode["Capacity"].asString());
	if(!dataNode["SasInstanceId"].isNull())
		data_.sasInstanceId = dataNode["SasInstanceId"].asString();
	if(!dataNode["CanBuy"].isNull())
		data_.canBuy = dataNode["CanBuy"].asString() == "true";
	if(!dataNode["EndTime"].isNull())
		data_.endTime = std::stol(dataNode["EndTime"].asString());
	if(!dataNode["DurationDays"].isNull())
		data_.durationDays = std::stol(dataNode["DurationDays"].asString());
	if(!dataNode["RdOrder"].isNull())
		data_.rdOrder = std::stoi(dataNode["RdOrder"].asString());

}

DescribeUserBuyStatusResult::Data DescribeUserBuyStatusResult::getData()const
{
	return data_;
}

