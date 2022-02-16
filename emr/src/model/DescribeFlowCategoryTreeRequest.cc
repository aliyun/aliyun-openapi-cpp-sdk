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

#include <alibabacloud/emr/model/DescribeFlowCategoryTreeRequest.h>

using AlibabaCloud::Emr::Model::DescribeFlowCategoryTreeRequest;

DescribeFlowCategoryTreeRequest::DescribeFlowCategoryTreeRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeFlowCategoryTree")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeFlowCategoryTreeRequest::~DescribeFlowCategoryTreeRequest()
{}

std::string DescribeFlowCategoryTreeRequest::getType()const
{
	return type_;
}

void DescribeFlowCategoryTreeRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string DescribeFlowCategoryTreeRequest::getMode()const
{
	return mode_;
}

void DescribeFlowCategoryTreeRequest::setMode(const std::string& mode)
{
	mode_ = mode;
	setParameter("Mode", mode);
}

std::string DescribeFlowCategoryTreeRequest::getRegionId()const
{
	return regionId_;
}

void DescribeFlowCategoryTreeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeFlowCategoryTreeRequest::getKeyword()const
{
	return keyword_;
}

void DescribeFlowCategoryTreeRequest::setKeyword(const std::string& keyword)
{
	keyword_ = keyword;
	setParameter("Keyword", keyword);
}

std::string DescribeFlowCategoryTreeRequest::getProjectId()const
{
	return projectId_;
}

void DescribeFlowCategoryTreeRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

std::string DescribeFlowCategoryTreeRequest::getCategoryId()const
{
	return categoryId_;
}

void DescribeFlowCategoryTreeRequest::setCategoryId(const std::string& categoryId)
{
	categoryId_ = categoryId;
	setParameter("CategoryId", categoryId);
}

