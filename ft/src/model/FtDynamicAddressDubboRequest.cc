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

#include <alibabacloud/ft/model/FtDynamicAddressDubboRequest.h>

using AlibabaCloud::Ft::Model::FtDynamicAddressDubboRequest;

FtDynamicAddressDubboRequest::FtDynamicAddressDubboRequest() :
	RpcServiceRequest("ft", "2018-07-13", "FtDynamicAddressDubbo")
{
	setMethod(HttpRequest::Method::Post);
}

FtDynamicAddressDubboRequest::~FtDynamicAddressDubboRequest()
{}

int FtDynamicAddressDubboRequest::getIntValue()const
{
	return intValue_;
}

void FtDynamicAddressDubboRequest::setIntValue(int intValue)
{
	intValue_ = intValue;
	setParameter("IntValue", std::to_string(intValue));
}

std::string FtDynamicAddressDubboRequest::getStringValue()const
{
	return stringValue_;
}

void FtDynamicAddressDubboRequest::setStringValue(const std::string& stringValue)
{
	stringValue_ = stringValue;
	setParameter("StringValue", stringValue);
}

