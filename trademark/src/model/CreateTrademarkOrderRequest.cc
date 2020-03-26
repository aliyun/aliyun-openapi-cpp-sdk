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
{
	setMethod(HttpRequest::Method::Post);
}

CreateTrademarkOrderRequest::~CreateTrademarkOrderRequest()
{}

std::string CreateTrademarkOrderRequest::getRealUserName()const
{
	return realUserName_;
}

void CreateTrademarkOrderRequest::setRealUserName(const std::string& realUserName)
{
	realUserName_ = realUserName;
	setParameter("RealUserName", realUserName);
}

std::string CreateTrademarkOrderRequest::getOrderData()const
{
	return orderData_;
}

void CreateTrademarkOrderRequest::setOrderData(const std::string& orderData)
{
	orderData_ = orderData;
	setParameter("OrderData", orderData);
}

std::string CreateTrademarkOrderRequest::getChannel()const
{
	return channel_;
}

void CreateTrademarkOrderRequest::setChannel(const std::string& channel)
{
	channel_ = channel;
	setParameter("Channel", channel);
}

int CreateTrademarkOrderRequest::getType()const
{
	return type_;
}

void CreateTrademarkOrderRequest::setType(int type)
{
	type_ = type;
	setParameter("Type", std::to_string(type));
}

std::string CreateTrademarkOrderRequest::getMaterialId()const
{
	return materialId_;
}

void CreateTrademarkOrderRequest::setMaterialId(const std::string& materialId)
{
	materialId_ = materialId;
	setParameter("MaterialId", materialId);
}

long CreateTrademarkOrderRequest::getUserId()const
{
	return userId_;
}

void CreateTrademarkOrderRequest::setUserId(long userId)
{
	userId_ = userId;
	setParameter("UserId", std::to_string(userId));
}

std::string CreateTrademarkOrderRequest::getTmComment()const
{
	return tmComment_;
}

void CreateTrademarkOrderRequest::setTmComment(const std::string& tmComment)
{
	tmComment_ = tmComment;
	setParameter("TmComment", tmComment);
}

std::string CreateTrademarkOrderRequest::getTmNameType()const
{
	return tmNameType_;
}

void CreateTrademarkOrderRequest::setTmNameType(const std::string& tmNameType)
{
	tmNameType_ = tmNameType;
	setParameter("TmNameType", tmNameType);
}

std::string CreateTrademarkOrderRequest::getTmIcon()const
{
	return tmIcon_;
}

void CreateTrademarkOrderRequest::setTmIcon(const std::string& tmIcon)
{
	tmIcon_ = tmIcon;
	setParameter("TmIcon", tmIcon);
}

std::string CreateTrademarkOrderRequest::getUid()const
{
	return uid_;
}

void CreateTrademarkOrderRequest::setUid(const std::string& uid)
{
	uid_ = uid;
	setParameter("Uid", uid);
}

std::string CreateTrademarkOrderRequest::getRenewInfoId()const
{
	return renewInfoId_;
}

void CreateTrademarkOrderRequest::setRenewInfoId(const std::string& renewInfoId)
{
	renewInfoId_ = renewInfoId;
	setParameter("RenewInfoId", renewInfoId);
}

std::string CreateTrademarkOrderRequest::getRootCode()const
{
	return rootCode_;
}

void CreateTrademarkOrderRequest::setRootCode(const std::string& rootCode)
{
	rootCode_ = rootCode;
	setParameter("RootCode", rootCode);
}

std::string CreateTrademarkOrderRequest::getLoaOssKey()const
{
	return loaOssKey_;
}

void CreateTrademarkOrderRequest::setLoaOssKey(const std::string& loaOssKey)
{
	loaOssKey_ = loaOssKey;
	setParameter("LoaOssKey", loaOssKey);
}

std::string CreateTrademarkOrderRequest::getRegisterNumber()const
{
	return registerNumber_;
}

void CreateTrademarkOrderRequest::setRegisterNumber(const std::string& registerNumber)
{
	registerNumber_ = registerNumber;
	setParameter("RegisterNumber", registerNumber);
}

std::string CreateTrademarkOrderRequest::getTmName()const
{
	return tmName_;
}

void CreateTrademarkOrderRequest::setTmName(const std::string& tmName)
{
	tmName_ = tmName;
	setParameter("TmName", tmName);
}

std::string CreateTrademarkOrderRequest::getPartnerCode()const
{
	return partnerCode_;
}

void CreateTrademarkOrderRequest::setPartnerCode(const std::string& partnerCode)
{
	partnerCode_ = partnerCode;
	setParameter("PartnerCode", partnerCode);
}

std::string CreateTrademarkOrderRequest::getPhoneNum()const
{
	return phoneNum_;
}

void CreateTrademarkOrderRequest::setPhoneNum(const std::string& phoneNum)
{
	phoneNum_ = phoneNum;
	setParameter("PhoneNum", phoneNum);
}

std::string CreateTrademarkOrderRequest::getRegisterName()const
{
	return registerName_;
}

void CreateTrademarkOrderRequest::setRegisterName(const std::string& registerName)
{
	registerName_ = registerName;
	setParameter("RegisterName", registerName);
}

bool CreateTrademarkOrderRequest::getIsBlackIcon()const
{
	return isBlackIcon_;
}

void CreateTrademarkOrderRequest::setIsBlackIcon(bool isBlackIcon)
{
	isBlackIcon_ = isBlackIcon;
	setParameter("IsBlackIcon", isBlackIcon ? "true" : "false");
}

std::string CreateTrademarkOrderRequest::getBizId()const
{
	return bizId_;
}

void CreateTrademarkOrderRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

