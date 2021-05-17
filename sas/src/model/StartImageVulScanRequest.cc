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

#include <alibabacloud/sas/model/StartImageVulScanRequest.h>

using AlibabaCloud::Sas::Model::StartImageVulScanRequest;

StartImageVulScanRequest::StartImageVulScanRequest() :
	RpcServiceRequest("sas", "2018-12-03", "StartImageVulScan")
{
	setMethod(HttpRequest::Method::Post);
}

StartImageVulScanRequest::~StartImageVulScanRequest()
{}

std::string StartImageVulScanRequest::getRepoId()const
{
	return repoId_;
}

void StartImageVulScanRequest::setRepoId(const std::string& repoId)
{
	repoId_ = repoId;
	setParameter("RepoId", repoId);
}

std::string StartImageVulScanRequest::getRepoNamespace()const
{
	return repoNamespace_;
}

void StartImageVulScanRequest::setRepoNamespace(const std::string& repoNamespace)
{
	repoNamespace_ = repoNamespace;
	setParameter("RepoNamespace", repoNamespace);
}

std::string StartImageVulScanRequest::getSourceIp()const
{
	return sourceIp_;
}

void StartImageVulScanRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string StartImageVulScanRequest::getImageDigest()const
{
	return imageDigest_;
}

void StartImageVulScanRequest::setImageDigest(const std::string& imageDigest)
{
	imageDigest_ = imageDigest;
	setParameter("ImageDigest", imageDigest);
}

std::string StartImageVulScanRequest::getRepName()const
{
	return repName_;
}

void StartImageVulScanRequest::setRepName(const std::string& repName)
{
	repName_ = repName;
	setParameter("RepName", repName);
}

std::string StartImageVulScanRequest::getLang()const
{
	return lang_;
}

void StartImageVulScanRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string StartImageVulScanRequest::getImageTag()const
{
	return imageTag_;
}

void StartImageVulScanRequest::setImageTag(const std::string& imageTag)
{
	imageTag_ = imageTag;
	setParameter("ImageTag", imageTag);
}

std::vector<std::string> StartImageVulScanRequest::getRegistryTypes()const
{
	return registryTypes_;
}

void StartImageVulScanRequest::setRegistryTypes(const std::vector<std::string>& registryTypes)
{
	registryTypes_ = registryTypes;
	for(int dep1 = 0; dep1!= registryTypes.size(); dep1++) {
		setParameter("RegistryTypes."+ std::to_string(dep1), registryTypes.at(dep1));
	}
}

std::string StartImageVulScanRequest::getRepoInstanceId()const
{
	return repoInstanceId_;
}

void StartImageVulScanRequest::setRepoInstanceId(const std::string& repoInstanceId)
{
	repoInstanceId_ = repoInstanceId;
	setParameter("RepoInstanceId", repoInstanceId);
}

std::string StartImageVulScanRequest::getImageLayer()const
{
	return imageLayer_;
}

void StartImageVulScanRequest::setImageLayer(const std::string& imageLayer)
{
	imageLayer_ = imageLayer;
	setParameter("ImageLayer", imageLayer);
}

std::string StartImageVulScanRequest::getRepoRegionId()const
{
	return repoRegionId_;
}

void StartImageVulScanRequest::setRepoRegionId(const std::string& repoRegionId)
{
	repoRegionId_ = repoRegionId;
	setParameter("RepoRegionId", repoRegionId);
}

