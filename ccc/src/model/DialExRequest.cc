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

#include <alibabacloud/ccc/model/DialExRequest.h>

using AlibabaCloud::CCC::Model::DialExRequest;

DialExRequest::DialExRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "DialEx")
{
	setMethod(HttpRequest::Method::Post);
}

DialExRequest::~DialExRequest()
{}

std::string DialExRequest::getCallee()const
{
	return callee_;
}

void DialExRequest::setCallee(const std::string& callee)
{
	callee_ = callee;
	setParameter("Callee", callee);
}

std::string DialExRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DialExRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DialExRequest::getRoutPoint()const
{
	return routPoint_;
}

void DialExRequest::setRoutPoint(const std::string& routPoint)
{
	routPoint_ = routPoint;
	setParameter("RoutPoint", routPoint);
}

std::string DialExRequest::getCaller()const
{
	return caller_;
}

void DialExRequest::setCaller(const std::string& caller)
{
	caller_ = caller;
	setParameter("Caller", caller);
}

std::string DialExRequest::getInstanceId()const
{
	return instanceId_;
}

void DialExRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DialExRequest::getProvider()const
{
	return provider_;
}

void DialExRequest::setProvider(const std::string& provider)
{
	provider_ = provider;
	setParameter("Provider", provider);
}

int DialExRequest::getAnswerMode()const
{
	return answerMode_;
}

void DialExRequest::setAnswerMode(int answerMode)
{
	answerMode_ = answerMode;
	setParameter("AnswerMode", std::to_string(answerMode));
}

