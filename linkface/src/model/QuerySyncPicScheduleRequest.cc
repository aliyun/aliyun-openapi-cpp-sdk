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

#include <alibabacloud/linkface/model/QuerySyncPicScheduleRequest.h>

using AlibabaCloud::LinkFace::Model::QuerySyncPicScheduleRequest;

QuerySyncPicScheduleRequest::QuerySyncPicScheduleRequest() :
	RpcServiceRequest("linkface", "2018-07-20", "QuerySyncPicSchedule")
{
	setMethod(HttpRequest::Method::Post);
}

QuerySyncPicScheduleRequest::~QuerySyncPicScheduleRequest()
{}

std::string QuerySyncPicScheduleRequest::getIotId()const
{
	return iotId_;
}

void QuerySyncPicScheduleRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setCoreParameter("IotId", iotId);
}

std::string QuerySyncPicScheduleRequest::getGroupId()const
{
	return groupId_;
}

void QuerySyncPicScheduleRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string QuerySyncPicScheduleRequest::getDeviceName()const
{
	return deviceName_;
}

void QuerySyncPicScheduleRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setCoreParameter("DeviceName", deviceName);
}

std::string QuerySyncPicScheduleRequest::getProductKey()const
{
	return productKey_;
}

void QuerySyncPicScheduleRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", productKey);
}

