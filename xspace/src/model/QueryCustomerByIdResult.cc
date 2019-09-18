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

#include <alibabacloud/xspace/model/QueryCustomerByIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Xspace;
using namespace AlibabaCloud::Xspace::Model;

QueryCustomerByIdResult::QueryCustomerByIdResult() :
	ServiceResult()
{}

QueryCustomerByIdResult::QueryCustomerByIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryCustomerByIdResult::~QueryCustomerByIdResult()
{}

void QueryCustomerByIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Id"].isNull())
		data_.id = dataNode["Id"].asString();
	if(!dataNode["Nick"].isNull())
		data_.nick = dataNode["Nick"].asString();
	if(!dataNode["RealName"].isNull())
		data_.realName = dataNode["RealName"].asString();
	if(!dataNode["Email"].isNull())
		data_.email = dataNode["Email"].asString();
	if(!dataNode["Phone"].isNull())
		data_.phone = dataNode["Phone"].asString();
	if(!dataNode["Gender"].isNull())
		data_.gender = dataNode["Gender"].asString();
	if(!dataNode["Photo"].isNull())
		data_.photo = dataNode["Photo"].asString();
	if(!dataNode["Detail"].isNull())
		data_.detail = dataNode["Detail"].asString();
	auto customizeFieldsNode = dataNode["CustomizeFields"];
	if(!customizeFieldsNode["Cid"].isNull())
		data_.customizeFields.cid = customizeFieldsNode["Cid"].asString();
	if(!customizeFieldsNode["AbcUrl"].isNull())
		data_.customizeFields.abcUrl = customizeFieldsNode["AbcUrl"].asString();
	if(!customizeFieldsNode["DistributionLevel"].isNull())
		data_.customizeFields.distributionLevel = customizeFieldsNode["DistributionLevel"].asString();
	if(!customizeFieldsNode["MainAccountUid"].isNull())
		data_.customizeFields.mainAccountUid = customizeFieldsNode["MainAccountUid"].asString();
	if(!customizeFieldsNode["AssociatePerson"].isNull())
		data_.customizeFields.associatePerson = customizeFieldsNode["AssociatePerson"].asString();
	if(!customizeFieldsNode["Tag"].isNull())
		data_.customizeFields.tag = customizeFieldsNode["Tag"].asString();
		auto allAssociatePersonList = customizeFieldsNode["AssociatePersonList"]["AssociatePersonList"];
		for (auto value : allAssociatePersonList)
			data_.customizeFields.associatePersonList.push_back(value.asString());
		auto allTags = dataNode["Tags"]["Tags"];
		for (auto value : allTags)
			data_.tags.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryCustomerByIdResult::getMessage()const
{
	return message_;
}

QueryCustomerByIdResult::Data QueryCustomerByIdResult::getData()const
{
	return data_;
}

std::string QueryCustomerByIdResult::getCode()const
{
	return code_;
}

bool QueryCustomerByIdResult::getSuccess()const
{
	return success_;
}

