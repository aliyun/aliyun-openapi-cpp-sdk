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
	auto allClaimsNode = value["Claims"]["Claim"];
	for (auto valueClaimsClaim : allClaimsNode)
	{
		Claim claimsObject;
		if(!valueClaimsClaim["GoodsAndServices"].isNull())
			claimsObject.goodsAndServices = valueClaimsClaim["GoodsAndServices"].asString();
		if(!valueClaimsClaim["MarkName"].isNull())
			claimsObject.markName = valueClaimsClaim["MarkName"].asString();
		auto allContactsNode = valueClaimsClaim["Contacts"]["Contact"];
		for (auto valueClaimsClaimContactsContact : allContactsNode)
		{
			Claim::Contact contactsObject;
			if(!valueClaimsClaimContactsContact["Type"].isNull())
				contactsObject.type = valueClaimsClaimContactsContact["Type"].asString();
			if(!valueClaimsClaimContactsContact["Voice"].isNull())
				contactsObject.voice = valueClaimsClaimContactsContact["Voice"].asString();
			if(!valueClaimsClaimContactsContact["Email"].isNull())
				contactsObject.email = valueClaimsClaimContactsContact["Email"].asString();
			if(!valueClaimsClaimContactsContact["Fax"].isNull())
				contactsObject.fax = valueClaimsClaimContactsContact["Fax"].asString();
			if(!valueClaimsClaimContactsContact["Org"].isNull())
				contactsObject.org = valueClaimsClaimContactsContact["Org"].asString();
			if(!valueClaimsClaimContactsContact["Name"].isNull())
				contactsObject.name = valueClaimsClaimContactsContact["Name"].asString();
			auto addrNode = value["Addr"];
			if(!addrNode["Cc"].isNull())
				contactsObject.addr.cc = addrNode["Cc"].asString();
			if(!addrNode["Sp"].isNull())
				contactsObject.addr.sp = addrNode["Sp"].asString();
			if(!addrNode["Pc"].isNull())
				contactsObject.addr.pc = addrNode["Pc"].asString();
			if(!addrNode["City"].isNull())
				contactsObject.addr.city = addrNode["City"].asString();
				auto allStreet = addrNode["Street"]["Street"];
				for (auto value : allStreet)
					contactsObject.addr.street.push_back(value.asString());
			claimsObject.contacts.push_back(contactsObject);
		}
		auto allClassDescsNode = valueClaimsClaim["ClassDescs"]["ClassDesc"];
		for (auto valueClaimsClaimClassDescsClassDesc : allClassDescsNode)
		{
			Claim::ClassDesc classDescsObject;
			if(!valueClaimsClaimClassDescsClassDesc["ClassNum"].isNull())
				classDescsObject.classNum = std::stoi(valueClaimsClaimClassDescsClassDesc["ClassNum"].asString());
			if(!valueClaimsClaimClassDescsClassDesc["Desc"].isNull())
				classDescsObject.desc = valueClaimsClaimClassDescsClassDesc["Desc"].asString();
			claimsObject.classDescs.push_back(classDescsObject);
		}
		auto allHoldersNode = valueClaimsClaim["Holders"]["Holder"];
		for (auto valueClaimsClaimHoldersHolder : allHoldersNode)
		{
			Claim::Holder holdersObject;
			if(!valueClaimsClaimHoldersHolder["Entitlement"].isNull())
				holdersObject.entitlement = valueClaimsClaimHoldersHolder["Entitlement"].asString();
			if(!valueClaimsClaimHoldersHolder["Org"].isNull())
				holdersObject.org = valueClaimsClaimHoldersHolder["Org"].asString();
			auto addr1Node = value["Addr"];
			if(!addr1Node["Cc"].isNull())
				holdersObject.addr1.cc = addr1Node["Cc"].asString();
			if(!addr1Node["Sp"].isNull())
				holdersObject.addr1.sp = addr1Node["Sp"].asString();
			if(!addr1Node["Pc"].isNull())
				holdersObject.addr1.pc = addr1Node["Pc"].asString();
			if(!addr1Node["City"].isNull())
				holdersObject.addr1.city = addr1Node["City"].asString();
				auto allStreet2 = addr1Node["Street"]["Street"];
				for (auto value : allStreet2)
					holdersObject.addr1.street2.push_back(value.asString());
			claimsObject.holders.push_back(holdersObject);
		}
		auto jurDescNode = value["JurDesc"];
		if(!jurDescNode["JurCC"].isNull())
			claimsObject.jurDesc.jurCC = jurDescNode["JurCC"].asString();
		if(!jurDescNode["Desc"].isNull())
			claimsObject.jurDesc.desc = jurDescNode["Desc"].asString();
		claims_.push_back(claimsObject);
	}
	if(!value["Label"].isNull())
		label_ = value["Label"].asString();
	if(!value["Id"].isNull())
		id_ = std::stol(value["Id"].asString());
	if(!value["NotBefore"].isNull())
		notBefore_ = value["NotBefore"].asString();
	if(!value["NotAfter"].isNull())
		notAfter_ = value["NotAfter"].asString();

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

