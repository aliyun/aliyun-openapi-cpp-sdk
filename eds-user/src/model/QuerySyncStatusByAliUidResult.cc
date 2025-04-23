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

#include <alibabacloud/eds-user/model/QuerySyncStatusByAliUidResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eds_user;
using namespace AlibabaCloud::Eds_user::Model;

QuerySyncStatusByAliUidResult::QuerySyncStatusByAliUidResult() :
	ServiceResult()
{}

QuerySyncStatusByAliUidResult::QuerySyncStatusByAliUidResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySyncStatusByAliUidResult::~QuerySyncStatusByAliUidResult()
{}

void QuerySyncStatusByAliUidResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Id"].isNull())
		data_.id = std::stol(dataNode["Id"].asString());
	if(!dataNode["GmtCreated"].isNull())
		data_.gmtCreated = dataNode["GmtCreated"].asString();
	if(!dataNode["GmtModified"].isNull())
		data_.gmtModified = dataNode["GmtModified"].asString();
	if(!dataNode["AliUid"].isNull())
		data_.aliUid = std::stol(dataNode["AliUid"].asString());
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["CorpId"].isNull())
		data_.corpId = dataNode["CorpId"].asString();
	if(!dataNode["LatestBeginTime"].isNull())
		data_.latestBeginTime = dataNode["LatestBeginTime"].asString();
	if(!dataNode["LatestEndTime"].isNull())
		data_.latestEndTime = dataNode["LatestEndTime"].asString();
	if(!dataNode["LatestSuccessTime"].isNull())
		data_.latestSuccessTime = dataNode["LatestSuccessTime"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string QuerySyncStatusByAliUidResult::getMessage()const
{
	return message_;
}

int QuerySyncStatusByAliUidResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

QuerySyncStatusByAliUidResult::Data QuerySyncStatusByAliUidResult::getData()const
{
	return data_;
}

std::string QuerySyncStatusByAliUidResult::getCode()const
{
	return code_;
}

bool QuerySyncStatusByAliUidResult::getSuccess()const
{
	return success_;
}

