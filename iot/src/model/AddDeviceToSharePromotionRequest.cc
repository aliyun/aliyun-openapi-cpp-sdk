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

#include <alibabacloud/iot/model/AddDeviceToSharePromotionRequest.h>

using AlibabaCloud::Iot::Model::AddDeviceToSharePromotionRequest;

AddDeviceToSharePromotionRequest::AddDeviceToSharePromotionRequest() :
	RpcServiceRequest("iot", "2018-01-20", "AddDeviceToSharePromotion")
{
	setMethod(HttpRequest::Method::Post);
}

AddDeviceToSharePromotionRequest::~AddDeviceToSharePromotionRequest()
{}

std::string AddDeviceToSharePromotionRequest::getSharePromotionActivityId()const
{
	return sharePromotionActivityId_;
}

void AddDeviceToSharePromotionRequest::setSharePromotionActivityId(const std::string& sharePromotionActivityId)
{
	sharePromotionActivityId_ = sharePromotionActivityId;
	setBodyParameter("SharePromotionActivityId", sharePromotionActivityId);
}

std::vector<AddDeviceToSharePromotionRequest::DeviceSimpleInfoList> AddDeviceToSharePromotionRequest::getDeviceSimpleInfoList()const
{
	return deviceSimpleInfoList_;
}

void AddDeviceToSharePromotionRequest::setDeviceSimpleInfoList(const std::vector<DeviceSimpleInfoList>& deviceSimpleInfoList)
{
	deviceSimpleInfoList_ = deviceSimpleInfoList;
	for(int dep1 = 0; dep1!= deviceSimpleInfoList.size(); dep1++) {
		auto deviceSimpleInfoListObj = deviceSimpleInfoList.at(dep1);
		std::string deviceSimpleInfoListObjStr = "DeviceSimpleInfoList." + std::to_string(dep1 + 1);
		setParameter(deviceSimpleInfoListObjStr + ".DeviceName", deviceSimpleInfoListObj.deviceName);
		setParameter(deviceSimpleInfoListObjStr + ".ProductKey", deviceSimpleInfoListObj.productKey);
	}
}

std::string AddDeviceToSharePromotionRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void AddDeviceToSharePromotionRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string AddDeviceToSharePromotionRequest::getShareTaskCode()const
{
	return shareTaskCode_;
}

void AddDeviceToSharePromotionRequest::setShareTaskCode(const std::string& shareTaskCode)
{
	shareTaskCode_ = shareTaskCode;
	setBodyParameter("ShareTaskCode", shareTaskCode);
}

std::string AddDeviceToSharePromotionRequest::getApiProduct()const
{
	return apiProduct_;
}

void AddDeviceToSharePromotionRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string AddDeviceToSharePromotionRequest::getApiRevision()const
{
	return apiRevision_;
}

void AddDeviceToSharePromotionRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

