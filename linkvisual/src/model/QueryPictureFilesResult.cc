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

#include <alibabacloud/linkvisual/model/QueryPictureFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

QueryPictureFilesResult::QueryPictureFilesResult() :
	ServiceResult()
{}

QueryPictureFilesResult::QueryPictureFilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryPictureFilesResult::~QueryPictureFilesResult()
{}

void QueryPictureFilesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Page"].isNull())
		data_.page = std::stoi(dataNode["Page"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allListNode = dataNode["List"]["ListItem"];
	for (auto dataNodeListListItem : allListNode)
	{
		Data::ListItem listItemObject;
		if(!dataNodeListListItem["PicId"].isNull())
			listItemObject.picId = dataNodeListListItem["PicId"].asString();
		if(!dataNodeListListItem["PicUrl"].isNull())
			listItemObject.picUrl = dataNodeListListItem["PicUrl"].asString();
		if(!dataNodeListListItem["PicCreateTime"].isNull())
			listItemObject.picCreateTime = std::stol(dataNodeListListItem["PicCreateTime"].asString());
		if(!dataNodeListListItem["ThumbUrl"].isNull())
			listItemObject.thumbUrl = dataNodeListListItem["ThumbUrl"].asString();
		if(!dataNodeListListItem["IotId"].isNull())
			listItemObject.iotId = dataNodeListListItem["IotId"].asString();
		data_.list.push_back(listItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

QueryPictureFilesResult::Data QueryPictureFilesResult::getData()const
{
	return data_;
}

std::string QueryPictureFilesResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryPictureFilesResult::getCode()const
{
	return code_;
}

bool QueryPictureFilesResult::getSuccess()const
{
	return success_;
}

