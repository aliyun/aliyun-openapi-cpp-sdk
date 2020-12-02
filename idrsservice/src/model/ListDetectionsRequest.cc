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

#include <alibabacloud/idrsservice/model/ListDetectionsRequest.h>

using AlibabaCloud::Idrsservice::Model::ListDetectionsRequest;

ListDetectionsRequest::ListDetectionsRequest() :
	RpcServiceRequest("idrsservice", "2020-06-30", "ListDetections")
{
	setMethod(HttpRequest::Method::Post);
}

ListDetectionsRequest::~ListDetectionsRequest()
{}

std::string ListDetectionsRequest::getCreateDateTo()const
{
	return createDateTo_;
}

void ListDetectionsRequest::setCreateDateTo(const std::string& createDateTo)
{
	createDateTo_ = createDateTo;
	setParameter("CreateDateTo", createDateTo);
}

std::string ListDetectionsRequest::getDepartmentId()const
{
	return departmentId_;
}

void ListDetectionsRequest::setDepartmentId(const std::string& departmentId)
{
	departmentId_ = departmentId;
	setParameter("DepartmentId", departmentId);
}

std::string ListDetectionsRequest::getRecordingType()const
{
	return recordingType_;
}

void ListDetectionsRequest::setRecordingType(const std::string& recordingType)
{
	recordingType_ = recordingType;
	setParameter("RecordingType", recordingType);
}

std::string ListDetectionsRequest::getCreateDateFrom()const
{
	return createDateFrom_;
}

void ListDetectionsRequest::setCreateDateFrom(const std::string& createDateFrom)
{
	createDateFrom_ = createDateFrom;
	setParameter("CreateDateFrom", createDateFrom);
}

int ListDetectionsRequest::getPageSize()const
{
	return pageSize_;
}

void ListDetectionsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListDetectionsRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListDetectionsRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setParameter("PageIndex", std::to_string(pageIndex));
}

std::string ListDetectionsRequest::getRuleId()const
{
	return ruleId_;
}

void ListDetectionsRequest::setRuleId(const std::string& ruleId)
{
	ruleId_ = ruleId;
	setParameter("RuleId", ruleId);
}

