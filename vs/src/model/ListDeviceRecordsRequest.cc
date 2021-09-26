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

#include <alibabacloud/vs/model/ListDeviceRecordsRequest.h>

using AlibabaCloud::Vs::Model::ListDeviceRecordsRequest;

ListDeviceRecordsRequest::ListDeviceRecordsRequest() :
	RpcServiceRequest("vs", "2018-12-12", "ListDeviceRecords")
{
	setMethod(HttpRequest::Method::Post);
}

ListDeviceRecordsRequest::~ListDeviceRecordsRequest()
{}

long ListDeviceRecordsRequest::getPageNum()const
{
	return pageNum_;
}

void ListDeviceRecordsRequest::setPageNum(long pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string ListDeviceRecordsRequest::getSearchCriteria()const
{
	return searchCriteria_;
}

void ListDeviceRecordsRequest::setSearchCriteria(const std::string& searchCriteria)
{
	searchCriteria_ = searchCriteria;
	setParameter("SearchCriteria", searchCriteria);
}

long ListDeviceRecordsRequest::getPageSize()const
{
	return pageSize_;
}

void ListDeviceRecordsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListDeviceRecordsRequest::getShowLog()const
{
	return showLog_;
}

void ListDeviceRecordsRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string ListDeviceRecordsRequest::getStreamId()const
{
	return streamId_;
}

void ListDeviceRecordsRequest::setStreamId(const std::string& streamId)
{
	streamId_ = streamId;
	setParameter("StreamId", streamId);
}

long ListDeviceRecordsRequest::getOwnerId()const
{
	return ownerId_;
}

void ListDeviceRecordsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ListDeviceRecordsRequest::getDeviceId()const
{
	return deviceId_;
}

void ListDeviceRecordsRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setParameter("DeviceId", deviceId);
}

