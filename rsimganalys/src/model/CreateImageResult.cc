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

#include <alibabacloud/rsimganalys/model/CreateImageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rsimganalys;
using namespace AlibabaCloud::Rsimganalys::Model;

CreateImageResult::CreateImageResult() :
	ServiceResult()
{}

CreateImageResult::CreateImageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateImageResult::~CreateImageResult()
{}

void CreateImageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AliyunPK"].isNull())
		data_.aliyunPK = dataNode["AliyunPK"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["DownloadPath"].isNull())
		data_.downloadPath = dataNode["DownloadPath"].asString();
	if(!dataNode["GmtCreate"].isNull())
		data_.gmtCreate = dataNode["GmtCreate"].asString();
	if(!dataNode["GmtModified"].isNull())
		data_.gmtModified = dataNode["GmtModified"].asString();
	if(!dataNode["ImageId"].isNull())
		data_.imageId = std::stoi(dataNode["ImageId"].asString());
	if(!dataNode["JobId"].isNull())
		data_.jobId = dataNode["JobId"].asString();
	if(!dataNode["ImageName"].isNull())
		data_.imageName = dataNode["ImageName"].asString();
	if(!dataNode["RunStatus"].isNull())
		data_.runStatus = std::stoi(dataNode["RunStatus"].asString());
	if(!dataNode["UrlUploadPath"].isNull())
		data_.urlUploadPath = dataNode["UrlUploadPath"].asString();
	if(!dataNode["FileTime"].isNull())
		data_.fileTime = std::stol(dataNode["FileTime"].asString());
	if(!dataNode["StatusCode"].isNull())
		data_.statusCode = dataNode["StatusCode"].asString();
	if(!dataNode["StatusMessage"].isNull())
		data_.statusMessage = dataNode["StatusMessage"].asString();
	if(!value["ResultCode"].isNull())
		resultCode_ = std::stoi(value["ResultCode"].asString());
	if(!value["ImageId"].isNull())
		imageId_ = value["ImageId"].asString();
	if(!value["ResultMessage"].isNull())
		resultMessage_ = value["ResultMessage"].asString();
	if(!value["UserResolution"].isNull())
		userResolution_ = value["UserResolution"].asString();
	if(!value["PublishStatus"].isNull())
		publishStatus_ = std::stoi(value["PublishStatus"].asString());

}

std::string CreateImageResult::getUserResolution()const
{
	return userResolution_;
}

std::string CreateImageResult::getImageId()const
{
	return imageId_;
}

CreateImageResult::Data CreateImageResult::getData()const
{
	return data_;
}

std::string CreateImageResult::getResultMessage()const
{
	return resultMessage_;
}

int CreateImageResult::getResultCode()const
{
	return resultCode_;
}

int CreateImageResult::getPublishStatus()const
{
	return publishStatus_;
}

