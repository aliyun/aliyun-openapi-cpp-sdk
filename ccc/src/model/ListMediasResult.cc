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

#include <alibabacloud/ccc/model/ListMediasResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListMediasResult::ListMediasResult() :
	ServiceResult()
{}

ListMediasResult::ListMediasResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMediasResult::~ListMediasResult()
{}

void ListMediasResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto mediasNode = value["Medias"];
	if(!mediasNode["TotalCount"].isNull())
		medias_.totalCount = std::stoi(mediasNode["TotalCount"].asString());
	if(!mediasNode["PageNumber"].isNull())
		medias_.pageNumber = std::stoi(mediasNode["PageNumber"].asString());
	if(!mediasNode["PageSize"].isNull())
		medias_.pageSize = std::stoi(mediasNode["PageSize"].asString());
	auto allList = value["List"]["Media"];
	for (auto value : allList)
	{
		Medias::Media mediaObject;
		if(!value["Instance"].isNull())
			mediaObject.instance = value["Instance"].asString();
		if(!value["Name"].isNull())
			mediaObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			mediaObject.description = value["Description"].asString();
		if(!value["Type"].isNull())
			mediaObject.type = value["Type"].asString();
		if(!value["Content"].isNull())
			mediaObject.content = value["Content"].asString();
		if(!value["FilePath"].isNull())
			mediaObject.filePath = value["FilePath"].asString();
		if(!value["FileName"].isNull())
			mediaObject.fileName = value["FileName"].asString();
		if(!value["OssFileName"].isNull())
			mediaObject.ossFileName = value["OssFileName"].asString();
		if(!value["Status"].isNull())
			mediaObject.status = value["Status"].asString();
		medias_.list.push_back(mediaObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string ListMediasResult::getMessage()const
{
	return message_;
}

int ListMediasResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListMediasResult::Medias ListMediasResult::getMedias()const
{
	return medias_;
}

std::string ListMediasResult::getCode()const
{
	return code_;
}

bool ListMediasResult::getSuccess()const
{
	return success_;
}

