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

#include <alibabacloud/iot/model/DeleteShareTaskDeviceRequest.h>

using AlibabaCloud::Iot::Model::DeleteShareTaskDeviceRequest;

DeleteShareTaskDeviceRequest::DeleteShareTaskDeviceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "DeleteShareTaskDevice")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteShareTaskDeviceRequest::~DeleteShareTaskDeviceRequest()
{}

std::string DeleteShareTaskDeviceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void DeleteShareTaskDeviceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::vector<std::string> DeleteShareTaskDeviceRequest::getIotIdList()const
{
	return iotIdList_;
}

void DeleteShareTaskDeviceRequest::setIotIdList(const std::vector<std::string>& iotIdList)
{
	iotIdList_ = iotIdList;
	for(int dep1 = 0; dep1!= iotIdList.size(); dep1++) {
		setBodyParameter("IotIdList."+ std::to_string(dep1), iotIdList.at(dep1));
	}
}

std::string DeleteShareTaskDeviceRequest::getShareTaskId()const
{
	return shareTaskId_;
}

void DeleteShareTaskDeviceRequest::setShareTaskId(const std::string& shareTaskId)
{
	shareTaskId_ = shareTaskId;
	setBodyParameter("ShareTaskId", shareTaskId);
}

std::string DeleteShareTaskDeviceRequest::getApiProduct()const
{
	return apiProduct_;
}

void DeleteShareTaskDeviceRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string DeleteShareTaskDeviceRequest::getApiRevision()const
{
	return apiRevision_;
}

void DeleteShareTaskDeviceRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

