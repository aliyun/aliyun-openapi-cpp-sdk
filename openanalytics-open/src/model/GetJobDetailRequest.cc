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

#include <alibabacloud/openanalytics-open/model/GetJobDetailRequest.h>

using AlibabaCloud::Openanalytics_open::Model::GetJobDetailRequest;

GetJobDetailRequest::GetJobDetailRequest() :
	RpcServiceRequest("openanalytics-open", "2018-06-19", "GetJobDetail")
{
	setMethod(HttpRequest::Method::Post);
}

GetJobDetailRequest::~GetJobDetailRequest()
{}

std::string GetJobDetailRequest::getJobId()const
{
	return jobId_;
}

void GetJobDetailRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setBodyParameter("JobId", jobId);
}

std::string GetJobDetailRequest::getVcName()const
{
	return vcName_;
}

void GetJobDetailRequest::setVcName(const std::string& vcName)
{
	vcName_ = vcName;
	setBodyParameter("VcName", vcName);
}

