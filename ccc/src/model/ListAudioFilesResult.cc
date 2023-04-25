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

#include <alibabacloud/ccc/model/ListAudioFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListAudioFilesResult::ListAudioFilesResult() :
	ServiceResult()
{}

ListAudioFilesResult::ListAudioFilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAudioFilesResult::~ListAudioFilesResult()
{}

void ListAudioFilesResult::parse(const std::string &payload)
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
	auto allListNode = dataNode["List"]["ContactFlow"];
	for (auto dataNodeListContactFlow : allListNode)
	{
		Data::ContactFlow contactFlowObject;
		if(!dataNodeListContactFlow["AudioFileName"].isNull())
			contactFlowObject.audioFileName = dataNodeListContactFlow["AudioFileName"].asString();
		if(!dataNodeListContactFlow["OssFileKey"].isNull())
			contactFlowObject.ossFileKey = dataNodeListContactFlow["OssFileKey"].asString();
		if(!dataNodeListContactFlow["UpdatedTime"].isNull())
			contactFlowObject.updatedTime = dataNodeListContactFlow["UpdatedTime"].asString();
		if(!dataNodeListContactFlow["AudioResourceId"].isNull())
			contactFlowObject.audioResourceId = dataNodeListContactFlow["AudioResourceId"].asString();
		if(!dataNodeListContactFlow["InstanceId"].isNull())
			contactFlowObject.instanceId = dataNodeListContactFlow["InstanceId"].asString();
		if(!dataNodeListContactFlow["Name"].isNull())
			contactFlowObject.name = dataNodeListContactFlow["Name"].asString();
		if(!dataNodeListContactFlow["CreatedTime"].isNull())
			contactFlowObject.createdTime = dataNodeListContactFlow["CreatedTime"].asString();
		data_.list.push_back(contactFlowObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListAudioFilesResult::getMessage()const
{
	return message_;
}

int ListAudioFilesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListAudioFilesResult::Data ListAudioFilesResult::getData()const
{
	return data_;
}

std::string ListAudioFilesResult::getCode()const
{
	return code_;
}

