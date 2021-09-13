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

#include <alibabacloud/linkwan/model/GetOwnedJoinPermissionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

GetOwnedJoinPermissionResult::GetOwnedJoinPermissionResult() :
	ServiceResult()
{}

GetOwnedJoinPermissionResult::GetOwnedJoinPermissionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOwnedJoinPermissionResult::~GetOwnedJoinPermissionResult()
{}

void GetOwnedJoinPermissionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["JoinPermissionId"].isNull())
		data_.joinPermissionId = dataNode["JoinPermissionId"].asString();
	if(!dataNode["RenterAliyunId"].isNull())
		data_.renterAliyunId = dataNode["RenterAliyunId"].asString();
	if(!dataNode["JoinEui"].isNull())
		data_.joinEui = dataNode["JoinEui"].asString();
	if(!dataNode["FreqBandPlanGroupId"].isNull())
		data_.freqBandPlanGroupId = std::stol(dataNode["FreqBandPlanGroupId"].asString());
	if(!dataNode["ClassMode"].isNull())
		data_.classMode = dataNode["ClassMode"].asString();
	if(!dataNode["Enabled"].isNull())
		data_.enabled = dataNode["Enabled"].asString() == "true";
	if(!dataNode["NodesCnt"].isNull())
		data_.nodesCnt = std::stol(dataNode["NodesCnt"].asString());
	if(!dataNode["DataDispatchDestination"].isNull())
		data_.dataDispatchDestination = dataNode["DataDispatchDestination"].asString();
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
	if(!dataNode["JoinPermissionName"].isNull())
		data_.joinPermissionName = dataNode["JoinPermissionName"].asString();
	if(!dataNode["AuthState"].isNull())
		data_.authState = dataNode["AuthState"].asString();
	if(!dataNode["MulticastEnabled"].isNull())
		data_.multicastEnabled = dataNode["MulticastEnabled"].asString() == "true";
	if(!dataNode["MulticastNodeCapacity"].isNull())
		data_.multicastNodeCapacity = std::stoi(dataNode["MulticastNodeCapacity"].asString());
	if(!dataNode["MulticastNodeCount"].isNull())
		data_.multicastNodeCount = std::stoi(dataNode["MulticastNodeCount"].asString());
	if(!dataNode["RxDelay"].isNull())
		data_.rxDelay = std::stol(dataNode["RxDelay"].asString());
	if(!dataNode["DataRate"].isNull())
		data_.dataRate = std::stol(dataNode["DataRate"].asString());
	if(!dataNode["BoundProductName"].isNull())
		data_.boundProductName = dataNode["BoundProductName"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetOwnedJoinPermissionResult::Data GetOwnedJoinPermissionResult::getData()const
{
	return data_;
}

bool GetOwnedJoinPermissionResult::getSuccess()const
{
	return success_;
}

