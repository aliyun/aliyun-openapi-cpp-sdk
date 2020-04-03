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

#include <alibabacloud/cloudesl/model/DissociatePlanogramRailRequest.h>

using AlibabaCloud::Cloudesl::Model::DissociatePlanogramRailRequest;

DissociatePlanogramRailRequest::DissociatePlanogramRailRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "DissociatePlanogramRail")
{
	setMethod(HttpRequest::Method::Post);
}

DissociatePlanogramRailRequest::~DissociatePlanogramRailRequest()
{}

std::string DissociatePlanogramRailRequest::getStoreId()const
{
	return storeId_;
}

void DissociatePlanogramRailRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", storeId);
}

std::string DissociatePlanogramRailRequest::getRailCode()const
{
	return railCode_;
}

void DissociatePlanogramRailRequest::setRailCode(const std::string& railCode)
{
	railCode_ = railCode;
	setBodyParameter("RailCode", railCode);
}

