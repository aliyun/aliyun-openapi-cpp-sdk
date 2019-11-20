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

#include <alibabacloud/ccc/model/GetJobStatusByCallIdRequest.h>

using AlibabaCloud::CCC::Model::GetJobStatusByCallIdRequest;

GetJobStatusByCallIdRequest::GetJobStatusByCallIdRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "GetJobStatusByCallId")
{
	setMethod(HttpRequest::Method::Post);
}

GetJobStatusByCallIdRequest::~GetJobStatusByCallIdRequest()
{}

std::string GetJobStatusByCallIdRequest::getCallId()const
{
	return callId_;
}

void GetJobStatusByCallIdRequest::setCallId(const std::string& callId)
{
	callId_ = callId;
	setCoreParameter("CallId", callId);
}

std::string GetJobStatusByCallIdRequest::getInstanceId()const
{
	return instanceId_;
}

void GetJobStatusByCallIdRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

