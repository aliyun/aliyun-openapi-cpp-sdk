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

#include <alibabacloud/dbs/model/DescribeSandboxFromRDSRequest.h>

using AlibabaCloud::Dbs::Model::DescribeSandboxFromRDSRequest;

DescribeSandboxFromRDSRequest::DescribeSandboxFromRDSRequest() :
	RpcServiceRequest("dbs", "2019-03-06", "DescribeSandboxFromRDS")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSandboxFromRDSRequest::~DescribeSandboxFromRDSRequest()
{}

std::string DescribeSandboxFromRDSRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeSandboxFromRDSRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DescribeSandboxFromRDSRequest::getRdsInstanceID()const
{
	return rdsInstanceID_;
}

void DescribeSandboxFromRDSRequest::setRdsInstanceID(const std::string& rdsInstanceID)
{
	rdsInstanceID_ = rdsInstanceID;
	setParameter("RdsInstanceID", rdsInstanceID);
}

std::string DescribeSandboxFromRDSRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSandboxFromRDSRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

