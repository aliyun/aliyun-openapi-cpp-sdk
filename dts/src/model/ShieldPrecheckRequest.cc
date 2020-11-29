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

#include <alibabacloud/dts/model/ShieldPrecheckRequest.h>

using AlibabaCloud::Dts::Model::ShieldPrecheckRequest;

ShieldPrecheckRequest::ShieldPrecheckRequest() :
	RpcServiceRequest("dts", "2020-01-01", "ShieldPrecheck")
{
	setMethod(HttpRequest::Method::Post);
}

ShieldPrecheckRequest::~ShieldPrecheckRequest()
{}

std::string ShieldPrecheckRequest::getPrecheckItems()const
{
	return precheckItems_;
}

void ShieldPrecheckRequest::setPrecheckItems(const std::string& precheckItems)
{
	precheckItems_ = precheckItems;
	setParameter("PrecheckItems", precheckItems);
}

std::string ShieldPrecheckRequest::getDtsInstanceId()const
{
	return dtsInstanceId_;
}

void ShieldPrecheckRequest::setDtsInstanceId(const std::string& dtsInstanceId)
{
	dtsInstanceId_ = dtsInstanceId;
	setParameter("DtsInstanceId", dtsInstanceId);
}

