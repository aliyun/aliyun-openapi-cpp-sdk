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

#include <alibabacloud/mse/model/QueryClusterDiskSpecificationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

QueryClusterDiskSpecificationResult::QueryClusterDiskSpecificationResult() :
	ServiceResult()
{}

QueryClusterDiskSpecificationResult::QueryClusterDiskSpecificationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryClusterDiskSpecificationResult::~QueryClusterDiskSpecificationResult()
{}

void QueryClusterDiskSpecificationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Step"].isNull())
		data_.step = std::stoi(dataNode["Step"].asString());
	if(!dataNode["Max"].isNull())
		data_.max = std::stoi(dataNode["Max"].asString());
	if(!dataNode["Min"].isNull())
		data_.min = std::stoi(dataNode["Min"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();

}

std::string QueryClusterDiskSpecificationResult::getMessage()const
{
	return message_;
}

int QueryClusterDiskSpecificationResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

QueryClusterDiskSpecificationResult::Data QueryClusterDiskSpecificationResult::getData()const
{
	return data_;
}

std::string QueryClusterDiskSpecificationResult::getErrorCode()const
{
	return errorCode_;
}

std::string QueryClusterDiskSpecificationResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

int QueryClusterDiskSpecificationResult::getCode()const
{
	return code_;
}

bool QueryClusterDiskSpecificationResult::getSuccess()const
{
	return success_;
}

