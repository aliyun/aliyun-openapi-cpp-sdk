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

#include <alibabacloud/elasticsearch/model/UpdateAdminPasswordRequest.h>

using AlibabaCloud::Elasticsearch::Model::UpdateAdminPasswordRequest;

UpdateAdminPasswordRequest::UpdateAdminPasswordRequest() :
	RoaServiceRequest("elasticsearch", "2017-06-13")
{
	setResourcePath("/openapi/instances/[InstanceId]/admin-pwd");
	setMethod(HttpRequest::Method::Post);
}

UpdateAdminPasswordRequest::~UpdateAdminPasswordRequest()
{}

std::string UpdateAdminPasswordRequest::getInstanceId()const
{
	return instanceId_;
}

void UpdateAdminPasswordRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string UpdateAdminPasswordRequest::getClientToken()const
{
	return clientToken_;
}

void UpdateAdminPasswordRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

