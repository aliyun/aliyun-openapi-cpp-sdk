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

#include <alibabacloud/ons/model/OnsMessageTraceRequest.h>

using AlibabaCloud::Ons::Model::OnsMessageTraceRequest;

OnsMessageTraceRequest::OnsMessageTraceRequest() :
	RpcServiceRequest("ons", "2019-02-14", "OnsMessageTrace")
{}

OnsMessageTraceRequest::~OnsMessageTraceRequest()
{}

std::string OnsMessageTraceRequest::getInstanceId()const
{
	return instanceId_;
}

void OnsMessageTraceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string OnsMessageTraceRequest::getTopic()const
{
	return topic_;
}

void OnsMessageTraceRequest::setTopic(const std::string& topic)
{
	topic_ = topic;
	setCoreParameter("Topic", topic);
}

std::string OnsMessageTraceRequest::getMsgId()const
{
	return msgId_;
}

void OnsMessageTraceRequest::setMsgId(const std::string& msgId)
{
	msgId_ = msgId;
	setCoreParameter("MsgId", msgId);
}

