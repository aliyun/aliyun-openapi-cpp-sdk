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

#include <alibabacloud/cloudwf/model/ShopDataAlarmRequest.h>

using AlibabaCloud::Cloudwf::Model::ShopDataAlarmRequest;

ShopDataAlarmRequest::ShopDataAlarmRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ShopDataAlarm")
{
	setMethod(HttpRequest::Method::Post);
}

ShopDataAlarmRequest::~ShopDataAlarmRequest()
{}

std::string ShopDataAlarmRequest::getWarnEmail()const
{
	return warnEmail_;
}

void ShopDataAlarmRequest::setWarnEmail(const std::string& warnEmail)
{
	warnEmail_ = warnEmail;
	setParameter("WarnEmail", warnEmail);
}

std::string ShopDataAlarmRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ShopDataAlarmRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long ShopDataAlarmRequest::getSid()const
{
	return sid_;
}

void ShopDataAlarmRequest::setSid(long sid)
{
	sid_ = sid;
	setParameter("Sid", std::to_string(sid));
}

std::string ShopDataAlarmRequest::getWarnPhone()const
{
	return warnPhone_;
}

void ShopDataAlarmRequest::setWarnPhone(const std::string& warnPhone)
{
	warnPhone_ = warnPhone;
	setParameter("WarnPhone", warnPhone);
}

int ShopDataAlarmRequest::getWarn()const
{
	return warn_;
}

void ShopDataAlarmRequest::setWarn(int warn)
{
	warn_ = warn;
	setParameter("Warn", std::to_string(warn));
}

int ShopDataAlarmRequest::getCloseWarn()const
{
	return closeWarn_;
}

void ShopDataAlarmRequest::setCloseWarn(int closeWarn)
{
	closeWarn_ = closeWarn;
	setParameter("CloseWarn", std::to_string(closeWarn));
}

