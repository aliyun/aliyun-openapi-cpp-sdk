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

#include <alibabacloud/idrsservice/model/ListFilesRequest.h>

using AlibabaCloud::Idrsservice::Model::ListFilesRequest;

ListFilesRequest::ListFilesRequest() :
	RpcServiceRequest("idrsservice", "2020-06-30", "ListFiles")
{
	setMethod(HttpRequest::Method::Post);
}

ListFilesRequest::~ListFilesRequest()
{}

std::string ListFilesRequest::getPrefix()const
{
	return prefix_;
}

void ListFilesRequest::setPrefix(const std::string& prefix)
{
	prefix_ = prefix;
	setBodyParameter("Prefix", prefix);
}

int ListFilesRequest::getLimit()const
{
	return limit_;
}

void ListFilesRequest::setLimit(int limit)
{
	limit_ = limit;
	setBodyParameter("Limit", std::to_string(limit));
}

