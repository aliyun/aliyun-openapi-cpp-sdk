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

#include <alibabacloud/green/model/UpdateWebsiteInstanceRequest.h>

using AlibabaCloud::Green::Model::UpdateWebsiteInstanceRequest;

UpdateWebsiteInstanceRequest::UpdateWebsiteInstanceRequest() :
	RpcServiceRequest("green", "2017-08-23", "UpdateWebsiteInstance")
{}

UpdateWebsiteInstanceRequest::~UpdateWebsiteInstanceRequest()
{}

std::string UpdateWebsiteInstanceRequest::getSiteProtocol()const
{
	return siteProtocol_;
}

void UpdateWebsiteInstanceRequest::setSiteProtocol(const std::string& siteProtocol)
{
	siteProtocol_ = siteProtocol;
	setCoreParameter("SiteProtocol", std::to_string(siteProtocol));
}

std::string UpdateWebsiteInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void UpdateWebsiteInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string UpdateWebsiteInstanceRequest::getSourceIp()const
{
	return sourceIp_;
}

void UpdateWebsiteInstanceRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

int UpdateWebsiteInstanceRequest::getWebsiteScanInterval()const
{
	return websiteScanInterval_;
}

void UpdateWebsiteInstanceRequest::setWebsiteScanInterval(int websiteScanInterval)
{
	websiteScanInterval_ = websiteScanInterval;
	setCoreParameter("WebsiteScanInterval", websiteScanInterval);
}

std::string UpdateWebsiteInstanceRequest::getDomain()const
{
	return domain_;
}

void UpdateWebsiteInstanceRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setCoreParameter("Domain", std::to_string(domain));
}

std::string UpdateWebsiteInstanceRequest::getIndexPage()const
{
	return indexPage_;
}

void UpdateWebsiteInstanceRequest::setIndexPage(const std::string& indexPage)
{
	indexPage_ = indexPage;
	setCoreParameter("IndexPage", std::to_string(indexPage));
}

std::string UpdateWebsiteInstanceRequest::getLang()const
{
	return lang_;
}

void UpdateWebsiteInstanceRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

int UpdateWebsiteInstanceRequest::getIndexPageScanInterval()const
{
	return indexPageScanInterval_;
}

void UpdateWebsiteInstanceRequest::setIndexPageScanInterval(int indexPageScanInterval)
{
	indexPageScanInterval_ = indexPageScanInterval;
	setCoreParameter("IndexPageScanInterval", indexPageScanInterval);
}

