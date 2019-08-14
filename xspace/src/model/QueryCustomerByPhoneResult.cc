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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["DataItem"];
	for (auto value : allData)
	{
		DataItem dataObject;
		if(!value["Detail"].isNull())
			dataObject.detail = value["Detail"].asString();
		if(!value["Photo"].isNull())
			dataObject.photo = value["Photo"].asString();
		if(!value["Id"].isNull())
			dataObject.id = value["Id"].asString();
		if(!value["Phone"].isNull())
			dataObject.phone = value["Phone"].asString();
		if(!value["Gender"].isNull())
			dataObject.gender = value["Gender"].asString();
		if(!value["Email"].isNull())
			dataObject.email = value["Email"].asString();
		if(!value["Nick"].isNull())
			dataObject.nick = value["Nick"].asString();
		if(!value["RealName"].isNull())
			dataObject.realName = value["RealName"].asString();
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

