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

#include <alibabacloud/ubsms/model/NotifyUserBusinessCommandRequest.h>

using AlibabaCloud::Ubsms::Model::NotifyUserBusinessCommandRequest;

NotifyUserBusinessCommandRequest::NotifyUserBusinessCommandRequest() :
	RpcServiceRequest("ubsms", "2015-06-23", "NotifyUserBusinessCommand")
{
	setMethod(HttpRequest::Method::Post);
}

NotifyUserBusinessCommandRequest::~NotifyUserBusinessCommandRequest()
{}

std::string NotifyUserBusinessCommandRequest::getUid()const
{
	return uid_;
}

void NotifyUserBusinessCommandRequest::setUid(const std::string& uid)
{
	uid_ = uid;
	setParameter("Uid", uid);
}

std::string NotifyUserBusinessCommandRequest::getPassword()const
{
	return password_;
}

void NotifyUserBusinessCommandRequest::setPassword(const std::string& password)
{
	password_ = password;
	setParameter("Password", password);
}

std::string NotifyUserBusinessCommandRequest::getInstanceId()const
{
	return instanceId_;
}

void NotifyUserBusinessCommandRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string NotifyUserBusinessCommandRequest::getServiceCode()const
{
	return serviceCode_;
}

void NotifyUserBusinessCommandRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setParameter("ServiceCode", serviceCode);
}

std::string NotifyUserBusinessCommandRequest::getClientToken()const
{
	return clientToken_;
}

void NotifyUserBusinessCommandRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string NotifyUserBusinessCommandRequest::getCmd()const
{
	return cmd_;
}

void NotifyUserBusinessCommandRequest::setCmd(const std::string& cmd)
{
	cmd_ = cmd;
	setParameter("Cmd", cmd);
}

std::string NotifyUserBusinessCommandRequest::getRegion()const
{
	return region_;
}

void NotifyUserBusinessCommandRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

