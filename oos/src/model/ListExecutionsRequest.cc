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

#include <alibabacloud/oos/model/ListExecutionsRequest.h>

using AlibabaCloud::Oos::Model::ListExecutionsRequest;

ListExecutionsRequest::ListExecutionsRequest() :
	RpcServiceRequest("oos", "2019-06-01", "ListExecutions")
{
	setMethod(HttpRequest::Method::Post);
}

ListExecutionsRequest::~ListExecutionsRequest()
{}

std::string ListExecutionsRequest::getExecutedBy()const
{
	return executedBy_;
}

void ListExecutionsRequest::setExecutedBy(const std::string& executedBy)
{
	executedBy_ = executedBy;
	setParameter("ExecutedBy", executedBy);
}

bool ListExecutionsRequest::getIncludeChildExecution()const
{
	return includeChildExecution_;
}

void ListExecutionsRequest::setIncludeChildExecution(bool includeChildExecution)
{
	includeChildExecution_ = includeChildExecution;
	setParameter("IncludeChildExecution", includeChildExecution ? "true" : "false");
}

std::string ListExecutionsRequest::getMode()const
{
	return mode_;
}

void ListExecutionsRequest::setMode(const std::string& mode)
{
	mode_ = mode;
	setParameter("Mode", mode);
}

std::string ListExecutionsRequest::getExecutionId()const
{
	return executionId_;
}

void ListExecutionsRequest::setExecutionId(const std::string& executionId)
{
	executionId_ = executionId;
	setParameter("ExecutionId", executionId);
}

std::string ListExecutionsRequest::getRegionId()const
{
	return regionId_;
}

void ListExecutionsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListExecutionsRequest::getRamRole()const
{
	return ramRole_;
}

void ListExecutionsRequest::setRamRole(const std::string& ramRole)
{
	ramRole_ = ramRole;
	setParameter("RamRole", ramRole);
}

std::string ListExecutionsRequest::getNextToken()const
{
	return nextToken_;
}

void ListExecutionsRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListExecutionsRequest::getTemplateName()const
{
	return templateName_;
}

void ListExecutionsRequest::setTemplateName(const std::string& templateName)
{
	templateName_ = templateName;
	setParameter("TemplateName", templateName);
}

std::string ListExecutionsRequest::getEndDateBefore()const
{
	return endDateBefore_;
}

void ListExecutionsRequest::setEndDateBefore(const std::string& endDateBefore)
{
	endDateBefore_ = endDateBefore;
	setParameter("EndDateBefore", endDateBefore);
}

std::string ListExecutionsRequest::getSortOrder()const
{
	return sortOrder_;
}

void ListExecutionsRequest::setSortOrder(const std::string& sortOrder)
{
	sortOrder_ = sortOrder;
	setParameter("SortOrder", sortOrder);
}

std::string ListExecutionsRequest::getResourceId()const
{
	return resourceId_;
}

void ListExecutionsRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setParameter("ResourceId", resourceId);
}

std::string ListExecutionsRequest::getStartDateAfter()const
{
	return startDateAfter_;
}

void ListExecutionsRequest::setStartDateAfter(const std::string& startDateAfter)
{
	startDateAfter_ = startDateAfter;
	setParameter("StartDateAfter", startDateAfter);
}

std::string ListExecutionsRequest::getStartDateBefore()const
{
	return startDateBefore_;
}

void ListExecutionsRequest::setStartDateBefore(const std::string& startDateBefore)
{
	startDateBefore_ = startDateBefore;
	setParameter("StartDateBefore", startDateBefore);
}

std::map<std::string, std::string> ListExecutionsRequest::getTags()const
{
	return tags_;
}

void ListExecutionsRequest::setTags(const std::map<std::string, std::string>& tags)
{
	tags_ = tags;
	setJsonParameters("Tags", tags);
}

std::string ListExecutionsRequest::getParentExecutionId()const
{
	return parentExecutionId_;
}

void ListExecutionsRequest::setParentExecutionId(const std::string& parentExecutionId)
{
	parentExecutionId_ = parentExecutionId;
	setParameter("ParentExecutionId", parentExecutionId);
}

std::string ListExecutionsRequest::getEndDateAfter()const
{
	return endDateAfter_;
}

void ListExecutionsRequest::setEndDateAfter(const std::string& endDateAfter)
{
	endDateAfter_ = endDateAfter;
	setParameter("EndDateAfter", endDateAfter);
}

int ListExecutionsRequest::getMaxResults()const
{
	return maxResults_;
}

void ListExecutionsRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::string ListExecutionsRequest::getSortField()const
{
	return sortField_;
}

void ListExecutionsRequest::setSortField(const std::string& sortField)
{
	sortField_ = sortField;
	setParameter("SortField", sortField);
}

std::string ListExecutionsRequest::getCategory()const
{
	return category_;
}

void ListExecutionsRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

std::string ListExecutionsRequest::getResourceTemplateName()const
{
	return resourceTemplateName_;
}

void ListExecutionsRequest::setResourceTemplateName(const std::string& resourceTemplateName)
{
	resourceTemplateName_ = resourceTemplateName;
	setParameter("ResourceTemplateName", resourceTemplateName);
}

std::string ListExecutionsRequest::getStatus()const
{
	return status_;
}

void ListExecutionsRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

