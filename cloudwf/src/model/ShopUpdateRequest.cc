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
{
	setMethod(HttpRequest::Method::Post);
}

ShopUpdateRequest::~ShopUpdateRequest()
{}

std::string ShopUpdateRequest::getShopProvince()const
{
	return shopProvince_;
}

void ShopUpdateRequest::setShopProvince(const std::string& shopProvince)
{
	shopProvince_ = shopProvince;
	setCoreParameter("ShopProvince", shopProvince);
}

int ShopUpdateRequest::getShopTopType()const
{
	return shopTopType_;
}

void ShopUpdateRequest::setShopTopType(int shopTopType)
{
	shopTopType_ = shopTopType;
	setCoreParameter("ShopTopType", std::to_string(shopTopType));
}

int ShopUpdateRequest::getShopType()const
{
	return shopType_;
}

void ShopUpdateRequest::setShopType(int shopType)
{
	shopType_ = shopType;
	setCoreParameter("ShopType", std::to_string(shopType));
}

std::string ShopUpdateRequest::getWarnEmail()const
{
	return warnEmail_;
}

void ShopUpdateRequest::setWarnEmail(const std::string& warnEmail)
{
	warnEmail_ = warnEmail;
	setCoreParameter("WarnEmail", warnEmail);
}

std::string ShopUpdateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ShopUpdateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

long ShopUpdateRequest::getSid()const
{
	return sid_;
}

void ShopUpdateRequest::setSid(long sid)
{
	sid_ = sid;
	setCoreParameter("Sid", std::to_string(sid));
}

std::string ShopUpdateRequest::getShopTel()const
{
	return shopTel_;
}

void ShopUpdateRequest::setShopTel(const std::string& shopTel)
{
	shopTel_ = shopTel;
	setCoreParameter("ShopTel", shopTel);
}

std::string ShopUpdateRequest::getWarnpHone()const
{
	return warnpHone_;
}

void ShopUpdateRequest::setWarnpHone(const std::string& warnpHone)
{
	warnpHone_ = warnpHone;
	setCoreParameter("WarnpHone", warnpHone);
}

std::string ShopUpdateRequest::getShopCity()const
{
	return shopCity_;
}

void ShopUpdateRequest::setShopCity(const std::string& shopCity)
{
	shopCity_ = shopCity;
	setCoreParameter("ShopCity", shopCity);
}

std::string ShopUpdateRequest::getShopBrand()const
{
	return shopBrand_;
}

void ShopUpdateRequest::setShopBrand(const std::string& shopBrand)
{
	shopBrand_ = shopBrand;
	setCoreParameter("ShopBrand", shopBrand);
}

int ShopUpdateRequest::getShopCloseWarn()const
{
	return shopCloseWarn_;
}

void ShopUpdateRequest::setShopCloseWarn(int shopCloseWarn)
{
	shopCloseWarn_ = shopCloseWarn;
	setCoreParameter("ShopCloseWarn", std::to_string(shopCloseWarn));
}

std::string ShopUpdateRequest::getShopBusinessHours()const
{
	return shopBusinessHours_;
}

void ShopUpdateRequest::setShopBusinessHours(const std::string& shopBusinessHours)
{
	shopBusinessHours_ = shopBusinessHours;
	setCoreParameter("ShopBusinessHours", shopBusinessHours);
}

std::string ShopUpdateRequest::getShopCoordinate()const
{
	return shopCoordinate_;
}

void ShopUpdateRequest::setShopCoordinate(const std::string& shopCoordinate)
{
	shopCoordinate_ = shopCoordinate;
	setCoreParameter("ShopCoordinate", shopCoordinate);
}

std::string ShopUpdateRequest::getShopAddress()const
{
	return shopAddress_;
}

void ShopUpdateRequest::setShopAddress(const std::string& shopAddress)
{
	shopAddress_ = shopAddress;
	setCoreParameter("ShopAddress", shopAddress);
}

int ShopUpdateRequest::getWarn()const
{
	return warn_;
}

void ShopUpdateRequest::setWarn(int warn)
{
	warn_ = warn;
	setCoreParameter("Warn", std::to_string(warn));
}

int ShopUpdateRequest::getShopArea()const
{
	return shopArea_;
}

void ShopUpdateRequest::setShopArea(int shopArea)
{
	shopArea_ = shopArea;
	setCoreParameter("ShopArea", std::to_string(shopArea));
}

std::string ShopUpdateRequest::getShopRemarks()const
{
	return shopRemarks_;
}

void ShopUpdateRequest::setShopRemarks(const std::string& shopRemarks)
{
	shopRemarks_ = shopRemarks;
	setCoreParameter("ShopRemarks", shopRemarks);
}

int ShopUpdateRequest::getShopSubtype()const
{
	return shopSubtype_;
}

void ShopUpdateRequest::setShopSubtype(int shopSubtype)
{
	shopSubtype_ = shopSubtype;
	setCoreParameter("ShopSubtype", std::to_string(shopSubtype));
}

std::string ShopUpdateRequest::getShopName()const
{
	return shopName_;
}

void ShopUpdateRequest::setShopName(const std::string& shopName)
{
	shopName_ = shopName;
	setCoreParameter("ShopName", shopName);
}

std::string ShopUpdateRequest::getShopManager()const
{
	return shopManager_;
}

void ShopUpdateRequest::setShopManager(const std::string& shopManager)
{
	shopManager_ = shopManager;
	setCoreParameter("ShopManager", shopManager);
}

