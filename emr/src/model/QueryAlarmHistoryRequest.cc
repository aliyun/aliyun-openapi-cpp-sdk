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

#include <alibabacloud/emr/model/QueryAlarmHistoryRequest.h>

using AlibabaCloud::Emr::Model::QueryAlarmHistoryRequest;

QueryAlarmHistoryRequest::QueryAlarmHistoryRequest() :
	RpcServiceRequest("emr", "2016-04-08", "QueryAlarmHistory")
{
	setMethod(HttpRequest::Method::Post);
}

QueryAlarmHistoryRequest::~QueryAlarmHistoryRequest()
{}

std::string QueryAlarmHistoryRequest::getCursor()const
{
	return cursor_;
}

void QueryAlarmHistoryRequest::setCursor(const std::string& cursor)
{
	cursor_ = cursor;
	setCoreParameter("Cursor", cursor);
}

long QueryAlarmHistoryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryAlarmHistoryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryAlarmHistoryRequest::getClusterId()const
{
	return clusterId_;
}

void QueryAlarmHistoryRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

long QueryAlarmHistoryRequest::getStartTimeStamp()const
{
	return startTimeStamp_;
}

void QueryAlarmHistoryRequest::setStartTimeStamp(long startTimeStamp)
{
	startTimeStamp_ = startTimeStamp;
	setCoreParameter("StartTimeStamp", std::to_string(startTimeStamp));
}

std::string QueryAlarmHistoryRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryAlarmHistoryRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

long QueryAlarmHistoryRequest::getEndTimeStamp()const
{
	return endTimeStamp_;
}

void QueryAlarmHistoryRequest::setEndTimeStamp(long endTimeStamp)
{
	endTimeStamp_ = endTimeStamp;
	setCoreParameter("EndTimeStamp", std::to_string(endTimeStamp));
}

int QueryAlarmHistoryRequest::getSize()const
{
	return size_;
}

void QueryAlarmHistoryRequest::setSize(int size)
{
	size_ = size;
	setCoreParameter("Size", std::to_string(size));
}

std::string QueryAlarmHistoryRequest::getRegionId()const
{
	return regionId_;
}

void QueryAlarmHistoryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

