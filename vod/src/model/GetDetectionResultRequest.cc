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

#include <alibabacloud/vod/model/GetDetectionResultRequest.h>

using AlibabaCloud::Vod::Model::GetDetectionResultRequest;

GetDetectionResultRequest::GetDetectionResultRequest() :
	RpcServiceRequest("vod", "2017-03-21", "GetDetectionResult")
{
	setMethod(HttpRequest::Method::Get);
}

GetDetectionResultRequest::~GetDetectionResultRequest()
{}

long GetDetectionResultRequest::getCountByPage()const
{
	return countByPage_;
}

void GetDetectionResultRequest::setCountByPage(long countByPage)
{
	countByPage_ = countByPage;
	setParameter("CountByPage", std::to_string(countByPage));
}

bool GetDetectionResultRequest::getDesensitization()const
{
	return desensitization_;
}

void GetDetectionResultRequest::setDesensitization(bool desensitization)
{
	desensitization_ = desensitization;
	setParameter("Desensitization", desensitization ? "true" : "false");
}

std::string GetDetectionResultRequest::getJobId()const
{
	return jobId_;
}

void GetDetectionResultRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

long GetDetectionResultRequest::getPage()const
{
	return page_;
}

void GetDetectionResultRequest::setPage(long page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

std::string GetDetectionResultRequest::getStatus()const
{
	return status_;
}

void GetDetectionResultRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

