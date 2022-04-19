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

#include <alibabacloud/sas/model/DescribeImageListWithBaselineNameRequest.h>

using AlibabaCloud::Sas::Model::DescribeImageListWithBaselineNameRequest;

DescribeImageListWithBaselineNameRequest::DescribeImageListWithBaselineNameRequest() :
	RpcServiceRequest("sas", "2018-12-03", "DescribeImageListWithBaselineName")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeImageListWithBaselineNameRequest::~DescribeImageListWithBaselineNameRequest()
{}

std::string DescribeImageListWithBaselineNameRequest::getCriteria()const
{
	return criteria_;
}

void DescribeImageListWithBaselineNameRequest::setCriteria(const std::string& criteria)
{
	criteria_ = criteria;
	setParameter("Criteria", criteria);
}

std::string DescribeImageListWithBaselineNameRequest::getRepoNamespace()const
{
	return repoNamespace_;
}

void DescribeImageListWithBaselineNameRequest::setRepoNamespace(const std::string& repoNamespace)
{
	repoNamespace_ = repoNamespace;
	setParameter("RepoNamespace", repoNamespace);
}

std::string DescribeImageListWithBaselineNameRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeImageListWithBaselineNameRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeImageListWithBaselineNameRequest::getImageDigest()const
{
	return imageDigest_;
}

void DescribeImageListWithBaselineNameRequest::setImageDigest(const std::string& imageDigest)
{
	imageDigest_ = imageDigest;
	setParameter("ImageDigest", imageDigest);
}

int DescribeImageListWithBaselineNameRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeImageListWithBaselineNameRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeImageListWithBaselineNameRequest::getCriteriaType()const
{
	return criteriaType_;
}

void DescribeImageListWithBaselineNameRequest::setCriteriaType(const std::string& criteriaType)
{
	criteriaType_ = criteriaType;
	setParameter("CriteriaType", criteriaType);
}

std::string DescribeImageListWithBaselineNameRequest::getLang()const
{
	return lang_;
}

void DescribeImageListWithBaselineNameRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

int DescribeImageListWithBaselineNameRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeImageListWithBaselineNameRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeImageListWithBaselineNameRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeImageListWithBaselineNameRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string DescribeImageListWithBaselineNameRequest::getRepoName()const
{
	return repoName_;
}

void DescribeImageListWithBaselineNameRequest::setRepoName(const std::string& repoName)
{
	repoName_ = repoName;
	setParameter("RepoName", repoName);
}

std::string DescribeImageListWithBaselineNameRequest::getBaselineNameKey()const
{
	return baselineNameKey_;
}

void DescribeImageListWithBaselineNameRequest::setBaselineNameKey(const std::string& baselineNameKey)
{
	baselineNameKey_ = baselineNameKey;
	setParameter("BaselineNameKey", baselineNameKey);
}

std::string DescribeImageListWithBaselineNameRequest::getRepoInstanceId()const
{
	return repoInstanceId_;
}

void DescribeImageListWithBaselineNameRequest::setRepoInstanceId(const std::string& repoInstanceId)
{
	repoInstanceId_ = repoInstanceId;
	setParameter("RepoInstanceId", repoInstanceId);
}

