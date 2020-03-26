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

#include <alibabacloud/httpdns/model/GetResolveCountSummaryRequest.h>

using AlibabaCloud::Httpdns::Model::GetResolveCountSummaryRequest;

GetResolveCountSummaryRequest::GetResolveCountSummaryRequest() :
	RpcServiceRequest("httpdns", "2016-02-01", "GetResolveCountSummary")
{
	setMethod(HttpRequest::Method::Post);
}

GetResolveCountSummaryRequest::~GetResolveCountSummaryRequest()
{}

int GetResolveCountSummaryRequest::getTimeSpan()const
{
	return timeSpan_;
}

void GetResolveCountSummaryRequest::setTimeSpan(int timeSpan)
{
	timeSpan_ = timeSpan;
	setParameter("TimeSpan", std::to_string(timeSpan));
}

std::string GetResolveCountSummaryRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetResolveCountSummaryRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GetResolveCountSummaryRequest::getGranularity()const
{
	return granularity_;
}

void GetResolveCountSummaryRequest::setGranularity(const std::string& granularity)
{
	granularity_ = granularity;
	setParameter("Granularity", granularity);
}

