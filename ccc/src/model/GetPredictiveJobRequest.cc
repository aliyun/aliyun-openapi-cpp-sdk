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

#include <alibabacloud/ccc/model/GetPredictiveJobRequest.h>

using AlibabaCloud::CCC::Model::GetPredictiveJobRequest;

GetPredictiveJobRequest::GetPredictiveJobRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "GetPredictiveJob")
{}

GetPredictiveJobRequest::~GetPredictiveJobRequest()
{}

std::string GetPredictiveJobRequest::getJobId()const
{
	return jobId_;
}

void GetPredictiveJobRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setCoreParameter("JobId", jobId);
}

std::string GetPredictiveJobRequest::getInstanceId()const
{
	return instanceId_;
}

void GetPredictiveJobRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

