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

#include <alibabacloud/cloudwf/model/ShopCreateRequest.h>

using AlibabaCloud::Cloudwf::Model::ShopCreateRequest;

ShopCreateRequest::ShopCreateRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ShopCreate")
{}

ShopCreateRequest::~ShopCreateRequest()
{}

std::string ShopCreateRequest::getShopCoordinate()const
{
	return shopCoordinate_;
}

void ShopCreateRequest::setShopCoordinate(const std::string& shopCoordinate)
{
	shopCoordinate_ = shopCoordinate;
	setCoreParameter("ShopCoordinate", shopCoordinate);
}

std::string ShopCreateRequest::getShopProvince()const
{
	return shopProvince_;
}

void ShopCreateRequest::setShopProvince(const std::string& shopProvince)
{
	shopProvince_ = shopProvince;
	setCoreParameter("ShopProvince", shopProvince);
}

int ShopCreateRequest::getShopTopType()const
{
	return shopTopType_;
}

void ShopCreateRequest::setShopTopType(int shopTopType)
{
	shopTopType_ = shopTopType;
	setCoreParameter("ShopTopType", std::to_string(shopTopType));
}

std::string ShopCreateRequest::getShopAddress()const
{
	return shopAddress_;
}

void ShopCreateRequest::setShopAddress(const std::string& shopAddress)
{
	shopAddress_ = shopAddress;
	setCoreParameter("ShopAddress", shopAddress);
}

int ShopCreateRequest::getShopType()const
{
	return shopType_;
}

void ShopCreateRequest::setShopType(int shopType)
{
	shopType_ = shopType;
	setCoreParameter("ShopType", std::to_string(shopType));
}

std::string ShopCreateRequest::getWarnEmail()const
{
	return warnEmail_;
}

void ShopCreateRequest::setWarnEmail(const std::string& warnEmail)
{
	warnEmail_ = warnEmail;
	setCoreParameter("WarnEmail", warnEmail);
}

std::string ShopCreateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ShopCreateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ShopCreateRequest::getShopTel()const
{
	return shopTel_;
}

void ShopCreateRequest::setShopTel(const std::string& shopTel)
{
	shopTel_ = shopTel;
	setCoreParameter("ShopTel", shopTel);
}

std::string ShopCreateRequest::getWarnpHone()const
{
	return warnpHone_;
}

void ShopCreateRequest::setWarnpHone(const std::string& warnpHone)
{
	warnpHone_ = warnpHone;
	setCoreParameter("WarnpHone", warnpHone);
}

int ShopCreateRequest::getWarn()const
{
	return warn_;
}

void ShopCreateRequest::setWarn(int warn)
{
	warn_ = warn;
	setCoreParameter("Warn", std::to_string(warn));
}

int ShopCreateRequest::getShopArea()const
{
	return shopArea_;
}

void ShopCreateRequest::setShopArea(int shopArea)
{
	shopArea_ = shopArea;
	setCoreParameter("ShopArea", std::to_string(shopArea));
}

std::string ShopCreateRequest::getShopRemarks()const
{
	return shopRemarks_;
}

void ShopCreateRequest::setShopRemarks(const std::string& shopRemarks)
{
	shopRemarks_ = shopRemarks;
	setCoreParameter("ShopRemarks", shopRemarks);
}

std::string ShopCreateRequest::getShopCity()const
{
	return shopCity_;
}

void ShopCreateRequest::setShopCity(const std::string& shopCity)
{
	shopCity_ = shopCity;
	setCoreParameter("ShopCity", shopCity);
}

int ShopCreateRequest::getShopSubtype()const
{
	return shopSubtype_;
}

void ShopCreateRequest::setShopSubtype(int shopSubtype)
{
	shopSubtype_ = shopSubtype;
	setCoreParameter("ShopSubtype", std::to_string(shopSubtype));
}

std::string ShopCreateRequest::getShopBrand()const
{
	return shopBrand_;
}

void ShopCreateRequest::setShopBrand(const std::string& shopBrand)
{
	shopBrand_ = shopBrand;
	setCoreParameter("ShopBrand", shopBrand);
}

std::string ShopCreateRequest::getShopName()const
{
	return shopName_;
}

void ShopCreateRequest::setShopName(const std::string& shopName)
{
	shopName_ = shopName;
	setCoreParameter("ShopName", shopName);
}

int ShopCreateRequest::getShopCloseWarn()const
{
	return shopCloseWarn_;
}

void ShopCreateRequest::setShopCloseWarn(int shopCloseWarn)
{
	shopCloseWarn_ = shopCloseWarn;
	setCoreParameter("ShopCloseWarn", std::to_string(shopCloseWarn));
}

long ShopCreateRequest::getBid()const
{
	return bid_;
}

void ShopCreateRequest::setBid(long bid)
{
	bid_ = bid;
	setCoreParameter("Bid", std::to_string(bid));
}

std::string ShopCreateRequest::getShopManager()const
{
	return shopManager_;
}

void ShopCreateRequest::setShopManager(const std::string& shopManager)
{
	shopManager_ = shopManager;
	setCoreParameter("ShopManager", shopManager);
}

std::string ShopCreateRequest::getShopBusinessHours()const
{
	return shopBusinessHours_;
}

void ShopCreateRequest::setShopBusinessHours(const std::string& shopBusinessHours)
{
	shopBusinessHours_ = shopBusinessHours;
	setCoreParameter("ShopBusinessHours", shopBusinessHours);
}

