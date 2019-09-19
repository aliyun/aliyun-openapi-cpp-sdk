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
		if(!valueClaimsClaim["MarkName"].isNull())
			claimsObject.markName = valueClaimsClaim["MarkName"].asString();
		if(!valueClaimsClaim["GoodsAndServices"].isNull())
			claimsObject.goodsAndServices = valueClaimsClaim["GoodsAndServices"].asString();
		auto allHoldersNode = allClaimsNode["Holders"]["Holder"];
		for (auto allClaimsNodeHoldersHolder : allHoldersNode)
		{
			Claim::Holder holdersObject;
			if(!allClaimsNodeHoldersHolder["Entitlement"].isNull())
				holdersObject.entitlement = allClaimsNodeHoldersHolder["Entitlement"].asString();
			if(!allClaimsNodeHoldersHolder["Org"].isNull())
				holdersObject.org = allClaimsNodeHoldersHolder["Org"].asString();
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
		auto allContactsNode = allClaimsNode["Contacts"]["Contact"];
		for (auto allClaimsNodeContactsContact : allContactsNode)
		{
			Claim::Contact contactsObject;
			if(!allClaimsNodeContactsContact["Type"].isNull())
				contactsObject.type = allClaimsNodeContactsContact["Type"].asString();
			if(!allClaimsNodeContactsContact["Name"].isNull())
				contactsObject.name = allClaimsNodeContactsContact["Name"].asString();
			if(!allClaimsNodeContactsContact["Org"].isNull())
				contactsObject.org = allClaimsNodeContactsContact["Org"].asString();
			if(!allClaimsNodeContactsContact["Voice"].isNull())
				contactsObject.voice = allClaimsNodeContactsContact["Voice"].asString();
			if(!allClaimsNodeContactsContact["Fax"].isNull())
				contactsObject.fax = allClaimsNodeContactsContact["Fax"].asString();
			if(!allClaimsNodeContactsContact["Email"].isNull())
				contactsObject.email = allClaimsNodeContactsContact["Email"].asString();
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
		auto allClassDescsNode = allClaimsNode["ClassDescs"]["ClassDesc"];
		for (auto allClaimsNodeClassDescsClassDesc : allClassDescsNode)
		{
			Claim::ClassDesc classDescsObject;
			if(!allClaimsNodeClassDescsClassDesc["ClassNum"].isNull())
				classDescsObject.classNum = std::stoi(allClaimsNodeClassDescsClassDesc["ClassNum"].asString());
			if(!allClaimsNodeClassDescsClassDesc["Desc"].isNull())
				classDescsObject.desc = allClaimsNodeClassDescsClassDesc["Desc"].asString();
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

