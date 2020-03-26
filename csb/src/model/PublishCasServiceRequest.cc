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

#include <alibabacloud/csb/model/PublishCasServiceRequest.h>

using AlibabaCloud::CSB::Model::PublishCasServiceRequest;

PublishCasServiceRequest::PublishCasServiceRequest() :
	RpcServiceRequest("csb", "2017-11-18", "PublishCasService")
{
	setMethod(HttpRequest::Method::Post);
}

PublishCasServiceRequest::~PublishCasServiceRequest()
{}

std::string PublishCasServiceRequest::getCasCsbName()const
{
	return casCsbName_;
}

void PublishCasServiceRequest::setCasCsbName(const std::string& casCsbName)
{
	casCsbName_ = casCsbName;
	setParameter("CasCsbName", casCsbName);
}

std::string PublishCasServiceRequest::getData()const
{
	return data_;
}

void PublishCasServiceRequest::setData(const std::string& data)
{
	data_ = data;
	setBodyParameter("Data", data);
}

