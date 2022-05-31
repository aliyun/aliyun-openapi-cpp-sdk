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

#include <alibabacloud/cloudesl/model/GetItemMaterialResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

GetItemMaterialResult::GetItemMaterialResult() :
	ServiceResult()
{}

GetItemMaterialResult::GetItemMaterialResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetItemMaterialResult::~GetItemMaterialResult()
{}

void GetItemMaterialResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto materialInfoNode = value["MaterialInfo"];
	if(!materialInfoNode["ItemName"].isNull())
		materialInfo_.itemName = materialInfoNode["ItemName"].asString();
	if(!materialInfoNode["BarCode"].isNull())
		materialInfo_.barCode = materialInfoNode["BarCode"].asString();
	if(!materialInfoNode["GmtCreate"].isNull())
		materialInfo_.gmtCreate = materialInfoNode["GmtCreate"].asString();
	if(!materialInfoNode["MaterialName"].isNull())
		materialInfo_.materialName = materialInfoNode["MaterialName"].asString();
	if(!materialInfoNode["MaterialId"].isNull())
		materialInfo_.materialId = materialInfoNode["MaterialId"].asString();
	if(!materialInfoNode["MaterialFeatureA"].isNull())
		materialInfo_.materialFeatureA = materialInfoNode["MaterialFeatureA"].asString();
	if(!materialInfoNode["MaterialFeatureB"].isNull())
		materialInfo_.materialFeatureB = materialInfoNode["MaterialFeatureB"].asString();
	if(!materialInfoNode["MaterialFeatureC"].isNull())
		materialInfo_.materialFeatureC = materialInfoNode["MaterialFeatureC"].asString();
	if(!materialInfoNode["MaterialFeatureD"].isNull())
		materialInfo_.materialFeatureD = materialInfoNode["MaterialFeatureD"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();

}

std::string GetItemMaterialResult::getMessage()const
{
	return message_;
}

GetItemMaterialResult::MaterialInfo GetItemMaterialResult::getMaterialInfo()const
{
	return materialInfo_;
}

std::string GetItemMaterialResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string GetItemMaterialResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetItemMaterialResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string GetItemMaterialResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string GetItemMaterialResult::getCode()const
{
	return code_;
}

bool GetItemMaterialResult::getSuccess()const
{
	return success_;
}

