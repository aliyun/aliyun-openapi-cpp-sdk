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

#include <alibabacloud/cloudesl/model/DescribeMaterialsRequest.h>

using AlibabaCloud::Cloudesl::Model::DescribeMaterialsRequest;

DescribeMaterialsRequest::DescribeMaterialsRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "DescribeMaterials")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeMaterialsRequest::~DescribeMaterialsRequest()
{}

std::string DescribeMaterialsRequest::getSource()const
{
	return source_;
}

void DescribeMaterialsRequest::setSource(const std::string& source)
{
	source_ = source;
	setBodyParameter("Source", source);
}

int DescribeMaterialsRequest::getType()const
{
	return type_;
}

void DescribeMaterialsRequest::setType(int type)
{
	type_ = type;
	setBodyParameter("Type", std::to_string(type));
}

std::string DescribeMaterialsRequest::getMaterialId()const
{
	return materialId_;
}

void DescribeMaterialsRequest::setMaterialId(const std::string& materialId)
{
	materialId_ = materialId;
	setBodyParameter("MaterialId", materialId);
}

int DescribeMaterialsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeMaterialsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

int DescribeMaterialsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeMaterialsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeMaterialsRequest::getSize()const
{
	return size_;
}

void DescribeMaterialsRequest::setSize(const std::string& size)
{
	size_ = size;
	setBodyParameter("Size", size);
}

std::string DescribeMaterialsRequest::getName()const
{
	return name_;
}

void DescribeMaterialsRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

