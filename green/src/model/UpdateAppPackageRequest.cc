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

#include <alibabacloud/green/model/UpdateAppPackageRequest.h>

using AlibabaCloud::Green::Model::UpdateAppPackageRequest;

UpdateAppPackageRequest::UpdateAppPackageRequest() :
	RpcServiceRequest("green", "2017-08-23", "UpdateAppPackage")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateAppPackageRequest::~UpdateAppPackageRequest()
{}

bool UpdateAppPackageRequest::getDebug()const
{
	return debug_;
}

void UpdateAppPackageRequest::setDebug(bool debug)
{
	debug_ = debug;
	setParameter("Debug", debug ? "true" : "false");
}

std::string UpdateAppPackageRequest::getPlatform()const
{
	return platform_;
}

void UpdateAppPackageRequest::setPlatform(const std::string& platform)
{
	platform_ = platform;
	setParameter("Platform", platform);
}

std::string UpdateAppPackageRequest::getSourceIp()const
{
	return sourceIp_;
}

void UpdateAppPackageRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string UpdateAppPackageRequest::getPackageUrl()const
{
	return packageUrl_;
}

void UpdateAppPackageRequest::setPackageUrl(const std::string& packageUrl)
{
	packageUrl_ = packageUrl;
	setParameter("PackageUrl", packageUrl);
}

long UpdateAppPackageRequest::getId()const
{
	return id_;
}

void UpdateAppPackageRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

std::string UpdateAppPackageRequest::getLang()const
{
	return lang_;
}

void UpdateAppPackageRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

