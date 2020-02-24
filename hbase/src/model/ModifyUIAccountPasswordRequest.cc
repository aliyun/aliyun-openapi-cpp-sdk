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

#include <alibabacloud/hbase/model/ModifyUIAccountPasswordRequest.h>

using AlibabaCloud::HBase::Model::ModifyUIAccountPasswordRequest;

ModifyUIAccountPasswordRequest::ModifyUIAccountPasswordRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "ModifyUIAccountPassword")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyUIAccountPasswordRequest::~ModifyUIAccountPasswordRequest()
{}

std::string ModifyUIAccountPasswordRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyUIAccountPasswordRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ModifyUIAccountPasswordRequest::getAccountPassword()const
{
	return accountPassword_;
}

void ModifyUIAccountPasswordRequest::setAccountPassword(const std::string& accountPassword)
{
	accountPassword_ = accountPassword;
	setParameter("AccountPassword", accountPassword);
}

std::string ModifyUIAccountPasswordRequest::getAccountName()const
{
	return accountName_;
}

void ModifyUIAccountPasswordRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setParameter("AccountName", accountName);
}

