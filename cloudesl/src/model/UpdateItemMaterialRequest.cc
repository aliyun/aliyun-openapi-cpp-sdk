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

#include <alibabacloud/cloudesl/model/UpdateItemMaterialRequest.h>

using AlibabaCloud::Cloudesl::Model::UpdateItemMaterialRequest;

UpdateItemMaterialRequest::UpdateItemMaterialRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "UpdateItemMaterial")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateItemMaterialRequest::~UpdateItemMaterialRequest()
{}

std::string UpdateItemMaterialRequest::getMaterialId()const
{
	return materialId_;
}

void UpdateItemMaterialRequest::setMaterialId(const std::string& materialId)
{
	materialId_ = materialId;
	setBodyParameter("MaterialId", materialId);
}

std::string UpdateItemMaterialRequest::getBarCode()const
{
	return barCode_;
}

void UpdateItemMaterialRequest::setBarCode(const std::string& barCode)
{
	barCode_ = barCode;
	setBodyParameter("BarCode", barCode);
}

std::string UpdateItemMaterialRequest::getItemName()const
{
	return itemName_;
}

void UpdateItemMaterialRequest::setItemName(const std::string& itemName)
{
	itemName_ = itemName;
	setBodyParameter("ItemName", itemName);
}

std::string UpdateItemMaterialRequest::getMaterialFeatureA()const
{
	return materialFeatureA_;
}

void UpdateItemMaterialRequest::setMaterialFeatureA(const std::string& materialFeatureA)
{
	materialFeatureA_ = materialFeatureA;
	setBodyParameter("MaterialFeatureA", materialFeatureA);
}

std::string UpdateItemMaterialRequest::getMaterialFeatureB()const
{
	return materialFeatureB_;
}

void UpdateItemMaterialRequest::setMaterialFeatureB(const std::string& materialFeatureB)
{
	materialFeatureB_ = materialFeatureB;
	setBodyParameter("MaterialFeatureB", materialFeatureB);
}

std::string UpdateItemMaterialRequest::getMaterialFeatureC()const
{
	return materialFeatureC_;
}

void UpdateItemMaterialRequest::setMaterialFeatureC(const std::string& materialFeatureC)
{
	materialFeatureC_ = materialFeatureC;
	setBodyParameter("MaterialFeatureC", materialFeatureC);
}

std::string UpdateItemMaterialRequest::getMaterialFeatureD()const
{
	return materialFeatureD_;
}

void UpdateItemMaterialRequest::setMaterialFeatureD(const std::string& materialFeatureD)
{
	materialFeatureD_ = materialFeatureD;
	setBodyParameter("MaterialFeatureD", materialFeatureD);
}

