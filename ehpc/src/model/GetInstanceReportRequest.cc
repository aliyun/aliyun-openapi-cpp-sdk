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

#include <alibabacloud/ehpc/model/GetInstanceReportRequest.h>

using AlibabaCloud::EHPC::Model::GetInstanceReportRequest;

GetInstanceReportRequest::GetInstanceReportRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "GetInstanceReport")
{
	setMethod(HttpRequest::Method::Get);
}

GetInstanceReportRequest::~GetInstanceReportRequest()
{}

int GetInstanceReportRequest::getEndTime()const
{
	return endTime_;
}

void GetInstanceReportRequest::setEndTime(int endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string GetInstanceReportRequest::getFilterValue()const
{
	return filterValue_;
}

void GetInstanceReportRequest::setFilterValue(const std::string& filterValue)
{
	filterValue_ = filterValue;
	setCoreParameter("FilterValue", filterValue);
}

std::string GetInstanceReportRequest::getClusterId()const
{
	return clusterId_;
}

void GetInstanceReportRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

int GetInstanceReportRequest::getStartTime()const
{
	return startTime_;
}

void GetInstanceReportRequest::setStartTime(int startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string GetInstanceReportRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetInstanceReportRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

