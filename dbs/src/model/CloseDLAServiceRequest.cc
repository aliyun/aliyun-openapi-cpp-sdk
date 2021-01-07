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

#include <alibabacloud/dbs/model/CloseDLAServiceRequest.h>

using AlibabaCloud::Dbs::Model::CloseDLAServiceRequest;

CloseDLAServiceRequest::CloseDLAServiceRequest() :
	RpcServiceRequest("dbs", "2019-03-06", "CloseDLAService")
{
	setMethod(HttpRequest::Method::Post);
}

CloseDLAServiceRequest::~CloseDLAServiceRequest()
{}

std::string CloseDLAServiceRequest::getClientToken()const
{
	return clientToken_;
}

void CloseDLAServiceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CloseDLAServiceRequest::getBackupPlanId()const
{
	return backupPlanId_;
}

void CloseDLAServiceRequest::setBackupPlanId(const std::string& backupPlanId)
{
	backupPlanId_ = backupPlanId;
	setParameter("BackupPlanId", backupPlanId);
}

std::string CloseDLAServiceRequest::getOwnerId()const
{
	return ownerId_;
}

void CloseDLAServiceRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

