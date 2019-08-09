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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allSasScreenTypeList = value["SasScreenTypeList"]["SasScreenType"];
	for (auto value : allSasScreenTypeList)
	{
		SasScreenType sasScreenTypeListObject;
		if(!value["Type"].isNull())
			sasScreenTypeListObject.type = value["Type"].asString();
		if(!value["TypeCode"].isNull())
			sasScreenTypeListObject.typeCode = value["TypeCode"].asString();
		auto allTypeData = value["TypeData"]["SasScreenModel"];
		for (auto value : allTypeData)
		{
			SasScreenType::SasScreenModel typeDataObject;
			if(!value["Code"].isNull())
				typeDataObject.code = value["Code"].asString();
			if(!value["Id"].isNull())
				typeDataObject.id = value["Id"].asString();
			if(!value["Title"].isNull())
				typeDataObject.title = value["Title"].asString();
			auto allDate = value["Date"]["IntegerItem"];
			for (auto value : allDate)
			{
				SasScreenType::SasScreenModel::IntegerItem dateObject;
				if(!value["Value"].isNull())
					dateObject.value = value["Value"].asString();
				if(!value["Unit"].isNull())
					dateObject.unit = value["Unit"].asString();
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

