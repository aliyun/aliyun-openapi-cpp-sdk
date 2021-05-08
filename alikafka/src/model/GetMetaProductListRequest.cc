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

#include <alibabacloud/alikafka/model/GetMetaProductListRequest.h>

using AlibabaCloud::Alikafka::Model::GetMetaProductListRequest;

GetMetaProductListRequest::GetMetaProductListRequest() :
	RpcServiceRequest("alikafka", "2019-09-16", "GetMetaProductList")
{
	setMethod(HttpRequest::Method::Post);
}

GetMetaProductListRequest::~GetMetaProductListRequest()
{}

std::string GetMetaProductListRequest::getListNormal()const
{
	return listNormal_;
}

void GetMetaProductListRequest::setListNormal(const std::string& listNormal)
{
	listNormal_ = listNormal;
	setParameter("ListNormal", listNormal);
}

std::string GetMetaProductListRequest::getRegionId()const
{
	return regionId_;
}

void GetMetaProductListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

