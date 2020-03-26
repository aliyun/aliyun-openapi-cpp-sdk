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

#include <alibabacloud/vod/model/DescribeVodStorageDataRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodStorageDataRequest;

DescribeVodStorageDataRequest::DescribeVodStorageDataRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DescribeVodStorageData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeVodStorageDataRequest::~DescribeVodStorageDataRequest()
{}

std::string DescribeVodStorageDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeVodStorageDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeVodStorageDataRequest::getStorage()const
{
	return storage_;
}

void DescribeVodStorageDataRequest::setStorage(const std::string& storage)
{
	storage_ = storage;
	setParameter("Storage", storage);
}

std::string DescribeVodStorageDataRequest::getStorageType()const
{
	return storageType_;
}

void DescribeVodStorageDataRequest::setStorageType(const std::string& storageType)
{
	storageType_ = storageType;
	setParameter("StorageType", storageType);
}

std::string DescribeVodStorageDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeVodStorageDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeVodStorageDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVodStorageDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeVodStorageDataRequest::getInterval()const
{
	return interval_;
}

void DescribeVodStorageDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

std::string DescribeVodStorageDataRequest::getRegion()const
{
	return region_;
}

void DescribeVodStorageDataRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

