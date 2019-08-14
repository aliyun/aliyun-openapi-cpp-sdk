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

#include <alibabacloud/ram/model/ListPoliciesRequest.h>

using AlibabaCloud::Ram::Model::ListPoliciesRequest;

ListPoliciesRequest::ListPoliciesRequest() :
	RpcServiceRequest("ram", "2015-05-01", "ListPolicies")
{}

ListPoliciesRequest::~ListPoliciesRequest()
{}

std::string ListPoliciesRequest::getPolicyType()const
{
	return policyType_;
}

void ListPoliciesRequest::setPolicyType(const std::string& policyType)
{
	policyType_ = policyType;
	setCoreParameter("PolicyType", policyType);
}

std::string ListPoliciesRequest::getMarker()const
{
	return marker_;
}

void ListPoliciesRequest::setMarker(const std::string& marker)
{
	marker_ = marker;
	setCoreParameter("Marker", marker);
}

int ListPoliciesRequest::getMaxItems()const
{
	return maxItems_;
}

void ListPoliciesRequest::setMaxItems(int maxItems)
{
	maxItems_ = maxItems;
	setCoreParameter("MaxItems", std::to_string(maxItems));
}

