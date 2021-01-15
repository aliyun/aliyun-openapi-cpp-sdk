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

#include <alibabacloud/cdrs/model/ListPersonTagRequest.h>

using AlibabaCloud::CDRS::Model::ListPersonTagRequest;

ListPersonTagRequest::ListPersonTagRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "ListPersonTag")
{
	setMethod(HttpRequest::Method::Post);
}

ListPersonTagRequest::~ListPersonTagRequest()
{}

std::string ListPersonTagRequest::getSchema()const
{
	return schema_;
}

void ListPersonTagRequest::setSchema(const std::string& schema)
{
	schema_ = schema;
	setBodyParameter("Schema", schema);
}

std::string ListPersonTagRequest::getCorpId()const
{
	return corpId_;
}

void ListPersonTagRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

long ListPersonTagRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListPersonTagRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListPersonTagRequest::getTagCode()const
{
	return tagCode_;
}

void ListPersonTagRequest::setTagCode(const std::string& tagCode)
{
	tagCode_ = tagCode;
	setBodyParameter("TagCode", tagCode);
}

long ListPersonTagRequest::getPageSize()const
{
	return pageSize_;
}

void ListPersonTagRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

