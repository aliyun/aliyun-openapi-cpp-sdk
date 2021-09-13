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

#include <alibabacloud/linkwan/model/GetNotificationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

GetNotificationResult::GetNotificationResult() :
	ServiceResult()
{}

GetNotificationResult::GetNotificationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetNotificationResult::~GetNotificationResult()
{}

void GetNotificationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["NotificationId"].isNull())
		data_.notificationId = dataNode["NotificationId"].asString();
	if(!dataNode["Category"].isNull())
		data_.category = dataNode["Category"].asString();
	if(!dataNode["HandleState"].isNull())
		data_.handleState = dataNode["HandleState"].asString();
	if(!dataNode["NoticeMillis"].isNull())
		data_.noticeMillis = std::stol(dataNode["NoticeMillis"].asString());
	if(!dataNode["HandledMillis"].isNull())
		data_.handledMillis = std::stol(dataNode["HandledMillis"].asString());
	auto gatewayOfflineInfoNode = dataNode["GatewayOfflineInfo"];
	if(!gatewayOfflineInfoNode["GwEui"].isNull())
		data_.gatewayOfflineInfo.gwEui = gatewayOfflineInfoNode["GwEui"].asString();
	if(!gatewayOfflineInfoNode["OfflineMillis"].isNull())
		data_.gatewayOfflineInfo.offlineMillis = std::stol(gatewayOfflineInfoNode["OfflineMillis"].asString());
	auto joinPermissionAuthInfoNode = dataNode["JoinPermissionAuthInfo"];
	if(!joinPermissionAuthInfoNode["OrderId"].isNull())
		data_.joinPermissionAuthInfo.orderId = joinPermissionAuthInfoNode["OrderId"].asString();
	if(!joinPermissionAuthInfoNode["JoinPermissionId"].isNull())
		data_.joinPermissionAuthInfo.joinPermissionId = joinPermissionAuthInfoNode["JoinPermissionId"].asString();
	if(!joinPermissionAuthInfoNode["OwnerAliyunId"].isNull())
		data_.joinPermissionAuthInfo.ownerAliyunId = joinPermissionAuthInfoNode["OwnerAliyunId"].asString();
	if(!joinPermissionAuthInfoNode["RenterAliyunId"].isNull())
		data_.joinPermissionAuthInfo.renterAliyunId = joinPermissionAuthInfoNode["RenterAliyunId"].asString();
	if(!joinPermissionAuthInfoNode["OrderState"].isNull())
		data_.joinPermissionAuthInfo.orderState = joinPermissionAuthInfoNode["OrderState"].asString();
	if(!joinPermissionAuthInfoNode["ApplyingMillis"].isNull())
		data_.joinPermissionAuthInfo.applyingMillis = std::stol(joinPermissionAuthInfoNode["ApplyingMillis"].asString());
	if(!joinPermissionAuthInfoNode["AcceptedMillis"].isNull())
		data_.joinPermissionAuthInfo.acceptedMillis = std::stol(joinPermissionAuthInfoNode["AcceptedMillis"].asString());
	if(!joinPermissionAuthInfoNode["CanceledMillis"].isNull())
		data_.joinPermissionAuthInfo.canceledMillis = std::stol(joinPermissionAuthInfoNode["CanceledMillis"].asString());
	if(!joinPermissionAuthInfoNode["RejectedMillis"].isNull())
		data_.joinPermissionAuthInfo.rejectedMillis = std::stol(joinPermissionAuthInfoNode["RejectedMillis"].asString());
	if(!joinPermissionAuthInfoNode["JoinEui"].isNull())
		data_.joinPermissionAuthInfo.joinEui = joinPermissionAuthInfoNode["JoinEui"].asString();
	if(!joinPermissionAuthInfoNode["JoinPermissionName"].isNull())
		data_.joinPermissionAuthInfo.joinPermissionName = joinPermissionAuthInfoNode["JoinPermissionName"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetNotificationResult::Data GetNotificationResult::getData()const
{
	return data_;
}

bool GetNotificationResult::getSuccess()const
{
	return success_;
}

