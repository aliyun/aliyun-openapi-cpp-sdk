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

#include <alibabacloud/ccc/model/SendDtmfSignalingRequest.h>

using AlibabaCloud::CCC::Model::SendDtmfSignalingRequest;

SendDtmfSignalingRequest::SendDtmfSignalingRequest() :
	RpcServiceRequest("ccc", "2020-07-01", "SendDtmfSignaling")
{
	setMethod(HttpRequest::Method::Post);
}

SendDtmfSignalingRequest::~SendDtmfSignalingRequest()
{}

int SendDtmfSignalingRequest::getDtmf()const
{
	return dtmf_;
}

void SendDtmfSignalingRequest::setDtmf(int dtmf)
{
	dtmf_ = dtmf;
	setParameter("Dtmf", std::to_string(dtmf));
}

std::string SendDtmfSignalingRequest::getUserId()const
{
	return userId_;
}

void SendDtmfSignalingRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

std::string SendDtmfSignalingRequest::getDeviceId()const
{
	return deviceId_;
}

void SendDtmfSignalingRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setParameter("DeviceId", deviceId);
}

std::string SendDtmfSignalingRequest::getJobId()const
{
	return jobId_;
}

void SendDtmfSignalingRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

std::string SendDtmfSignalingRequest::getInstanceId()const
{
	return instanceId_;
}

void SendDtmfSignalingRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string SendDtmfSignalingRequest::getChannelId()const
{
	return channelId_;
}

void SendDtmfSignalingRequest::setChannelId(const std::string& channelId)
{
	channelId_ = channelId;
	setParameter("ChannelId", channelId);
}

