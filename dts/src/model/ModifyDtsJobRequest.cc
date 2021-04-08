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

#include <alibabacloud/dts/model/ModifyDtsJobRequest.h>

using AlibabaCloud::Dts::Model::ModifyDtsJobRequest;

ModifyDtsJobRequest::ModifyDtsJobRequest() :
	RpcServiceRequest("dts", "2020-01-01", "ModifyDtsJob")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDtsJobRequest::~ModifyDtsJobRequest()
{}

std::string ModifyDtsJobRequest::getDbList()const
{
	return dbList_;
}

void ModifyDtsJobRequest::setDbList(const std::string& dbList)
{
	dbList_ = dbList;
	setBodyParameter("DbList", dbList);
}

std::string ModifyDtsJobRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyDtsJobRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ModifyDtsJobRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDtsJobRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string ModifyDtsJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDtsJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDtsJobRequest::getDtsInstanceId()const
{
	return dtsInstanceId_;
}

void ModifyDtsJobRequest::setDtsInstanceId(const std::string& dtsInstanceId)
{
	dtsInstanceId_ = dtsInstanceId;
	setParameter("DtsInstanceId", dtsInstanceId);
}

std::string ModifyDtsJobRequest::getSynchronizationDirection()const
{
	return synchronizationDirection_;
}

void ModifyDtsJobRequest::setSynchronizationDirection(const std::string& synchronizationDirection)
{
	synchronizationDirection_ = synchronizationDirection;
	setParameter("SynchronizationDirection", synchronizationDirection);
}

