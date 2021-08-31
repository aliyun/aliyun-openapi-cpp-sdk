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

#include <alibabacloud/edas/model/UpdateEnvAppGroupRequest.h>

using AlibabaCloud::Edas::Model::UpdateEnvAppGroupRequest;

UpdateEnvAppGroupRequest::UpdateEnvAppGroupRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/gray/env_app_groups");
	setMethod(HttpRequest::Method::Put);
}

UpdateEnvAppGroupRequest::~UpdateEnvAppGroupRequest()
{}

std::string UpdateEnvAppGroupRequest::getPointcutName()const
{
	return pointcutName_;
}

void UpdateEnvAppGroupRequest::setPointcutName(const std::string& pointcutName)
{
	pointcutName_ = pointcutName;
	setBodyParameter("PointcutName", pointcutName);
}

std::string UpdateEnvAppGroupRequest::getScopes()const
{
	return scopes_;
}

void UpdateEnvAppGroupRequest::setScopes(const std::string& scopes)
{
	scopes_ = scopes;
	setBodyParameter("Scopes", scopes);
}

