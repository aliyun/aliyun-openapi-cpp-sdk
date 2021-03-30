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

#include <alibabacloud/airec/model/DescribeSyncReportOutliersRequest.h>

using AlibabaCloud::Airec::Model::DescribeSyncReportOutliersRequest;

DescribeSyncReportOutliersRequest::DescribeSyncReportOutliersRequest() :
	RoaServiceRequest("airec", "2020-11-26")
{
	setResourcePath("/v2/openapi/instances/[instanceId]/sync-reports/outliers");
	setMethod(HttpRequest::Method::Get);
}

DescribeSyncReportOutliersRequest::~DescribeSyncReportOutliersRequest()
{}

std::string DescribeSyncReportOutliersRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeSyncReportOutliersRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeSyncReportOutliersRequest::getLevelType()const
{
	return levelType_;
}

void DescribeSyncReportOutliersRequest::setLevelType(const std::string& levelType)
{
	levelType_ = levelType;
	setParameter("LevelType", levelType);
}

long DescribeSyncReportOutliersRequest::getEndTime()const
{
	return endTime_;
}

void DescribeSyncReportOutliersRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

long DescribeSyncReportOutliersRequest::getStartTime()const
{
	return startTime_;
}

void DescribeSyncReportOutliersRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string DescribeSyncReportOutliersRequest::getType()const
{
	return type_;
}

void DescribeSyncReportOutliersRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string DescribeSyncReportOutliersRequest::getKey()const
{
	return key_;
}

void DescribeSyncReportOutliersRequest::setKey(const std::string& key)
{
	key_ = key;
	setParameter("Key", key);
}

