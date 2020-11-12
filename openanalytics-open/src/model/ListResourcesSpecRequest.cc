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

#include <alibabacloud/openanalytics-open/model/ListResourcesSpecRequest.h>

using AlibabaCloud::Openanalytics_open::Model::ListResourcesSpecRequest;

ListResourcesSpecRequest::ListResourcesSpecRequest() :
	RpcServiceRequest("openanalytics-open", "2018-06-19", "ListResourcesSpec")
{
	setMethod(HttpRequest::Method::Get);
}

ListResourcesSpecRequest::~ListResourcesSpecRequest()
{}

std::string ListResourcesSpecRequest::getType()const
{
	return type_;
}

void ListResourcesSpecRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

