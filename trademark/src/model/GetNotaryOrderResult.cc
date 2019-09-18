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

#include <alibabacloud/trademark/model/GetNotaryOrderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

GetNotaryOrderResult::GetNotaryOrderResult() :
	ServiceResult()
{}

GetNotaryOrderResult::GetNotaryOrderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetNotaryOrderResult::~GetNotaryOrderResult()
{}

void GetNotaryOrderResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["NotaryOrderId"].isNull())
		notaryOrderId_ = std::stol(value["NotaryOrderId"].asString());
	if(!value["AliyunOrderId"].isNull())
		aliyunOrderId_ = value["AliyunOrderId"].asString();
	if(!value["TmRegisterNo"].isNull())
		tmRegisterNo_ = value["TmRegisterNo"].asString();
	if(!value["TmName"].isNull())
		tmName_ = value["TmName"].asString();
	if(!value["TmImage"].isNull())
		tmImage_ = value["TmImage"].asString();
	if(!value["TmClassification"].isNull())
		tmClassification_ = value["TmClassification"].asString();
	if(!value["OrderPrice"].isNull())
		orderPrice_ = std::stof(value["OrderPrice"].asString());
	if(!value["NotaryStatus"].isNull())
		notaryStatus_ = std::stoi(value["NotaryStatus"].asString());
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Phone"].isNull())
		phone_ = value["Phone"].asString();
	if(!value["SellerCompanyName"].isNull())
		sellerCompanyName_ = value["SellerCompanyName"].asString();
	if(!value["BusinessLicenseId"].isNull())
		businessLicenseId_ = value["BusinessLicenseId"].asString();
	if(!value["LegalPersonName"].isNull())
		legalPersonName_ = value["LegalPersonName"].asString();
	if(!value["LegalPersonPhone"].isNull())
		legalPersonPhone_ = value["LegalPersonPhone"].asString();
	if(!value["LegalPersonIdCard"].isNull())
		legalPersonIdCard_ = value["LegalPersonIdCard"].asString();
	if(!value["CompanyContactName"].isNull())
		companyContactName_ = value["CompanyContactName"].asString();
	if(!value["CompanyContactPhone"].isNull())
		companyContactPhone_ = value["CompanyContactPhone"].asString();
	if(!value["TmRegisterCertificate"].isNull())
		tmRegisterCertificate_ = value["TmRegisterCertificate"].asString();
	if(!value["BusinessLicense"].isNull())
		businessLicense_ = value["BusinessLicense"].asString();
	if(!value["TmAcceptCertificate"].isNull())
		tmAcceptCertificate_ = value["TmAcceptCertificate"].asString();
	if(!value["SellerFrontOfIdCard"].isNull())
		sellerFrontOfIdCard_ = value["SellerFrontOfIdCard"].asString();
	if(!value["SellerBackOfIdCard"].isNull())
		sellerBackOfIdCard_ = value["SellerBackOfIdCard"].asString();
	if(!value["TmRegisterChangeCertificate"].isNull())
		tmRegisterChangeCertificate_ = value["TmRegisterChangeCertificate"].asString();
	if(!value["ReceiverName"].isNull())
		receiverName_ = value["ReceiverName"].asString();
	if(!value["ReceiverAddress"].isNull())
		receiverAddress_ = value["ReceiverAddress"].asString();
	if(!value["ReceiverPhone"].isNull())
		receiverPhone_ = value["ReceiverPhone"].asString();
	if(!value["ReceiverPostalCode"].isNull())
		receiverPostalCode_ = value["ReceiverPostalCode"].asString();
	if(!value["OrderDate"].isNull())
		orderDate_ = std::stol(value["OrderDate"].asString());
	if(!value["NotaryAcceptDate"].isNull())
		notaryAcceptDate_ = std::stol(value["NotaryAcceptDate"].asString());
	if(!value["NotarySucceedDate"].isNull())
		notarySucceedDate_ = std::stol(value["NotarySucceedDate"].asString());
	if(!value["NotaryFailedDate"].isNull())
		notaryFailedDate_ = std::stol(value["NotaryFailedDate"].asString());
	if(!value["NotaryFailedReason"].isNull())
		notaryFailedReason_ = value["NotaryFailedReason"].asString();
	if(!value["NotaryCertificate"].isNull())
		notaryCertificate_ = value["NotaryCertificate"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["BizId"].isNull())
		bizId_ = value["BizId"].asString();
	if(!value["NotaryType"].isNull())
		notaryType_ = std::stoi(value["NotaryType"].asString());
	if(!value["NotaryPlatformName"].isNull())
		notaryPlatformName_ = value["NotaryPlatformName"].asString();
	if(!value["ApplyPostStatus"].isNull())
		applyPostStatus_ = std::stoi(value["ApplyPostStatus"].asString());
	if(!value["NotaryPostReceipt"].isNull())
		notaryPostReceipt_ = value["NotaryPostReceipt"].asString();

}

