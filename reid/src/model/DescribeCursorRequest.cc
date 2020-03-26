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

#include <alibabacloud/reid/model/DescribeCursorRequest.h>

using AlibabaCloud::Reid::Model::DescribeCursorRequest;

DescribeCursorRequest::DescribeCursorRequest() :
	RpcServiceRequest("reid", "2019-09-28", "DescribeCursor")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCursorRequest::~DescribeCursorRequest()
{}

long DescribeCursorRequest::getStoreId()const
{
	return storeId_;
}

void DescribeCursorRequest::setStoreId(long storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", std::to_string(storeId));
}

std::string DescribeCursorRequest::getTime()const
{
	return time_;
}

void DescribeCursorRequest::setTime(const std::string& time)
{
	time_ = time;
	setBodyParameter("Time", time);
}

