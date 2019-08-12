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

#include <alibabacloud/cloudwf/model/ShopUpdateRequest.h>

using AlibabaCloud::Cloudwf::Model::ShopUpdateRequest;

ShopUpdateRequest::ShopUpdateRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ShopUpdate")
{}

ShopUpdateRequest::~ShopUpdateRequest()
{}

std::string ShopUpdateRequest::getShopCoordinate()const
{
	return shopCoordinate_;
}

void ShopUpdateRequest::setShopCoordinate(const std::string& shopCoordinate)
{
	shopCoordinate_ = shopCoordinate;
	setCoreParameter("ShopCoordinate", std::to_string(shopCoordinate));
}

std::string ShopUpdateRequest::getShopProvince()const
{
	return shopProvince_;
}

void ShopUpdateRequest::setShopProvince(const std::string& shopProvince)
{
	shopProvince_ = shopProvince;
	setCoreParameter("ShopProvince", std::to_string(shopProvince));
}

int ShopUpdateRequest::getShopTopType()const
{
	return shopTopType_;
}

void ShopUpdateRequest::setShopTopType(int shopTopType)
{
	shopTopType_ = shopTopType;
	setCoreParameter("ShopTopType", shopTopType);
}

std::string ShopUpdateRequest::getShopAddress()const
{
	return shopAddress_;
}

void ShopUpdateRequest::setShopAddress(const std::string& shopAddress)
{
	shopAddress_ = shopAddress;
	setCoreParameter("ShopAddress", std::to_string(shopAddress));
}

int ShopUpdateRequest::getShopType()const
{
	return shopType_;
}

void ShopUpdateRequest::setShopType(int shopType)
{
	shopType_ = shopType;
	setCoreParameter("ShopType", shopType);
}

std::string ShopUpdateRequest::getWarnEmail()const
{
	return warnEmail_;
}

void ShopUpdateRequest::setWarnEmail(const std::string& warnEmail)
{
	warnEmail_ = warnEmail;
	setCoreParameter("WarnEmail", std::to_string(warnEmail));
}

std::string ShopUpdateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ShopUpdateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

long ShopUpdateRequest::getSid()const
{
	return sid_;
}

void ShopUpdateRequest::setSid(long sid)
{
	sid_ = sid;
	setCoreParameter("Sid", sid);
}

std::string ShopUpdateRequest::getShopTel()const
{
	return shopTel_;
}

void ShopUpdateRequest::setShopTel(const std::string& shopTel)
{
	shopTel_ = shopTel;
	setCoreParameter("ShopTel", std::to_string(shopTel));
}

std::string ShopUpdateRequest::getWarnpHone()const
{
	return warnpHone_;
}

void ShopUpdateRequest::setWarnpHone(const std::string& warnpHone)
{
	warnpHone_ = warnpHone;
	setCoreParameter("WarnpHone", std::to_string(warnpHone));
}

int ShopUpdateRequest::getWarn()const
{
	return warn_;
}

void ShopUpdateRequest::setWarn(int warn)
{
	warn_ = warn;
	setCoreParameter("Warn", warn);
}

int ShopUpdateRequest::getShopArea()const
{
	return shopArea_;
}

void ShopUpdateRequest::setShopArea(int shopArea)
{
	shopArea_ = shopArea;
	setCoreParameter("ShopArea", shopArea);
}

std::string ShopUpdateRequest::getShopRemarks()const
{
	return shopRemarks_;
}

void ShopUpdateRequest::setShopRemarks(const std::string& shopRemarks)
{
	shopRemarks_ = shopRemarks;
	setCoreParameter("ShopRemarks", std::to_string(shopRemarks));
}

std::string ShopUpdateRequest::getShopCity()const
{
	return shopCity_;
}

void ShopUpdateRequest::setShopCity(const std::string& shopCity)
{
	shopCity_ = shopCity;
	setCoreParameter("ShopCity", std::to_string(shopCity));
}

int ShopUpdateRequest::getShopSubtype()const
{
	return shopSubtype_;
}

void ShopUpdateRequest::setShopSubtype(int shopSubtype)
{
	shopSubtype_ = shopSubtype;
	setCoreParameter("ShopSubtype", shopSubtype);
}

std::string ShopUpdateRequest::getShopBrand()const
{
	return shopBrand_;
}

void ShopUpdateRequest::setShopBrand(const std::string& shopBrand)
{
	shopBrand_ = shopBrand;
	setCoreParameter("ShopBrand", std::to_string(shopBrand));
}

std::string ShopUpdateRequest::getShopName()const
{
	return shopName_;
}

void ShopUpdateRequest::setShopName(const std::string& shopName)
{
	shopName_ = shopName;
	setCoreParameter("ShopName", std::to_string(shopName));
}

int ShopUpdateRequest::getShopCloseWarn()const
{
	return shopCloseWarn_;
}

void ShopUpdateRequest::setShopCloseWarn(int shopCloseWarn)
{
	shopCloseWarn_ = shopCloseWarn;
	setCoreParameter("ShopCloseWarn", shopCloseWarn);
}

std::string ShopUpdateRequest::getShopManager()const
{
	return shopManager_;
}

void ShopUpdateRequest::setShopManager(const std::string& shopManager)
{
	shopManager_ = shopManager;
	setCoreParameter("ShopManager", std::to_string(shopManager));
}

std::string ShopUpdateRequest::getShopBusinessHours()const
{
	return shopBusinessHours_;
}

void ShopUpdateRequest::setShopBusinessHours(const std::string& shopBusinessHours)
{
	shopBusinessHours_ = shopBusinessHours;
	setCoreParameter("ShopBusinessHours", std::to_string(shopBusinessHours));
}

