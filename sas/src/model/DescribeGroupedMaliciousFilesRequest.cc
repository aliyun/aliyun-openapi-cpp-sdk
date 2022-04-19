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

#include <alibabacloud/sas/model/DescribeGroupedMaliciousFilesRequest.h>

using AlibabaCloud::Sas::Model::DescribeGroupedMaliciousFilesRequest;

DescribeGroupedMaliciousFilesRequest::DescribeGroupedMaliciousFilesRequest() :
	RpcServiceRequest("sas", "2018-12-03", "DescribeGroupedMaliciousFiles")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeGroupedMaliciousFilesRequest::~DescribeGroupedMaliciousFilesRequest()
{}

std::string DescribeGroupedMaliciousFilesRequest::getRepoId()const
{
	return repoId_;
}

void DescribeGroupedMaliciousFilesRequest::setRepoId(const std::string& repoId)
{
	repoId_ = repoId;
	setParameter("RepoId", repoId);
}

std::string DescribeGroupedMaliciousFilesRequest::getFuzzyMaliciousName()const
{
	return fuzzyMaliciousName_;
}

void DescribeGroupedMaliciousFilesRequest::setFuzzyMaliciousName(const std::string& fuzzyMaliciousName)
{
	fuzzyMaliciousName_ = fuzzyMaliciousName;
	setParameter("FuzzyMaliciousName", fuzzyMaliciousName);
}

std::string DescribeGroupedMaliciousFilesRequest::getRepoNamespace()const
{
	return repoNamespace_;
}

void DescribeGroupedMaliciousFilesRequest::setRepoNamespace(const std::string& repoNamespace)
{
	repoNamespace_ = repoNamespace;
	setParameter("RepoNamespace", repoNamespace);
}

std::string DescribeGroupedMaliciousFilesRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeGroupedMaliciousFilesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeGroupedMaliciousFilesRequest::getImageDigest()const
{
	return imageDigest_;
}

void DescribeGroupedMaliciousFilesRequest::setImageDigest(const std::string& imageDigest)
{
	imageDigest_ = imageDigest;
	setParameter("ImageDigest", imageDigest);
}

std::string DescribeGroupedMaliciousFilesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeGroupedMaliciousFilesRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", pageSize);
}

std::string DescribeGroupedMaliciousFilesRequest::getLang()const
{
	return lang_;
}

void DescribeGroupedMaliciousFilesRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeGroupedMaliciousFilesRequest::getImageTag()const
{
	return imageTag_;
}

void DescribeGroupedMaliciousFilesRequest::setImageTag(const std::string& imageTag)
{
	imageTag_ = imageTag;
	setParameter("ImageTag", imageTag);
}

int DescribeGroupedMaliciousFilesRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeGroupedMaliciousFilesRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeGroupedMaliciousFilesRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeGroupedMaliciousFilesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string DescribeGroupedMaliciousFilesRequest::getRepoName()const
{
	return repoName_;
}

void DescribeGroupedMaliciousFilesRequest::setRepoName(const std::string& repoName)
{
	repoName_ = repoName;
	setParameter("RepoName", repoName);
}

std::string DescribeGroupedMaliciousFilesRequest::getRepoInstanceId()const
{
	return repoInstanceId_;
}

void DescribeGroupedMaliciousFilesRequest::setRepoInstanceId(const std::string& repoInstanceId)
{
	repoInstanceId_ = repoInstanceId;
	setParameter("RepoInstanceId", repoInstanceId);
}

std::string DescribeGroupedMaliciousFilesRequest::getImageLayer()const
{
	return imageLayer_;
}

void DescribeGroupedMaliciousFilesRequest::setImageLayer(const std::string& imageLayer)
{
	imageLayer_ = imageLayer;
	setParameter("ImageLayer", imageLayer);
}

std::string DescribeGroupedMaliciousFilesRequest::getLevels()const
{
	return levels_;
}

void DescribeGroupedMaliciousFilesRequest::setLevels(const std::string& levels)
{
	levels_ = levels;
	setParameter("Levels", levels);
}

std::string DescribeGroupedMaliciousFilesRequest::getRepoRegionId()const
{
	return repoRegionId_;
}

void DescribeGroupedMaliciousFilesRequest::setRepoRegionId(const std::string& repoRegionId)
{
	repoRegionId_ = repoRegionId;
	setParameter("RepoRegionId", repoRegionId);
}

std::vector<std::string> DescribeGroupedMaliciousFilesRequest::getUuids()const
{
	return uuids_;
}

void DescribeGroupedMaliciousFilesRequest::setUuids(const std::vector<std::string>& uuids)
{
	uuids_ = uuids;
	for(int dep1 = 0; dep1!= uuids.size(); dep1++) {
		setParameter("Uuids."+ std::to_string(dep1), uuids.at(dep1));
	}
}

