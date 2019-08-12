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

#include <alibabacloud/linkface/model/SyncFacePicturesRequest.h>

using AlibabaCloud::LinkFace::Model::SyncFacePicturesRequest;

SyncFacePicturesRequest::SyncFacePicturesRequest() :
	RpcServiceRequest("linkface", "2018-07-20", "SyncFacePictures")
{}

SyncFacePicturesRequest::~SyncFacePicturesRequest()
{}

std::string SyncFacePicturesRequest::getIotId()const
{
	return iotId_;
}

void SyncFacePicturesRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setCoreParameter("IotId", std::to_string(iotId));
}

std::string SyncFacePicturesRequest::getGroupId()const
{
	return groupId_;
}

void SyncFacePicturesRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

std::string SyncFacePicturesRequest::getDeviceName()const
{
	return deviceName_;
}

void SyncFacePicturesRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setCoreParameter("DeviceName", std::to_string(deviceName));
}

std::string SyncFacePicturesRequest::getProductKey()const
{
	return productKey_;
}

void SyncFacePicturesRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", std::to_string(productKey));
}

