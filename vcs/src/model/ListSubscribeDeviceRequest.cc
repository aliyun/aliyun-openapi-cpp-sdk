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

#include <alibabacloud/vcs/model/ListSubscribeDeviceRequest.h>

using AlibabaCloud::Vcs::Model::ListSubscribeDeviceRequest;

ListSubscribeDeviceRequest::ListSubscribeDeviceRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "ListSubscribeDevice")
{
	setMethod(HttpRequest::Method::Post);
}

ListSubscribeDeviceRequest::~ListSubscribeDeviceRequest()
{}

int ListSubscribeDeviceRequest::getPageSize()const
{
	return pageSize_;
}

void ListSubscribeDeviceRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListSubscribeDeviceRequest::getPageNum()const
{
	return pageNum_;
}

void ListSubscribeDeviceRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

