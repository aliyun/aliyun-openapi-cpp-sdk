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

#include <alibabacloud/ft/model/FtDynamicAddressHttpVpcRequest.h>

using AlibabaCloud::Ft::Model::FtDynamicAddressHttpVpcRequest;

FtDynamicAddressHttpVpcRequest::FtDynamicAddressHttpVpcRequest() :
	RpcServiceRequest("ft", "2018-07-13", "FtDynamicAddressHttpVpc")
{
	setMethod(HttpRequest::Method::Post);
}

FtDynamicAddressHttpVpcRequest::~FtDynamicAddressHttpVpcRequest()
{}

std::string FtDynamicAddressHttpVpcRequest::getP1()const
{
	return p1_;
}

void FtDynamicAddressHttpVpcRequest::setP1(const std::string& p1)
{
	p1_ = p1;
	setParameter("P1", p1);
}

std::string FtDynamicAddressHttpVpcRequest::getStringValue()const
{
	return stringValue_;
}

void FtDynamicAddressHttpVpcRequest::setStringValue(const std::string& stringValue)
{
	stringValue_ = stringValue;
	setParameter("StringValue", stringValue);
}

std::string FtDynamicAddressHttpVpcRequest::getOtherParam()const
{
	return otherParam_;
}

void FtDynamicAddressHttpVpcRequest::setOtherParam(const std::string& otherParam)
{
	otherParam_ = otherParam;
	setParameter("OtherParam", otherParam);
}

bool FtDynamicAddressHttpVpcRequest::getBooleanParam()const
{
	return booleanParam_;
}

void FtDynamicAddressHttpVpcRequest::setBooleanParam(bool booleanParam)
{
	booleanParam_ = booleanParam;
	setParameter("BooleanParam", booleanParam ? "true" : "false");
}

std::string FtDynamicAddressHttpVpcRequest::getDefaultValue()const
{
	return defaultValue_;
}

void FtDynamicAddressHttpVpcRequest::setDefaultValue(const std::string& defaultValue)
{
	defaultValue_ = defaultValue;
	setParameter("DefaultValue", defaultValue);
}

