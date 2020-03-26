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

#include <alibabacloud/ft/model/TestHttpApiRequest.h>

using AlibabaCloud::Ft::Model::TestHttpApiRequest;

TestHttpApiRequest::TestHttpApiRequest() :
	RpcServiceRequest("ft", "2018-07-13", "TestHttpApi")
{
	setMethod(HttpRequest::Method::Post);
}

TestHttpApiRequest::~TestHttpApiRequest()
{}

std::string TestHttpApiRequest::getStringValue()const
{
	return stringValue_;
}

void TestHttpApiRequest::setStringValue(const std::string& stringValue)
{
	stringValue_ = stringValue;
	setParameter("StringValue", stringValue);
}

std::string TestHttpApiRequest::getOtherParam()const
{
	return otherParam_;
}

void TestHttpApiRequest::setOtherParam(const std::string& otherParam)
{
	otherParam_ = otherParam;
	setParameter("OtherParam", otherParam);
}

bool TestHttpApiRequest::getBooleanParam()const
{
	return booleanParam_;
}

void TestHttpApiRequest::setBooleanParam(bool booleanParam)
{
	booleanParam_ = booleanParam;
	setParameter("BooleanParam", booleanParam ? "true" : "false");
}

std::string TestHttpApiRequest::getDefaultValue()const
{
	return defaultValue_;
}

void TestHttpApiRequest::setDefaultValue(const std::string& defaultValue)
{
	defaultValue_ = defaultValue;
	setParameter("DefaultValue", defaultValue);
}

