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

#include <alibabacloud/green/model/DescribeAuditContentRequest.h>

using AlibabaCloud::Green::Model::DescribeAuditContentRequest;

DescribeAuditContentRequest::DescribeAuditContentRequest() :
	RpcServiceRequest("green", "2017-08-23", "DescribeAuditContent")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeAuditContentRequest::~DescribeAuditContentRequest()
{}

std::string DescribeAuditContentRequest::getImageId()const
{
	return imageId_;
}

void DescribeAuditContentRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setParameter("ImageId", imageId);
}

std::string DescribeAuditContentRequest::getStartDate()const
{
	return startDate_;
}

void DescribeAuditContentRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setParameter("StartDate", startDate);
}

std::string DescribeAuditContentRequest::getScene()const
{
	return scene_;
}

void DescribeAuditContentRequest::setScene(const std::string& scene)
{
	scene_ = scene;
	setParameter("Scene", scene);
}

std::string DescribeAuditContentRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeAuditContentRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeAuditContentRequest::getLibType()const
{
	return libType_;
}

void DescribeAuditContentRequest::setLibType(const std::string& libType)
{
	libType_ = libType;
	setParameter("LibType", libType);
}

std::string DescribeAuditContentRequest::getAuditResult()const
{
	return auditResult_;
}

void DescribeAuditContentRequest::setAuditResult(const std::string& auditResult)
{
	auditResult_ = auditResult;
	setParameter("AuditResult", auditResult);
}

int DescribeAuditContentRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAuditContentRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeAuditContentRequest::getLang()const
{
	return lang_;
}

void DescribeAuditContentRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeAuditContentRequest::getTaskId()const
{
	return taskId_;
}

void DescribeAuditContentRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", taskId);
}

int DescribeAuditContentRequest::getTotalCount()const
{
	return totalCount_;
}

void DescribeAuditContentRequest::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
	setParameter("TotalCount", std::to_string(totalCount));
}

std::string DescribeAuditContentRequest::getKeywordId()const
{
	return keywordId_;
}

void DescribeAuditContentRequest::setKeywordId(const std::string& keywordId)
{
	keywordId_ = keywordId;
	setParameter("KeywordId", keywordId);
}

std::string DescribeAuditContentRequest::getSuggestion()const
{
	return suggestion_;
}

void DescribeAuditContentRequest::setSuggestion(const std::string& suggestion)
{
	suggestion_ = suggestion;
	setParameter("Suggestion", suggestion);
}

int DescribeAuditContentRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeAuditContentRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeAuditContentRequest::getLabel()const
{
	return label_;
}

void DescribeAuditContentRequest::setLabel(const std::string& label)
{
	label_ = label;
	setParameter("Label", label);
}

std::string DescribeAuditContentRequest::getResourceType()const
{
	return resourceType_;
}

void DescribeAuditContentRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string DescribeAuditContentRequest::getBizType()const
{
	return bizType_;
}

void DescribeAuditContentRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setParameter("BizType", bizType);
}

std::string DescribeAuditContentRequest::getEndDate()const
{
	return endDate_;
}

void DescribeAuditContentRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setParameter("EndDate", endDate);
}

std::string DescribeAuditContentRequest::getDataId()const
{
	return dataId_;
}

void DescribeAuditContentRequest::setDataId(const std::string& dataId)
{
	dataId_ = dataId;
	setParameter("DataId", dataId);
}

