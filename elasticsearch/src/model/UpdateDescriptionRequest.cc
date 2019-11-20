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

#include <alibabacloud/elasticsearch/model/UpdateDescriptionRequest.h>

using AlibabaCloud::Elasticsearch::Model::UpdateDescriptionRequest;

UpdateDescriptionRequest::UpdateDescriptionRequest() :
	RoaServiceRequest("elasticsearch", "2017-06-13")
{
	setResourcePath("/openapi/instances/[InstanceId]/description");
	setMethod(HttpRequest::Method::Post);
}

UpdateDescriptionRequest::~UpdateDescriptionRequest()
{}

std::string UpdateDescriptionRequest::getInstanceId()const
{
	return instanceId_;
}

void UpdateDescriptionRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string UpdateDescriptionRequest::getClientToken()const
{
	return clientToken_;
}

void UpdateDescriptionRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

