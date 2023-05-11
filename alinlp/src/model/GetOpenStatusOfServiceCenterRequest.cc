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

#include <alibabacloud/alinlp/model/GetOpenStatusOfServiceCenterRequest.h>

using AlibabaCloud::Alinlp::Model::GetOpenStatusOfServiceCenterRequest;

GetOpenStatusOfServiceCenterRequest::GetOpenStatusOfServiceCenterRequest() :
	RpcServiceRequest("alinlp", "2020-06-29", "GetOpenStatusOfServiceCenter")
{
	setMethod(HttpRequest::Method::Post);
}

GetOpenStatusOfServiceCenterRequest::~GetOpenStatusOfServiceCenterRequest()
{}

std::string GetOpenStatusOfServiceCenterRequest::getOneLevelCategoryName()const
{
	return oneLevelCategoryName_;
}

void GetOpenStatusOfServiceCenterRequest::setOneLevelCategoryName(const std::string& oneLevelCategoryName)
{
	oneLevelCategoryName_ = oneLevelCategoryName;
	setBodyParameter("OneLevelCategoryName", oneLevelCategoryName);
}

std::string GetOpenStatusOfServiceCenterRequest::getServiceCode()const
{
	return serviceCode_;
}

void GetOpenStatusOfServiceCenterRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setBodyParameter("ServiceCode", serviceCode);
}

std::string GetOpenStatusOfServiceCenterRequest::getTwoLevelCategoryName()const
{
	return twoLevelCategoryName_;
}

void GetOpenStatusOfServiceCenterRequest::setTwoLevelCategoryName(const std::string& twoLevelCategoryName)
{
	twoLevelCategoryName_ = twoLevelCategoryName;
	setBodyParameter("TwoLevelCategoryName", twoLevelCategoryName);
}

