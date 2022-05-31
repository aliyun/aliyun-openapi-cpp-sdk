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

#include <alibabacloud/cloudesl/model/GetItemMaterialRequest.h>

using AlibabaCloud::Cloudesl::Model::GetItemMaterialRequest;

GetItemMaterialRequest::GetItemMaterialRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "GetItemMaterial")
{
	setMethod(HttpRequest::Method::Post);
}

GetItemMaterialRequest::~GetItemMaterialRequest()
{}

std::string GetItemMaterialRequest::getBarCode()const
{
	return barCode_;
}

void GetItemMaterialRequest::setBarCode(const std::string& barCode)
{
	barCode_ = barCode;
	setBodyParameter("BarCode", barCode);
}

