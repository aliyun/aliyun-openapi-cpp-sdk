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

#include <alibabacloud/workorder/model/ListProductsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Workorder;
using namespace AlibabaCloud::Workorder::Model;

ListProductsResult::ListProductsResult() :
	ServiceResult()
{}

ListProductsResult::ListProductsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListProductsResult::~ListProductsResult()
{}

void ListProductsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allTechMoreNode = dataNode["TechMore"]["TechMoreItem"];
	for (auto dataNodeTechMoreTechMoreItem : allTechMoreNode)
	{
		Data::TechMoreItem techMoreItemObject;
		if(!dataNodeTechMoreTechMoreItem["GroupName"].isNull())
			techMoreItemObject.groupName = dataNodeTechMoreTechMoreItem["GroupName"].asString();
		auto allProductListNode = allTechMoreNode["ProductList"]["ProductListItem"];
		for (auto allTechMoreNodeProductListProductListItem : allProductListNode)
		{
			Data::TechMoreItem::ProductListItem productListObject;
			if(!allTechMoreNodeProductListProductListItem["Name"].isNull())
				productListObject.name = allTechMoreNodeProductListProductListItem["Name"].asString();
			if(!allTechMoreNodeProductListProductListItem["ProductCode"].isNull())
				productListObject.productCode = allTechMoreNodeProductListProductListItem["ProductCode"].asString();
			if(!allTechMoreNodeProductListProductListItem["Description"].isNull())
				productListObject.description = allTechMoreNodeProductListProductListItem["Description"].asString();
			techMoreItemObject.productList.push_back(productListObject);
		}
		data_.techMore.push_back(techMoreItemObject);
	}
	auto allHotConsultationNode = dataNode["HotConsultation"]["HotConsultationItem"];
	for (auto dataNodeHotConsultationHotConsultationItem : allHotConsultationNode)
	{
		Data::HotConsultationItem hotConsultationItemObject;
		if(!dataNodeHotConsultationHotConsultationItem["Name"].isNull())
			hotConsultationItemObject.name = dataNodeHotConsultationHotConsultationItem["Name"].asString();
		if(!dataNodeHotConsultationHotConsultationItem["ProductCode"].isNull())
			hotConsultationItemObject.productCode = dataNodeHotConsultationHotConsultationItem["ProductCode"].asString();
		if(!dataNodeHotConsultationHotConsultationItem["Description"].isNull())
			hotConsultationItemObject.description = dataNodeHotConsultationHotConsultationItem["Description"].asString();
		data_.hotConsultation.push_back(hotConsultationItemObject);
	}
	auto allConsultationMoreNode = dataNode["ConsultationMore"]["ConsultationMoreItem"];
	for (auto dataNodeConsultationMoreConsultationMoreItem : allConsultationMoreNode)
	{
		Data::ConsultationMoreItem consultationMoreItemObject;
		if(!dataNodeConsultationMoreConsultationMoreItem["Name"].isNull())
			consultationMoreItemObject.name = dataNodeConsultationMoreConsultationMoreItem["Name"].asString();
		if(!dataNodeConsultationMoreConsultationMoreItem["ProductCode"].isNull())
			consultationMoreItemObject.productCode = dataNodeConsultationMoreConsultationMoreItem["ProductCode"].asString();
		if(!dataNodeConsultationMoreConsultationMoreItem["Description"].isNull())
			consultationMoreItemObject.description = dataNodeConsultationMoreConsultationMoreItem["Description"].asString();
		data_.consultationMore.push_back(consultationMoreItemObject);
	}
	auto allHotTechNode = dataNode["HotTech"]["HotTechItem"];
	for (auto dataNodeHotTechHotTechItem : allHotTechNode)
	{
		Data::HotTechItem hotTechItemObject;
		if(!dataNodeHotTechHotTechItem["Name"].isNull())
			hotTechItemObject.name = dataNodeHotTechHotTechItem["Name"].asString();
		if(!dataNodeHotTechHotTechItem["ProductCode"].isNull())
			hotTechItemObject.productCode = dataNodeHotTechHotTechItem["ProductCode"].asString();
		if(!dataNodeHotTechHotTechItem["Description"].isNull())
			hotTechItemObject.description = dataNodeHotTechHotTechItem["Description"].asString();
		data_.hotTech.push_back(hotTechItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListProductsResult::getMessage()const
{
	return message_;
}

ListProductsResult::Data ListProductsResult::getData()const
{
	return data_;
}

int ListProductsResult::getCode()const
{
	return code_;
}

bool ListProductsResult::getSuccess()const
{
	return success_;
}

