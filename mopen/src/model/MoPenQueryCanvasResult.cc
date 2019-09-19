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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allCanvasListNode = dataNode["CanvasList"]["Canvas"];
	for (auto dataNodeCanvasListCanvas : allCanvasListNode)
	{
		Data::Canvas canvasObject;
		if(!dataNodeCanvasListCanvas["Id"].isNull())
			canvasObject.id = std::stol(dataNodeCanvasListCanvas["Id"].asString());
		if(!dataNodeCanvasListCanvas["DeviceName"].isNull())
			canvasObject.deviceName = dataNodeCanvasListCanvas["DeviceName"].asString();
		if(!dataNodeCanvasListCanvas["Url"].isNull())
			canvasObject.url = dataNodeCanvasListCanvas["Url"].asString();
		if(!dataNodeCanvasListCanvas["PageId"].isNull())
			canvasObject.pageId = std::stoi(dataNodeCanvasListCanvas["PageId"].asString());
		if(!dataNodeCanvasListCanvas["SessionId"].isNull())
			canvasObject.sessionId = dataNodeCanvasListCanvas["SessionId"].asString();
		if(!dataNodeCanvasListCanvas["CreateTime"].isNull())
			canvasObject.createTime = dataNodeCanvasListCanvas["CreateTime"].asString();
		if(!dataNodeCanvasListCanvas["LastModified"].isNull())
			canvasObject.lastModified = dataNodeCanvasListCanvas["LastModified"].asString();
		if(!dataNodeCanvasListCanvas["Status"].isNull())
			canvasObject.status = std::stoi(dataNodeCanvasListCanvas["Status"].asString());
		if(!dataNodeCanvasListCanvas["Attribute"].isNull())
			canvasObject.attribute = dataNodeCanvasListCanvas["Attribute"].asString();
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

