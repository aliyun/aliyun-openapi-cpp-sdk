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

#include <alibabacloud/cms/model/PutMetricDataRequest.h>

using AlibabaCloud::Cms::Model::PutMetricDataRequest;

PutMetricDataRequest::PutMetricDataRequest() :
	RpcServiceRequest("cms", "2017-03-01", "PutMetricData")
{}

PutMetricDataRequest::~PutMetricDataRequest()
{}

std::string PutMetricDataRequest::getCallby_cms_owner()const
{
	return callby_cms_owner_;
}

void PutMetricDataRequest::setCallby_cms_owner(const std::string& callby_cms_owner)
{
	callby_cms_owner_ = callby_cms_owner;
	setParameter("Callby_cms_owner", callby_cms_owner);
}

std::string PutMetricDataRequest::getBody()const
{
	return body_;
}

void PutMetricDataRequest::setBody(const std::string& body)
{
	body_ = body;
	setParameter("Body", body);
}

