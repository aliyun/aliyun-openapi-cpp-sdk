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

#include <alibabacloud/iot/model/ListOTAUnfinishedTaskByDeviceRequest.h>

using AlibabaCloud::Iot::Model::ListOTAUnfinishedTaskByDeviceRequest;

ListOTAUnfinishedTaskByDeviceRequest::ListOTAUnfinishedTaskByDeviceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "ListOTAUnfinishedTaskByDevice")
{
	setMethod(HttpRequest::Method::Post);
}

ListOTAUnfinishedTaskByDeviceRequest::~ListOTAUnfinishedTaskByDeviceRequest()
{}

std::vector<std::string> ListOTAUnfinishedTaskByDeviceRequest::getTaskStatusList()const
{
	return taskStatusList_;
}

void ListOTAUnfinishedTaskByDeviceRequest::setTaskStatusList(const std::vector<std::string>& taskStatusList)
{
	taskStatusList_ = taskStatusList;
	for(int dep1 = 0; dep1!= taskStatusList.size(); dep1++) {
		setParameter("TaskStatusList."+ std::to_string(dep1), taskStatusList.at(dep1));
	}
}

std::string ListOTAUnfinishedTaskByDeviceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListOTAUnfinishedTaskByDeviceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListOTAUnfinishedTaskByDeviceRequest::getTaskStatus()const
{
	return taskStatus_;
}

void ListOTAUnfinishedTaskByDeviceRequest::setTaskStatus(const std::string& taskStatus)
{
	taskStatus_ = taskStatus;
	setParameter("TaskStatus", taskStatus);
}

std::string ListOTAUnfinishedTaskByDeviceRequest::getIotId()const
{
	return iotId_;
}

void ListOTAUnfinishedTaskByDeviceRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setParameter("IotId", iotId);
}

std::string ListOTAUnfinishedTaskByDeviceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ListOTAUnfinishedTaskByDeviceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string ListOTAUnfinishedTaskByDeviceRequest::getModuleName()const
{
	return moduleName_;
}

void ListOTAUnfinishedTaskByDeviceRequest::setModuleName(const std::string& moduleName)
{
	moduleName_ = moduleName;
	setParameter("ModuleName", moduleName);
}

std::string ListOTAUnfinishedTaskByDeviceRequest::getProductKey()const
{
	return productKey_;
}

void ListOTAUnfinishedTaskByDeviceRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string ListOTAUnfinishedTaskByDeviceRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListOTAUnfinishedTaskByDeviceRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListOTAUnfinishedTaskByDeviceRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListOTAUnfinishedTaskByDeviceRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string ListOTAUnfinishedTaskByDeviceRequest::getDeviceName()const
{
	return deviceName_;
}

void ListOTAUnfinishedTaskByDeviceRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

