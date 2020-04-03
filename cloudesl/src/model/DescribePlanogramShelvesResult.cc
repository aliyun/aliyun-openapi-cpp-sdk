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

#include <alibabacloud/cloudesl/model/DescribePlanogramShelvesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

DescribePlanogramShelvesResult::DescribePlanogramShelvesResult() :
	ServiceResult()
{}

DescribePlanogramShelvesResult::DescribePlanogramShelvesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePlanogramShelvesResult::~DescribePlanogramShelvesResult()
{}

void DescribePlanogramShelvesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allShelfInfosNode = value["ShelfInfos"]["ShelfInfo"];
	for (auto valueShelfInfosShelfInfo : allShelfInfosNode)
	{
		ShelfInfo shelfInfosObject;
		if(!valueShelfInfosShelfInfo["Shelf"].isNull())
			shelfInfosObject.shelf = valueShelfInfosShelfInfo["Shelf"].asString();
		auto allLayerInfosNode = allShelfInfosNode["LayerInfos"]["LayerInfo"];
		for (auto allShelfInfosNodeLayerInfosLayerInfo : allLayerInfosNode)
		{
			ShelfInfo::LayerInfo layerInfosObject;
			if(!allShelfInfosNodeLayerInfosLayerInfo["Layer"].isNull())
				layerInfosObject.layer = std::stoi(allShelfInfosNodeLayerInfosLayerInfo["Layer"].asString());
			shelfInfosObject.layerInfos.push_back(layerInfosObject);
		}
		shelfInfos_.push_back(shelfInfosObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["StoreId"].isNull())
		storeId_ = value["StoreId"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribePlanogramShelvesResult::ShelfInfo> DescribePlanogramShelvesResult::getShelfInfos()const
{
	return shelfInfos_;
}

std::string DescribePlanogramShelvesResult::getMessage()const
{
	return message_;
}

std::string DescribePlanogramShelvesResult::getStoreId()const
{
	return storeId_;
}

std::string DescribePlanogramShelvesResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribePlanogramShelvesResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribePlanogramShelvesResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribePlanogramShelvesResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribePlanogramShelvesResult::getCode()const
{
	return code_;
}

bool DescribePlanogramShelvesResult::getSuccess()const
{
	return success_;
}

