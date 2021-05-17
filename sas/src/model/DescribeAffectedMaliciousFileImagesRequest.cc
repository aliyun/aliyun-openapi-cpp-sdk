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

#include <alibabacloud/sas/model/DescribeAffectedMaliciousFileImagesRequest.h>

using AlibabaCloud::Sas::Model::DescribeAffectedMaliciousFileImagesRequest;

DescribeAffectedMaliciousFileImagesRequest::DescribeAffectedMaliciousFileImagesRequest() :
	RpcServiceRequest("sas", "2018-12-03", "DescribeAffectedMaliciousFileImages")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeAffectedMaliciousFileImagesRequest::~DescribeAffectedMaliciousFileImagesRequest()
{}

std::string DescribeAffectedMaliciousFileImagesRequest::getRepoId()const
{
	return repoId_;
}

void DescribeAffectedMaliciousFileImagesRequest::setRepoId(const std::string& repoId)
{
	repoId_ = repoId;
	setParameter("RepoId", repoId);
}

std::string DescribeAffectedMaliciousFileImagesRequest::getRepoNamespace()const
{
	return repoNamespace_;
}

void DescribeAffectedMaliciousFileImagesRequest::setRepoNamespace(const std::string& repoNamespace)
{
	repoNamespace_ = repoNamespace;
	setParameter("RepoNamespace", repoNamespace);
}

std::string DescribeAffectedMaliciousFileImagesRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeAffectedMaliciousFileImagesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeAffectedMaliciousFileImagesRequest::getImageDigest()const
{
	return imageDigest_;
}

void DescribeAffectedMaliciousFileImagesRequest::setImageDigest(const std::string& imageDigest)
{
	imageDigest_ = imageDigest;
	setParameter("ImageDigest", imageDigest);
}

std::string DescribeAffectedMaliciousFileImagesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAffectedMaliciousFileImagesRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", pageSize);
}

std::string DescribeAffectedMaliciousFileImagesRequest::getLang()const
{
	return lang_;
}

void DescribeAffectedMaliciousFileImagesRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeAffectedMaliciousFileImagesRequest::getImageTag()const
{
	return imageTag_;
}

void DescribeAffectedMaliciousFileImagesRequest::setImageTag(const std::string& imageTag)
{
	imageTag_ = imageTag;
	setParameter("ImageTag", imageTag);
}

std::string DescribeAffectedMaliciousFileImagesRequest::getMaliciousMd5()const
{
	return maliciousMd5_;
}

void DescribeAffectedMaliciousFileImagesRequest::setMaliciousMd5(const std::string& maliciousMd5)
{
	maliciousMd5_ = maliciousMd5;
	setParameter("MaliciousMd5", maliciousMd5);
}

int DescribeAffectedMaliciousFileImagesRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeAffectedMaliciousFileImagesRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeAffectedMaliciousFileImagesRequest::getRepoName()const
{
	return repoName_;
}

void DescribeAffectedMaliciousFileImagesRequest::setRepoName(const std::string& repoName)
{
	repoName_ = repoName;
	setParameter("RepoName", repoName);
}

std::string DescribeAffectedMaliciousFileImagesRequest::getRepoInstanceId()const
{
	return repoInstanceId_;
}

void DescribeAffectedMaliciousFileImagesRequest::setRepoInstanceId(const std::string& repoInstanceId)
{
	repoInstanceId_ = repoInstanceId;
	setParameter("RepoInstanceId", repoInstanceId);
}

std::string DescribeAffectedMaliciousFileImagesRequest::getImageLayer()const
{
	return imageLayer_;
}

void DescribeAffectedMaliciousFileImagesRequest::setImageLayer(const std::string& imageLayer)
{
	imageLayer_ = imageLayer;
	setParameter("ImageLayer", imageLayer);
}

std::vector<std::string> DescribeAffectedMaliciousFileImagesRequest::getUuids()const
{
	return uuids_;
}

void DescribeAffectedMaliciousFileImagesRequest::setUuids(const std::vector<std::string>& uuids)
{
	uuids_ = uuids;
	for(int dep1 = 0; dep1!= uuids.size(); dep1++) {
		setParameter("Uuids."+ std::to_string(dep1), uuids.at(dep1));
	}
}

std::string DescribeAffectedMaliciousFileImagesRequest::getRepoRegionId()const
{
	return repoRegionId_;
}

void DescribeAffectedMaliciousFileImagesRequest::setRepoRegionId(const std::string& repoRegionId)
{
	repoRegionId_ = repoRegionId;
	setParameter("RepoRegionId", repoRegionId);
}

