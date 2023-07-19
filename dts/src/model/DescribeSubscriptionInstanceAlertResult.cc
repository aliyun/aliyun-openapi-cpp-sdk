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

#include <alibabacloud/dts/model/DescribeSubscriptionInstanceAlertResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeSubscriptionInstanceAlertResult::DescribeSubscriptionInstanceAlertResult() :
	ServiceResult()
{}

DescribeSubscriptionInstanceAlertResult::DescribeSubscriptionInstanceAlertResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSubscriptionInstanceAlertResult::~DescribeSubscriptionInstanceAlertResult()
{}

void DescribeSubscriptionInstanceAlertResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ErrorAlertStatus"].isNull())
		errorAlertStatus_ = value["ErrorAlertStatus"].asString();
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["ErrorAlertPhone"].isNull())
		errorAlertPhone_ = value["ErrorAlertPhone"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["DelayAlertStatus"].isNull())
		delayAlertStatus_ = value["DelayAlertStatus"].asString();
	if(!value["SubscriptionInstanceName"].isNull())
		subscriptionInstanceName_ = value["SubscriptionInstanceName"].asString();
	if(!value["DelayAlertPhone"].isNull())
		delayAlertPhone_ = value["DelayAlertPhone"].asString();
	if(!value["SubscriptionInstanceID"].isNull())
		subscriptionInstanceID_ = value["SubscriptionInstanceID"].asString();
	if(!value["DelayOverSeconds"].isNull())
		delayOverSeconds_ = value["DelayOverSeconds"].asString();

}

std::string DescribeSubscriptionInstanceAlertResult::getErrorAlertPhone()const
{
	return errorAlertPhone_;
}

std::string DescribeSubscriptionInstanceAlertResult::getSubscriptionInstanceName()const
{
	return subscriptionInstanceName_;
}

std::string DescribeSubscriptionInstanceAlertResult::getDelayAlertPhone()const
{
	return delayAlertPhone_;
}

std::string DescribeSubscriptionInstanceAlertResult::getErrorAlertStatus()const
{
	return errorAlertStatus_;
}

std::string DescribeSubscriptionInstanceAlertResult::getErrMessage()const
{
	return errMessage_;
}

std::string DescribeSubscriptionInstanceAlertResult::getSubscriptionInstanceID()const
{
	return subscriptionInstanceID_;
}

std::string DescribeSubscriptionInstanceAlertResult::getDelayAlertStatus()const
{
	return delayAlertStatus_;
}

std::string DescribeSubscriptionInstanceAlertResult::getSuccess()const
{
	return success_;
}

std::string DescribeSubscriptionInstanceAlertResult::getDelayOverSeconds()const
{
	return delayOverSeconds_;
}

std::string DescribeSubscriptionInstanceAlertResult::getErrCode()const
{
	return errCode_;
}

