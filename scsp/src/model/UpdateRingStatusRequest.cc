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

#include <alibabacloud/scsp/model/UpdateRingStatusRequest.h>

using AlibabaCloud::Scsp::Model::UpdateRingStatusRequest;

UpdateRingStatusRequest::UpdateRingStatusRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "UpdateRingStatus")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateRingStatusRequest::~UpdateRingStatusRequest()
{}

std::string UpdateRingStatusRequest::getInstanceId()const
{
	return instanceId_;
}

void UpdateRingStatusRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string UpdateRingStatusRequest::getExtra()const
{
	return extra_;
}

void UpdateRingStatusRequest::setExtra(const std::string& extra)
{
	extra_ = extra;
	setBodyParameter("Extra", extra);
}

std::string UpdateRingStatusRequest::getCallOutStatus()const
{
	return callOutStatus_;
}

void UpdateRingStatusRequest::setCallOutStatus(const std::string& callOutStatus)
{
	callOutStatus_ = callOutStatus;
	setBodyParameter("CallOutStatus", callOutStatus);
}

std::string UpdateRingStatusRequest::getUniqueBizId()const
{
	return uniqueBizId_;
}

void UpdateRingStatusRequest::setUniqueBizId(const std::string& uniqueBizId)
{
	uniqueBizId_ = uniqueBizId;
	setBodyParameter("UniqueBizId", uniqueBizId);
}

