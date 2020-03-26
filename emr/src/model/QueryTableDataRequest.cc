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

#include <alibabacloud/emr/model/QueryTableDataRequest.h>

using AlibabaCloud::Emr::Model::QueryTableDataRequest;

QueryTableDataRequest::QueryTableDataRequest() :
	RpcServiceRequest("emr", "2016-04-08", "QueryTableData")
{
	setMethod(HttpRequest::Method::Post);
}

QueryTableDataRequest::~QueryTableDataRequest()
{}

long QueryTableDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryTableDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryTableDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryTableDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string QueryTableDataRequest::getRegionId()const
{
	return regionId_;
}

void QueryTableDataRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string QueryTableDataRequest::getPayload()const
{
	return payload_;
}

void QueryTableDataRequest::setPayload(const std::string& payload)
{
	payload_ = payload;
	setParameter("Payload", payload);
}

