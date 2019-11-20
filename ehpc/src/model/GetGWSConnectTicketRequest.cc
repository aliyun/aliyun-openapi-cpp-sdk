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

#include <alibabacloud/ehpc/model/GetGWSConnectTicketRequest.h>

using AlibabaCloud::EHPC::Model::GetGWSConnectTicketRequest;

GetGWSConnectTicketRequest::GetGWSConnectTicketRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "GetGWSConnectTicket")
{
	setMethod(HttpRequest::Method::Get);
}

GetGWSConnectTicketRequest::~GetGWSConnectTicketRequest()
{}

std::string GetGWSConnectTicketRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetGWSConnectTicketRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string GetGWSConnectTicketRequest::getInstanceId()const
{
	return instanceId_;
}

void GetGWSConnectTicketRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string GetGWSConnectTicketRequest::getAppName()const
{
	return appName_;
}

void GetGWSConnectTicketRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", appName);
}

