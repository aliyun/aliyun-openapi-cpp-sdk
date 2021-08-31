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

#include <alibabacloud/edas/model/ScaleInApplicationRequest.h>

using AlibabaCloud::Edas::Model::ScaleInApplicationRequest;

ScaleInApplicationRequest::ScaleInApplicationRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/changeorder/co_scale_in");
	setMethod(HttpRequest::Method::Post);
}

ScaleInApplicationRequest::~ScaleInApplicationRequest()
{}

bool ScaleInApplicationRequest::getForceStatus()const
{
	return forceStatus_;
}

void ScaleInApplicationRequest::setForceStatus(bool forceStatus)
{
	forceStatus_ = forceStatus;
	setParameter("ForceStatus", forceStatus ? "true" : "false");
}

std::string ScaleInApplicationRequest::getAppId()const
{
	return appId_;
}

void ScaleInApplicationRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string ScaleInApplicationRequest::getEccInfo()const
{
	return eccInfo_;
}

void ScaleInApplicationRequest::setEccInfo(const std::string& eccInfo)
{
	eccInfo_ = eccInfo;
	setParameter("EccInfo", eccInfo);
}

