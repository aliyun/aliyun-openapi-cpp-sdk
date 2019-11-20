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

#include <alibabacloud/iot/model/BatchBindDeviceToEdgeInstanceWithDriverRequest.h>

using AlibabaCloud::Iot::Model::BatchBindDeviceToEdgeInstanceWithDriverRequest;

BatchBindDeviceToEdgeInstanceWithDriverRequest::BatchBindDeviceToEdgeInstanceWithDriverRequest() :
	RpcServiceRequest("iot", "2018-01-20", "BatchBindDeviceToEdgeInstanceWithDriver")
{
	setMethod(HttpRequest::Method::Post);
}

BatchBindDeviceToEdgeInstanceWithDriverRequest::~BatchBindDeviceToEdgeInstanceWithDriverRequest()
{}

std::string BatchBindDeviceToEdgeInstanceWithDriverRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BatchBindDeviceToEdgeInstanceWithDriverRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string BatchBindDeviceToEdgeInstanceWithDriverRequest::getInstanceId()const
{
	return instanceId_;
}

void BatchBindDeviceToEdgeInstanceWithDriverRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string BatchBindDeviceToEdgeInstanceWithDriverRequest::getDriverId()const
{
	return driverId_;
}

void BatchBindDeviceToEdgeInstanceWithDriverRequest::setDriverId(const std::string& driverId)
{
	driverId_ = driverId;
	setCoreParameter("DriverId", driverId);
}

std::vector<std::string> BatchBindDeviceToEdgeInstanceWithDriverRequest::getIotIds()const
{
	return iotIds_;
}

void BatchBindDeviceToEdgeInstanceWithDriverRequest::setIotIds(const std::vector<std::string>& iotIds)
{
	iotIds_ = iotIds;
	for(int dep1 = 0; dep1!= iotIds.size(); dep1++) {
		setCoreParameter("IotIds."+ std::to_string(dep1), iotIds.at(dep1));
	}
}

std::string BatchBindDeviceToEdgeInstanceWithDriverRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void BatchBindDeviceToEdgeInstanceWithDriverRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

