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

#include <alibabacloud/nlp-automl/model/CreateModelRequest.h>

using AlibabaCloud::Nlp_automl::Model::CreateModelRequest;

CreateModelRequest::CreateModelRequest() :
	RpcServiceRequest("nlp-automl", "2019-11-11", "CreateModel")
{
	setMethod(HttpRequest::Method::Post);
}

CreateModelRequest::~CreateModelRequest()
{}

std::string CreateModelRequest::getIsIncrementalTrain()const
{
	return isIncrementalTrain_;
}

void CreateModelRequest::setIsIncrementalTrain(const std::string& isIncrementalTrain)
{
	isIncrementalTrain_ = isIncrementalTrain;
	setBodyParameter("IsIncrementalTrain", isIncrementalTrain);
}

std::string CreateModelRequest::getModelName()const
{
	return modelName_;
}

void CreateModelRequest::setModelName(const std::string& modelName)
{
	modelName_ = modelName;
	setBodyParameter("ModelName", modelName);
}

std::map<std::string, std::string> CreateModelRequest::getDatasetIdList()const
{
	return datasetIdList_;
}

void CreateModelRequest::setDatasetIdList(const std::map<std::string, std::string>& datasetIdList)
{
	datasetIdList_ = datasetIdList;
	setJsonParameters("DatasetIdList", datasetIdList);
}

std::map<std::string, std::string> CreateModelRequest::getTestDatasetIdList()const
{
	return testDatasetIdList_;
}

void CreateModelRequest::setTestDatasetIdList(const std::map<std::string, std::string>& testDatasetIdList)
{
	testDatasetIdList_ = testDatasetIdList;
	setJsonParameters("TestDatasetIdList", testDatasetIdList);
}

std::string CreateModelRequest::getModelType()const
{
	return modelType_;
}

void CreateModelRequest::setModelType(const std::string& modelType)
{
	modelType_ = modelType;
	setBodyParameter("ModelType", modelType);
}

long CreateModelRequest::getProjectId()const
{
	return projectId_;
}

void CreateModelRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", std::to_string(projectId));
}

std::string CreateModelRequest::getProduct()const
{
	return product_;
}

void CreateModelRequest::setProduct(const std::string& product)
{
	product_ = product;
	setBodyParameter("Product", product);
}

long CreateModelRequest::getModelId()const
{
	return modelId_;
}

void CreateModelRequest::setModelId(long modelId)
{
	modelId_ = modelId;
	setBodyParameter("ModelId", std::to_string(modelId));
}

