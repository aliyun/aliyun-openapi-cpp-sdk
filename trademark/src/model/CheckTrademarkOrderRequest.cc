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

#include <alibabacloud/trademark/model/CheckTrademarkOrderRequest.h>

using AlibabaCloud::Trademark::Model::CheckTrademarkOrderRequest;

CheckTrademarkOrderRequest::CheckTrademarkOrderRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "CheckTrademarkOrder")
{
	setMethod(HttpRequest::Method::Post);
}

CheckTrademarkOrderRequest::~CheckTrademarkOrderRequest()
{}

std::string CheckTrademarkOrderRequest::getRealUserName()const
{
	return realUserName_;
}

void CheckTrademarkOrderRequest::setRealUserName(const std::string& realUserName)
{
	realUserName_ = realUserName;
	setParameter("RealUserName", realUserName);
}

std::string CheckTrademarkOrderRequest::getOrderData()const
{
	return orderData_;
}

void CheckTrademarkOrderRequest::setOrderData(const std::string& orderData)
{
	orderData_ = orderData;
	setParameter("OrderData", orderData);
}

std::string CheckTrademarkOrderRequest::getChannel()const
{
	return channel_;
}

void CheckTrademarkOrderRequest::setChannel(const std::string& channel)
{
	channel_ = channel;
	setParameter("Channel", channel);
}

int CheckTrademarkOrderRequest::getType()const
{
	return type_;
}

void CheckTrademarkOrderRequest::setType(int type)
{
	type_ = type;
	setParameter("Type", std::to_string(type));
}

std::string CheckTrademarkOrderRequest::getMaterialId()const
{
	return materialId_;
}

void CheckTrademarkOrderRequest::setMaterialId(const std::string& materialId)
{
	materialId_ = materialId;
	setParameter("MaterialId", materialId);
}

long CheckTrademarkOrderRequest::getUserId()const
{
	return userId_;
}

void CheckTrademarkOrderRequest::setUserId(long userId)
{
	userId_ = userId;
	setParameter("UserId", std::to_string(userId));
}

std::string CheckTrademarkOrderRequest::getTmComment()const
{
	return tmComment_;
}

void CheckTrademarkOrderRequest::setTmComment(const std::string& tmComment)
{
	tmComment_ = tmComment;
	setParameter("TmComment", tmComment);
}

std::string CheckTrademarkOrderRequest::getTmNameType()const
{
	return tmNameType_;
}

void CheckTrademarkOrderRequest::setTmNameType(const std::string& tmNameType)
{
	tmNameType_ = tmNameType;
	setParameter("TmNameType", tmNameType);
}

std::string CheckTrademarkOrderRequest::getTmIcon()const
{
	return tmIcon_;
}

void CheckTrademarkOrderRequest::setTmIcon(const std::string& tmIcon)
{
	tmIcon_ = tmIcon;
	setParameter("TmIcon", tmIcon);
}

std::string CheckTrademarkOrderRequest::getUid()const
{
	return uid_;
}

void CheckTrademarkOrderRequest::setUid(const std::string& uid)
{
	uid_ = uid;
	setParameter("Uid", uid);
}

std::string CheckTrademarkOrderRequest::getRenewInfoId()const
{
	return renewInfoId_;
}

void CheckTrademarkOrderRequest::setRenewInfoId(const std::string& renewInfoId)
{
	renewInfoId_ = renewInfoId;
	setParameter("RenewInfoId", renewInfoId);
}

std::string CheckTrademarkOrderRequest::getRootCode()const
{
	return rootCode_;
}

void CheckTrademarkOrderRequest::setRootCode(const std::string& rootCode)
{
	rootCode_ = rootCode;
	setParameter("RootCode", rootCode);
}

std::string CheckTrademarkOrderRequest::getLoaOssKey()const
{
	return loaOssKey_;
}

void CheckTrademarkOrderRequest::setLoaOssKey(const std::string& loaOssKey)
{
	loaOssKey_ = loaOssKey;
	setParameter("LoaOssKey", loaOssKey);
}

std::string CheckTrademarkOrderRequest::getRegisterNumber()const
{
	return registerNumber_;
}

void CheckTrademarkOrderRequest::setRegisterNumber(const std::string& registerNumber)
{
	registerNumber_ = registerNumber;
	setParameter("RegisterNumber", registerNumber);
}

std::string CheckTrademarkOrderRequest::getTmName()const
{
	return tmName_;
}

void CheckTrademarkOrderRequest::setTmName(const std::string& tmName)
{
	tmName_ = tmName;
	setParameter("TmName", tmName);
}

std::string CheckTrademarkOrderRequest::getPartnerCode()const
{
	return partnerCode_;
}

void CheckTrademarkOrderRequest::setPartnerCode(const std::string& partnerCode)
{
	partnerCode_ = partnerCode;
	setParameter("PartnerCode", partnerCode);
}

std::string CheckTrademarkOrderRequest::getPhoneNum()const
{
	return phoneNum_;
}

void CheckTrademarkOrderRequest::setPhoneNum(const std::string& phoneNum)
{
	phoneNum_ = phoneNum;
	setParameter("PhoneNum", phoneNum);
}

std::string CheckTrademarkOrderRequest::getRegisterName()const
{
	return registerName_;
}

void CheckTrademarkOrderRequest::setRegisterName(const std::string& registerName)
{
	registerName_ = registerName;
	setParameter("RegisterName", registerName);
}

bool CheckTrademarkOrderRequest::getIsBlackIcon()const
{
	return isBlackIcon_;
}

void CheckTrademarkOrderRequest::setIsBlackIcon(bool isBlackIcon)
{
	isBlackIcon_ = isBlackIcon;
	setParameter("IsBlackIcon", isBlackIcon ? "true" : "false");
}

std::string CheckTrademarkOrderRequest::getBizId()const
{
	return bizId_;
}

void CheckTrademarkOrderRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

