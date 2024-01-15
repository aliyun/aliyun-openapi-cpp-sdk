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

#include <alibabacloud/linkvisual/model/QueryDevicePictureFileResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

QueryDevicePictureFileResult::QueryDevicePictureFileResult() :
	ServiceResult()
{}

QueryDevicePictureFileResult::QueryDevicePictureFileResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDevicePictureFileResult::~QueryDevicePictureFileResult()
{}

void QueryDevicePictureFileResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PicId"].isNull())
		data_.picId = dataNode["PicId"].asString();
	if(!dataNode["PicUrl"].isNull())
		data_.picUrl = dataNode["PicUrl"].asString();
	if(!dataNode["PicCreateTime"].isNull())
		data_.picCreateTime = std::stol(dataNode["PicCreateTime"].asString());
	if(!dataNode["ThumbUrl"].isNull())
		data_.thumbUrl = dataNode["ThumbUrl"].asString();
	if(!dataNode["IotId"].isNull())
		data_.iotId = dataNode["IotId"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

QueryDevicePictureFileResult::Data QueryDevicePictureFileResult::getData()const
{
	return data_;
}

std::string QueryDevicePictureFileResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryDevicePictureFileResult::getCode()const
{
	return code_;
}

bool QueryDevicePictureFileResult::getSuccess()const
{
	return success_;
}

