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

#include <alibabacloud/edas/model/UpdateLocalitySettingRequest.h>

using AlibabaCloud::Edas::Model::UpdateLocalitySettingRequest;

UpdateLocalitySettingRequest::UpdateLocalitySettingRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/sp/applications/locality/setting");
	setMethod(HttpRequest::Method::Post);
}

UpdateLocalitySettingRequest::~UpdateLocalitySettingRequest()
{}

std::string UpdateLocalitySettingRequest::getNamespaceId()const
{
	return namespaceId_;
}

void UpdateLocalitySettingRequest::setNamespaceId(const std::string& namespaceId)
{
	namespaceId_ = namespaceId;
	setParameter("NamespaceId", namespaceId);
}

std::string UpdateLocalitySettingRequest::getAppId()const
{
	return appId_;
}

void UpdateLocalitySettingRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

float UpdateLocalitySettingRequest::getThreshold()const
{
	return threshold_;
}

void UpdateLocalitySettingRequest::setThreshold(float threshold)
{
	threshold_ = threshold;
	setParameter("Threshold", std::to_string(threshold));
}

std::string UpdateLocalitySettingRequest::getRegion()const
{
	return region_;
}

void UpdateLocalitySettingRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

bool UpdateLocalitySettingRequest::getEnabled()const
{
	return enabled_;
}

void UpdateLocalitySettingRequest::setEnabled(bool enabled)
{
	enabled_ = enabled;
	setParameter("Enabled", enabled ? "true" : "false");
}

