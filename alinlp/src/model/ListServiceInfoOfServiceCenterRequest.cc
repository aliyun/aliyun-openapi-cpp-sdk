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

#include <alibabacloud/alinlp/model/ListServiceInfoOfServiceCenterRequest.h>

using AlibabaCloud::Alinlp::Model::ListServiceInfoOfServiceCenterRequest;

ListServiceInfoOfServiceCenterRequest::ListServiceInfoOfServiceCenterRequest() :
	RpcServiceRequest("alinlp", "2020-06-29", "ListServiceInfoOfServiceCenter")
{
	setMethod(HttpRequest::Method::Post);
}

ListServiceInfoOfServiceCenterRequest::~ListServiceInfoOfServiceCenterRequest()
{}

std::string ListServiceInfoOfServiceCenterRequest::getServiceCode()const
{
	return serviceCode_;
}

void ListServiceInfoOfServiceCenterRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setBodyParameter("ServiceCode", serviceCode);
}

std::string ListServiceInfoOfServiceCenterRequest::getOneLeveCategoryName()const
{
	return oneLeveCategoryName_;
}

void ListServiceInfoOfServiceCenterRequest::setOneLeveCategoryName(const std::string& oneLeveCategoryName)
{
	oneLeveCategoryName_ = oneLeveCategoryName;
	setBodyParameter("OneLeveCategoryName", oneLeveCategoryName);
}

std::string ListServiceInfoOfServiceCenterRequest::getTwoLeveCategoryName()const
{
	return twoLeveCategoryName_;
}

void ListServiceInfoOfServiceCenterRequest::setTwoLeveCategoryName(const std::string& twoLeveCategoryName)
{
	twoLeveCategoryName_ = twoLeveCategoryName;
	setBodyParameter("TwoLeveCategoryName", twoLeveCategoryName);
}

