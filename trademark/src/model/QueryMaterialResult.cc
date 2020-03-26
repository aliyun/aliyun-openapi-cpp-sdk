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

#include <alibabacloud/trademark/model/QueryMaterialResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

QueryMaterialResult::QueryMaterialResult() :
	ServiceResult()
{}

QueryMaterialResult::QueryMaterialResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryMaterialResult::~QueryMaterialResult()
{}

void QueryMaterialResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allReviewAdditionalFiles = value["ReviewAdditionalFiles"]["ReviewAdditionalFile"];
	for (const auto &item : allReviewAdditionalFiles)
		reviewAdditionalFiles_.push_back(item.asString());
	if(!value["Type"].isNull())
		type_ = std::stoi(value["Type"].asString());
	if(!value["Region"].isNull())
		region_ = std::stoi(value["Region"].asString());
	if(!value["ContactName"].isNull())
		contactName_ = value["ContactName"].asString();
	if(!value["ContactNumber"].isNull())
		contactNumber_ = value["ContactNumber"].asString();
	if(!value["ContactEmail"].isNull())
		contactEmail_ = value["ContactEmail"].asString();
	if(!value["ContactAddress"].isNull())
		contactAddress_ = value["ContactAddress"].asString();
	if(!value["ContactZipcode"].isNull())
		contactZipcode_ = value["ContactZipcode"].asString();
	if(!value["Status"].isNull())
		status_ = std::stoi(value["Status"].asString());
	if(!value["LoaUrl"].isNull())
		loaUrl_ = value["LoaUrl"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["CardNumber"].isNull())
		cardNumber_ = value["CardNumber"].asString();
	if(!value["ExpirationDate"].isNull())
		expirationDate_ = std::stol(value["ExpirationDate"].asString());
	if(!value["Province"].isNull())
		province_ = value["Province"].asString();
	if(!value["City"].isNull())
		city_ = value["City"].asString();
	if(!value["Town"].isNull())
		town_ = value["Town"].asString();
	if(!value["Address"].isNull())
		address_ = value["Address"].asString();
	if(!value["EName"].isNull())
		eName_ = value["EName"].asString();
	if(!value["EAddress"].isNull())
		eAddress_ = value["EAddress"].asString();
	if(!value["LoaStatus"].isNull())
		loaStatus_ = std::stoi(value["LoaStatus"].asString());
	if(!value["IdCardUrl"].isNull())
		idCardUrl_ = value["IdCardUrl"].asString();
	if(!value["BusinessLicenceUrl"].isNull())
		businessLicenceUrl_ = value["BusinessLicenceUrl"].asString();
	if(!value["PassportUrl"].isNull())
		passportUrl_ = value["PassportUrl"].asString();
	if(!value["Id"].isNull())
		id_ = std::stol(value["Id"].asString());
	if(!value["LegalNoticeUrl"].isNull())
		legalNoticeUrl_ = value["LegalNoticeUrl"].asString();
	if(!value["Note"].isNull())
		note_ = value["Note"].asString();
	if(!value["Country"].isNull())
		country_ = value["Country"].asString();
	if(!value["ReviewApplicationFile"].isNull())
		reviewApplicationFile_ = value["ReviewApplicationFile"].asString();

}

std::string QueryMaterialResult::getCardNumber()const
{
	return cardNumber_;
}

std::string QueryMaterialResult::getEName()const
{
	return eName_;
}

std::string QueryMaterialResult::getAddress()const
{
	return address_;
}

std::string QueryMaterialResult::getLoaUrl()const
{
	return loaUrl_;
}

std::string QueryMaterialResult::getPassportUrl()const
{
	return passportUrl_;
}

std::string QueryMaterialResult::getName()const
{
	return name_;
}

int QueryMaterialResult::getLoaStatus()const
{
	return loaStatus_;
}

std::string QueryMaterialResult::getTown()const
{
	return town_;
}

std::vector<std::string> QueryMaterialResult::getReviewAdditionalFiles()const
{
	return reviewAdditionalFiles_;
}

std::string QueryMaterialResult::getContactNumber()const
{
	return contactNumber_;
}

std::string QueryMaterialResult::getLegalNoticeUrl()const
{
	return legalNoticeUrl_;
}

std::string QueryMaterialResult::getContactAddress()const
{
	return contactAddress_;
}

int QueryMaterialResult::getStatus()const
{
	return status_;
}

std::string QueryMaterialResult::getReviewApplicationFile()const
{
	return reviewApplicationFile_;
}

std::string QueryMaterialResult::getCity()const
{
	return city_;
}

std::string QueryMaterialResult::getProvince()const
{
	return province_;
}

std::string QueryMaterialResult::getEAddress()const
{
	return eAddress_;
}

std::string QueryMaterialResult::getIdCardUrl()const
{
	return idCardUrl_;
}

int QueryMaterialResult::getType()const
{
	return type_;
}

std::string QueryMaterialResult::getBusinessLicenceUrl()const
{
	return businessLicenceUrl_;
}

long QueryMaterialResult::getExpirationDate()const
{
	return expirationDate_;
}

std::string QueryMaterialResult::getContactZipcode()const
{
	return contactZipcode_;
}

std::string QueryMaterialResult::getNote()const
{
	return note_;
}

int QueryMaterialResult::getRegion()const
{
	return region_;
}

std::string QueryMaterialResult::getContactEmail()const
{
	return contactEmail_;
}

std::string QueryMaterialResult::getCountry()const
{
	return country_;
}

long QueryMaterialResult::getId()const
{
	return id_;
}

std::string QueryMaterialResult::getContactName()const
{
	return contactName_;
}

