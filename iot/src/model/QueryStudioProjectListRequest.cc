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

#include <alibabacloud/iot/model/QueryStudioProjectListRequest.h>

using AlibabaCloud::Iot::Model::QueryStudioProjectListRequest;

QueryStudioProjectListRequest::QueryStudioProjectListRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryStudioProjectList")
{
	setMethod(HttpRequest::Method::Post);
}

QueryStudioProjectListRequest::~QueryStudioProjectListRequest()
{}

std::string QueryStudioProjectListRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryStudioProjectListRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

int QueryStudioProjectListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryStudioProjectListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

int QueryStudioProjectListRequest::getPageNo()const
{
	return pageNo_;
}

void QueryStudioProjectListRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setBodyParameter("PageNo", std::to_string(pageNo));
}

std::string QueryStudioProjectListRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryStudioProjectListRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryStudioProjectListRequest::getName()const
{
	return name_;
}

void QueryStudioProjectListRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

std::string QueryStudioProjectListRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryStudioProjectListRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

