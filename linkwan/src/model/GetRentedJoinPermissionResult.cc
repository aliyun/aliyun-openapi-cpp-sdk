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

#include <alibabacloud/linkwan/model/GetRentedJoinPermissionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

GetRentedJoinPermissionResult::GetRentedJoinPermissionResult() :
	ServiceResult()
{}

GetRentedJoinPermissionResult::GetRentedJoinPermissionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRentedJoinPermissionResult::~GetRentedJoinPermissionResult()
{}

void GetRentedJoinPermissionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["JoinPermissionId"].isNull())
		data_.joinPermissionId = dataNode["JoinPermissionId"].asString();
	if(!dataNode["JoinEui"].isNull())
		data_.joinEui = dataNode["JoinEui"].asString();
	if(!dataNode["FreqBandPlanGroupId"].isNull())
		data_.freqBandPlanGroupId = std::stol(dataNode["FreqBandPlanGroupId"].asString());
	if(!dataNode["ClassMode"].isNull())
		data_.classMode = dataNode["ClassMode"].asString();
	if(!dataNode["Type"].isNull())
		data_.type = dataNode["Type"].asString();
	if(!dataNode["Enabled"].isNull())
		data_.enabled = dataNode["Enabled"].asString() == "true";
	if(!dataNode["RxDailySum"].isNull())
		data_.rxDailySum = std::stol(dataNode["RxDailySum"].asString());
	if(!dataNode["RxMonthSum"].isNull())
		data_.rxMonthSum = std::stol(dataNode["RxMonthSum"].asString());
	if(!dataNode["TxDailySum"].isNull())
		data_.txDailySum = std::stol(dataNode["TxDailySum"].asString());
	if(!dataNode["TxMonthSum"].isNull())
		data_.txMonthSum = std::stol(dataNode["TxMonthSum"].asString());
	if(!dataNode["CreateMillis"].isNull())
		data_.createMillis = std::stol(dataNode["CreateMillis"].asString());
	if(!dataNode["NodesCnt"].isNull())
		data_.nodesCnt = std::stol(dataNode["NodesCnt"].asString());
	if(!dataNode["JoinPermissionName"].isNull())
		data_.joinPermissionName = dataNode["JoinPermissionName"].asString();
	if(!dataNode["BoundNodeGroupId"].isNull())
		data_.boundNodeGroupId = dataNode["BoundNodeGroupId"].asString();
	if(!dataNode["BoundNodeGroupName"].isNull())
		data_.boundNodeGroupName = dataNode["BoundNodeGroupName"].asString();
	if(!dataNode["RxDelay"].isNull())
		data_.rxDelay = std::stol(dataNode["RxDelay"].asString());
	if(!dataNode["DataRate"].isNull())
		data_.dataRate = std::stol(dataNode["DataRate"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetRentedJoinPermissionResult::Data GetRentedJoinPermissionResult::getData()const
{
	return data_;
}

bool GetRentedJoinPermissionResult::getSuccess()const
{
	return success_;
}

