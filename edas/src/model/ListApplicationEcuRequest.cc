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

#include <alibabacloud/edas/model/ListApplicationEcuRequest.h>

using AlibabaCloud::Edas::Model::ListApplicationEcuRequest;

ListApplicationEcuRequest::ListApplicationEcuRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/resource/ecu_list");
	setMethod(HttpRequest::Method::Post);
}

ListApplicationEcuRequest::~ListApplicationEcuRequest()
{}

std::string ListApplicationEcuRequest::getAppId()const
{
	return appId_;
}

void ListApplicationEcuRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

