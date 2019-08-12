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

#include <alibabacloud/trademark/model/CreateTrademarkOrderRequest.h>

using AlibabaCloud::Trademark::Model::CreateTrademarkOrderRequest;

CreateTrademarkOrderRequest::CreateTrademarkOrderRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "CreateTrademarkOrder")
{}

CreateTrademarkOrderRequest::~CreateTrademarkOrderRequest()
{}

std::string CreateTrademarkOrderRequest::getTmName()const
{
	return tmName_;
}

void CreateTrademarkOrderRequest::setTmName(const std::string& tmName)
{
	tmName_ = tmName;
	setCoreParameter("TmName", std::to_string(tmName));
}

std::string CreateTrademarkOrderRequest::getRealUserName()const
{
	return realUserName_;
}

void CreateTrademarkOrderRequest::setRealUserName(const std::string& realUserName)
{
	realUserName_ = realUserName;
	setCoreParameter("RealUserName", std::to_string(realUserName));
}

std::string CreateTrademarkOrderRequest::getOrderData()const
{
	return orderData_;
}

void CreateTrademarkOrderRequest::setOrderData(const std::string& orderData)
{
	orderData_ = orderData;
	setCoreParameter("OrderData", std::to_string(orderData));
}

std::string CreateTrademarkOrderRequest::getChannel()const
{
	return channel_;
}

void CreateTrademarkOrderRequest::setChannel(const std::string& channel)
{
	channel_ = channel;
	setCoreParameter("Channel", std::to_string(channel));
}

std::string CreateTrademarkOrderRequest::getPartnerCode()const
{
	return partnerCode_;
}

void CreateTrademarkOrderRequest::setPartnerCode(const std::string& partnerCode)
{
	partnerCode_ = partnerCode;
	setCoreParameter("PartnerCode", std::to_string(partnerCode));
}

std::string CreateTrademarkOrderRequest::getPhoneNum()const
{
	return phoneNum_;
}

void CreateTrademarkOrderRequest::setPhoneNum(const std::string& phoneNum)
{
	phoneNum_ = phoneNum;
	setCoreParameter("PhoneNum", std::to_string(phoneNum));
}

int CreateTrademarkOrderRequest::getType()const
{
	return type_;
}

void CreateTrademarkOrderRequest::setType(int type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string CreateTrademarkOrderRequest::getMaterialId()const
{
	return materialId_;
}

void CreateTrademarkOrderRequest::setMaterialId(const std::string& materialId)
{
	materialId_ = materialId;
	setCoreParameter("MaterialId", std::to_string(materialId));
}

long CreateTrademarkOrderRequest::getUserId()const
{
	return userId_;
}

void CreateTrademarkOrderRequest::setUserId(long userId)
{
	userId_ = userId;
	setCoreParameter("UserId", userId);
}

std::string CreateTrademarkOrderRequest::getTmComment()const
{
	return tmComment_;
}

void CreateTrademarkOrderRequest::setTmComment(const std::string& tmComment)
{
	tmComment_ = tmComment;
	setCoreParameter("TmComment", std::to_string(tmComment));
}

std::string CreateTrademarkOrderRequest::getRegisterName()const
{
	return registerName_;
}

void CreateTrademarkOrderRequest::setRegisterName(const std::string& registerName)
{
	registerName_ = registerName;
	setCoreParameter("RegisterName", std::to_string(registerName));
}

std::string CreateTrademarkOrderRequest::getTmNameType()const
{
	return tmNameType_;
}

void CreateTrademarkOrderRequest::setTmNameType(const std::string& tmNameType)
{
	tmNameType_ = tmNameType;
	setCoreParameter("TmNameType", std::to_string(tmNameType));
}

std::string CreateTrademarkOrderRequest::getTmIcon()const
{
	return tmIcon_;
}

void CreateTrademarkOrderRequest::setTmIcon(const std::string& tmIcon)
{
	tmIcon_ = tmIcon;
	setCoreParameter("TmIcon", std::to_string(tmIcon));
}

std::string CreateTrademarkOrderRequest::getUid()const
{
	return uid_;
}

void CreateTrademarkOrderRequest::setUid(const std::string& uid)
{
	uid_ = uid;
	setCoreParameter("Uid", std::to_string(uid));
}

bool CreateTrademarkOrderRequest::getIsBlackIcon()const
{
	return isBlackIcon_;
}

void CreateTrademarkOrderRequest::setIsBlackIcon(bool isBlackIcon)
{
	isBlackIcon_ = isBlackIcon;
	setCoreParameter("IsBlackIcon", isBlackIcon ? "true" : "false");
}

std::string CreateTrademarkOrderRequest::getRenewInfoId()const
{
	return renewInfoId_;
}

void CreateTrademarkOrderRequest::setRenewInfoId(const std::string& renewInfoId)
{
	renewInfoId_ = renewInfoId;
	setCoreParameter("RenewInfoId", std::to_string(renewInfoId));
}

std::string CreateTrademarkOrderRequest::getBizId()const
{
	return bizId_;
}

void CreateTrademarkOrderRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setCoreParameter("BizId", std::to_string(bizId));
}

std::string CreateTrademarkOrderRequest::getRootCode()const
{
	return rootCode_;
}

void CreateTrademarkOrderRequest::setRootCode(const std::string& rootCode)
{
	rootCode_ = rootCode;
	setCoreParameter("RootCode", std::to_string(rootCode));
}

std::string CreateTrademarkOrderRequest::getLoaOssKey()const
{
	return loaOssKey_;
}

void CreateTrademarkOrderRequest::setLoaOssKey(const std::string& loaOssKey)
{
	loaOssKey_ = loaOssKey;
	setCoreParameter("LoaOssKey", std::to_string(loaOssKey));
}

std::string CreateTrademarkOrderRequest::getRegisterNumber()const
{
	return registerNumber_;
}

void CreateTrademarkOrderRequest::setRegisterNumber(const std::string& registerNumber)
{
	registerNumber_ = registerNumber;
	setCoreParameter("RegisterNumber", std::to_string(registerNumber));
}

