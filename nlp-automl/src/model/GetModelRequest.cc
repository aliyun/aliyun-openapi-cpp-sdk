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

#include <alibabacloud/nlp-automl/model/GetModelRequest.h>

using AlibabaCloud::Nlp_automl::Model::GetModelRequest;

GetModelRequest::GetModelRequest() :
	RpcServiceRequest("nlp-automl", "2019-11-11", "GetModel")
{
	setMethod(HttpRequest::Method::Post);
}

GetModelRequest::~GetModelRequest()
{}

std::string GetModelRequest::getProduct()const
{
	return product_;
}

void GetModelRequest::setProduct(const std::string& product)
{
	product_ = product;
	setBodyParameter("Product", product);
}

long GetModelRequest::getModelId()const
{
	return modelId_;
}

void GetModelRequest::setModelId(long modelId)
{
	modelId_ = modelId;
	setBodyParameter("ModelId", std::to_string(modelId));
}

long GetModelRequest::getProjectId()const
{
	return projectId_;
}

void GetModelRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", std::to_string(projectId));
}

std::string GetModelRequest::getModelVersion()const
{
	return modelVersion_;
}

void GetModelRequest::setModelVersion(const std::string& modelVersion)
{
	modelVersion_ = modelVersion;
	setBodyParameter("ModelVersion", modelVersion);
}

