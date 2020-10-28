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

#include <alibabacloud/drds/model/ModifyPolarDbReadWeightRequest.h>

using AlibabaCloud::Drds::Model::ModifyPolarDbReadWeightRequest;

ModifyPolarDbReadWeightRequest::ModifyPolarDbReadWeightRequest() :
	RpcServiceRequest("drds", "2019-01-23", "ModifyPolarDbReadWeight")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyPolarDbReadWeightRequest::~ModifyPolarDbReadWeightRequest()
{}

std::string ModifyPolarDbReadWeightRequest::getWeights()const
{
	return weights_;
}

void ModifyPolarDbReadWeightRequest::setWeights(const std::string& weights)
{
	weights_ = weights;
	setParameter("Weights", weights);
}

std::string ModifyPolarDbReadWeightRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void ModifyPolarDbReadWeightRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setParameter("DrdsInstanceId", drdsInstanceId);
}

std::string ModifyPolarDbReadWeightRequest::getDbNodeIds()const
{
	return dbNodeIds_;
}

void ModifyPolarDbReadWeightRequest::setDbNodeIds(const std::string& dbNodeIds)
{
	dbNodeIds_ = dbNodeIds;
	setParameter("DbNodeIds", dbNodeIds);
}

std::string ModifyPolarDbReadWeightRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyPolarDbReadWeightRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyPolarDbReadWeightRequest::getDbName()const
{
	return dbName_;
}

void ModifyPolarDbReadWeightRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

std::string ModifyPolarDbReadWeightRequest::getDbInstanceId()const
{
	return dbInstanceId_;
}

void ModifyPolarDbReadWeightRequest::setDbInstanceId(const std::string& dbInstanceId)
{
	dbInstanceId_ = dbInstanceId;
	setParameter("DbInstanceId", dbInstanceId);
}

