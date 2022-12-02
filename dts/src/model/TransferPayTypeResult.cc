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

#include <alibabacloud/dts/model/TransferPayTypeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

TransferPayTypeResult::TransferPayTypeResult() :
	ServiceResult()
{}

TransferPayTypeResult::TransferPayTypeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

TransferPayTypeResult::~TransferPayTypeResult()
{}

void TransferPayTypeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["DtsJobId"].isNull())
		dtsJobId_ = value["DtsJobId"].asString();
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ChargeType"].isNull())
		chargeType_ = value["ChargeType"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();

}

std::string TransferPayTypeResult::getDtsJobId()const
{
	return dtsJobId_;
}

std::string TransferPayTypeResult::getEndTime()const
{
	return endTime_;
}

std::string TransferPayTypeResult::getInstanceId()const
{
	return instanceId_;
}

std::string TransferPayTypeResult::getChargeType()const
{
	return chargeType_;
}

int TransferPayTypeResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string TransferPayTypeResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string TransferPayTypeResult::getErrMessage()const
{
	return errMessage_;
}

std::string TransferPayTypeResult::getCode()const
{
	return code_;
}

bool TransferPayTypeResult::getSuccess()const
{
	return success_;
}

std::string TransferPayTypeResult::getErrCode()const
{
	return errCode_;
}

