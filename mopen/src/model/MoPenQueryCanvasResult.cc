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

#include <alibabacloud/mopen/model/MoPenQueryCanvasResult.h>
#include <json/json.h>

using namespace AlibabaCloud::MoPen;
using namespace AlibabaCloud::MoPen::Model;

MoPenQueryCanvasResult::MoPenQueryCanvasResult() :
	ServiceResult()
{}

MoPenQueryCanvasResult::MoPenQueryCanvasResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

MoPenQueryCanvasResult::~MoPenQueryCanvasResult()
{}

void MoPenQueryCanvasResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allCanvasList = value["CanvasList"]["Canvas"];
	for (auto value : allCanvasList)
	{
		Data::Canvas canvasObject;
		if(!value["Id"].isNull())
			canvasObject.id = std::stol(value["Id"].asString());
		if(!value["DeviceName"].isNull())
			canvasObject.deviceName = value["DeviceName"].asString();
		if(!value["Url"].isNull())
			canvasObject.url = value["Url"].asString();
		if(!value["PageId"].isNull())
			canvasObject.pageId = std::stoi(value["PageId"].asString());
		if(!value["SessionId"].isNull())
			canvasObject.sessionId = value["SessionId"].asString();
		if(!value["CreateTime"].isNull())
			canvasObject.createTime = value["CreateTime"].asString();
		if(!value["LastModified"].isNull())
			canvasObject.lastModified = value["LastModified"].asString();
		if(!value["Status"].isNull())
			canvasObject.status = std::stoi(value["Status"].asString());
		if(!value["Attribute"].isNull())
			canvasObject.attribute = value["Attribute"].asString();
		data_.canvasList.push_back(canvasObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();

}

std::string MoPenQueryCanvasResult::getDescription()const
{
	return description_;
}

std::string MoPenQueryCanvasResult::getMessage()const
{
	return message_;
}

MoPenQueryCanvasResult::Data MoPenQueryCanvasResult::getData()const
{
	return data_;
}

std::string MoPenQueryCanvasResult::getCode()const
{
	return code_;
}

bool MoPenQueryCanvasResult::getSuccess()const
{
	return success_;
}

