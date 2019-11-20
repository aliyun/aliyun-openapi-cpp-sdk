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

#include <alibabacloud/ehpc/model/GetTotalQueueReportRequest.h>

using AlibabaCloud::EHPC::Model::GetTotalQueueReportRequest;

GetTotalQueueReportRequest::GetTotalQueueReportRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "GetTotalQueueReport")
{
	setMethod(HttpRequest::Method::Get);
}

GetTotalQueueReportRequest::~GetTotalQueueReportRequest()
{}

int GetTotalQueueReportRequest::getEndTime()const
{
	return endTime_;
}

void GetTotalQueueReportRequest::setEndTime(int endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string GetTotalQueueReportRequest::getClusterId()const
{
	return clusterId_;
}

void GetTotalQueueReportRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

int GetTotalQueueReportRequest::getStartTime()const
{
	return startTime_;
}

void GetTotalQueueReportRequest::setStartTime(int startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string GetTotalQueueReportRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetTotalQueueReportRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

