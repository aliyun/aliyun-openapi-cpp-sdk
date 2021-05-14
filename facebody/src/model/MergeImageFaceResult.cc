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

#include <alibabacloud/facebody/model/MergeImageFaceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Facebody;
using namespace AlibabaCloud::Facebody::Model;

MergeImageFaceResult::MergeImageFaceResult() :
	ServiceResult()
{}

MergeImageFaceResult::MergeImageFaceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

MergeImageFaceResult::~MergeImageFaceResult()
{}

void MergeImageFaceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ImageURL"].isNull())
		data_.imageURL = dataNode["ImageURL"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string MergeImageFaceResult::getMessage()const
{
	return message_;
}

MergeImageFaceResult::Data MergeImageFaceResult::getData()const
{
	return data_;
}

std::string MergeImageFaceResult::getCode()const
{
	return code_;
}

