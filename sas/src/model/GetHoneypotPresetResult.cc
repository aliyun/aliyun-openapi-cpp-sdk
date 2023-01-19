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

#include <alibabacloud/sas/model/GetHoneypotPresetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GetHoneypotPresetResult::GetHoneypotPresetResult() :
	ServiceResult()
{}

GetHoneypotPresetResult::GetHoneypotPresetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetHoneypotPresetResult::~GetHoneypotPresetResult()
{}

void GetHoneypotPresetResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["HoneypotImageName"].isNull())
		data_.honeypotImageName = dataNode["HoneypotImageName"].asString();
	if(!dataNode["PresetName"].isNull())
		data_.presetName = dataNode["PresetName"].asString();
	if(!dataNode["HoneypotPresetId"].isNull())
		data_.honeypotPresetId = dataNode["HoneypotPresetId"].asString();
	if(!dataNode["Meta"].isNull())
		data_.meta = dataNode["Meta"].asString();
	if(!dataNode["NodeId"].isNull())
		data_.nodeId = dataNode["NodeId"].asString();
	if(!dataNode["ControlNodeName"].isNull())
		data_.controlNodeName = dataNode["ControlNodeName"].asString();
	if(!dataNode["HoneypotImageDisplayName"].isNull())
		data_.honeypotImageDisplayName = dataNode["HoneypotImageDisplayName"].asString();
	if(!dataNode["PresetType"].isNull())
		data_.presetType = dataNode["PresetType"].asString();
	auto allFileInfoListNode = dataNode["FileInfoList"]["FileInfoListItem"];
	for (auto dataNodeFileInfoListFileInfoListItem : allFileInfoListNode)
	{
		Data::FileInfoListItem fileInfoListItemObject;
		if(!dataNodeFileInfoListFileInfoListItem["FileId"].isNull())
			fileInfoListItemObject.fileId = dataNodeFileInfoListFileInfoListItem["FileId"].asString();
		if(!dataNodeFileInfoListFileInfoListItem["FileName"].isNull())
			fileInfoListItemObject.fileName = dataNodeFileInfoListFileInfoListItem["FileName"].asString();
		if(!dataNodeFileInfoListFileInfoListItem["OssUrl"].isNull())
			fileInfoListItemObject.ossUrl = dataNodeFileInfoListFileInfoListItem["OssUrl"].asString();
		data_.fileInfoList.push_back(fileInfoListItemObject);
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

std::string GetHoneypotPresetResult::getMessage()const
{
	return message_;
}

int GetHoneypotPresetResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetHoneypotPresetResult::Data GetHoneypotPresetResult::getData()const
{
	return data_;
}

std::string GetHoneypotPresetResult::getCode()const
{
	return code_;
}

bool GetHoneypotPresetResult::getSuccess()const
{
	return success_;
}

