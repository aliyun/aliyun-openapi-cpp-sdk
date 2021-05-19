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

#include <alibabacloud/scsp/model/GetOutbounNumListRequest.h>

using AlibabaCloud::Scsp::Model::GetOutbounNumListRequest;

GetOutbounNumListRequest::GetOutbounNumListRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "GetOutbounNumList")
{
	setMethod(HttpRequest::Method::Post);
}

GetOutbounNumListRequest::~GetOutbounNumListRequest()
{}

std::string GetOutbounNumListRequest::getClientToken()const
{
	return clientToken_;
}

void GetOutbounNumListRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string GetOutbounNumListRequest::getInstanceId()const
{
	return instanceId_;
}

void GetOutbounNumListRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string GetOutbounNumListRequest::getAccountName()const
{
	return accountName_;
}

void GetOutbounNumListRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setBodyParameter("AccountName", accountName);
}

