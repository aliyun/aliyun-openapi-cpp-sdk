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

#include <alibabacloud/linkwan/model/ListNotificationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

ListNotificationsResult::ListNotificationsResult() :
	ServiceResult()
{}

ListNotificationsResult::ListNotificationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNotificationsResult::~ListNotificationsResult()
{}

void ListNotificationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto allListNode = dataNode["List"]["Notification"];
	for (auto dataNodeListNotification : allListNode)
	{
		Data::Notification notificationObject;
		if(!dataNodeListNotification["NotificationId"].isNull())
			notificationObject.notificationId = dataNodeListNotification["NotificationId"].asString();
		if(!dataNodeListNotification["Category"].isNull())
			notificationObject.category = dataNodeListNotification["Category"].asString();
		if(!dataNodeListNotification["HandleState"].isNull())
			notificationObject.handleState = dataNodeListNotification["HandleState"].asString();
		if(!dataNodeListNotification["NoticeMillis"].isNull())
			notificationObject.noticeMillis = std::stol(dataNodeListNotification["NoticeMillis"].asString());
		if(!dataNodeListNotification["HandledMillis"].isNull())
			notificationObject.handledMillis = std::stol(dataNodeListNotification["HandledMillis"].asString());
		auto gatewayOfflineInfoNode = value["GatewayOfflineInfo"];
		if(!gatewayOfflineInfoNode["GwEui"].isNull())
			notificationObject.gatewayOfflineInfo.gwEui = gatewayOfflineInfoNode["GwEui"].asString();
		if(!gatewayOfflineInfoNode["OfflineMillis"].isNull())
			notificationObject.gatewayOfflineInfo.offlineMillis = std::stol(gatewayOfflineInfoNode["OfflineMillis"].asString());
		auto joinPermissionAuthInfoNode = value["JoinPermissionAuthInfo"];
		if(!joinPermissionAuthInfoNode["OrderId"].isNull())
			notificationObject.joinPermissionAuthInfo.orderId = joinPermissionAuthInfoNode["OrderId"].asString();
		if(!joinPermissionAuthInfoNode["JoinPermissionId"].isNull())
			notificationObject.joinPermissionAuthInfo.joinPermissionId = joinPermissionAuthInfoNode["JoinPermissionId"].asString();
		if(!joinPermissionAuthInfoNode["OwnerAliyunId"].isNull())
			notificationObject.joinPermissionAuthInfo.ownerAliyunId = joinPermissionAuthInfoNode["OwnerAliyunId"].asString();
		if(!joinPermissionAuthInfoNode["RenterAliyunId"].isNull())
			notificationObject.joinPermissionAuthInfo.renterAliyunId = joinPermissionAuthInfoNode["RenterAliyunId"].asString();
		if(!joinPermissionAuthInfoNode["OrderState"].isNull())
			notificationObject.joinPermissionAuthInfo.orderState = joinPermissionAuthInfoNode["OrderState"].asString();
		if(!joinPermissionAuthInfoNode["ApplyingMillis"].isNull())
			notificationObject.joinPermissionAuthInfo.applyingMillis = std::stol(joinPermissionAuthInfoNode["ApplyingMillis"].asString());
		if(!joinPermissionAuthInfoNode["AcceptedMillis"].isNull())
			notificationObject.joinPermissionAuthInfo.acceptedMillis = std::stol(joinPermissionAuthInfoNode["AcceptedMillis"].asString());
		if(!joinPermissionAuthInfoNode["CanceledMillis"].isNull())
			notificationObject.joinPermissionAuthInfo.canceledMillis = std::stol(joinPermissionAuthInfoNode["CanceledMillis"].asString());
		if(!joinPermissionAuthInfoNode["RejectedMillis"].isNull())
			notificationObject.joinPermissionAuthInfo.rejectedMillis = std::stol(joinPermissionAuthInfoNode["RejectedMillis"].asString());
		if(!joinPermissionAuthInfoNode["JoinEui"].isNull())
			notificationObject.joinPermissionAuthInfo.joinEui = joinPermissionAuthInfoNode["JoinEui"].asString();
		if(!joinPermissionAuthInfoNode["JoinPermissionName"].isNull())
			notificationObject.joinPermissionAuthInfo.joinPermissionName = joinPermissionAuthInfoNode["JoinPermissionName"].asString();
		auto gatewayDataflowLimitNode = value["GatewayDataflowLimit"];
		if(!gatewayDataflowLimitNode["DataflowLimitMillis"].isNull())
			notificationObject.gatewayDataflowLimit.dataflowLimitMillis = std::stol(gatewayDataflowLimitNode["DataflowLimitMillis"].asString());
		if(!gatewayDataflowLimitNode["AlarmDetail"].isNull())
			notificationObject.gatewayDataflowLimit.alarmDetail = gatewayDataflowLimitNode["AlarmDetail"].asString();
		if(!gatewayDataflowLimitNode["GwEui"].isNull())
			notificationObject.gatewayDataflowLimit.gwEui = gatewayDataflowLimitNode["GwEui"].asString();
		data_.list.push_back(notificationObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

ListNotificationsResult::Data ListNotificationsResult::getData()const
{
	return data_;
}

bool ListNotificationsResult::getSuccess()const
{
	return success_;
}

