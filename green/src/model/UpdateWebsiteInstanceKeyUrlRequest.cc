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

#include <alibabacloud/green/model/UpdateWebsiteInstanceKeyUrlRequest.h>

using AlibabaCloud::Green::Model::UpdateWebsiteInstanceKeyUrlRequest;

UpdateWebsiteInstanceKeyUrlRequest::UpdateWebsiteInstanceKeyUrlRequest() :
	RpcServiceRequest("green", "2017-08-23", "UpdateWebsiteInstanceKeyUrl")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateWebsiteInstanceKeyUrlRequest::~UpdateWebsiteInstanceKeyUrlRequest()
{}

std::string UpdateWebsiteInstanceKeyUrlRequest::getUrls()const
{
	return urls_;
}

void UpdateWebsiteInstanceKeyUrlRequest::setUrls(const std::string& urls)
{
	urls_ = urls;
	setParameter("Urls", urls);
}

std::string UpdateWebsiteInstanceKeyUrlRequest::getInstanceId()const
{
	return instanceId_;
}

void UpdateWebsiteInstanceKeyUrlRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string UpdateWebsiteInstanceKeyUrlRequest::getSourceIp()const
{
	return sourceIp_;
}

void UpdateWebsiteInstanceKeyUrlRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string UpdateWebsiteInstanceKeyUrlRequest::getLang()const
{
	return lang_;
}

void UpdateWebsiteInstanceKeyUrlRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

