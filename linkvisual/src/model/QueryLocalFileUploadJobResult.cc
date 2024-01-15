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

#include <alibabacloud/linkvisual/model/QueryLocalFileUploadJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

QueryLocalFileUploadJobResult::QueryLocalFileUploadJobResult() :
	ServiceResult()
{}

QueryLocalFileUploadJobResult::QueryLocalFileUploadJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryLocalFileUploadJobResult::~QueryLocalFileUploadJobResult()
{}

void QueryLocalFileUploadJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Status"].isNull())
		data_.status = std::stoi(dataNode["Status"].asString());
	auto allResultListNode = dataNode["ResultList"]["ResultListItem"];
	for (auto dataNodeResultListResultListItem : allResultListNode)
	{
		Data::ResultListItem resultListItemObject;
		if(!dataNodeResultListResultListItem["SlotEndTime"].isNull())
			resultListItemObject.slotEndTime = std::stoi(dataNodeResultListResultListItem["SlotEndTime"].asString());
		if(!dataNodeResultListResultListItem["ProductKey"].isNull())
			resultListItemObject.productKey = dataNodeResultListResultListItem["ProductKey"].asString();
		if(!dataNodeResultListResultListItem["DeviceName"].isNull())
			resultListItemObject.deviceName = dataNodeResultListResultListItem["DeviceName"].asString();
		if(!dataNodeResultListResultListItem["SlotStartTime"].isNull())
			resultListItemObject.slotStartTime = std::stoi(dataNodeResultListResultListItem["SlotStartTime"].asString());
		if(!dataNodeResultListResultListItem["Code"].isNull())
			resultListItemObject.code = std::stoi(dataNodeResultListResultListItem["Code"].asString());
		if(!dataNodeResultListResultListItem["SlotStatus"].isNull())
			resultListItemObject.slotStatus = std::stoi(dataNodeResultListResultListItem["SlotStatus"].asString());
		if(!dataNodeResultListResultListItem["IotId"].isNull())
			resultListItemObject.iotId = dataNodeResultListResultListItem["IotId"].asString();
		auto allFileListNode = dataNodeResultListResultListItem["FileList"]["FileListItem"];
		for (auto dataNodeResultListResultListItemFileListFileListItem : allFileListNode)
		{
			Data::ResultListItem::FileListItem fileListObject;
			if(!dataNodeResultListResultListItemFileListFileListItem["FileName"].isNull())
				fileListObject.fileName = dataNodeResultListResultListItemFileListFileListItem["FileName"].asString();
			if(!dataNodeResultListResultListItemFileListFileListItem["FileStartTime"].isNull())
				fileListObject.fileStartTime = std::stoi(dataNodeResultListResultListItemFileListFileListItem["FileStartTime"].asString());
			if(!dataNodeResultListResultListItemFileListFileListItem["FileEndTime"].isNull())
				fileListObject.fileEndTime = std::stoi(dataNodeResultListResultListItemFileListFileListItem["FileEndTime"].asString());
			resultListItemObject.fileList.push_back(fileListObject);
		}
		data_.resultList.push_back(resultListItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

QueryLocalFileUploadJobResult::Data QueryLocalFileUploadJobResult::getData()const
{
	return data_;
}

std::string QueryLocalFileUploadJobResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryLocalFileUploadJobResult::getCode()const
{
	return code_;
}

bool QueryLocalFileUploadJobResult::getSuccess()const
{
	return success_;
}

