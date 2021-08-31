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

#include <alibabacloud/edas/model/DescribeLocalitySettingRequest.h>

using AlibabaCloud::Edas::Model::DescribeLocalitySettingRequest;

DescribeLocalitySettingRequest::DescribeLocalitySettingRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/sp/applications/locality/setting");
	setMethod(HttpRequest::Method::Get);
}

DescribeLocalitySettingRequest::~DescribeLocalitySettingRequest()
{}

std::string DescribeLocalitySettingRequest::getNamespaceId()const
{
	return namespaceId_;
}

void DescribeLocalitySettingRequest::setNamespaceId(const std::string& namespaceId)
{
	namespaceId_ = namespaceId;
	setParameter("NamespaceId", namespaceId);
}

std::string DescribeLocalitySettingRequest::getAppId()const
{
	return appId_;
}

void DescribeLocalitySettingRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string DescribeLocalitySettingRequest::getRegion()const
{
	return region_;
}

void DescribeLocalitySettingRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

