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

#include <alibabacloud/csb/model/PublishUnionCasServiceRequest.h>

using AlibabaCloud::CSB::Model::PublishUnionCasServiceRequest;

PublishUnionCasServiceRequest::PublishUnionCasServiceRequest() :
	RpcServiceRequest("csb", "2017-11-18", "PublishUnionCasService")
{
	setMethod(HttpRequest::Method::Post);
}

PublishUnionCasServiceRequest::~PublishUnionCasServiceRequest()
{}

std::string PublishUnionCasServiceRequest::getCasCsbName()const
{
	return casCsbName_;
}

void PublishUnionCasServiceRequest::setCasCsbName(const std::string& casCsbName)
{
	casCsbName_ = casCsbName;
	setParameter("CasCsbName", casCsbName);
}

std::string PublishUnionCasServiceRequest::getData()const
{
	return data_;
}

void PublishUnionCasServiceRequest::setData(const std::string& data)
{
	data_ = data;
	setBodyParameter("Data", data);
}

