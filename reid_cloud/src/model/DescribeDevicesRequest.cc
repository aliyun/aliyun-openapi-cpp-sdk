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

#include <alibabacloud/reid_cloud/model/DescribeDevicesRequest.h>

using AlibabaCloud::Reid_cloud::Model::DescribeDevicesRequest;

DescribeDevicesRequest::DescribeDevicesRequest() :
	RpcServiceRequest("reid_cloud", "2020-10-29", "DescribeDevices")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDevicesRequest::~DescribeDevicesRequest()
{}

long DescribeDevicesRequest::getStoreId()const
{
	return storeId_;
}

void DescribeDevicesRequest::setStoreId(long storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", std::to_string(storeId));
}

