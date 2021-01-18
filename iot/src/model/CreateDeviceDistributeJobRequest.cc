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

#include <alibabacloud/iot/model/CreateDeviceDistributeJobRequest.h>

using AlibabaCloud::Iot::Model::CreateDeviceDistributeJobRequest;

CreateDeviceDistributeJobRequest::CreateDeviceDistributeJobRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateDeviceDistributeJob")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDeviceDistributeJobRequest::~CreateDeviceDistributeJobRequest()
{}

std::string CreateDeviceDistributeJobRequest::getCaptcha()const
{
	return captcha_;
}

void CreateDeviceDistributeJobRequest::setCaptcha(const std::string& captcha)
{
	captcha_ = captcha;
	setBodyParameter("Captcha", captcha);
}

std::string CreateDeviceDistributeJobRequest::getSourceInstanceId()const
{
	return sourceInstanceId_;
}

void CreateDeviceDistributeJobRequest::setSourceInstanceId(const std::string& sourceInstanceId)
{
	sourceInstanceId_ = sourceInstanceId;
	setBodyParameter("SourceInstanceId", sourceInstanceId);
}

std::string CreateDeviceDistributeJobRequest::getTargetAliyunId()const
{
	return targetAliyunId_;
}

void CreateDeviceDistributeJobRequest::setTargetAliyunId(const std::string& targetAliyunId)
{
	targetAliyunId_ = targetAliyunId;
	setBodyParameter("TargetAliyunId", targetAliyunId);
}

std::vector<CreateDeviceDistributeJobRequest::TargetInstanceConfig> CreateDeviceDistributeJobRequest::getTargetInstanceConfig()const
{
	return targetInstanceConfig_;
}

void CreateDeviceDistributeJobRequest::setTargetInstanceConfig(const std::vector<TargetInstanceConfig>& targetInstanceConfig)
{
	targetInstanceConfig_ = targetInstanceConfig;
	for(int dep1 = 0; dep1!= targetInstanceConfig.size(); dep1++) {
		auto targetInstanceConfigObj = targetInstanceConfig.at(dep1);
		std::string targetInstanceConfigObjStr = "TargetInstanceConfig." + std::to_string(dep1 + 1);
		setParameter(targetInstanceConfigObjStr + ".TargetInstanceId", targetInstanceConfigObj.targetInstanceId);
	}
}

std::string CreateDeviceDistributeJobRequest::getProductKey()const
{
	return productKey_;
}

void CreateDeviceDistributeJobRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setBodyParameter("ProductKey", productKey);
}

std::string CreateDeviceDistributeJobRequest::getApiProduct()const
{
	return apiProduct_;
}

void CreateDeviceDistributeJobRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CreateDeviceDistributeJobRequest::getApiRevision()const
{
	return apiRevision_;
}

void CreateDeviceDistributeJobRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::vector<std::string> CreateDeviceDistributeJobRequest::getDeviceName()const
{
	return deviceName_;
}

void CreateDeviceDistributeJobRequest::setDeviceName(const std::vector<std::string>& deviceName)
{
	deviceName_ = deviceName;
	for(int dep1 = 0; dep1!= deviceName.size(); dep1++) {
		setBodyParameter("DeviceName."+ std::to_string(dep1), deviceName.at(dep1));
	}
}

std::string CreateDeviceDistributeJobRequest::getTargetUid()const
{
	return targetUid_;
}

void CreateDeviceDistributeJobRequest::setTargetUid(const std::string& targetUid)
{
	targetUid_ = targetUid;
	setBodyParameter("TargetUid", targetUid);
}

int CreateDeviceDistributeJobRequest::getStrategy()const
{
	return strategy_;
}

void CreateDeviceDistributeJobRequest::setStrategy(int strategy)
{
	strategy_ = strategy;
	setBodyParameter("Strategy", std::to_string(strategy));
}

