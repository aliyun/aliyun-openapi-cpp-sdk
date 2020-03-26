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

#include <alibabacloud/cloudwf/model/ShopCameraRequest.h>

using AlibabaCloud::Cloudwf::Model::ShopCameraRequest;

ShopCameraRequest::ShopCameraRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ShopCamera")
{
	setMethod(HttpRequest::Method::Post);
}

ShopCameraRequest::~ShopCameraRequest()
{}

std::string ShopCameraRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ShopCameraRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long ShopCameraRequest::getGsid()const
{
	return gsid_;
}

void ShopCameraRequest::setGsid(long gsid)
{
	gsid_ = gsid;
	setParameter("Gsid", std::to_string(gsid));
}

