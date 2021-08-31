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

#include <alibabacloud/edas/model/UnbindK8sSlbRequest.h>

using AlibabaCloud::Edas::Model::UnbindK8sSlbRequest;

UnbindK8sSlbRequest::UnbindK8sSlbRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/k8s/acs/k8s_slb_binding");
	setMethod(HttpRequest::Method::Delete);
}

UnbindK8sSlbRequest::~UnbindK8sSlbRequest()
{}

std::string UnbindK8sSlbRequest::getSlbName()const
{
	return slbName_;
}

void UnbindK8sSlbRequest::setSlbName(const std::string& slbName)
{
	slbName_ = slbName;
	setParameter("SlbName", slbName);
}

std::string UnbindK8sSlbRequest::getAppId()const
{
	return appId_;
}

void UnbindK8sSlbRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string UnbindK8sSlbRequest::getClusterId()const
{
	return clusterId_;
}

void UnbindK8sSlbRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string UnbindK8sSlbRequest::getType()const
{
	return type_;
}

void UnbindK8sSlbRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

