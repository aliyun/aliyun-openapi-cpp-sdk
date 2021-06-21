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
	auto allItems = value["Items"]["Contents"];
	for (const auto &item : allItems)
		items_.push_back(item.asString());
	if(!value["ResultCode"].isNull())
		resultCode_ = std::stoi(value["ResultCode"].asString());
	if(!value["ResultMessage"].isNull())
		resultMessage_ = value["ResultMessage"].asString();
	if(!value["ImageId"].isNull())
		imageId_ = value["ImageId"].asString();
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

std::vector<std::string> CreateImageResult::getItems()const
{
	return items_;
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

