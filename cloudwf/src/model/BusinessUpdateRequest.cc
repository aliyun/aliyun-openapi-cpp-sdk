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

#include <alibabacloud/cloudwf/model/BusinessUpdateRequest.h>

using AlibabaCloud::Cloudwf::Model::BusinessUpdateRequest;

BusinessUpdateRequest::BusinessUpdateRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "BusinessUpdate")
{
	setMethod(HttpRequest::Method::Post);
}

BusinessUpdateRequest::~BusinessUpdateRequest()
{}

std::string BusinessUpdateRequest::getBusinessCity()const
{
	return businessCity_;
}

void BusinessUpdateRequest::setBusinessCity(const std::string& businessCity)
{
	businessCity_ = businessCity;
	setParameter("BusinessCity", businessCity);
}

std::string BusinessUpdateRequest::getWarnEmail()const
{
	return warnEmail_;
}

void BusinessUpdateRequest::setWarnEmail(const std::string& warnEmail)
{
	warnEmail_ = warnEmail;
	setParameter("WarnEmail", warnEmail);
}

std::string BusinessUpdateRequest::getBusinessManager()const
{
	return businessManager_;
}

void BusinessUpdateRequest::setBusinessManager(const std::string& businessManager)
{
	businessManager_ = businessManager;
	setParameter("BusinessManager", businessManager);
}

std::string BusinessUpdateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BusinessUpdateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int BusinessUpdateRequest::getWarn()const
{
	return warn_;
}

void BusinessUpdateRequest::setWarn(int warn)
{
	warn_ = warn;
	setParameter("Warn", std::to_string(warn));
}

std::string BusinessUpdateRequest::getBusinessAddress()const
{
	return businessAddress_;
}

void BusinessUpdateRequest::setBusinessAddress(const std::string& businessAddress)
{
	businessAddress_ = businessAddress;
	setParameter("BusinessAddress", businessAddress);
}

long BusinessUpdateRequest::getBid()const
{
	return bid_;
}

void BusinessUpdateRequest::setBid(long bid)
{
	bid_ = bid;
	setParameter("Bid", std::to_string(bid));
}

std::string BusinessUpdateRequest::getBusinessProvince()const
{
	return businessProvince_;
}

void BusinessUpdateRequest::setBusinessProvince(const std::string& businessProvince)
{
	businessProvince_ = businessProvince;
	setParameter("BusinessProvince", businessProvince);
}

