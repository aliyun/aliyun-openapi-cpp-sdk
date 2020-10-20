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

#include <alibabacloud/hbase/model/ModifyInstanceTypeRequest.h>

using AlibabaCloud::HBase::Model::ModifyInstanceTypeRequest;

ModifyInstanceTypeRequest::ModifyInstanceTypeRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "ModifyInstanceType")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyInstanceTypeRequest::~ModifyInstanceTypeRequest()
{}

std::string ModifyInstanceTypeRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyInstanceTypeRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ModifyInstanceTypeRequest::getMasterInstanceType()const
{
	return masterInstanceType_;
}

void ModifyInstanceTypeRequest::setMasterInstanceType(const std::string& masterInstanceType)
{
	masterInstanceType_ = masterInstanceType;
	setParameter("MasterInstanceType", masterInstanceType);
}

std::string ModifyInstanceTypeRequest::getCoreInstanceType()const
{
	return coreInstanceType_;
}

void ModifyInstanceTypeRequest::setCoreInstanceType(const std::string& coreInstanceType)
{
	coreInstanceType_ = coreInstanceType;
	setParameter("CoreInstanceType", coreInstanceType);
}

