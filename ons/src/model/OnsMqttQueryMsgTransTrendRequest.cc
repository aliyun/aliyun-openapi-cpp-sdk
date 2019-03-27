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

#include <alibabacloud/ons/model/OnsMqttQueryMsgTransTrendRequest.h>

using AlibabaCloud::Ons::Model::OnsMqttQueryMsgTransTrendRequest;

OnsMqttQueryMsgTransTrendRequest::OnsMqttQueryMsgTransTrendRequest() :
	RpcServiceRequest("ons", "2019-02-14", "OnsMqttQueryMsgTransTrend")
{}

OnsMqttQueryMsgTransTrendRequest::~OnsMqttQueryMsgTransTrendRequest()
{}

long OnsMqttQueryMsgTransTrendRequest::getPreventCache()const
{
	return preventCache_;
}

void OnsMqttQueryMsgTransTrendRequest::setPreventCache(long preventCache)
{
	preventCache_ = preventCache;
	setParameter("PreventCache", std::to_string(preventCache));
}

std::string OnsMqttQueryMsgTransTrendRequest::getInstanceId()const
{
	return instanceId_;
}

void OnsMqttQueryMsgTransTrendRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int OnsMqttQueryMsgTransTrendRequest::getQos()const
{
	return qos_;
}

void OnsMqttQueryMsgTransTrendRequest::setQos(int qos)
{
	qos_ = qos;
	setParameter("Qos", std::to_string(qos));
}

std::string OnsMqttQueryMsgTransTrendRequest::getTransType()const
{
	return transType_;
}

void OnsMqttQueryMsgTransTrendRequest::setTransType(const std::string& transType)
{
	transType_ = transType;
	setParameter("TransType", transType);
}

long OnsMqttQueryMsgTransTrendRequest::getEndTime()const
{
	return endTime_;
}

void OnsMqttQueryMsgTransTrendRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

long OnsMqttQueryMsgTransTrendRequest::getBeginTime()const
{
	return beginTime_;
}

void OnsMqttQueryMsgTransTrendRequest::setBeginTime(long beginTime)
{
	beginTime_ = beginTime;
	setParameter("BeginTime", std::to_string(beginTime));
}

std::string OnsMqttQueryMsgTransTrendRequest::getTpsType()const
{
	return tpsType_;
}

void OnsMqttQueryMsgTransTrendRequest::setTpsType(const std::string& tpsType)
{
	tpsType_ = tpsType;
	setParameter("TpsType", tpsType);
}

std::string OnsMqttQueryMsgTransTrendRequest::getParentTopic()const
{
	return parentTopic_;
}

void OnsMqttQueryMsgTransTrendRequest::setParentTopic(const std::string& parentTopic)
{
	parentTopic_ = parentTopic;
	setParameter("ParentTopic", parentTopic);
}

std::string OnsMqttQueryMsgTransTrendRequest::getMsgType()const
{
	return msgType_;
}

void OnsMqttQueryMsgTransTrendRequest::setMsgType(const std::string& msgType)
{
	msgType_ = msgType;
	setParameter("MsgType", msgType);
}

std::string OnsMqttQueryMsgTransTrendRequest::getSubTopic()const
{
	return subTopic_;
}

void OnsMqttQueryMsgTransTrendRequest::setSubTopic(const std::string& subTopic)
{
	subTopic_ = subTopic;
	setParameter("SubTopic", subTopic);
}

