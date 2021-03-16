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

#include <alibabacloud/reid_cloud/model/DescribeIpcLiveAddressRequest.h>

using AlibabaCloud::Reid_cloud::Model::DescribeIpcLiveAddressRequest;

DescribeIpcLiveAddressRequest::DescribeIpcLiveAddressRequest() :
	RpcServiceRequest("reid_cloud", "2020-10-29", "DescribeIpcLiveAddress")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeIpcLiveAddressRequest::~DescribeIpcLiveAddressRequest()
{}

long DescribeIpcLiveAddressRequest::getIpcId()const
{
	return ipcId_;
}

void DescribeIpcLiveAddressRequest::setIpcId(long ipcId)
{
	ipcId_ = ipcId;
	setBodyParameter("IpcId", std::to_string(ipcId));
}

long DescribeIpcLiveAddressRequest::getStoreId()const
{
	return storeId_;
}

void DescribeIpcLiveAddressRequest::setStoreId(long storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", std::to_string(storeId));
}

std::string DescribeIpcLiveAddressRequest::getProtocolType()const
{
	return protocolType_;
}

void DescribeIpcLiveAddressRequest::setProtocolType(const std::string& protocolType)
{
	protocolType_ = protocolType;
	setBodyParameter("ProtocolType", protocolType);
}

