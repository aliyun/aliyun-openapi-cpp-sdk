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

#include <alibabacloud/ons/model/OnsTraceQueryByMsgKeyRequest.h>

using AlibabaCloud::Ons::Model::OnsTraceQueryByMsgKeyRequest;

OnsTraceQueryByMsgKeyRequest::OnsTraceQueryByMsgKeyRequest() :
	RpcServiceRequest("ons", "2019-02-14", "OnsTraceQueryByMsgKey")
{}

OnsTraceQueryByMsgKeyRequest::~OnsTraceQueryByMsgKeyRequest()
{}

std::string OnsTraceQueryByMsgKeyRequest::getInstanceId()const
{
	return instanceId_;
}

void OnsTraceQueryByMsgKeyRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string OnsTraceQueryByMsgKeyRequest::getTopic()const
{
	return topic_;
}

void OnsTraceQueryByMsgKeyRequest::setTopic(const std::string& topic)
{
	topic_ = topic;
	setCoreParameter("Topic", std::to_string(topic));
}

long OnsTraceQueryByMsgKeyRequest::getEndTime()const
{
	return endTime_;
}

void OnsTraceQueryByMsgKeyRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long OnsTraceQueryByMsgKeyRequest::getBeginTime()const
{
	return beginTime_;
}

void OnsTraceQueryByMsgKeyRequest::setBeginTime(long beginTime)
{
	beginTime_ = beginTime;
	setCoreParameter("BeginTime", beginTime);
}

std::string OnsTraceQueryByMsgKeyRequest::getMsgKey()const
{
	return msgKey_;
}

void OnsTraceQueryByMsgKeyRequest::setMsgKey(const std::string& msgKey)
{
	msgKey_ = msgKey;
	setCoreParameter("MsgKey", std::to_string(msgKey));
}

