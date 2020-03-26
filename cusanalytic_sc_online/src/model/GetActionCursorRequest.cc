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

#include <alibabacloud/cusanalytic_sc_online/model/GetActionCursorRequest.h>

using AlibabaCloud::Cusanalytic_sc_online::Model::GetActionCursorRequest;

GetActionCursorRequest::GetActionCursorRequest() :
	RpcServiceRequest("cusanalytic_sc_online", "2019-05-24", "GetActionCursor")
{
	setMethod(HttpRequest::Method::Post);
}

GetActionCursorRequest::~GetActionCursorRequest()
{}

std::string GetActionCursorRequest::getStoreId()const
{
	return storeId_;
}

void GetActionCursorRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", storeId);
}

