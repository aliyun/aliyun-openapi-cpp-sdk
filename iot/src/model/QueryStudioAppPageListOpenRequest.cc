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

#include <alibabacloud/iot/model/QueryStudioAppPageListOpenRequest.h>

using AlibabaCloud::Iot::Model::QueryStudioAppPageListOpenRequest;

QueryStudioAppPageListOpenRequest::QueryStudioAppPageListOpenRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryStudioAppPageListOpen")
{
	setMethod(HttpRequest::Method::Post);
}

QueryStudioAppPageListOpenRequest::~QueryStudioAppPageListOpenRequest()
{}

std::string QueryStudioAppPageListOpenRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryStudioAppPageListOpenRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

int QueryStudioAppPageListOpenRequest::getPageSize()const
{
	return pageSize_;
}

void QueryStudioAppPageListOpenRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string QueryStudioAppPageListOpenRequest::getProjectId()const
{
	return projectId_;
}

void QueryStudioAppPageListOpenRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", projectId);
}

bool QueryStudioAppPageListOpenRequest::getIsRelease()const
{
	return isRelease_;
}

void QueryStudioAppPageListOpenRequest::setIsRelease(bool isRelease)
{
	isRelease_ = isRelease;
	setBodyParameter("IsRelease", isRelease ? "true" : "false");
}

int QueryStudioAppPageListOpenRequest::getPageNo()const
{
	return pageNo_;
}

void QueryStudioAppPageListOpenRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setBodyParameter("PageNo", std::to_string(pageNo));
}

std::string QueryStudioAppPageListOpenRequest::getAppId()const
{
	return appId_;
}

void QueryStudioAppPageListOpenRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setBodyParameter("AppId", appId);
}

std::string QueryStudioAppPageListOpenRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryStudioAppPageListOpenRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryStudioAppPageListOpenRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryStudioAppPageListOpenRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

