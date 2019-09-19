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

#include <alibabacloud/aegis/model/DescribeScreenDataMapResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeScreenDataMapResult::DescribeScreenDataMapResult() :
	ServiceResult()
{}

DescribeScreenDataMapResult::DescribeScreenDataMapResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScreenDataMapResult::~DescribeScreenDataMapResult()
{}

void DescribeScreenDataMapResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSasScreenTypeListNode = value["SasScreenTypeList"]["SasScreenType"];
	for (auto valueSasScreenTypeListSasScreenType : allSasScreenTypeListNode)
	{
		SasScreenType sasScreenTypeListObject;
		if(!valueSasScreenTypeListSasScreenType["Type"].isNull())
			sasScreenTypeListObject.type = valueSasScreenTypeListSasScreenType["Type"].asString();
		if(!valueSasScreenTypeListSasScreenType["TypeCode"].isNull())
			sasScreenTypeListObject.typeCode = valueSasScreenTypeListSasScreenType["TypeCode"].asString();
		auto allTypeDataNode = allSasScreenTypeListNode["TypeData"]["SasScreenModel"];
		for (auto allSasScreenTypeListNodeTypeDataSasScreenModel : allTypeDataNode)
		{
			SasScreenType::SasScreenModel typeDataObject;
			if(!allSasScreenTypeListNodeTypeDataSasScreenModel["Code"].isNull())
				typeDataObject.code = allSasScreenTypeListNodeTypeDataSasScreenModel["Code"].asString();
			if(!allSasScreenTypeListNodeTypeDataSasScreenModel["Id"].isNull())
				typeDataObject.id = allSasScreenTypeListNodeTypeDataSasScreenModel["Id"].asString();
			if(!allSasScreenTypeListNodeTypeDataSasScreenModel["Title"].isNull())
				typeDataObject.title = allSasScreenTypeListNodeTypeDataSasScreenModel["Title"].asString();
			auto allDateNode = allTypeDataNode["Date"]["IntegerItem"];
			for (auto allTypeDataNodeDateIntegerItem : allDateNode)
			{
				SasScreenType::SasScreenModel::IntegerItem dateObject;
				if(!allTypeDataNodeDateIntegerItem["Value"].isNull())
					dateObject.value = allTypeDataNodeDateIntegerItem["Value"].asString();
				if(!allTypeDataNodeDateIntegerItem["Unit"].isNull())
					dateObject.unit = allTypeDataNodeDateIntegerItem["Unit"].asString();
				typeDataObject.date.push_back(dateObject);
			}
			sasScreenTypeListObject.typeData.push_back(typeDataObject);
		}
		sasScreenTypeList_.push_back(sasScreenTypeListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeScreenDataMapResult::SasScreenType> DescribeScreenDataMapResult::getSasScreenTypeList()const
{
	return sasScreenTypeList_;
}

bool DescribeScreenDataMapResult::getSuccess()const
{
	return success_;
}

