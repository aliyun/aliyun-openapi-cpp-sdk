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

#include <alibabacloud/cloudesl/model/GetCompanyTemplatePictureByJobRequest.h>

using AlibabaCloud::Cloudesl::Model::GetCompanyTemplatePictureByJobRequest;

GetCompanyTemplatePictureByJobRequest::GetCompanyTemplatePictureByJobRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "GetCompanyTemplatePictureByJob")
{
	setMethod(HttpRequest::Method::Post);
}

GetCompanyTemplatePictureByJobRequest::~GetCompanyTemplatePictureByJobRequest()
{}

std::string GetCompanyTemplatePictureByJobRequest::getJobId()const
{
	return jobId_;
}

void GetCompanyTemplatePictureByJobRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setBodyParameter("JobId", jobId);
}

