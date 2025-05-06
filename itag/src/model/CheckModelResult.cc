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

#include <alibabacloud/itag/model/CheckModelResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

CheckModelResult::CheckModelResult() :
	ServiceResult()
{}

CheckModelResult::CheckModelResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CheckModelResult::~CheckModelResult()
{}

void CheckModelResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Available"].isNull())
		result_.available = resultNode["Available"].asString() == "true";
	if(!resultNode["IsCommon"].isNull())
		result_.isCommon = resultNode["IsCommon"].asString() == "true";
	auto allParamsNode = resultNode["Params"]["Param"];
	for (auto resultNodeParamsParam : allParamsNode)
	{
		Result::Param paramObject;
		if(!resultNodeParamsParam["Name"].isNull())
			paramObject.name = resultNodeParamsParam["Name"].asString();
		if(!resultNodeParamsParam["Alias"].isNull())
			paramObject.alias = resultNodeParamsParam["Alias"].asString();
		if(!resultNodeParamsParam["Type"].isNull())
			paramObject.type = resultNodeParamsParam["Type"].asString();
		if(!resultNodeParamsParam["Codec"].isNull())
			paramObject.codec = resultNodeParamsParam["Codec"].asString();
		if(!resultNodeParamsParam["Value"].isNull())
			paramObject.value = resultNodeParamsParam["Value"].asString();
		if(!resultNodeParamsParam["DefaultValue"].isNull())
			paramObject.defaultValue = resultNodeParamsParam["DefaultValue"].asString();
		result_.params.push_back(paramObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["ErrInfo"].isNull())
		errInfo_ = value["ErrInfo"].asString();
	if(!value["Succ"].isNull())
		succ_ = value["Succ"].asString() == "true";
	if(!value["Rt"].isNull())
		rt_ = std::stol(value["Rt"].asString());
	if(!value["Host"].isNull())
		host_ = value["Host"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string CheckModelResult::getMsg()const
{
	return msg_;
}

long CheckModelResult::getRt()const
{
	return rt_;
}

bool CheckModelResult::getSucc()const
{
	return succ_;
}

std::string CheckModelResult::getHost()const
{
	return host_;
}

std::string CheckModelResult::getErrorCode()const
{
	return errorCode_;
}

std::string CheckModelResult::getErrInfo()const
{
	return errInfo_;
}

int CheckModelResult::getCode()const
{
	return code_;
}

CheckModelResult::Result CheckModelResult::getResult()const
{
	return result_;
}

