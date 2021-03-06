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

#include <alibabacloud/airec/model/QuerySyncReportAggregationRequest.h>

using AlibabaCloud::Airec::Model::QuerySyncReportAggregationRequest;

QuerySyncReportAggregationRequest::QuerySyncReportAggregationRequest() :
	RoaServiceRequest("airec", "2020-11-26")
{
	setResourcePath("/v2/openapi/instances/[instanceId]/sync-reports/aggregation");
	setMethod(HttpRequest::Method::Get);
}

QuerySyncReportAggregationRequest::~QuerySyncReportAggregationRequest()
{}

std::string QuerySyncReportAggregationRequest::getInstanceId()const
{
	return instanceId_;
}

void QuerySyncReportAggregationRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

long QuerySyncReportAggregationRequest::getEndTime()const
{
	return endTime_;
}

void QuerySyncReportAggregationRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

long QuerySyncReportAggregationRequest::getStartTime()const
{
	return startTime_;
}

void QuerySyncReportAggregationRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

