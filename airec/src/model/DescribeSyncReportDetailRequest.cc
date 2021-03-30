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

#include <alibabacloud/airec/model/DescribeSyncReportDetailRequest.h>

using AlibabaCloud::Airec::Model::DescribeSyncReportDetailRequest;

DescribeSyncReportDetailRequest::DescribeSyncReportDetailRequest() :
	RoaServiceRequest("airec", "2020-11-26")
{
	setResourcePath("/v2/openapi/instances/[instanceId]/sync-reports/detail");
	setMethod(HttpRequest::Method::Get);
}

DescribeSyncReportDetailRequest::~DescribeSyncReportDetailRequest()
{}

std::string DescribeSyncReportDetailRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeSyncReportDetailRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeSyncReportDetailRequest::getLevelType()const
{
	return levelType_;
}

void DescribeSyncReportDetailRequest::setLevelType(const std::string& levelType)
{
	levelType_ = levelType;
	setParameter("LevelType", levelType);
}

long DescribeSyncReportDetailRequest::getEndTime()const
{
	return endTime_;
}

void DescribeSyncReportDetailRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

long DescribeSyncReportDetailRequest::getStartTime()const
{
	return startTime_;
}

void DescribeSyncReportDetailRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string DescribeSyncReportDetailRequest::getType()const
{
	return type_;
}

void DescribeSyncReportDetailRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

