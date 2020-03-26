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
{
	setMethod(HttpRequest::Method::Post);
}

ShopCreateRequest::~ShopCreateRequest()
{}

std::string ShopCreateRequest::getShopProvince()const
{
	return shopProvince_;
}

void ShopCreateRequest::setShopProvince(const std::string& shopProvince)
{
	shopProvince_ = shopProvince;
	setParameter("ShopProvince", shopProvince);
}

int ShopCreateRequest::getShopTopType()const
{
	return shopTopType_;
}

void ShopCreateRequest::setShopTopType(int shopTopType)
{
	shopTopType_ = shopTopType;
	setParameter("ShopTopType", std::to_string(shopTopType));
}

int ShopCreateRequest::getShopType()const
{
	return shopType_;
}

void ShopCreateRequest::setShopType(int shopType)
{
	shopType_ = shopType;
	setParameter("ShopType", std::to_string(shopType));
}

std::string ShopCreateRequest::getWarnEmail()const
{
	return warnEmail_;
}

void ShopCreateRequest::setWarnEmail(const std::string& warnEmail)
{
	warnEmail_ = warnEmail;
	setParameter("WarnEmail", warnEmail);
}

std::string ShopCreateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ShopCreateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ShopCreateRequest::getShopTel()const
{
	return shopTel_;
}

void ShopCreateRequest::setShopTel(const std::string& shopTel)
{
	shopTel_ = shopTel;
	setParameter("ShopTel", shopTel);
}

std::string ShopCreateRequest::getWarnpHone()const
{
	return warnpHone_;
}

void ShopCreateRequest::setWarnpHone(const std::string& warnpHone)
{
	warnpHone_ = warnpHone;
	setParameter("WarnpHone", warnpHone);
}

std::string ShopCreateRequest::getShopCity()const
{
	return shopCity_;
}

void ShopCreateRequest::setShopCity(const std::string& shopCity)
{
	shopCity_ = shopCity;
	setParameter("ShopCity", shopCity);
}

std::string ShopCreateRequest::getShopBrand()const
{
	return shopBrand_;
}

void ShopCreateRequest::setShopBrand(const std::string& shopBrand)
{
	shopBrand_ = shopBrand;
	setParameter("ShopBrand", shopBrand);
}

int ShopCreateRequest::getShopCloseWarn()const
{
	return shopCloseWarn_;
}

void ShopCreateRequest::setShopCloseWarn(int shopCloseWarn)
{
	shopCloseWarn_ = shopCloseWarn;
	setParameter("ShopCloseWarn", std::to_string(shopCloseWarn));
}

std::string ShopCreateRequest::getShopBusinessHours()const
{
	return shopBusinessHours_;
}

void ShopCreateRequest::setShopBusinessHours(const std::string& shopBusinessHours)
{
	shopBusinessHours_ = shopBusinessHours;
	setParameter("ShopBusinessHours", shopBusinessHours);
}

std::string ShopCreateRequest::getShopCoordinate()const
{
	return shopCoordinate_;
}

void ShopCreateRequest::setShopCoordinate(const std::string& shopCoordinate)
{
	shopCoordinate_ = shopCoordinate;
	setParameter("ShopCoordinate", shopCoordinate);
}

std::string ShopCreateRequest::getShopAddress()const
{
	return shopAddress_;
}

void ShopCreateRequest::setShopAddress(const std::string& shopAddress)
{
	shopAddress_ = shopAddress;
	setParameter("ShopAddress", shopAddress);
}

int ShopCreateRequest::getWarn()const
{
	return warn_;
}

void ShopCreateRequest::setWarn(int warn)
{
	warn_ = warn;
	setParameter("Warn", std::to_string(warn));
}

int ShopCreateRequest::getShopArea()const
{
	return shopArea_;
}

void ShopCreateRequest::setShopArea(int shopArea)
{
	shopArea_ = shopArea;
	setParameter("ShopArea", std::to_string(shopArea));
}

std::string ShopCreateRequest::getShopRemarks()const
{
	return shopRemarks_;
}

void ShopCreateRequest::setShopRemarks(const std::string& shopRemarks)
{
	shopRemarks_ = shopRemarks;
	setParameter("ShopRemarks", shopRemarks);
}

int ShopCreateRequest::getShopSubtype()const
{
	return shopSubtype_;
}

void ShopCreateRequest::setShopSubtype(int shopSubtype)
{
	shopSubtype_ = shopSubtype;
	setParameter("ShopSubtype", std::to_string(shopSubtype));
}

std::string ShopCreateRequest::getShopName()const
{
	return shopName_;
}

void ShopCreateRequest::setShopName(const std::string& shopName)
{
	shopName_ = shopName;
	setParameter("ShopName", shopName);
}

long ShopCreateRequest::getBid()const
{
	return bid_;
}

void ShopCreateRequest::setBid(long bid)
{
	bid_ = bid;
	setParameter("Bid", std::to_string(bid));
}

std::string ShopCreateRequest::getShopManager()const
{
	return shopManager_;
}

void ShopCreateRequest::setShopManager(const std::string& shopManager)
{
	shopManager_ = shopManager;
	setParameter("ShopManager", shopManager);
}

