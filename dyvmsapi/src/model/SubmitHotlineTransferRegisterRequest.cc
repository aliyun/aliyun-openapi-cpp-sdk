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

#include <alibabacloud/dyvmsapi/model/SubmitHotlineTransferRegisterRequest.h>

using AlibabaCloud::Dyvmsapi::Model::SubmitHotlineTransferRegisterRequest;

SubmitHotlineTransferRegisterRequest::SubmitHotlineTransferRegisterRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "SubmitHotlineTransferRegister")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitHotlineTransferRegisterRequest::~SubmitHotlineTransferRegisterRequest()
{}

std::string SubmitHotlineTransferRegisterRequest::getOperatorIdentityCard()const
{
	return operatorIdentityCard_;
}

void SubmitHotlineTransferRegisterRequest::setOperatorIdentityCard(const std::string& operatorIdentityCard)
{
	operatorIdentityCard_ = operatorIdentityCard;
	setParameter("OperatorIdentityCard", operatorIdentityCard);
}

long SubmitHotlineTransferRegisterRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitHotlineTransferRegisterRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SubmitHotlineTransferRegisterRequest::getOperatorMail()const
{
	return operatorMail_;
}

void SubmitHotlineTransferRegisterRequest::setOperatorMail(const std::string& operatorMail)
{
	operatorMail_ = operatorMail;
	setParameter("OperatorMail", operatorMail);
}

std::string SubmitHotlineTransferRegisterRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitHotlineTransferRegisterRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SubmitHotlineTransferRegisterRequest::getHotlineNumber()const
{
	return hotlineNumber_;
}

void SubmitHotlineTransferRegisterRequest::setHotlineNumber(const std::string& hotlineNumber)
{
	hotlineNumber_ = hotlineNumber;
	setParameter("HotlineNumber", hotlineNumber);
}

std::vector<SubmitHotlineTransferRegisterRequest::TransferPhoneNumberInfos> SubmitHotlineTransferRegisterRequest::getTransferPhoneNumberInfos()const
{
	return transferPhoneNumberInfos_;
}

void SubmitHotlineTransferRegisterRequest::setTransferPhoneNumberInfos(const std::vector<TransferPhoneNumberInfos>& transferPhoneNumberInfos)
{
	transferPhoneNumberInfos_ = transferPhoneNumberInfos;
	for(int dep1 = 0; dep1!= transferPhoneNumberInfos.size(); dep1++) {
		auto transferPhoneNumberInfosObj = transferPhoneNumberInfos.at(dep1);
		std::string transferPhoneNumberInfosObjStr = "TransferPhoneNumberInfos." + std::to_string(dep1 + 1);
		setParameter(transferPhoneNumberInfosObjStr + ".PhoneNumber", transferPhoneNumberInfosObj.phoneNumber);
		setParameter(transferPhoneNumberInfosObjStr + ".PhoneNumberOwnerName", transferPhoneNumberInfosObj.phoneNumberOwnerName);
		setParameter(transferPhoneNumberInfosObjStr + ".IdentityCard", transferPhoneNumberInfosObj.identityCard);
	}
}

std::string SubmitHotlineTransferRegisterRequest::getOperatorMobileVerifyCode()const
{
	return operatorMobileVerifyCode_;
}

void SubmitHotlineTransferRegisterRequest::setOperatorMobileVerifyCode(const std::string& operatorMobileVerifyCode)
{
	operatorMobileVerifyCode_ = operatorMobileVerifyCode;
	setParameter("OperatorMobileVerifyCode", operatorMobileVerifyCode);
}

std::string SubmitHotlineTransferRegisterRequest::getAgreement()const
{
	return agreement_;
}

void SubmitHotlineTransferRegisterRequest::setAgreement(const std::string& agreement)
{
	agreement_ = agreement;
	setParameter("Agreement", agreement);
}

std::string SubmitHotlineTransferRegisterRequest::getQualificationId()const
{
	return qualificationId_;
}

void SubmitHotlineTransferRegisterRequest::setQualificationId(const std::string& qualificationId)
{
	qualificationId_ = qualificationId;
	setParameter("QualificationId", qualificationId);
}

std::string SubmitHotlineTransferRegisterRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitHotlineTransferRegisterRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long SubmitHotlineTransferRegisterRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitHotlineTransferRegisterRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SubmitHotlineTransferRegisterRequest::getOperatorMobile()const
{
	return operatorMobile_;
}

void SubmitHotlineTransferRegisterRequest::setOperatorMobile(const std::string& operatorMobile)
{
	operatorMobile_ = operatorMobile;
	setParameter("OperatorMobile", operatorMobile);
}

std::string SubmitHotlineTransferRegisterRequest::getOperatorMailVerifyCode()const
{
	return operatorMailVerifyCode_;
}

void SubmitHotlineTransferRegisterRequest::setOperatorMailVerifyCode(const std::string& operatorMailVerifyCode)
{
	operatorMailVerifyCode_ = operatorMailVerifyCode;
	setParameter("OperatorMailVerifyCode", operatorMailVerifyCode);
}

std::string SubmitHotlineTransferRegisterRequest::getOperatorName()const
{
	return operatorName_;
}

void SubmitHotlineTransferRegisterRequest::setOperatorName(const std::string& operatorName)
{
	operatorName_ = operatorName;
	setParameter("OperatorName", operatorName);
}

