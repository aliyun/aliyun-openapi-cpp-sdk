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

#include <alibabacloud/iot/model/ListDestinationRequest.h>

using AlibabaCloud::Iot::Model::ListDestinationRequest;

ListDestinationRequest::ListDestinationRequest() :
	RpcServiceRequest("iot", "2018-01-20", "ListDestination")
{
	setMethod(HttpRequest::Method::Post);
}

ListDestinationRequest::~ListDestinationRequest()
{}

std::string ListDestinationRequest::getSearchName()const
{
	return searchName_;
}

void ListDestinationRequest::setSearchName(const std::string& searchName)
{
	searchName_ = searchName;
	setParameter("SearchName", searchName);
}

std::string ListDestinationRequest::getRealTenantId()const
{
	return realTenantId_;
}

void ListDestinationRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

std::string ListDestinationRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void ListDestinationRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string ListDestinationRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ListDestinationRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

int ListDestinationRequest::getPageSize()const
{
	return pageSize_;
}

void ListDestinationRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::vector<std::string> ListDestinationRequest::getTypes()const
{
	return types_;
}

void ListDestinationRequest::setTypes(const std::vector<std::string>& types)
{
	types_ = types;
	for(int dep1 = 0; dep1!= types.size(); dep1++) {
		setParameter("Types."+ std::to_string(dep1), types.at(dep1));
	}
}

std::string ListDestinationRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListDestinationRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListDestinationRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListDestinationRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

int ListDestinationRequest::getPage()const
{
	return page_;
}

void ListDestinationRequest::setPage(int page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

