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

#include <alibabacloud/cloudwf/model/ShopSetredressRequest.h>

using AlibabaCloud::Cloudwf::Model::ShopSetredressRequest;

ShopSetredressRequest::ShopSetredressRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ShopSetredress")
{
	setMethod(HttpRequest::Method::Post);
}

ShopSetredressRequest::~ShopSetredressRequest()
{}

std::string ShopSetredressRequest::getWorkday()const
{
	return workday_;
}

void ShopSetredressRequest::setWorkday(const std::string& workday)
{
	workday_ = workday;
	setParameter("Workday", workday);
}

int ShopSetredressRequest::getMinstoptime()const
{
	return minstoptime_;
}

void ShopSetredressRequest::setMinstoptime(int minstoptime)
{
	minstoptime_ = minstoptime;
	setParameter("Minstoptime", std::to_string(minstoptime));
}

std::string ShopSetredressRequest::getHoliday()const
{
	return holiday_;
}

void ShopSetredressRequest::setHoliday(const std::string& holiday)
{
	holiday_ = holiday;
	setParameter("Holiday", holiday);
}

std::string ShopSetredressRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ShopSetredressRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long ShopSetredressRequest::getSid()const
{
	return sid_;
}

void ShopSetredressRequest::setSid(long sid)
{
	sid_ = sid;
	setParameter("Sid", std::to_string(sid));
}

int ShopSetredressRequest::getFilterstate()const
{
	return filterstate_;
}

void ShopSetredressRequest::setFilterstate(int filterstate)
{
	filterstate_ = filterstate;
	setParameter("Filterstate", std::to_string(filterstate));
}

std::string ShopSetredressRequest::getWnum()const
{
	return wnum_;
}

void ShopSetredressRequest::setWnum(const std::string& wnum)
{
	wnum_ = wnum;
	setParameter("Wnum", wnum);
}

int ShopSetredressRequest::getState()const
{
	return state_;
}

void ShopSetredressRequest::setState(int state)
{
	state_ = state;
	setParameter("State", std::to_string(state));
}

int ShopSetredressRequest::getCrowdfixed()const
{
	return crowdfixed_;
}

void ShopSetredressRequest::setCrowdfixed(int crowdfixed)
{
	crowdfixed_ = crowdfixed;
	setParameter("Crowdfixed", std::to_string(crowdfixed));
}

int ShopSetredressRequest::getFilterclose()const
{
	return filterclose_;
}

void ShopSetredressRequest::setFilterclose(int filterclose)
{
	filterclose_ = filterclose;
	setParameter("Filterclose", std::to_string(filterclose));
}

std::string ShopSetredressRequest::getHnum()const
{
	return hnum_;
}

void ShopSetredressRequest::setHnum(const std::string& hnum)
{
	hnum_ = hnum;
	setParameter("Hnum", hnum);
}

int ShopSetredressRequest::getClerk()const
{
	return clerk_;
}

void ShopSetredressRequest::setClerk(int clerk)
{
	clerk_ = clerk;
	setParameter("Clerk", std::to_string(clerk));
}

int ShopSetredressRequest::getMaxstoptime()const
{
	return maxstoptime_;
}

void ShopSetredressRequest::setMaxstoptime(int maxstoptime)
{
	maxstoptime_ = maxstoptime;
	setParameter("Maxstoptime", std::to_string(maxstoptime));
}

