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

#include <alibabacloud/sas/model/RetryInstallProbeRequest.h>

using AlibabaCloud::Sas::Model::RetryInstallProbeRequest;

RetryInstallProbeRequest::RetryInstallProbeRequest() :
	RpcServiceRequest("sas", "2018-12-03", "RetryInstallProbe")
{
	setMethod(HttpRequest::Method::Post);
}

RetryInstallProbeRequest::~RetryInstallProbeRequest()
{}

std::string RetryInstallProbeRequest::getProbeId()const
{
	return probeId_;
}

void RetryInstallProbeRequest::setProbeId(const std::string& probeId)
{
	probeId_ = probeId;
	setParameter("ProbeId", probeId);
}

std::string RetryInstallProbeRequest::getUuid()const
{
	return uuid_;
}

void RetryInstallProbeRequest::setUuid(const std::string& uuid)
{
	uuid_ = uuid;
	setParameter("Uuid", uuid);
}

std::string RetryInstallProbeRequest::getProbeVersion()const
{
	return probeVersion_;
}

void RetryInstallProbeRequest::setProbeVersion(const std::string& probeVersion)
{
	probeVersion_ = probeVersion;
	setParameter("ProbeVersion", probeVersion);
}

int RetryInstallProbeRequest::getPageSize()const
{
	return pageSize_;
}

void RetryInstallProbeRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string RetryInstallProbeRequest::getLang()const
{
	return lang_;
}

void RetryInstallProbeRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

int RetryInstallProbeRequest::getCurrentPage()const
{
	return currentPage_;
}

void RetryInstallProbeRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string RetryInstallProbeRequest::getVpcId()const
{
	return vpcId_;
}

void RetryInstallProbeRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

