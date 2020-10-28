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

#include <alibabacloud/polardbx/model/DeleteAccountRequest.h>

using AlibabaCloud::Polardbx::Model::DeleteAccountRequest;

DeleteAccountRequest::DeleteAccountRequest() :
	RpcServiceRequest("polardbx", "2020-02-02", "DeleteAccount")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteAccountRequest::~DeleteAccountRequest()
{}

std::string DeleteAccountRequest::getDBInstanceName()const
{
	return dBInstanceName_;
}

void DeleteAccountRequest::setDBInstanceName(const std::string& dBInstanceName)
{
	dBInstanceName_ = dBInstanceName;
	setParameter("DBInstanceName", dBInstanceName);
}

std::string DeleteAccountRequest::getAccountName()const
{
	return accountName_;
}

void DeleteAccountRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setParameter("AccountName", accountName);
}

std::string DeleteAccountRequest::getRegionId()const
{
	return regionId_;
}

void DeleteAccountRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

