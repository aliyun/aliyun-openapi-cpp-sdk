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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto mediasNode = value["Medias"];
	if(!mediasNode["TotalCount"].isNull())
		medias_.totalCount = std::stoi(mediasNode["TotalCount"].asString());
	if(!mediasNode["PageNumber"].isNull())
		medias_.pageNumber = std::stoi(mediasNode["PageNumber"].asString());
	if(!mediasNode["PageSize"].isNull())
		medias_.pageSize = std::stoi(mediasNode["PageSize"].asString());
	auto allListNode = mediasNode["List"]["Media"];
	for (auto mediasNodeListMedia : allListNode)
	{
		Medias::Media mediaObject;
		if(!mediasNodeListMedia["Instance"].isNull())
			mediaObject.instance = mediasNodeListMedia["Instance"].asString();
		if(!mediasNodeListMedia["Name"].isNull())
			mediaObject.name = mediasNodeListMedia["Name"].asString();
		if(!mediasNodeListMedia["Description"].isNull())
			mediaObject.description = mediasNodeListMedia["Description"].asString();
		if(!mediasNodeListMedia["Type"].isNull())
			mediaObject.type = mediasNodeListMedia["Type"].asString();
		if(!mediasNodeListMedia["Content"].isNull())
			mediaObject.content = mediasNodeListMedia["Content"].asString();
		if(!mediasNodeListMedia["FilePath"].isNull())
			mediaObject.filePath = mediasNodeListMedia["FilePath"].asString();
		if(!mediasNodeListMedia["FileName"].isNull())
			mediaObject.fileName = mediasNodeListMedia["FileName"].asString();
		if(!mediasNodeListMedia["OssFileName"].isNull())
			mediaObject.ossFileName = mediasNodeListMedia["OssFileName"].asString();
		if(!mediasNodeListMedia["Status"].isNull())
			mediaObject.status = mediasNodeListMedia["Status"].asString();
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

