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

#include <alibabacloud/iot/model/QuerySolutionDeviceGroupPageRequest.h>

using AlibabaCloud::Iot::Model::QuerySolutionDeviceGroupPageRequest;

QuerySolutionDeviceGroupPageRequest::QuerySolutionDeviceGroupPageRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QuerySolutionDeviceGroupPage")
{
	setMethod(HttpRequest::Method::Post);
}

QuerySolutionDeviceGroupPageRequest::~QuerySolutionDeviceGroupPageRequest()
{}

std::string QuerySolutionDeviceGroupPageRequest::getFuzzyGroupName()const
{
	return fuzzyGroupName_;
}

void QuerySolutionDeviceGroupPageRequest::setFuzzyGroupName(const std::string& fuzzyGroupName)
{
	fuzzyGroupName_ = fuzzyGroupName;
	setParameter("FuzzyGroupName", fuzzyGroupName);
}

std::string QuerySolutionDeviceGroupPageRequest::getProjectCode()const
{
	return projectCode_;
}

void QuerySolutionDeviceGroupPageRequest::setProjectCode(const std::string& projectCode)
{
	projectCode_ = projectCode;
	setParameter("ProjectCode", projectCode);
}

int QuerySolutionDeviceGroupPageRequest::getPageId()const
{
	return pageId_;
}

void QuerySolutionDeviceGroupPageRequest::setPageId(int pageId)
{
	pageId_ = pageId;
	setParameter("PageId", std::to_string(pageId));
}

std::string QuerySolutionDeviceGroupPageRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QuerySolutionDeviceGroupPageRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

int QuerySolutionDeviceGroupPageRequest::getPageSize()const
{
	return pageSize_;
}

void QuerySolutionDeviceGroupPageRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QuerySolutionDeviceGroupPageRequest::getApiProduct()const
{
	return apiProduct_;
}

void QuerySolutionDeviceGroupPageRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QuerySolutionDeviceGroupPageRequest::getApiRevision()const
{
	return apiRevision_;
}

void QuerySolutionDeviceGroupPageRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

