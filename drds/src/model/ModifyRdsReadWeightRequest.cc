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

#include <alibabacloud/drds/model/ModifyRdsReadWeightRequest.h>

using AlibabaCloud::Drds::Model::ModifyRdsReadWeightRequest;

ModifyRdsReadWeightRequest::ModifyRdsReadWeightRequest() :
	RpcServiceRequest("drds", "2017-10-16", "ModifyRdsReadWeight")
{}

ModifyRdsReadWeightRequest::~ModifyRdsReadWeightRequest()
{}

std::string ModifyRdsReadWeightRequest::getInstanceNames()const
{
	return instanceNames_;
}

void ModifyRdsReadWeightRequest::setInstanceNames(const std::string& instanceNames)
{
	instanceNames_ = instanceNames;
	setCoreParameter("InstanceNames", instanceNames);
}

std::string ModifyRdsReadWeightRequest::getDbName()const
{
	return dbName_;
}

void ModifyRdsReadWeightRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

std::string ModifyRdsReadWeightRequest::getWeights()const
{
	return weights_;
}

void ModifyRdsReadWeightRequest::setWeights(const std::string& weights)
{
	weights_ = weights;
	setCoreParameter("Weights", weights);
}

std::string ModifyRdsReadWeightRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void ModifyRdsReadWeightRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

std::string ModifyRdsReadWeightRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyRdsReadWeightRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

