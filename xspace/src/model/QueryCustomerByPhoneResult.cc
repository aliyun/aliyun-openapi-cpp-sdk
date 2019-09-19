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

#include <alibabacloud/xspace/model/QueryCustomerByPhoneResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Xspace;
using namespace AlibabaCloud::Xspace::Model;

QueryCustomerByPhoneResult::QueryCustomerByPhoneResult() :
	ServiceResult()
{}

QueryCustomerByPhoneResult::QueryCustomerByPhoneResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryCustomerByPhoneResult::~QueryCustomerByPhoneResult()
{}

void QueryCustomerByPhoneResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Detail"].isNull())
			dataObject.detail = valueDataDataItem["Detail"].asString();
		if(!valueDataDataItem["Photo"].isNull())
			dataObject.photo = valueDataDataItem["Photo"].asString();
		if(!valueDataDataItem["Id"].isNull())
			dataObject.id = valueDataDataItem["Id"].asString();
		if(!valueDataDataItem["Phone"].isNull())
			dataObject.phone = valueDataDataItem["Phone"].asString();
		if(!valueDataDataItem["Gender"].isNull())
			dataObject.gender = valueDataDataItem["Gender"].asString();
		if(!valueDataDataItem["Email"].isNull())
			dataObject.email = valueDataDataItem["Email"].asString();
		if(!valueDataDataItem["Nick"].isNull())
			dataObject.nick = valueDataDataItem["Nick"].asString();
		if(!valueDataDataItem["RealName"].isNull())
			dataObject.realName = valueDataDataItem["RealName"].asString();
		auto customizeFieldsNode = value["CustomizeFields"];
		if(!customizeFieldsNode["Cid"].isNull())
			dataObject.customizeFields.cid = customizeFieldsNode["Cid"].asString();
		if(!customizeFieldsNode["AbcUrl"].isNull())
			dataObject.customizeFields.abcUrl = customizeFieldsNode["AbcUrl"].asString();
		if(!customizeFieldsNode["DistributionLevel"].isNull())
			dataObject.customizeFields.distributionLevel = customizeFieldsNode["DistributionLevel"].asString();
		if(!customizeFieldsNode["MainAccountUid"].isNull())
			dataObject.customizeFields.mainAccountUid = customizeFieldsNode["MainAccountUid"].asString();
		if(!customizeFieldsNode["AssociatePerson"].isNull())
			dataObject.customizeFields.associatePerson = customizeFieldsNode["AssociatePerson"].asString();
		if(!customizeFieldsNode["Tag"].isNull())
			dataObject.customizeFields.tag = customizeFieldsNode["Tag"].asString();
			auto allAssociatePersonList = customizeFieldsNode["AssociatePersonList"]["AssociatePersonList"];
			for (auto value : allAssociatePersonList)
				dataObject.customizeFields.associatePersonList.push_back(value.asString());
		auto allTags = value["Tags"]["Tags"];
		for (auto value : allTags)
			dataObject.tags.push_back(value.asString());
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryCustomerByPhoneResult::getMessage()const
{
	return message_;
}

std::vector<QueryCustomerByPhoneResult::DataItem> QueryCustomerByPhoneResult::getData()const
{
	return data_;
}

std::string QueryCustomerByPhoneResult::getCode()const
{
	return code_;
}

bool QueryCustomerByPhoneResult::getSuccess()const
{
	return success_;
}

