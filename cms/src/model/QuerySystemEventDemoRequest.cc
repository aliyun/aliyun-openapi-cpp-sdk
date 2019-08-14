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

#include <alibabacloud/cms/model/QuerySystemEventDemoRequest.h>

using AlibabaCloud::Cms::Model::QuerySystemEventDemoRequest;

QuerySystemEventDemoRequest::QuerySystemEventDemoRequest() :
	RpcServiceRequest("cms", "2018-03-08", "QuerySystemEventDemo")
{}

QuerySystemEventDemoRequest::~QuerySystemEventDemoRequest()
{}

std::string QuerySystemEventDemoRequest::getProduct()const
{
	return product_;
}

void QuerySystemEventDemoRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", product);
}

std::string QuerySystemEventDemoRequest::getEventName()const
{
	return eventName_;
}

void QuerySystemEventDemoRequest::setEventName(const std::string& eventName)
{
	eventName_ = eventName;
	setCoreParameter("EventName", eventName);
}

