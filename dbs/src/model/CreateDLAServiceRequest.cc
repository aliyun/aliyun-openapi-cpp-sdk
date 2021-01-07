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

#include <alibabacloud/dbs/model/CreateDLAServiceRequest.h>

using AlibabaCloud::Dbs::Model::CreateDLAServiceRequest;

CreateDLAServiceRequest::CreateDLAServiceRequest() :
	RpcServiceRequest("dbs", "2019-03-06", "CreateDLAService")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDLAServiceRequest::~CreateDLAServiceRequest()
{}

std::string CreateDLAServiceRequest::getClientToken()const
{
	return clientToken_;
}

void CreateDLAServiceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

bool CreateDLAServiceRequest::getAutoAdd()const
{
	return autoAdd_;
}

void CreateDLAServiceRequest::setAutoAdd(bool autoAdd)
{
	autoAdd_ = autoAdd;
	setParameter("AutoAdd", autoAdd ? "true" : "false");
}

std::string CreateDLAServiceRequest::getBackupSetIds()const
{
	return backupSetIds_;
}

void CreateDLAServiceRequest::setBackupSetIds(const std::string& backupSetIds)
{
	backupSetIds_ = backupSetIds;
	setParameter("BackupSetIds", backupSetIds);
}

std::string CreateDLAServiceRequest::getBackupPlanId()const
{
	return backupPlanId_;
}

void CreateDLAServiceRequest::setBackupPlanId(const std::string& backupPlanId)
{
	backupPlanId_ = backupPlanId;
	setParameter("BackupPlanId", backupPlanId);
}

std::string CreateDLAServiceRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDLAServiceRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

