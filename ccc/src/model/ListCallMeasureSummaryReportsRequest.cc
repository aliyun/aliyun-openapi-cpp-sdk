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

#include <alibabacloud/ccc/model/ListCallMeasureSummaryReportsRequest.h>

using AlibabaCloud::CCC::Model::ListCallMeasureSummaryReportsRequest;

ListCallMeasureSummaryReportsRequest::ListCallMeasureSummaryReportsRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListCallMeasureSummaryReports")
{}

ListCallMeasureSummaryReportsRequest::~ListCallMeasureSummaryReportsRequest()
{}

std::string ListCallMeasureSummaryReportsRequest::getIntervalType()const
{
	return intervalType_;
}

void ListCallMeasureSummaryReportsRequest::setIntervalType(const std::string& intervalType)
{
	intervalType_ = intervalType;
	setCoreParameter("IntervalType", intervalType);
}

std::string ListCallMeasureSummaryReportsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListCallMeasureSummaryReportsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

