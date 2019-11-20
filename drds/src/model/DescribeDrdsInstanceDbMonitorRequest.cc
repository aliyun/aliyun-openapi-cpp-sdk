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

#include <alibabacloud/drds/model/DescribeDrdsInstanceDbMonitorRequest.h>

using AlibabaCloud::Drds::Model::DescribeDrdsInstanceDbMonitorRequest;

DescribeDrdsInstanceDbMonitorRequest::DescribeDrdsInstanceDbMonitorRequest() :
	RpcServiceRequest("drds", "2017-10-16", "DescribeDrdsInstanceDbMonitor")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDrdsInstanceDbMonitorRequest::~DescribeDrdsInstanceDbMonitorRequest()
{}

long DescribeDrdsInstanceDbMonitorRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDrdsInstanceDbMonitorRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

long DescribeDrdsInstanceDbMonitorRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDrdsInstanceDbMonitorRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string DescribeDrdsInstanceDbMonitorRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void DescribeDrdsInstanceDbMonitorRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

std::string DescribeDrdsInstanceDbMonitorRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDrdsInstanceDbMonitorRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDrdsInstanceDbMonitorRequest::getDbName()const
{
	return dbName_;
}

void DescribeDrdsInstanceDbMonitorRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

std::string DescribeDrdsInstanceDbMonitorRequest::getKey()const
{
	return key_;
}

void DescribeDrdsInstanceDbMonitorRequest::setKey(const std::string& key)
{
	key_ = key;
	setCoreParameter("Key", key);
}

