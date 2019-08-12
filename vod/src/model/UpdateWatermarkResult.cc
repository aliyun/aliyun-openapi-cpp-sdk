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

#include <alibabacloud/vod/model/UpdateWatermarkResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

UpdateWatermarkResult::UpdateWatermarkResult() :
	ServiceResult()
{}

UpdateWatermarkResult::UpdateWatermarkResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateWatermarkResult::~UpdateWatermarkResult()
{}

void UpdateWatermarkResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto watermarkInfoNode = value["WatermarkInfo"];
	if(!watermarkInfoNode["CreationTime"].isNull())
		watermarkInfo_.creationTime = watermarkInfoNode["CreationTime"].asString();
	if(!watermarkInfoNode["Type"].isNull())
		watermarkInfo_.type = watermarkInfoNode["Type"].asString();
	if(!watermarkInfoNode["IsDefault"].isNull())
		watermarkInfo_.isDefault = watermarkInfoNode["IsDefault"].asString();
	if(!watermarkInfoNode["WatermarkId"].isNull())
		watermarkInfo_.watermarkId = watermarkInfoNode["WatermarkId"].asString();
	if(!watermarkInfoNode["Name"].isNull())
		watermarkInfo_.name = watermarkInfoNode["Name"].asString();
	if(!watermarkInfoNode["FileUrl"].isNull())
		watermarkInfo_.fileUrl = watermarkInfoNode["FileUrl"].asString();
	if(!watermarkInfoNode["WatermarkConfig"].isNull())
		watermarkInfo_.watermarkConfig = watermarkInfoNode["WatermarkConfig"].asString();

}

UpdateWatermarkResult::WatermarkInfo UpdateWatermarkResult::getWatermarkInfo()const
{
	return watermarkInfo_;
}

