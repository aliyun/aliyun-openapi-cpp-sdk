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

#include <alibabacloud/dcdn/model/DescribeDcdnWafFilterInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnWafFilterInfoResult::DescribeDcdnWafFilterInfoResult() :
	ServiceResult()
{}

DescribeDcdnWafFilterInfoResult::DescribeDcdnWafFilterInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnWafFilterInfoResult::~DescribeDcdnWafFilterInfoResult()
{}

void DescribeDcdnWafFilterInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allContentNode = value["Content"]["FilterInfo"];
	for (auto valueContentFilterInfo : allContentNode)
	{
		FilterInfo contentObject;
		if(!valueContentFilterInfo["DefenseScene"].isNull())
			contentObject.defenseScene = valueContentFilterInfo["DefenseScene"].asString();
		auto allFieldsNode = valueContentFilterInfo["Fields"]["Field"];
		for (auto valueContentFilterInfoFieldsField : allFieldsNode)
		{
			FilterInfo::Field fieldsObject;
			if(!valueContentFilterInfoFieldsField["ExtendField"].isNull())
				fieldsObject.extendField = valueContentFilterInfoFieldsField["ExtendField"].asString();
			if(!valueContentFilterInfoFieldsField["MatchField"].isNull())
				fieldsObject.matchField = valueContentFilterInfoFieldsField["MatchField"].asString();
			auto allLogicalSymbolNode = valueContentFilterInfoFieldsField["LogicalSymbol"]["Logic"];
			for (auto valueContentFilterInfoFieldsFieldLogicalSymbolLogic : allLogicalSymbolNode)
			{
				FilterInfo::Field::Logic logicalSymbolObject;
				if(!valueContentFilterInfoFieldsFieldLogicalSymbolLogic["Type"].isNull())
					logicalSymbolObject.type = valueContentFilterInfoFieldsFieldLogicalSymbolLogic["Type"].asString();
				if(!valueContentFilterInfoFieldsFieldLogicalSymbolLogic["Symbol"].isNull())
					logicalSymbolObject.symbol = valueContentFilterInfoFieldsFieldLogicalSymbolLogic["Symbol"].asString();
				if(!valueContentFilterInfoFieldsFieldLogicalSymbolLogic["Tip"].isNull())
					logicalSymbolObject.tip = valueContentFilterInfoFieldsFieldLogicalSymbolLogic["Tip"].asString();
				if(!valueContentFilterInfoFieldsFieldLogicalSymbolLogic["Attributes"].isNull())
					logicalSymbolObject.attributes = std::stoi(valueContentFilterInfoFieldsFieldLogicalSymbolLogic["Attributes"].asString());
				if(!valueContentFilterInfoFieldsFieldLogicalSymbolLogic["MaxLength"].isNull())
					logicalSymbolObject.maxLength = std::stoi(valueContentFilterInfoFieldsFieldLogicalSymbolLogic["MaxLength"].asString());
				if(!valueContentFilterInfoFieldsFieldLogicalSymbolLogic["Description"].isNull())
					logicalSymbolObject.description = valueContentFilterInfoFieldsFieldLogicalSymbolLogic["Description"].asString();
				auto regexpNode = value["Regexp"];
				if(!regexpNode["Pattern"].isNull())
					logicalSymbolObject.regexp.pattern = regexpNode["Pattern"].asString();
				if(!regexpNode["ErrMsg"].isNull())
					logicalSymbolObject.regexp.errMsg = regexpNode["ErrMsg"].asString();
				fieldsObject.logicalSymbol.push_back(logicalSymbolObject);
			}
			contentObject.fields.push_back(fieldsObject);
		}
		content_.push_back(contentObject);
	}

}

std::vector<DescribeDcdnWafFilterInfoResult::FilterInfo> DescribeDcdnWafFilterInfoResult::getContent()const
{
	return content_;
}

