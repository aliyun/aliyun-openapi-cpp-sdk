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

#include <alibabacloud/ivision/model/DescribeSystemPredictModelsRequest.h>

using AlibabaCloud::Ivision::Model::DescribeSystemPredictModelsRequest;

DescribeSystemPredictModelsRequest::DescribeSystemPredictModelsRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DescribeSystemPredictModels")
{}

DescribeSystemPredictModelsRequest::~DescribeSystemPredictModelsRequest()
{}

std::string DescribeSystemPredictModelsRequest::getType()const
{
	return type_;
}

void DescribeSystemPredictModelsRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string DescribeSystemPredictModelsRequest::getScene()const
{
	return scene_;
}

void DescribeSystemPredictModelsRequest::setScene(const std::string& scene)
{
	scene_ = scene;
	setCoreParameter("Scene", scene);
}

long DescribeSystemPredictModelsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSystemPredictModelsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeSystemPredictModelsRequest::getShowLog()const
{
	return showLog_;
}

void DescribeSystemPredictModelsRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

long DescribeSystemPredictModelsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeSystemPredictModelsRequest::setCurrentPage(long currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

long DescribeSystemPredictModelsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSystemPredictModelsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeSystemPredictModelsRequest::getModelIds()const
{
	return modelIds_;
}

void DescribeSystemPredictModelsRequest::setModelIds(const std::string& modelIds)
{
	modelIds_ = modelIds;
	setCoreParameter("ModelIds", modelIds);
}

std::string DescribeSystemPredictModelsRequest::getName()const
{
	return name_;
}

void DescribeSystemPredictModelsRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

