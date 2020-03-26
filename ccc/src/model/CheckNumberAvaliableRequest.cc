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

#include <alibabacloud/ccc/model/CheckNumberAvaliableRequest.h>

using AlibabaCloud::CCC::Model::CheckNumberAvaliableRequest;

CheckNumberAvaliableRequest::CheckNumberAvaliableRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "CheckNumberAvaliable")
{
	setMethod(HttpRequest::Method::Post);
}

CheckNumberAvaliableRequest::~CheckNumberAvaliableRequest()
{}

std::string CheckNumberAvaliableRequest::getCaller()const
{
	return caller_;
}

void CheckNumberAvaliableRequest::setCaller(const std::string& caller)
{
	caller_ = caller;
	setParameter("Caller", caller);
}

std::string CheckNumberAvaliableRequest::getInstanceId()const
{
	return instanceId_;
}

void CheckNumberAvaliableRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string CheckNumberAvaliableRequest::getCallee()const
{
	return callee_;
}

void CheckNumberAvaliableRequest::setCallee(const std::string& callee)
{
	callee_ = callee;
	setParameter("Callee", callee);
}

std::string CheckNumberAvaliableRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CheckNumberAvaliableRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

