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

#include <alibabacloud/linkwan/model/GetJoinPermissionAuthOrderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

GetJoinPermissionAuthOrderResult::GetJoinPermissionAuthOrderResult() :
	ServiceResult()
{}

GetJoinPermissionAuthOrderResult::GetJoinPermissionAuthOrderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetJoinPermissionAuthOrderResult::~GetJoinPermissionAuthOrderResult()
{}

void GetJoinPermissionAuthOrderResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["OrderId"].isNull())
		data_.orderId = dataNode["OrderId"].asString();
	if(!dataNode["JoinPermissionId"].isNull())
		data_.joinPermissionId = dataNode["JoinPermissionId"].asString();
	if(!dataNode["OwnerAliyunId"].isNull())
		data_.ownerAliyunId = dataNode["OwnerAliyunId"].asString();
	if(!dataNode["RenterAliyunId"].isNull())
		data_.renterAliyunId = dataNode["RenterAliyunId"].asString();
	if(!dataNode["OrderState"].isNull())
		data_.orderState = dataNode["OrderState"].asString();
	if(!dataNode["ApplyingMillis"].isNull())
		data_.applyingMillis = std::stol(dataNode["ApplyingMillis"].asString());
	if(!dataNode["AcceptedMillis"].isNull())
		data_.acceptedMillis = std::stol(dataNode["AcceptedMillis"].asString());
	if(!dataNode["RejectedMillis"].isNull())
		data_.rejectedMillis = std::stol(dataNode["RejectedMillis"].asString());
	if(!dataNode["CanceledMillis"].isNull())
		data_.canceledMillis = std::stol(dataNode["CanceledMillis"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetJoinPermissionAuthOrderResult::Data GetJoinPermissionAuthOrderResult::getData()const
{
	return data_;
}

bool GetJoinPermissionAuthOrderResult::getSuccess()const
{
	return success_;
}

