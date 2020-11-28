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

#include <alibabacloud/rsimganalys/model/GetTaskRequest.h>

using AlibabaCloud::Rsimganalys::Model::GetTaskRequest;

GetTaskRequest::GetTaskRequest() :
	RpcServiceRequest("rsimganalys", "2019-08-01", "GetTask")
{
	setMethod(HttpRequest::Method::Post);
}

GetTaskRequest::~GetTaskRequest()
{}

std::string GetTaskRequest::getJobId()const
{
	return jobId_;
}

void GetTaskRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

std::string GetTaskRequest::getAppkey()const
{
	return appkey_;
}

void GetTaskRequest::setAppkey(const std::string& appkey)
{
	appkey_ = appkey;
	setParameter("Appkey", appkey);
}

