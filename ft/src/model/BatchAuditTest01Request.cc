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

#include <alibabacloud/ft/model/BatchAuditTest01Request.h>

using AlibabaCloud::Ft::Model::BatchAuditTest01Request;

BatchAuditTest01Request::BatchAuditTest01Request() :
	RpcServiceRequest("ft", "2018-07-13", "BatchAuditTest01")
{
	setMethod(HttpRequest::Method::POST);
}

BatchAuditTest01Request::~BatchAuditTest01Request()
{}

std::string BatchAuditTest01Request::getDemo01()const
{
	return demo01_;
}

void BatchAuditTest01Request::setDemo01(const std::string& demo01)
{
	demo01_ = demo01;
	setParameter("Demo01", demo01);
}

bool BatchAuditTest01Request::getTest010101()const
{
	return test010101_;
}

void BatchAuditTest01Request::setTest010101(bool test010101)
{
	test010101_ = test010101;
	setBodyParameter("Test010101", test010101 ? "true" : "false");
}

std::string BatchAuditTest01Request::getName()const
{
	return name_;
}

void BatchAuditTest01Request::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string BatchAuditTest01Request::getBatchAuditTest01()const
{
	return batchAuditTest01_;
}

void BatchAuditTest01Request::setBatchAuditTest01(const std::string& batchAuditTest01)
{
	batchAuditTest01_ = batchAuditTest01;
	setParameter("BatchAuditTest01", batchAuditTest01);
}

