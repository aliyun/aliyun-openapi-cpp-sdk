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

#include <alibabacloud/dataworks-public/model/GetDagResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetDagResult::GetDagResult() :
	ServiceResult()
{}

GetDagResult::GetDagResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDagResult::~GetDagResult()
{}

void GetDagResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Type"].isNull())
		data_.type = dataNode["Type"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["FinishTime"].isNull())
		data_.finishTime = std::stol(dataNode["FinishTime"].asString());
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = std::stol(dataNode["CreateTime"].asString());
	if(!dataNode["ProjectId"].isNull())
		data_.projectId = std::stol(dataNode["ProjectId"].asString());
	if(!dataNode["DagId"].isNull())
		data_.dagId = std::stol(dataNode["DagId"].asString());
	if(!dataNode["Gmtdate"].isNull())
		data_.gmtdate = std::stol(dataNode["Gmtdate"].asString());
	if(!dataNode["StartTime"].isNull())
		data_.startTime = std::stol(dataNode["StartTime"].asString());
	if(!dataNode["CreateUser"].isNull())
		data_.createUser = dataNode["CreateUser"].asString();
	if(!dataNode["Bizdate"].isNull())
		data_.bizdate = std::stol(dataNode["Bizdate"].asString());
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["ModifyTime"].isNull())
		data_.modifyTime = std::stol(dataNode["ModifyTime"].asString());
	if(!dataNode["OpSeq"].isNull())
		data_.opSeq = std::stol(dataNode["OpSeq"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int GetDagResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetDagResult::Data GetDagResult::getData()const
{
	return data_;
}

std::string GetDagResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetDagResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetDagResult::getSuccess()const
{
	return success_;
}

