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

#include <alibabacloud/domain/model/LookupTmchNoticeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

LookupTmchNoticeResult::LookupTmchNoticeResult() :
	ServiceResult()
{}

LookupTmchNoticeResult::LookupTmchNoticeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

LookupTmchNoticeResult::~LookupTmchNoticeResult()
{}

void LookupTmchNoticeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allClaims = value["Claims"]["Claim"];
	for (auto value : allClaims)
	{
		Claim claimsObject;
		if(!value["MarkName"].isNull())
			claimsObject.markName = value["MarkName"].asString();
		if(!value["GoodsAndServices"].isNull())
			claimsObject.goodsAndServices = value["GoodsAndServices"].asString();
		auto allHolders = value["Holders"]["Holder"];
		for (auto value : allHolders)
		{
			Claim::Holder holdersObject;
			if(!value["Entitlement"].isNull())
				holdersObject.entitlement = value["Entitlement"].asString();
			if(!value["Org"].isNull())
				holdersObject.org = value["Org"].asString();
			auto addrNode = value["Addr"];
			if(!addrNode["City"].isNull())
				holdersObject.addr.city = addrNode["City"].asString();
			if(!addrNode["Sp"].isNull())
				holdersObject.addr.sp = addrNode["Sp"].asString();
			if(!addrNode["Pc"].isNull())
				holdersObject.addr.pc = addrNode["Pc"].asString();
			if(!addrNode["Cc"].isNull())
				holdersObject.addr.cc = addrNode["Cc"].asString();
				auto allStreet = addrNode["Street"]["Street"];
				for (auto value : allStreet)
					holdersObject.addr.street.push_back(value.asString());
			claimsObject.holders.push_back(holdersObject);
		}
		auto allContacts = value["Contacts"]["Contact"];
		for (auto value : allContacts)
		{
			Claim::Contact contactsObject;
			if(!value["Type"].isNull())
				contactsObject.type = value["Type"].asString();
			if(!value["Name"].isNull())
				contactsObject.name = value["Name"].asString();
			if(!value["Org"].isNull())
				contactsObject.org = value["Org"].asString();
			if(!value["Voice"].isNull())
				contactsObject.voice = value["Voice"].asString();
			if(!value["Fax"].isNull())
				contactsObject.fax = value["Fax"].asString();
			if(!value["Email"].isNull())
				contactsObject.email = value["Email"].asString();
			auto addr1Node = value["Addr"];
			if(!addr1Node["City"].isNull())
				contactsObject.addr1.city = addr1Node["City"].asString();
			if(!addr1Node["Sp"].isNull())
				contactsObject.addr1.sp = addr1Node["Sp"].asString();
			if(!addr1Node["Pc"].isNull())
				contactsObject.addr1.pc = addr1Node["Pc"].asString();
			if(!addr1Node["Cc"].isNull())
				contactsObject.addr1.cc = addr1Node["Cc"].asString();
				auto allStreet2 = addr1Node["Street"]["Street"];
				for (auto value : allStreet2)
					contactsObject.addr1.street2.push_back(value.asString());
			claimsObject.contacts.push_back(contactsObject);
		}
		auto allClassDescs = value["ClassDescs"]["ClassDesc"];
		for (auto value : allClassDescs)
		{
			Claim::ClassDesc classDescsObject;
			if(!value["ClassNum"].isNull())
				classDescsObject.classNum = std::stoi(value["ClassNum"].asString());
			if(!value["Desc"].isNull())
				classDescsObject.desc = value["Desc"].asString();
			claimsObject.classDescs.push_back(classDescsObject);
		}
		auto jurDescNode = value["JurDesc"];
		if(!jurDescNode["JurCC"].isNull())
			claimsObject.jurDesc.jurCC = jurDescNode["JurCC"].asString();
		if(!jurDescNode["Desc"].isNull())
			claimsObject.jurDesc.desc = jurDescNode["Desc"].asString();
		claims_.push_back(claimsObject);
	}
	if(!value["Id"].isNull())
		id_ = std::stol(value["Id"].asString());
	if(!value["NotBefore"].isNull())
		notBefore_ = value["NotBefore"].asString();
	if(!value["NotAfter"].isNull())
		notAfter_ = value["NotAfter"].asString();
	if(!value["Label"].isNull())
		label_ = value["Label"].asString();

}

std::vector<LookupTmchNoticeResult::Claim> LookupTmchNoticeResult::getClaims()const
{
	return claims_;
}

std::string LookupTmchNoticeResult::getLabel()const
{
	return label_;
}

long LookupTmchNoticeResult::getId()const
{
	return id_;
}

std::string LookupTmchNoticeResult::getNotBefore()const
{
	return notBefore_;
}

std::string LookupTmchNoticeResult::getNotAfter()const
{
	return notAfter_;
}

