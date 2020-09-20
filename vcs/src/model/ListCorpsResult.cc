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

#include <alibabacloud/vcs/model/ListCorpsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

ListCorpsResult::ListCorpsResult() :
	ServiceResult()
{}

ListCorpsResult::ListCorpsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCorpsResult::~ListCorpsResult()
{}

void ListCorpsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	if(!dataNode["TotalPage"].isNull())
		data_.totalPage = std::stoi(dataNode["TotalPage"].asString());
	auto allRecordsNode = dataNode["Records"]["Record"];
	for (auto dataNodeRecordsRecord : allRecordsNode)
	{
		Data::Record recordObject;
		if(!dataNodeRecordsRecord["CorpId"].isNull())
			recordObject.corpId = dataNodeRecordsRecord["CorpId"].asString();
		if(!dataNodeRecordsRecord["CorpName"].isNull())
			recordObject.corpName = dataNodeRecordsRecord["CorpName"].asString();
		if(!dataNodeRecordsRecord["Description"].isNull())
			recordObject.description = dataNodeRecordsRecord["Description"].asString();
		if(!dataNodeRecordsRecord["CreateDate"].isNull())
			recordObject.createDate = dataNodeRecordsRecord["CreateDate"].asString();
		if(!dataNodeRecordsRecord["ParentCorpId"].isNull())
			recordObject.parentCorpId = dataNodeRecordsRecord["ParentCorpId"].asString();
		if(!dataNodeRecordsRecord["AppName"].isNull())
			recordObject.appName = dataNodeRecordsRecord["AppName"].asString();
		if(!dataNodeRecordsRecord["DeviceCount"].isNull())
			recordObject.deviceCount = std::stoi(dataNodeRecordsRecord["DeviceCount"].asString());
		if(!dataNodeRecordsRecord["IsvSubId"].isNull())
			recordObject.isvSubId = dataNodeRecordsRecord["IsvSubId"].asString();
		if(!dataNodeRecordsRecord["AcuUsed"].isNull())
			recordObject.acuUsed = std::stoi(dataNodeRecordsRecord["AcuUsed"].asString());
		if(!dataNodeRecordsRecord["IconPath"].isNull())
			recordObject.iconPath = dataNodeRecordsRecord["IconPath"].asString();
		data_.records.push_back(recordObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListCorpsResult::getMessage()const
{
	return message_;
}

ListCorpsResult::Data ListCorpsResult::getData()const
{
	return data_;
}

std::string ListCorpsResult::getCode()const
{
	return code_;
}

