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

#include <alibabacloud/edas/model/ListK8sSecretsRequest.h>

using AlibabaCloud::Edas::Model::ListK8sSecretsRequest;

ListK8sSecretsRequest::ListK8sSecretsRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/k8s/acs/k8s_secret");
	setMethod(HttpRequest::Method::Get);
}

ListK8sSecretsRequest::~ListK8sSecretsRequest()
{}

std::string ListK8sSecretsRequest::getCondition()const
{
	return condition_;
}

void ListK8sSecretsRequest::setCondition(const std::string& condition)
{
	condition_ = condition;
	setParameter("Condition", condition);
}

std::string ListK8sSecretsRequest::getRegionId()const
{
	return regionId_;
}

void ListK8sSecretsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListK8sSecretsRequest::getPageNo()const
{
	return pageNo_;
}

void ListK8sSecretsRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

std::string ListK8sSecretsRequest::get_Namespace()const
{
	return _namespace_;
}

void ListK8sSecretsRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

int ListK8sSecretsRequest::getPageSize()const
{
	return pageSize_;
}

void ListK8sSecretsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListK8sSecretsRequest::getClusterId()const
{
	return clusterId_;
}

void ListK8sSecretsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

bool ListK8sSecretsRequest::getShowRelatedApps()const
{
	return showRelatedApps_;
}

void ListK8sSecretsRequest::setShowRelatedApps(bool showRelatedApps)
{
	showRelatedApps_ = showRelatedApps;
	setParameter("ShowRelatedApps", showRelatedApps ? "true" : "false");
}

