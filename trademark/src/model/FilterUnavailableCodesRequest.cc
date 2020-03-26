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

#include <alibabacloud/trademark/model/FilterUnavailableCodesRequest.h>

using AlibabaCloud::Trademark::Model::FilterUnavailableCodesRequest;

FilterUnavailableCodesRequest::FilterUnavailableCodesRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "FilterUnavailableCodes")
{
	setMethod(HttpRequest::Method::Post);
}

FilterUnavailableCodesRequest::~FilterUnavailableCodesRequest()
{}

std::string FilterUnavailableCodesRequest::getCodes()const
{
	return codes_;
}

void FilterUnavailableCodesRequest::setCodes(const std::string& codes)
{
	codes_ = codes;
	setParameter("Codes", codes);
}

