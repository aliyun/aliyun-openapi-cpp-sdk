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

#include <alibabacloud/iot/model/GetEdgeInstanceDeploymentRequest.h>

using AlibabaCloud::Iot::Model::GetEdgeInstanceDeploymentRequest;

GetEdgeInstanceDeploymentRequest::GetEdgeInstanceDeploymentRequest() :
	RpcServiceRequest("iot", "2018-01-20", "GetEdgeInstanceDeployment")
{
	setMethod(HttpRequest::Method::Post);
}

GetEdgeInstanceDeploymentRequest::~GetEdgeInstanceDeploymentRequest()
{}

std::string GetEdgeInstanceDeploymentRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetEdgeInstanceDeploymentRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string GetEdgeInstanceDeploymentRequest::getInstanceId()const
{
	return instanceId_;
}

void GetEdgeInstanceDeploymentRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string GetEdgeInstanceDeploymentRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void GetEdgeInstanceDeploymentRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

std::string GetEdgeInstanceDeploymentRequest::getDeploymentId()const
{
	return deploymentId_;
}

void GetEdgeInstanceDeploymentRequest::setDeploymentId(const std::string& deploymentId)
{
	deploymentId_ = deploymentId;
	setCoreParameter("DeploymentId", deploymentId);
}

