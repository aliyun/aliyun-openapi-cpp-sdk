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

#include <alibabacloud/ccc/model/InitiateAttendedTransferRequest.h>

using AlibabaCloud::CCC::Model::InitiateAttendedTransferRequest;

InitiateAttendedTransferRequest::InitiateAttendedTransferRequest() :
	RpcServiceRequest("ccc", "2020-07-01", "InitiateAttendedTransfer")
{
	setMethod(HttpRequest::Method::Post);
}

InitiateAttendedTransferRequest::~InitiateAttendedTransferRequest()
{}

std::string InitiateAttendedTransferRequest::getTransferee()const
{
	return transferee_;
}

void InitiateAttendedTransferRequest::setTransferee(const std::string& transferee)
{
	transferee_ = transferee;
	setParameter("Transferee", transferee);
}

std::string InitiateAttendedTransferRequest::getTransferor()const
{
	return transferor_;
}

void InitiateAttendedTransferRequest::setTransferor(const std::string& transferor)
{
	transferor_ = transferor;
	setParameter("Transferor", transferor);
}

std::string InitiateAttendedTransferRequest::getUserId()const
{
	return userId_;
}

void InitiateAttendedTransferRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

std::string InitiateAttendedTransferRequest::getDeviceId()const
{
	return deviceId_;
}

void InitiateAttendedTransferRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setParameter("DeviceId", deviceId);
}

int InitiateAttendedTransferRequest::getTimeoutSeconds()const
{
	return timeoutSeconds_;
}

void InitiateAttendedTransferRequest::setTimeoutSeconds(int timeoutSeconds)
{
	timeoutSeconds_ = timeoutSeconds;
	setParameter("TimeoutSeconds", std::to_string(timeoutSeconds));
}

std::string InitiateAttendedTransferRequest::getJobId()const
{
	return jobId_;
}

void InitiateAttendedTransferRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

std::string InitiateAttendedTransferRequest::getInstanceId()const
{
	return instanceId_;
}

void InitiateAttendedTransferRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

