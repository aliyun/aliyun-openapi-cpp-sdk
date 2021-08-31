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

#include <alibabacloud/edas/model/ToggleGrayIngressRequest.h>

using AlibabaCloud::Edas::Model::ToggleGrayIngressRequest;

ToggleGrayIngressRequest::ToggleGrayIngressRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/gray/env_switch");
	setMethod(HttpRequest::Method::Put);
}

ToggleGrayIngressRequest::~ToggleGrayIngressRequest()
{}

std::string ToggleGrayIngressRequest::getLogicalRegionId()const
{
	return logicalRegionId_;
}

void ToggleGrayIngressRequest::setLogicalRegionId(const std::string& logicalRegionId)
{
	logicalRegionId_ = logicalRegionId;
	setBodyParameter("LogicalRegionId", logicalRegionId);
}

bool ToggleGrayIngressRequest::getEnable()const
{
	return enable_;
}

void ToggleGrayIngressRequest::setEnable(bool enable)
{
	enable_ = enable;
	setBodyParameter("Enable", enable ? "true" : "false");
}

std::string ToggleGrayIngressRequest::getPointcutName()const
{
	return pointcutName_;
}

void ToggleGrayIngressRequest::setPointcutName(const std::string& pointcutName)
{
	pointcutName_ = pointcutName;
	setBodyParameter("PointcutName", pointcutName);
}

