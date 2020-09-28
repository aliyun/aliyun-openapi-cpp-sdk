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

#include <alibabacloud/hbase/model/ModifyMultiZoneClusterNodeTypeRequest.h>

using AlibabaCloud::HBase::Model::ModifyMultiZoneClusterNodeTypeRequest;

ModifyMultiZoneClusterNodeTypeRequest::ModifyMultiZoneClusterNodeTypeRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "ModifyMultiZoneClusterNodeType")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyMultiZoneClusterNodeTypeRequest::~ModifyMultiZoneClusterNodeTypeRequest()
{}

std::string ModifyMultiZoneClusterNodeTypeRequest::getLogInstanceType()const
{
	return logInstanceType_;
}

void ModifyMultiZoneClusterNodeTypeRequest::setLogInstanceType(const std::string& logInstanceType)
{
	logInstanceType_ = logInstanceType;
	setParameter("LogInstanceType", logInstanceType);
}

std::string ModifyMultiZoneClusterNodeTypeRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyMultiZoneClusterNodeTypeRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ModifyMultiZoneClusterNodeTypeRequest::getMasterInstanceType()const
{
	return masterInstanceType_;
}

void ModifyMultiZoneClusterNodeTypeRequest::setMasterInstanceType(const std::string& masterInstanceType)
{
	masterInstanceType_ = masterInstanceType;
	setParameter("MasterInstanceType", masterInstanceType);
}

std::string ModifyMultiZoneClusterNodeTypeRequest::getCoreInstanceType()const
{
	return coreInstanceType_;
}

void ModifyMultiZoneClusterNodeTypeRequest::setCoreInstanceType(const std::string& coreInstanceType)
{
	coreInstanceType_ = coreInstanceType;
	setParameter("CoreInstanceType", coreInstanceType);
}

