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

#include <alibabacloud/linkvisual/model/QueryRecordDownloadJobByIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

QueryRecordDownloadJobByIdResult::QueryRecordDownloadJobByIdResult() :
	ServiceResult()
{}

QueryRecordDownloadJobByIdResult::QueryRecordDownloadJobByIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryRecordDownloadJobByIdResult::~QueryRecordDownloadJobByIdResult()
{}

void QueryRecordDownloadJobByIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Status"].isNull())
		data_.status = std::stoi(dataNode["Status"].asString());
	if(!dataNode["EndTime"].isNull())
		data_.endTime = std::stoi(dataNode["EndTime"].asString());
	if(!dataNode["Type"].isNull())
		data_.type = std::stoi(dataNode["Type"].asString());
	if(!dataNode["Progress"].isNull())
		data_.progress = std::stoi(dataNode["Progress"].asString());
	if(!dataNode["RecordType"].isNull())
		data_.recordType = std::stoi(dataNode["RecordType"].asString());
	if(!dataNode["StreamType"].isNull())
		data_.streamType = std::stoi(dataNode["StreamType"].asString());
	if(!dataNode["BeginTime"].isNull())
		data_.beginTime = std::stoi(dataNode["BeginTime"].asString());
	if(!dataNode["Url"].isNull())
		data_.url = dataNode["Url"].asString();
	if(!dataNode["JobErrorCode"].isNull())
		data_.jobErrorCode = std::stoi(dataNode["JobErrorCode"].asString());
	if(!dataNode["FileName"].isNull())
		data_.fileName = dataNode["FileName"].asString();
	if(!dataNode["IotId"].isNull())
		data_.iotId = dataNode["IotId"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

QueryRecordDownloadJobByIdResult::Data QueryRecordDownloadJobByIdResult::getData()const
{
	return data_;
}

std::string QueryRecordDownloadJobByIdResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryRecordDownloadJobByIdResult::getCode()const
{
	return code_;
}

bool QueryRecordDownloadJobByIdResult::getSuccess()const
{
	return success_;
}

