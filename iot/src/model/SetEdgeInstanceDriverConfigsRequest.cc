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

#include <alibabacloud/iot/model/SetEdgeInstanceDriverConfigsRequest.h>

using AlibabaCloud::Iot::Model::SetEdgeInstanceDriverConfigsRequest;

SetEdgeInstanceDriverConfigsRequest::SetEdgeInstanceDriverConfigsRequest() :
	RpcServiceRequest("iot", "2018-01-20", "SetEdgeInstanceDriverConfigs")
{
	setMethod(HttpRequest::Method::Post);
}

SetEdgeInstanceDriverConfigsRequest::~SetEdgeInstanceDriverConfigsRequest()
{}

std::vector<SetEdgeInstanceDriverConfigsRequest::Configs> SetEdgeInstanceDriverConfigsRequest::getConfigs()const
{
	return configs_;
}

void SetEdgeInstanceDriverConfigsRequest::setConfigs(const std::vector<Configs>& configs)
{
	configs_ = configs;
	for(int dep1 = 0; dep1!= configs.size(); dep1++) {
		auto configsObj = configs.at(dep1);
		std::string configsObjStr = "Configs." + std::to_string(dep1);
		setCoreParameter(configsObjStr + ".Format", configsObj.format);
		setCoreParameter(configsObjStr + ".Content", configsObj.content);
		setCoreParameter(configsObjStr + ".Key", configsObj.key);
	}
}

std::string SetEdgeInstanceDriverConfigsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetEdgeInstanceDriverConfigsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SetEdgeInstanceDriverConfigsRequest::getInstanceId()const
{
	return instanceId_;
}

void SetEdgeInstanceDriverConfigsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string SetEdgeInstanceDriverConfigsRequest::getDriverId()const
{
	return driverId_;
}

void SetEdgeInstanceDriverConfigsRequest::setDriverId(const std::string& driverId)
{
	driverId_ = driverId;
	setCoreParameter("DriverId", driverId);
}

std::string SetEdgeInstanceDriverConfigsRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void SetEdgeInstanceDriverConfigsRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

