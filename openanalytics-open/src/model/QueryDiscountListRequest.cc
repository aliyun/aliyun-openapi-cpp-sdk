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

#include <alibabacloud/openanalytics-open/model/QueryDiscountListRequest.h>

using AlibabaCloud::Openanalytics_open::Model::QueryDiscountListRequest;

QueryDiscountListRequest::QueryDiscountListRequest() :
	RpcServiceRequest("openanalytics-open", "2018-06-19", "QueryDiscountList")
{
	setMethod(HttpRequest::Method::Post);
}

QueryDiscountListRequest::~QueryDiscountListRequest()
{}

std::string QueryDiscountListRequest::getRegionId()const
{
	return regionId_;
}

void QueryDiscountListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setBodyParameter("RegionId", regionId);
}

int QueryDiscountListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryDiscountListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

int QueryDiscountListRequest::getPageNumber()const
{
	return pageNumber_;
}

void QueryDiscountListRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

