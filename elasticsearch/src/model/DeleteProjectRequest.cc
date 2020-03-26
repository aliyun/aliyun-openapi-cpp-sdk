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

#include <alibabacloud/elasticsearch/model/DeleteProjectRequest.h>

using AlibabaCloud::Elasticsearch::Model::DeleteProjectRequest;

DeleteProjectRequest::DeleteProjectRequest() :
	RoaServiceRequest("elasticsearch", "2017-06-13")
{
	setResourcePath("/openapi/projects/[Id]");
	setMethod(HttpRequest::Method::Delete);
}

DeleteProjectRequest::~DeleteProjectRequest()
{}

std::string DeleteProjectRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteProjectRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DeleteProjectRequest::getId()const
{
	return id_;
}

void DeleteProjectRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

