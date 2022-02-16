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

#include <alibabacloud/emr/model/AddClusterServiceRequest.h>

using AlibabaCloud::Emr::Model::AddClusterServiceRequest;

AddClusterServiceRequest::AddClusterServiceRequest() :
	RpcServiceRequest("emr", "2016-04-08", "AddClusterService")
{
	setMethod(HttpRequest::Method::Post);
}

AddClusterServiceRequest::~AddClusterServiceRequest()
{}

long AddClusterServiceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddClusterServiceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddClusterServiceRequest::getClusterId()const
{
	return clusterId_;
}

void AddClusterServiceRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string AddClusterServiceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddClusterServiceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string AddClusterServiceRequest::getRegionId()const
{
	return regionId_;
}

void AddClusterServiceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::vector<AddClusterServiceRequest::Service> AddClusterServiceRequest::getService()const
{
	return service_;
}

void AddClusterServiceRequest::setService(const std::vector<Service>& service)
{
	service_ = service;
	for(int dep1 = 0; dep1!= service.size(); dep1++) {
		auto serviceObj = service.at(dep1);
		std::string serviceObjStr = "Service." + std::to_string(dep1 + 1);
		setParameter(serviceObjStr + ".ServiceVersion", serviceObj.serviceVersion);
		setParameter(serviceObjStr + ".ServiceName", serviceObj.serviceName);
	}
}

std::string AddClusterServiceRequest::getComment()const
{
	return comment_;
}

void AddClusterServiceRequest::setComment(const std::string& comment)
{
	comment_ = comment;
	setParameter("Comment", comment);
}

