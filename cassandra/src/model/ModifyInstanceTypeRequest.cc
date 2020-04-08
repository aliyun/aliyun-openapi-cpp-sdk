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

#include <alibabacloud/cassandra/model/ModifyInstanceTypeRequest.h>

using AlibabaCloud::Cassandra::Model::ModifyInstanceTypeRequest;

ModifyInstanceTypeRequest::ModifyInstanceTypeRequest() :
	RpcServiceRequest("cassandra", "2019-01-01", "ModifyInstanceType")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyInstanceTypeRequest::~ModifyInstanceTypeRequest()
{}

std::string ModifyInstanceTypeRequest::getDataCenterId()const
{
	return dataCenterId_;
}

void ModifyInstanceTypeRequest::setDataCenterId(const std::string& dataCenterId)
{
	dataCenterId_ = dataCenterId;
	setParameter("DataCenterId", dataCenterId);
}

std::string ModifyInstanceTypeRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyInstanceTypeRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ModifyInstanceTypeRequest::getInstanceType()const
{
	return instanceType_;
}

void ModifyInstanceTypeRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

