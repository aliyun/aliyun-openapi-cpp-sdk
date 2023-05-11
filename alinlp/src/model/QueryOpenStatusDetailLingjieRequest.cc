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

#include <alibabacloud/alinlp/model/QueryOpenStatusDetailLingjieRequest.h>

using AlibabaCloud::Alinlp::Model::QueryOpenStatusDetailLingjieRequest;

QueryOpenStatusDetailLingjieRequest::QueryOpenStatusDetailLingjieRequest() :
	RpcServiceRequest("alinlp", "2020-06-29", "QueryOpenStatusDetailLingjie")
{
	setMethod(HttpRequest::Method::Post);
}

QueryOpenStatusDetailLingjieRequest::~QueryOpenStatusDetailLingjieRequest()
{}

std::string QueryOpenStatusDetailLingjieRequest::getCommodity()const
{
	return commodity_;
}

void QueryOpenStatusDetailLingjieRequest::setCommodity(const std::string& commodity)
{
	commodity_ = commodity;
	setParameter("Commodity", commodity);
}

std::string QueryOpenStatusDetailLingjieRequest::getTabName()const
{
	return tabName_;
}

void QueryOpenStatusDetailLingjieRequest::setTabName(const std::string& tabName)
{
	tabName_ = tabName;
	setParameter("TabName", tabName);
}

std::string QueryOpenStatusDetailLingjieRequest::getServiceCode()const
{
	return serviceCode_;
}

void QueryOpenStatusDetailLingjieRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setParameter("ServiceCode", serviceCode);
}

std::string QueryOpenStatusDetailLingjieRequest::getRegion()const
{
	return region_;
}

void QueryOpenStatusDetailLingjieRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

