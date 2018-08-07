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

#include <alibabacloud/iot/model/CreateProductResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

CreateProductResult::CreateProductResult() :
	ServiceResult()
{}

CreateProductResult::CreateProductResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateProductResult::~CreateProductResult()
{}

void CreateProductResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto productInfoNode = value["ProductInfo"];
	if(!productInfoNode["ProductKey"].isNull())
		productInfo_.productKey = productInfoNode["ProductKey"].asString();
	if(!productInfoNode["ProductName"].isNull())
		productInfo_.productName = productInfoNode["ProductName"].asString();
	if(!productInfoNode["NodeType"].isNull())
		productInfo_.nodeType = std::stoi(productInfoNode["NodeType"].asString());
	if(!productInfoNode["CatId"].isNull())
		productInfo_.catId = std::stol(productInfoNode["CatId"].asString());
	if(!productInfoNode["CreateUserId"].isNull())
		productInfo_.createUserId = std::stol(productInfoNode["CreateUserId"].asString());
	if(!productInfoNode["ProductDesc"].isNull())
		productInfo_.productDesc = productInfoNode["ProductDesc"].asString();
	if(!productInfoNode["FromSource"].isNull())
		productInfo_.fromSource = productInfoNode["FromSource"].asString();
	if(!productInfoNode["ExtProps"].isNull())
		productInfo_.extProps = productInfoNode["ExtProps"].asString();
	if(!productInfoNode["GmtCreate"].isNull())
		productInfo_.gmtCreate = productInfoNode["GmtCreate"].asString();
	if(!productInfoNode["GmtModified"].isNull())
		productInfo_.gmtModified = productInfoNode["GmtModified"].asString();
	if(!productInfoNode["ProductSecret"].isNull())
		productInfo_.productSecret = productInfoNode["ProductSecret"].asString();
	if(!productInfoNode["Id2"].isNull())
		productInfo_.id2 = productInfoNode["Id2"].asString() == "true";
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

CreateProductResult::ProductInfo CreateProductResult::getProductInfo()const
{
	return productInfo_;
}

std::string CreateProductResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string CreateProductResult::getCode()const
{
	return code_;
}

bool CreateProductResult::getSuccess()const
{
	return success_;
}

