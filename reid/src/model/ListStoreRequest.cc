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

#include <alibabacloud/reid/model/ListStoreRequest.h>

using AlibabaCloud::Reid::Model::ListStoreRequest;

ListStoreRequest::ListStoreRequest() :
	RpcServiceRequest("reid", "2019-09-28", "ListStore")
{
	setMethod(HttpRequest::Method::Post);
}

ListStoreRequest::~ListStoreRequest()
{}

