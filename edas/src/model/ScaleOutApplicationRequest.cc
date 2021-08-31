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

#include <alibabacloud/edas/model/ScaleOutApplicationRequest.h>

using AlibabaCloud::Edas::Model::ScaleOutApplicationRequest;

ScaleOutApplicationRequest::ScaleOutApplicationRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/changeorder/co_scale_out");
	setMethod(HttpRequest::Method::Post);
}

ScaleOutApplicationRequest::~ScaleOutApplicationRequest()
{}

std::string ScaleOutApplicationRequest::getEcuInfo()const
{
	return ecuInfo_;
}

void ScaleOutApplicationRequest::setEcuInfo(const std::string& ecuInfo)
{
	ecuInfo_ = ecuInfo;
	setParameter("EcuInfo", ecuInfo);
}

std::string ScaleOutApplicationRequest::getDeployGroup()const
{
	return deployGroup_;
}

void ScaleOutApplicationRequest::setDeployGroup(const std::string& deployGroup)
{
	deployGroup_ = deployGroup;
	setParameter("DeployGroup", deployGroup);
}

std::string ScaleOutApplicationRequest::getAppId()const
{
	return appId_;
}

void ScaleOutApplicationRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

