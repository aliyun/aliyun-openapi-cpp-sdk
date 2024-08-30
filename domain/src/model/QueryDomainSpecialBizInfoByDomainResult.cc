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

#include <alibabacloud/domain/model/QueryDomainSpecialBizInfoByDomainResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryDomainSpecialBizInfoByDomainResult::QueryDomainSpecialBizInfoByDomainResult() :
	ServiceResult()
{}

QueryDomainSpecialBizInfoByDomainResult::QueryDomainSpecialBizInfoByDomainResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDomainSpecialBizInfoByDomainResult::~QueryDomainSpecialBizInfoByDomainResult()
{}

void QueryDomainSpecialBizInfoByDomainResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto moduleNode = value["Module"];
	if(!moduleNode["Id"].isNull())
		module_.id = std::stol(moduleNode["Id"].asString());
	if(!moduleNode["GmtCreate"].isNull())
		module_.gmtCreate = moduleNode["GmtCreate"].asString();
	if(!moduleNode["GmtModified"].isNull())
		module_.gmtModified = moduleNode["GmtModified"].asString();
	if(!moduleNode["BizName"].isNull())
		module_.bizName = moduleNode["BizName"].asString();
	if(!moduleNode["BizNo"].isNull())
		module_.bizNo = moduleNode["BizNo"].asString();
	if(!moduleNode["DomainName"].isNull())
		module_.domainName = moduleNode["DomainName"].asString();
	if(!moduleNode["SaleId"].isNull())
		module_.saleId = moduleNode["SaleId"].asString();
	if(!moduleNode["UserId"].isNull())
		module_.userId = moduleNode["UserId"].asString();
	if(!moduleNode["ProductId"].isNull())
		module_.productId = moduleNode["ProductId"].asString();
	if(!moduleNode["BizType"].isNull())
		module_.bizType = moduleNode["BizType"].asString();
	if(!moduleNode["BizStatus"].isNull())
		module_.bizStatus = moduleNode["BizStatus"].asString();
	if(!moduleNode["Status"].isNull())
		module_.status = std::stoi(moduleNode["Status"].asString());
	if(!moduleNode["StatusDesc"].isNull())
		module_.statusDesc = moduleNode["StatusDesc"].asString();
	if(!moduleNode["AuditMsg"].isNull())
		module_.auditMsg = moduleNode["AuditMsg"].asString();
	if(!moduleNode["OrderId"].isNull())
		module_.orderId = moduleNode["OrderId"].asString();
	if(!moduleNode["UpdateTime"].isNull())
		module_.updateTime = std::stol(moduleNode["UpdateTime"].asString());
	if(!moduleNode["CreateTime"].isNull())
		module_.createTime = std::stol(moduleNode["CreateTime"].asString());
	auto allDomainSpecialBizCredentialsNode = moduleNode["DomainSpecialBizCredentials"]["DomainSpecialBizCredential"];
	for (auto moduleNodeDomainSpecialBizCredentialsDomainSpecialBizCredential : allDomainSpecialBizCredentialsNode)
	{
		Module::DomainSpecialBizCredential domainSpecialBizCredentialObject;
		if(!moduleNodeDomainSpecialBizCredentialsDomainSpecialBizCredential["DomainName"].isNull())
			domainSpecialBizCredentialObject.domainName = moduleNodeDomainSpecialBizCredentialsDomainSpecialBizCredential["DomainName"].asString();
		if(!moduleNodeDomainSpecialBizCredentialsDomainSpecialBizCredential["SaleId"].isNull())
			domainSpecialBizCredentialObject.saleId = moduleNodeDomainSpecialBizCredentialsDomainSpecialBizCredential["SaleId"].asString();
		if(!moduleNodeDomainSpecialBizCredentialsDomainSpecialBizCredential["BizId"].isNull())
			domainSpecialBizCredentialObject.bizId = std::stol(moduleNodeDomainSpecialBizCredentialsDomainSpecialBizCredential["BizId"].asString());
		if(!moduleNodeDomainSpecialBizCredentialsDomainSpecialBizCredential["CredentialNo"].isNull())
			domainSpecialBizCredentialObject.credentialNo = moduleNodeDomainSpecialBizCredentialsDomainSpecialBizCredential["CredentialNo"].asString();
		if(!moduleNodeDomainSpecialBizCredentialsDomainSpecialBizCredential["CredentialType"].isNull())
			domainSpecialBizCredentialObject.credentialType = moduleNodeDomainSpecialBizCredentialsDomainSpecialBizCredential["CredentialType"].asString();
		if(!moduleNodeDomainSpecialBizCredentialsDomainSpecialBizCredential["CredentialUrl"].isNull())
			domainSpecialBizCredentialObject.credentialUrl = moduleNodeDomainSpecialBizCredentialsDomainSpecialBizCredential["CredentialUrl"].asString();
		if(!moduleNodeDomainSpecialBizCredentialsDomainSpecialBizCredential["HolderCert"].isNull())
			domainSpecialBizCredentialObject.holderCert = std::stoi(moduleNodeDomainSpecialBizCredentialsDomainSpecialBizCredential["HolderCert"].asString());
		module_.domainSpecialBizCredentials.push_back(domainSpecialBizCredentialObject);
	}
	auto domainSpecialBizContactNode = moduleNode["DomainSpecialBizContact"];
	if(!domainSpecialBizContactNode["BizId"].isNull())
		module_.domainSpecialBizContact.bizId = std::stol(domainSpecialBizContactNode["BizId"].asString());
	if(!domainSpecialBizContactNode["RegType"].isNull())
		module_.domainSpecialBizContact.regType = std::stoi(domainSpecialBizContactNode["RegType"].asString());
	if(!domainSpecialBizContactNode["CCompany"].isNull())
		module_.domainSpecialBizContact.cCompany = domainSpecialBizContactNode["CCompany"].asString();
	if(!domainSpecialBizContactNode["ECompany"].isNull())
		module_.domainSpecialBizContact.eCompany = domainSpecialBizContactNode["ECompany"].asString();
	if(!domainSpecialBizContactNode["CName"].isNull())
		module_.domainSpecialBizContact.cName = domainSpecialBizContactNode["CName"].asString();
	if(!domainSpecialBizContactNode["EName"].isNull())
		module_.domainSpecialBizContact.eName = domainSpecialBizContactNode["EName"].asString();
	if(!domainSpecialBizContactNode["CCountry"].isNull())
		module_.domainSpecialBizContact.cCountry = domainSpecialBizContactNode["CCountry"].asString();
	if(!domainSpecialBizContactNode["CProvince"].isNull())
		module_.domainSpecialBizContact.cProvince = domainSpecialBizContactNode["CProvince"].asString();
	if(!domainSpecialBizContactNode["EProvince"].isNull())
		module_.domainSpecialBizContact.eProvince = domainSpecialBizContactNode["EProvince"].asString();
	if(!domainSpecialBizContactNode["CCity"].isNull())
		module_.domainSpecialBizContact.cCity = domainSpecialBizContactNode["CCity"].asString();
	if(!domainSpecialBizContactNode["ECity"].isNull())
		module_.domainSpecialBizContact.eCity = domainSpecialBizContactNode["ECity"].asString();
	if(!domainSpecialBizContactNode["CVenu"].isNull())
		module_.domainSpecialBizContact.cVenu = domainSpecialBizContactNode["CVenu"].asString();
	if(!domainSpecialBizContactNode["EVenu"].isNull())
		module_.domainSpecialBizContact.eVenu = domainSpecialBizContactNode["EVenu"].asString();
	if(!domainSpecialBizContactNode["Postalcode"].isNull())
		module_.domainSpecialBizContact.postalcode = domainSpecialBizContactNode["Postalcode"].asString();
	if(!domainSpecialBizContactNode["Email"].isNull())
		module_.domainSpecialBizContact.email = domainSpecialBizContactNode["Email"].asString();
	if(!domainSpecialBizContactNode["TelArea"].isNull())
		module_.domainSpecialBizContact.telArea = domainSpecialBizContactNode["TelArea"].asString();
	if(!domainSpecialBizContactNode["TelMain"].isNull())
		module_.domainSpecialBizContact.telMain = domainSpecialBizContactNode["TelMain"].asString();
	if(!domainSpecialBizContactNode["TelExt"].isNull())
		module_.domainSpecialBizContact.telExt = domainSpecialBizContactNode["TelExt"].asString();
	if(!domainSpecialBizContactNode["FaxArea"].isNull())
		module_.domainSpecialBizContact.faxArea = domainSpecialBizContactNode["FaxArea"].asString();
	if(!domainSpecialBizContactNode["FaxMain"].isNull())
		module_.domainSpecialBizContact.faxMain = domainSpecialBizContactNode["FaxMain"].asString();
	if(!domainSpecialBizContactNode["FaxExt"].isNull())
		module_.domainSpecialBizContact.faxExt = domainSpecialBizContactNode["FaxExt"].asString();
	if(!domainSpecialBizContactNode["Mobile"].isNull())
		module_.domainSpecialBizContact.mobile = domainSpecialBizContactNode["Mobile"].asString();
	if(!domainSpecialBizContactNode["Extend"].isNull())
		module_.domainSpecialBizContact.extend = domainSpecialBizContactNode["Extend"].asString();
	if(!domainSpecialBizContactNode["VspContactId"].isNull())
		module_.domainSpecialBizContact.vspContactId = domainSpecialBizContactNode["VspContactId"].asString();
	if(!domainSpecialBizContactNode["RegistrantId"].isNull())
		module_.domainSpecialBizContact.registrantId = domainSpecialBizContactNode["RegistrantId"].asString();
	auto allErrorArgs = value["ErrorArgs"]["ErrorArg"];
	for (const auto &item : allErrorArgs)
		errorArgs_.push_back(item.asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["Synchro"].isNull())
		synchro_ = value["Synchro"].asString() == "true";
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["AllowRetry"].isNull())
		allowRetry_ = value["AllowRetry"].asString() == "true";
	if(!value["AppName"].isNull())
		appName_ = value["AppName"].asString();

}

bool QueryDomainSpecialBizInfoByDomainResult::getAllowRetry()const
{
	return allowRetry_;
}

bool QueryDomainSpecialBizInfoByDomainResult::getSynchro()const
{
	return synchro_;
}

std::vector<std::string> QueryDomainSpecialBizInfoByDomainResult::getErrorArgs()const
{
	return errorArgs_;
}

int QueryDomainSpecialBizInfoByDomainResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string QueryDomainSpecialBizInfoByDomainResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string QueryDomainSpecialBizInfoByDomainResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string QueryDomainSpecialBizInfoByDomainResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string QueryDomainSpecialBizInfoByDomainResult::getErrorCode()const
{
	return errorCode_;
}

QueryDomainSpecialBizInfoByDomainResult::Module QueryDomainSpecialBizInfoByDomainResult::getModule()const
{
	return module_;
}

bool QueryDomainSpecialBizInfoByDomainResult::getSuccess()const
{
	return success_;
}

std::string QueryDomainSpecialBizInfoByDomainResult::getAppName()const
{
	return appName_;
}

