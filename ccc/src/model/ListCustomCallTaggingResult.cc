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

#include <alibabacloud/ccc/model/ListCustomCallTaggingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListCustomCallTaggingResult::ListCustomCallTaggingResult() :
	ServiceResult()
{}

ListCustomCallTaggingResult::ListCustomCallTaggingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCustomCallTaggingResult::~ListCustomCallTaggingResult()
{}

void ListCustomCallTaggingResult::parse(const std::string &payload)
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
	auto allListNode = dataNode["List"]["CustomCallTagging"];
	for (auto dataNodeListCustomCallTagging : allListNode)
	{
		Data::CustomCallTagging customCallTaggingObject;
		if(!dataNodeListCustomCallTagging["InstanceId"].isNull())
			customCallTaggingObject.instanceId = dataNodeListCustomCallTagging["InstanceId"].asString();
		if(!dataNodeListCustomCallTagging["Number"].isNull())
			customCallTaggingObject.number = dataNodeListCustomCallTagging["Number"].asString();
		if(!dataNodeListCustomCallTagging["Description"].isNull())
			customCallTaggingObject.description = dataNodeListCustomCallTagging["Description"].asString();
		if(!dataNodeListCustomCallTagging["Creator"].isNull())
			customCallTaggingObject.creator = dataNodeListCustomCallTagging["Creator"].asString();
		if(!dataNodeListCustomCallTagging["UpdateTime"].isNull())
			customCallTaggingObject.updateTime = dataNodeListCustomCallTagging["UpdateTime"].asString();
		auto allCallTagListNode = dataNodeListCustomCallTagging["CallTagList"]["CallTag"];
		for (auto dataNodeListCustomCallTaggingCallTagListCallTag : allCallTagListNode)
		{
			Data::CustomCallTagging::CallTag callTagListObject;
			if(!dataNodeListCustomCallTaggingCallTagListCallTag["InstanceId"].isNull())
				callTagListObject.instanceId = dataNodeListCustomCallTaggingCallTagListCallTag["InstanceId"].asString();
			if(!dataNodeListCustomCallTaggingCallTagListCallTag["TagName"].isNull())
				callTagListObject.tagName = dataNodeListCustomCallTaggingCallTagListCallTag["TagName"].asString();
			customCallTaggingObject.callTagList.push_back(callTagListObject);
		}
		data_.list.push_back(customCallTaggingObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListCustomCallTaggingResult::getMessage()const
{
	return message_;
}

int ListCustomCallTaggingResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListCustomCallTaggingResult::Data ListCustomCallTaggingResult::getData()const
{
	return data_;
}

std::string ListCustomCallTaggingResult::getCode()const
{
	return code_;
}

