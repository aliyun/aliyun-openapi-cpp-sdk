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

#include <alibabacloud/iot/model/CreateDownloadDataJobRequest.h>

using AlibabaCloud::Iot::Model::CreateDownloadDataJobRequest;

CreateDownloadDataJobRequest::CreateDownloadDataJobRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateDownloadDataJob")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDownloadDataJobRequest::~CreateDownloadDataJobRequest()
{}

long CreateDownloadDataJobRequest::getStartTime()const
{
	return startTime_;
}

void CreateDownloadDataJobRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string CreateDownloadDataJobRequest::getFileConfig()const
{
	return fileConfig_;
}

void CreateDownloadDataJobRequest::setFileConfig(const std::string& fileConfig)
{
	fileConfig_ = fileConfig;
	setParameter("FileConfig", fileConfig);
}

std::string CreateDownloadDataJobRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateDownloadDataJobRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string CreateDownloadDataJobRequest::getTableName()const
{
	return tableName_;
}

void CreateDownloadDataJobRequest::setTableName(const std::string& tableName)
{
	tableName_ = tableName;
	setParameter("TableName", tableName);
}

long CreateDownloadDataJobRequest::getEndTime()const
{
	return endTime_;
}

void CreateDownloadDataJobRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

std::string CreateDownloadDataJobRequest::getDownloadDataType()const
{
	return downloadDataType_;
}

void CreateDownloadDataJobRequest::setDownloadDataType(const std::string& downloadDataType)
{
	downloadDataType_ = downloadDataType;
	setParameter("DownloadDataType", downloadDataType);
}

std::string CreateDownloadDataJobRequest::getApiProduct()const
{
	return apiProduct_;
}

void CreateDownloadDataJobRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CreateDownloadDataJobRequest::getApiRevision()const
{
	return apiRevision_;
}

void CreateDownloadDataJobRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

