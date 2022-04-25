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

#include <alibabacloud/dataworks-public/model/GetFileVersionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetFileVersionResult::GetFileVersionResult() :
	ServiceResult()
{}

GetFileVersionResult::GetFileVersionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetFileVersionResult::~GetFileVersionResult()
{}

void GetFileVersionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["FileContent"].isNull())
		data_.fileContent = dataNode["FileContent"].asString();
	if(!dataNode["IsCurrentProd"].isNull())
		data_.isCurrentProd = dataNode["IsCurrentProd"].asString() == "true";
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["NodeContent"].isNull())
		data_.nodeContent = dataNode["NodeContent"].asString();
	if(!dataNode["CommitUser"].isNull())
		data_.commitUser = dataNode["CommitUser"].asString();
	if(!dataNode["Comment"].isNull())
		data_.comment = dataNode["Comment"].asString();
	if(!dataNode["FilePropertyContent"].isNull())
		data_.filePropertyContent = dataNode["FilePropertyContent"].asString();
	if(!dataNode["FileName"].isNull())
		data_.fileName = dataNode["FileName"].asString();
	if(!dataNode["UseType"].isNull())
		data_.useType = dataNode["UseType"].asString();
	if(!dataNode["ChangeType"].isNull())
		data_.changeType = dataNode["ChangeType"].asString();
	if(!dataNode["FileVersion"].isNull())
		data_.fileVersion = std::stoi(dataNode["FileVersion"].asString());
	if(!dataNode["CommitTime"].isNull())
		data_.commitTime = std::stol(dataNode["CommitTime"].asString());
	if(!dataNode["NodeId"].isNull())
		data_.nodeId = std::stol(dataNode["NodeId"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int GetFileVersionResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetFileVersionResult::Data GetFileVersionResult::getData()const
{
	return data_;
}

std::string GetFileVersionResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetFileVersionResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetFileVersionResult::getSuccess()const
{
	return success_;
}

