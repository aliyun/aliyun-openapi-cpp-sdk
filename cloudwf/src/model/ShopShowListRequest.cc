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

#include <alibabacloud/cloudwf/model/ShopShowListRequest.h>

using AlibabaCloud::Cloudwf::Model::ShopShowListRequest;

ShopShowListRequest::ShopShowListRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ShopShowList")
{}

ShopShowListRequest::~ShopShowListRequest()
{}

long ShopShowListRequest::getGid()const
{
	return gid_;
}

void ShopShowListRequest::setGid(long gid)
{
	gid_ = gid;
	setCoreParameter("Gid", gid);
}

std::string ShopShowListRequest::getAddress()const
{
	return address_;
}

void ShopShowListRequest::setAddress(const std::string& address)
{
	address_ = address;
	setCoreParameter("Address", address);
}

std::string ShopShowListRequest::getName()const
{
	return name_;
}

void ShopShowListRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string ShopShowListRequest::getDirc()const
{
	return dirc_;
}

void ShopShowListRequest::setDirc(const std::string& dirc)
{
	dirc_ = dirc;
	setCoreParameter("Dirc", dirc);
}

int ShopShowListRequest::getPage()const
{
	return page_;
}

void ShopShowListRequest::setPage(int page)
{
	page_ = page;
	setCoreParameter("Page", page);
}

long ShopShowListRequest::getBid()const
{
	return bid_;
}

void ShopShowListRequest::setBid(long bid)
{
	bid_ = bid;
	setCoreParameter("Bid", bid);
}

int ShopShowListRequest::getPer()const
{
	return per_;
}

void ShopShowListRequest::setPer(int per)
{
	per_ = per;
	setCoreParameter("Per", per);
}

int ShopShowListRequest::getShopStatus()const
{
	return shopStatus_;
}

void ShopShowListRequest::setShopStatus(int shopStatus)
{
	shopStatus_ = shopStatus;
	setCoreParameter("ShopStatus", shopStatus);
}

std::string ShopShowListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ShopShowListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

