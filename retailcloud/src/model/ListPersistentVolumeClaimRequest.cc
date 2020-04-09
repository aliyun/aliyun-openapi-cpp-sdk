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

#include <alibabacloud/retailcloud/model/ListPersistentVolumeClaimRequest.h>

using AlibabaCloud::Retailcloud::Model::ListPersistentVolumeClaimRequest;

ListPersistentVolumeClaimRequest::ListPersistentVolumeClaimRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "ListPersistentVolumeClaim")
{
	setMethod(HttpRequest::Method::Post);
}

ListPersistentVolumeClaimRequest::~ListPersistentVolumeClaimRequest()
{}

long ListPersistentVolumeClaimRequest::getAppId()const
{
	return appId_;
}

void ListPersistentVolumeClaimRequest::setAppId(long appId)
{
	appId_ = appId;
	setParameter("AppId", std::to_string(appId));
}

int ListPersistentVolumeClaimRequest::getPageSize()const
{
	return pageSize_;
}

void ListPersistentVolumeClaimRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long ListPersistentVolumeClaimRequest::getEnvId()const
{
	return envId_;
}

void ListPersistentVolumeClaimRequest::setEnvId(long envId)
{
	envId_ = envId;
	setParameter("EnvId", std::to_string(envId));
}

int ListPersistentVolumeClaimRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListPersistentVolumeClaimRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

