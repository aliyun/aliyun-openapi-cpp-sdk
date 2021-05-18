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

#include <alibabacloud/iot/model/QueryStudioAppListRequest.h>

using AlibabaCloud::Iot::Model::QueryStudioAppListRequest;

QueryStudioAppListRequest::QueryStudioAppListRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryStudioAppList")
{
	setMethod(HttpRequest::Method::Post);
}

QueryStudioAppListRequest::~QueryStudioAppListRequest()
{}

std::string QueryStudioAppListRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryStudioAppListRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

int QueryStudioAppListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryStudioAppListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string QueryStudioAppListRequest::getProjectId()const
{
	return projectId_;
}

void QueryStudioAppListRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", projectId);
}

std::vector<std::string> QueryStudioAppListRequest::getTypes()const
{
	return types_;
}

void QueryStudioAppListRequest::setTypes(const std::vector<std::string>& types)
{
	types_ = types;
	for(int dep1 = 0; dep1!= types.size(); dep1++) {
		setBodyParameter("Types."+ std::to_string(dep1), types.at(dep1));
	}
}

std::string QueryStudioAppListRequest::getFuzzyName()const
{
	return fuzzyName_;
}

void QueryStudioAppListRequest::setFuzzyName(const std::string& fuzzyName)
{
	fuzzyName_ = fuzzyName;
	setBodyParameter("FuzzyName", fuzzyName);
}

int QueryStudioAppListRequest::getPageNo()const
{
	return pageNo_;
}

void QueryStudioAppListRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setBodyParameter("PageNo", std::to_string(pageNo));
}

std::string QueryStudioAppListRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryStudioAppListRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryStudioAppListRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryStudioAppListRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

