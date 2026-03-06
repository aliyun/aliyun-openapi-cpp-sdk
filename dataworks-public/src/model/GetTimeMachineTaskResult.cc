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

#include <alibabacloud/dataworks-public/model/GetTimeMachineTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetTimeMachineTaskResult::GetTimeMachineTaskResult() :
	ServiceResult()
{}

GetTimeMachineTaskResult::GetTimeMachineTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTimeMachineTaskResult::~GetTimeMachineTaskResult()
{}

void GetTimeMachineTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Id"].isNull())
		data_.id = dataNode["Id"].asString();
	if(!dataNode["OperType"].isNull())
		data_.operType = dataNode["OperType"].asString();
	if(!dataNode["ObjId"].isNull())
		data_.objId = dataNode["ObjId"].asString();
	if(!dataNode["ObjName"].isNull())
		data_.objName = dataNode["ObjName"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["GmtCreate"].isNull())
		data_.gmtCreate = dataNode["GmtCreate"].asString();
	if(!dataNode["GmtModified"].isNull())
		data_.gmtModified = dataNode["GmtModified"].asString();
	if(!dataNode["HostName"].isNull())
		data_.hostName = dataNode["HostName"].asString();
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMsg"].isNull())
		errMsg_ = value["ErrMsg"].asString();

}

std::string GetTimeMachineTaskResult::getErrMsg()const
{
	return errMsg_;
}

GetTimeMachineTaskResult::Data GetTimeMachineTaskResult::getData()const
{
	return data_;
}

std::string GetTimeMachineTaskResult::getErrCode()const
{
	return errCode_;
}

