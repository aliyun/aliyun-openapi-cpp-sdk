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

#include <alibabacloud/ivision/model/DescribePredictModelsRequest.h>

using AlibabaCloud::Ivision::Model::DescribePredictModelsRequest;

DescribePredictModelsRequest::DescribePredictModelsRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DescribePredictModels")
{}

DescribePredictModelsRequest::~DescribePredictModelsRequest()
{}

std::string DescribePredictModelsRequest::getSource()const
{
	return source_;
}

void DescribePredictModelsRequest::setSource(const std::string& source)
{
	source_ = source;
	setCoreParameter("Source", source);
}

std::string DescribePredictModelsRequest::getType()const
{
	return type_;
}

void DescribePredictModelsRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

long DescribePredictModelsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribePredictModelsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribePredictModelsRequest::getShowLog()const
{
	return showLog_;
}

void DescribePredictModelsRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

long DescribePredictModelsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribePredictModelsRequest::setCurrentPage(long currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

long DescribePredictModelsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribePredictModelsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribePredictModelsRequest::getModelIds()const
{
	return modelIds_;
}

void DescribePredictModelsRequest::setModelIds(const std::string& modelIds)
{
	modelIds_ = modelIds;
	setCoreParameter("ModelIds", modelIds);
}

std::string DescribePredictModelsRequest::getName()const
{
	return name_;
}

void DescribePredictModelsRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string DescribePredictModelsRequest::getDeployStatus()const
{
	return deployStatus_;
}

void DescribePredictModelsRequest::setDeployStatus(const std::string& deployStatus)
{
	deployStatus_ = deployStatus;
	setCoreParameter("DeployStatus", deployStatus);
}

