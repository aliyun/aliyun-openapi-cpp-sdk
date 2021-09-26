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

#include <alibabacloud/vs/model/ListDeviceChannelsRequest.h>

using AlibabaCloud::Vs::Model::ListDeviceChannelsRequest;

ListDeviceChannelsRequest::ListDeviceChannelsRequest() :
	RpcServiceRequest("vs", "2018-12-12", "ListDeviceChannels")
{
	setMethod(HttpRequest::Method::Post);
}

ListDeviceChannelsRequest::~ListDeviceChannelsRequest()
{}

long ListDeviceChannelsRequest::getPageNum()const
{
	return pageNum_;
}

void ListDeviceChannelsRequest::setPageNum(long pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

long ListDeviceChannelsRequest::getPageSize()const
{
	return pageSize_;
}

void ListDeviceChannelsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListDeviceChannelsRequest::getShowLog()const
{
	return showLog_;
}

void ListDeviceChannelsRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long ListDeviceChannelsRequest::getOwnerId()const
{
	return ownerId_;
}

void ListDeviceChannelsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ListDeviceChannelsRequest::getDeviceId()const
{
	return deviceId_;
}

void ListDeviceChannelsRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setParameter("DeviceId", deviceId);
}

