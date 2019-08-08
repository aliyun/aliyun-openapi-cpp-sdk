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

#include <alibabacloud/cms/model/SendDryRunSystemEventRequest.h>

using AlibabaCloud::Cms::Model::SendDryRunSystemEventRequest;

SendDryRunSystemEventRequest::SendDryRunSystemEventRequest() :
	RpcServiceRequest("cms", "2018-03-08", "SendDryRunSystemEvent")
{}

SendDryRunSystemEventRequest::~SendDryRunSystemEventRequest()
{}

std::string SendDryRunSystemEventRequest::getProduct()const
{
	return product_;
}

void SendDryRunSystemEventRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", product);
}

std::string SendDryRunSystemEventRequest::getGroupId()const
{
	return groupId_;
}

void SendDryRunSystemEventRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string SendDryRunSystemEventRequest::getEventName()const
{
	return eventName_;
}

void SendDryRunSystemEventRequest::setEventName(const std::string& eventName)
{
	eventName_ = eventName;
	setCoreParameter("EventName", eventName);
}

std::string SendDryRunSystemEventRequest::getEventContent()const
{
	return eventContent_;
}

void SendDryRunSystemEventRequest::setEventContent(const std::string& eventContent)
{
	eventContent_ = eventContent;
	setCoreParameter("EventContent", eventContent);
}

