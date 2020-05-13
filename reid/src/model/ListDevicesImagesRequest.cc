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

#include <alibabacloud/reid/model/ListDevicesImagesRequest.h>

using AlibabaCloud::Reid::Model::ListDevicesImagesRequest;

ListDevicesImagesRequest::ListDevicesImagesRequest() :
	RpcServiceRequest("reid", "2019-09-28", "ListDevicesImages")
{
	setMethod(HttpRequest::Method::Post);
}

ListDevicesImagesRequest::~ListDevicesImagesRequest()
{}

std::string ListDevicesImagesRequest::getIpcIdList()const
{
	return ipcIdList_;
}

void ListDevicesImagesRequest::setIpcIdList(const std::string& ipcIdList)
{
	ipcIdList_ = ipcIdList;
	setBodyParameter("IpcIdList", ipcIdList);
}

long ListDevicesImagesRequest::getStoreId()const
{
	return storeId_;
}

void ListDevicesImagesRequest::setStoreId(long storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", std::to_string(storeId));
}

