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

#include <alibabacloud/cas/model/GetUserCertificateDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

GetUserCertificateDetailResult::GetUserCertificateDetailResult() :
	ServiceResult()
{}

GetUserCertificateDetailResult::GetUserCertificateDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUserCertificateDetailResult::~GetUserCertificateDetailResult()
{}

void GetUserCertificateDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Cert"].isNull())
		cert_ = value["Cert"].asString();
	if(!value["Key"].isNull())
		key_ = value["Key"].asString();
	if(!value["EncryptCert"].isNull())
		encryptCert_ = value["EncryptCert"].asString();
	if(!value["EncryptPrivateKey"].isNull())
		encryptPrivateKey_ = value["EncryptPrivateKey"].asString();
	if(!value["SignCert"].isNull())
		signCert_ = value["SignCert"].asString();
	if(!value["SignPrivateKey"].isNull())
		signPrivateKey_ = value["SignPrivateKey"].asString();
	if(!value["Id"].isNull())
		id_ = std::stol(value["Id"].asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Common"].isNull())
		common_ = value["Common"].asString();
	if(!value["Fingerprint"].isNull())
		fingerprint_ = value["Fingerprint"].asString();
	if(!value["Issuer"].isNull())
		issuer_ = value["Issuer"].asString();
	if(!value["OrgName"].isNull())
		orgName_ = value["OrgName"].asString();
	if(!value["Province"].isNull())
		province_ = value["Province"].asString();
	if(!value["City"].isNull())
		city_ = value["City"].asString();
	if(!value["Country"].isNull())
		country_ = value["Country"].asString();
	if(!value["StartDate"].isNull())
		startDate_ = value["StartDate"].asString();
	if(!value["EndDate"].isNull())
		endDate_ = value["EndDate"].asString();
	if(!value["Sans"].isNull())
		sans_ = value["Sans"].asString();
	if(!value["Expired"].isNull())
		expired_ = value["Expired"].asString() == "true";
	if(!value["BuyInAliyun"].isNull())
		buyInAliyun_ = value["BuyInAliyun"].asString() == "true";
	if(!value["OrderId"].isNull())
		orderId_ = std::stol(value["OrderId"].asString());
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["Algorithm"].isNull())
		algorithm_ = value["Algorithm"].asString();

}

std::string GetUserCertificateDetailResult::getSignCert()const
{
	return signCert_;
}

std::string GetUserCertificateDetailResult::getFingerprint()const
{
	return fingerprint_;
}

std::string GetUserCertificateDetailResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string GetUserCertificateDetailResult::getIssuer()const
{
	return issuer_;
}

std::string GetUserCertificateDetailResult::getEncryptCert()const
{
	return encryptCert_;
}

std::string GetUserCertificateDetailResult::getOrgName()const
{
	return orgName_;
}

bool GetUserCertificateDetailResult::getExpired()const
{
	return expired_;
}

std::string GetUserCertificateDetailResult::getCity()const
{
	return city_;
}

long GetUserCertificateDetailResult::getOrderId()const
{
	return orderId_;
}

std::string GetUserCertificateDetailResult::getEndDate()const
{
	return endDate_;
}

std::string GetUserCertificateDetailResult::getAlgorithm()const
{
	return algorithm_;
}

std::string GetUserCertificateDetailResult::getProvince()const
{
	return province_;
}

std::string GetUserCertificateDetailResult::getName()const
{
	return name_;
}

std::string GetUserCertificateDetailResult::getCommon()const
{
	return common_;
}

bool GetUserCertificateDetailResult::getBuyInAliyun()const
{
	return buyInAliyun_;
}

std::string GetUserCertificateDetailResult::getStartDate()const
{
	return startDate_;
}

std::string GetUserCertificateDetailResult::getSans()const
{
	return sans_;
}

std::string GetUserCertificateDetailResult::getCountry()const
{
	return country_;
}

std::string GetUserCertificateDetailResult::getSignPrivateKey()const
{
	return signPrivateKey_;
}

std::string GetUserCertificateDetailResult::getCert()const
{
	return cert_;
}

std::string GetUserCertificateDetailResult::getEncryptPrivateKey()const
{
	return encryptPrivateKey_;
}

long GetUserCertificateDetailResult::getId()const
{
	return id_;
}

std::string GetUserCertificateDetailResult::getKey()const
{
	return key_;
}

