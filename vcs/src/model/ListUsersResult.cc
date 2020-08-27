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

#include <alibabacloud/vcs/model/ListUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

ListUsersResult::ListUsersResult() :
	ServiceResult()
{}

ListUsersResult::ListUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUsersResult::~ListUsersResult()
{}

void ListUsersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stol(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stol(dataNode["PageSize"].asString());
	if(!dataNode["Success"].isNull())
		data_.success = std::stol(dataNode["Success"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = std::stol(dataNode["Total"].asString());
	auto allRecordsNode = dataNode["Records"]["RecordsItem"];
	for (auto dataNodeRecordsRecordsItem : allRecordsNode)
	{
		Data::RecordsItem recordsItemObject;
		if(!dataNodeRecordsRecordsItem["UserGroupId"].isNull())
			recordsItemObject.userGroupId = std::stoi(dataNodeRecordsRecordsItem["UserGroupId"].asString());
		if(!dataNodeRecordsRecordsItem["Age"].isNull())
			recordsItemObject.age = dataNodeRecordsRecordsItem["Age"].asString();
		if(!dataNodeRecordsRecordsItem["Attachment"].isNull())
			recordsItemObject.attachment = dataNodeRecordsRecordsItem["Attachment"].asString();
		if(!dataNodeRecordsRecordsItem["BizId"].isNull())
			recordsItemObject.bizId = dataNodeRecordsRecordsItem["BizId"].asString();
		if(!dataNodeRecordsRecordsItem["FaceImageUrl"].isNull())
			recordsItemObject.faceImageUrl = dataNodeRecordsRecordsItem["FaceImageUrl"].asString();
		if(!dataNodeRecordsRecordsItem["Gender"].isNull())
			recordsItemObject.gender = dataNodeRecordsRecordsItem["Gender"].asString();
		if(!dataNodeRecordsRecordsItem["IdNumber"].isNull())
			recordsItemObject.idNumber = dataNodeRecordsRecordsItem["IdNumber"].asString();
		if(!dataNodeRecordsRecordsItem["UserId"].isNull())
			recordsItemObject.userId = std::stoi(dataNodeRecordsRecordsItem["UserId"].asString());
		if(!dataNodeRecordsRecordsItem["UserName"].isNull())
			recordsItemObject.userName = dataNodeRecordsRecordsItem["UserName"].asString();
		if(!dataNodeRecordsRecordsItem["IsvSubId"].isNull())
			recordsItemObject.isvSubId = dataNodeRecordsRecordsItem["IsvSubId"].asString();
		data_.records.push_back(recordsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListUsersResult::getMessage()const
{
	return message_;
}

ListUsersResult::Data ListUsersResult::getData()const
{
	return data_;
}

std::string ListUsersResult::getCode()const
{
	return code_;
}

