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

#include <alibabacloud/retailcloud/model/DeletePersistentVolumeClaimRequest.h>

using AlibabaCloud::Retailcloud::Model::DeletePersistentVolumeClaimRequest;

DeletePersistentVolumeClaimRequest::DeletePersistentVolumeClaimRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "DeletePersistentVolumeClaim")
{
	setMethod(HttpRequest::Method::Post);
}

DeletePersistentVolumeClaimRequest::~DeletePersistentVolumeClaimRequest()
{}

std::string DeletePersistentVolumeClaimRequest::getPersistentVolumeClaimName()const
{
	return persistentVolumeClaimName_;
}

void DeletePersistentVolumeClaimRequest::setPersistentVolumeClaimName(const std::string& persistentVolumeClaimName)
{
	persistentVolumeClaimName_ = persistentVolumeClaimName;
	setParameter("PersistentVolumeClaimName", persistentVolumeClaimName);
}

long DeletePersistentVolumeClaimRequest::getAppId()const
{
	return appId_;
}

void DeletePersistentVolumeClaimRequest::setAppId(long appId)
{
	appId_ = appId;
	setParameter("AppId", std::to_string(appId));
}

long DeletePersistentVolumeClaimRequest::getEnvId()const
{
	return envId_;
}

void DeletePersistentVolumeClaimRequest::setEnvId(long envId)
{
	envId_ = envId;
	setParameter("EnvId", std::to_string(envId));
}

