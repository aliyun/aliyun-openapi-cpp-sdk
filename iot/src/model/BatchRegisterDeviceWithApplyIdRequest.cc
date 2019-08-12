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

#include <alibabacloud/iot/model/BatchRegisterDeviceWithApplyIdRequest.h>

using AlibabaCloud::Iot::Model::BatchRegisterDeviceWithApplyIdRequest;

BatchRegisterDeviceWithApplyIdRequest::BatchRegisterDeviceWithApplyIdRequest() :
	RpcServiceRequest("iot", "2018-01-20", "BatchRegisterDeviceWithApplyId")
{}

BatchRegisterDeviceWithApplyIdRequest::~BatchRegisterDeviceWithApplyIdRequest()
{}

long BatchRegisterDeviceWithApplyIdRequest::getApplyId()const
{
	return applyId_;
}

void BatchRegisterDeviceWithApplyIdRequest::setApplyId(long applyId)
{
	applyId_ = applyId;
	setCoreParameter("ApplyId", applyId);
}

std::string BatchRegisterDeviceWithApplyIdRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void BatchRegisterDeviceWithApplyIdRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", std::to_string(iotInstanceId));
}

std::string BatchRegisterDeviceWithApplyIdRequest::getProductKey()const
{
	return productKey_;
}

void BatchRegisterDeviceWithApplyIdRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", std::to_string(productKey));
}

std::string BatchRegisterDeviceWithApplyIdRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BatchRegisterDeviceWithApplyIdRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

