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

#include <alibabacloud/emr/model/ModifyClusterBootstrapActionRequest.h>

using AlibabaCloud::Emr::Model::ModifyClusterBootstrapActionRequest;

ModifyClusterBootstrapActionRequest::ModifyClusterBootstrapActionRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyClusterBootstrapAction")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyClusterBootstrapActionRequest::~ModifyClusterBootstrapActionRequest()
{}

long ModifyClusterBootstrapActionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyClusterBootstrapActionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyClusterBootstrapActionRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyClusterBootstrapActionRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ModifyClusterBootstrapActionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyClusterBootstrapActionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::vector<ModifyClusterBootstrapActionRequest::BootstrapAction> ModifyClusterBootstrapActionRequest::getBootstrapAction()const
{
	return bootstrapAction_;
}

void ModifyClusterBootstrapActionRequest::setBootstrapAction(const std::vector<BootstrapAction>& bootstrapAction)
{
	bootstrapAction_ = bootstrapAction;
	for(int dep1 = 0; dep1!= bootstrapAction.size(); dep1++) {
		auto bootstrapActionObj = bootstrapAction.at(dep1);
		std::string bootstrapActionObjStr = "BootstrapAction." + std::to_string(dep1 + 1);
		setParameter(bootstrapActionObjStr + ".Path", bootstrapActionObj.path);
		setParameter(bootstrapActionObjStr + ".ExecutionTarget", bootstrapActionObj.executionTarget);
		setParameter(bootstrapActionObjStr + ".ExecutionMoment", bootstrapActionObj.executionMoment);
		setParameter(bootstrapActionObjStr + ".Arg", bootstrapActionObj.arg);
		setParameter(bootstrapActionObjStr + ".Name", bootstrapActionObj.name);
		setParameter(bootstrapActionObjStr + ".ExecutionFailStrategy", bootstrapActionObj.executionFailStrategy);
	}
}

std::string ModifyClusterBootstrapActionRequest::getRegionId()const
{
	return regionId_;
}

void ModifyClusterBootstrapActionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyClusterBootstrapActionRequest::getId()const
{
	return id_;
}

void ModifyClusterBootstrapActionRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