std::string GetNotaryOrderResult::getTmImage()const
{
	return tmImage_;
}

std::string GetNotaryOrderResult::getTmClassification()const
{
	return tmClassification_;
}

std::string GetNotaryOrderResult::getSellerFrontOfIdCard()const
{
	return sellerFrontOfIdCard_;
}

int GetNotaryOrderResult::getNotaryType()const
{
	return notaryType_;
}

std::string GetNotaryOrderResult::getNotaryPlatformName()const
{
	return notaryPlatformName_;
}

int GetNotaryOrderResult::getApplyPostStatus()const
{
	return applyPostStatus_;
}

std::string GetNotaryOrderResult::getNotaryCertificate()const
{
	return notaryCertificate_;
}

bool GetNotaryOrderResult::getSuccess()const
{
	return success_;
}

std::string GetNotaryOrderResult::getName()const
{
	return name_;
}

std::string GetNotaryOrderResult::getLegalPersonName()const
{
	return legalPersonName_;
}

std::string GetNotaryOrderResult::getBusinessLicenseId()const
{
	return businessLicenseId_;
}

std::string GetNotaryOrderResult::getAliyunOrderId()const
{
	return aliyunOrderId_;
}

std::string GetNotaryOrderResult::getCompanyContactPhone()const
{
	return companyContactPhone_;
}

std::string GetNotaryOrderResult::getTmAcceptCertificate()const
{
	return tmAcceptCertificate_;
}

std::string GetNotaryOrderResult::getReceiverPhone()const
{
	return receiverPhone_;
}

std::string GetNotaryOrderResult::getPhone()const
{
	return phone_;
}

std::string GetNotaryOrderResult::getTmRegisterCertificate()const
{
	return tmRegisterCertificate_;
}

long GetNotaryOrderResult::getNotaryAcceptDate()const
{
	return notaryAcceptDate_;
}

long GetNotaryOrderResult::getNotaryOrderId()const
{
	return notaryOrderId_;
}

std::string GetNotaryOrderResult::getReceiverAddress()const
{
	return receiverAddress_;
}

long GetNotaryOrderResult::getNotarySucceedDate()const
{
	return notarySucceedDate_;
}

std::string GetNotaryOrderResult::getLegalPersonPhone()const
{
	return legalPersonPhone_;
}

std::string GetNotaryOrderResult::getNotaryFailedReason()const
{
	return notaryFailedReason_;
}

float GetNotaryOrderResult::getOrderPrice()const
{
	return orderPrice_;
}

long GetNotaryOrderResult::getNotaryFailedDate()const
{
	return notaryFailedDate_;
}

std::string GetNotaryOrderResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string GetNotaryOrderResult::getSellerBackOfIdCard()const
{
	return sellerBackOfIdCard_;
}

int GetNotaryOrderResult::getNotaryStatus()const
{
	return notaryStatus_;
}

std::string GetNotaryOrderResult::getSellerCompanyName()const
{
	return sellerCompanyName_;
}

long GetNotaryOrderResult::getOrderDate()const
{
	return orderDate_;
}

std::string GetNotaryOrderResult::getType()const
{
	return type_;
}

std::string GetNotaryOrderResult::getBusinessLicense()const
{
	return businessLicense_;
}

std::string GetNotaryOrderResult::getReceiverPostalCode()const
{
	return receiverPostalCode_;
}

std::string GetNotaryOrderResult::getNotaryPostReceipt()const
{
	return notaryPostReceipt_;
}

std::string GetNotaryOrderResult::getTmRegisterChangeCertificate()const
{
	return tmRegisterChangeCertificate_;
}

std::string GetNotaryOrderResult::getTmName()const
{
	return tmName_;
}

std::string GetNotaryOrderResult::getTmRegisterNo()const
{
	return tmRegisterNo_;
}

std::string GetNotaryOrderResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetNotaryOrderResult::getLegalPersonIdCard()const
{
	return legalPersonIdCard_;
}

std::string GetNotaryOrderResult::getCompanyContactName()const
{
	return companyContactName_;
}

std::string GetNotaryOrderResult::getReceiverName()const
{
	return receiverName_;
}

std::string GetNotaryOrderResult::getBizId()const
{
	return bizId_;
}

