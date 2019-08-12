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
{}

ShopSetredressRequest::~ShopSetredressRequest()
{}

std::string ShopSetredressRequest::getWorkday()const
{
	return workday_;
}

void ShopSetredressRequest::setWorkday(const std::string& workday)
{
	workday_ = workday;
	setCoreParameter("Workday", workday);
}

int ShopSetredressRequest::getFilterclose()const
{
	return filterclose_;
}

void ShopSetredressRequest::setFilterclose(int filterclose)
{
	filterclose_ = filterclose;
	setCoreParameter("Filterclose", std::to_string(filterclose));
}

int ShopSetredressRequest::getMinstoptime()const
{
	return minstoptime_;
}

void ShopSetredressRequest::setMinstoptime(int minstoptime)
{
	minstoptime_ = minstoptime;
	setCoreParameter("Minstoptime", std::to_string(minstoptime));
}

std::string ShopSetredressRequest::getHoliday()const
{
	return holiday_;
}

void ShopSetredressRequest::setHoliday(const std::string& holiday)
{
	holiday_ = holiday;
	setCoreParameter("Holiday", holiday);
}

std::string ShopSetredressRequest::getHnum()const
{
	return hnum_;
}

void ShopSetredressRequest::setHnum(const std::string& hnum)
{
	hnum_ = hnum;
	setCoreParameter("Hnum", hnum);
}

std::string ShopSetredressRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ShopSetredressRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

long ShopSetredressRequest::getSid()const
{
	return sid_;
}

void ShopSetredressRequest::setSid(long sid)
{
	sid_ = sid;
	setCoreParameter("Sid", std::to_string(sid));
}

int ShopSetredressRequest::getClerk()const
{
	return clerk_;
}

void ShopSetredressRequest::setClerk(int clerk)
{
	clerk_ = clerk;
	setCoreParameter("Clerk", std::to_string(clerk));
}

int ShopSetredressRequest::getFilterstate()const
{
	return filterstate_;
}

void ShopSetredressRequest::setFilterstate(int filterstate)
{
	filterstate_ = filterstate;
	setCoreParameter("Filterstate", std::to_string(filterstate));
}

std::string ShopSetredressRequest::getWnum()const
{
	return wnum_;
}

void ShopSetredressRequest::setWnum(const std::string& wnum)
{
	wnum_ = wnum;
	setCoreParameter("Wnum", wnum);
}

int ShopSetredressRequest::getState()const
{
	return state_;
}

void ShopSetredressRequest::setState(int state)
{
	state_ = state;
	setCoreParameter("State", std::to_string(state));
}

int ShopSetredressRequest::getCrowdfixed()const
{
	return crowdfixed_;
}

void ShopSetredressRequest::setCrowdfixed(int crowdfixed)
{
	crowdfixed_ = crowdfixed;
	setCoreParameter("Crowdfixed", std::to_string(crowdfixed));
}

int ShopSetredressRequest::getMaxstoptime()const
{
	return maxstoptime_;
}

void ShopSetredressRequest::setMaxstoptime(int maxstoptime)
{
	maxstoptime_ = maxstoptime;
	setCoreParameter("Maxstoptime", std::to_string(maxstoptime));
}

