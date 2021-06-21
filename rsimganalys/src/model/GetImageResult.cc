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

#include <alibabacloud/rsimganalys/model/GetImageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rsimganalys;
using namespace AlibabaCloud::Rsimganalys::Model;

GetImageResult::GetImageResult() :
	ServiceResult()
{}

GetImageResult::GetImageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetImageResult::~GetImageResult()
{}

void GetImageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ImageName"].isNull())
		data_.imageName = dataNode["ImageName"].asString();
	if(!dataNode["Appkey"].isNull())
		data_.appkey = dataNode["Appkey"].asString();
	if(!dataNode["FileTime"].isNull())
		data_.fileTime = std::stol(dataNode["FileTime"].asString());
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["AliyunPK"].isNull())
		data_.aliyunPK = dataNode["AliyunPK"].asString();
	if(!dataNode["RunStatus"].isNull())
		data_.runStatus = std::stoi(dataNode["RunStatus"].asString());
	if(!dataNode["UserResolution"].isNull())
		data_.userResolution = dataNode["UserResolution"].asString();
	if(!dataNode["Resolution"].isNull())
		data_.resolution = dataNode["Resolution"].asString();
	if(!dataNode["UCS"].isNull())
		data_.uCS = dataNode["UCS"].asString();
	if(!dataNode["PixelSize"].isNull())
		data_.pixelSize = dataNode["PixelSize"].asString();
	if(!dataNode["PublishStatus"].isNull())
		data_.publishStatus = std::stoi(dataNode["PublishStatus"].asString());
	if(!dataNode["PublicResult"].isNull())
		data_.publicResult = dataNode["PublicResult"].asString();
	if(!value["ResultCode"].isNull())
		resultCode_ = value["ResultCode"].asString();
	if(!value["ResultMessage"].isNull())
		resultMessage_ = value["ResultMessage"].asString();

}

GetImageResult::Data GetImageResult::getData()const
{
	return data_;
}

std::string GetImageResult::getResultMessage()const
{
	return resultMessage_;
}

std::string GetImageResult::getResultCode()const
{
	return resultCode_;
}

