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

#include <alibabacloud/drds/model/QueryInstanceInfoByConnRequest.h>

using AlibabaCloud::Drds::Model::QueryInstanceInfoByConnRequest;

QueryInstanceInfoByConnRequest::QueryInstanceInfoByConnRequest() :
	RpcServiceRequest("drds", "2017-10-16", "QueryInstanceInfoByConn")
{}

QueryInstanceInfoByConnRequest::~QueryInstanceInfoByConnRequest()
{}

int QueryInstanceInfoByConnRequest::getPort()const
{
	return port_;
}

void QueryInstanceInfoByConnRequest::setPort(int port)
{
	port_ = port;
	setCoreParameter("Port", std::to_string(port));
}

std::string QueryInstanceInfoByConnRequest::getHost()const
{
	return host_;
}

void QueryInstanceInfoByConnRequest::setHost(const std::string& host)
{
	host_ = host;
	setCoreParameter("Host", host);
}

std::string QueryInstanceInfoByConnRequest::getUserName()const
{
	return userName_;
}

void QueryInstanceInfoByConnRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setCoreParameter("UserName", userName);
}

std::string QueryInstanceInfoByConnRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryInstanceInfoByConnRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

