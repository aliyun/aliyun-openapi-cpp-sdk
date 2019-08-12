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

#include <alibabacloud/xspace/model/QueryCustomerByPhoneRequest.h>

using AlibabaCloud::Xspace::Model::QueryCustomerByPhoneRequest;

QueryCustomerByPhoneRequest::QueryCustomerByPhoneRequest() :
	RoaServiceRequest("xspace", "2017-07-20")
{}

QueryCustomerByPhoneRequest::~QueryCustomerByPhoneRequest()
{}

std::string QueryCustomerByPhoneRequest::getPhone()const
{
	return phone_;
}

void QueryCustomerByPhoneRequest::setPhone(const std::string& phone)
{
	phone_ = phone;
	setCoreParameter("Phone", std::to_string(phone));
}

