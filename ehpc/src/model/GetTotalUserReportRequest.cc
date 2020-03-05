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

#include <alibabacloud/ehpc/model/GetTotalUserReportRequest.h>

using AlibabaCloud::EHPC::Model::GetTotalUserReportRequest;

GetTotalUserReportRequest::GetTotalUserReportRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "GetTotalUserReport")
{
	setMethod(HttpRequest::Method::GET);
}

GetTotalUserReportRequest::~GetTotalUserReportRequest()
{}

int GetTotalUserReportRequest::getEndTime()const
{
	return endTime_;
}

void GetTotalUserReportRequest::setEndTime(int endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

std::string GetTotalUserReportRequest::getClusterId()const
{
	return clusterId_;
}

void GetTotalUserReportRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int GetTotalUserReportRequest::getStartTime()const
{
	return startTime_;
}

void GetTotalUserReportRequest::setStartTime(int startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string GetTotalUserReportRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetTotalUserReportRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

