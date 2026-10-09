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

#include <alibabacloud/airegistry/model/GetSkillImportFileUrlResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AIRegistry;
using namespace AlibabaCloud::AIRegistry::Model;

GetSkillImportFileUrlResult::GetSkillImportFileUrlResult() :
	ServiceResult()
{}

GetSkillImportFileUrlResult::GetSkillImportFileUrlResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSkillImportFileUrlResult::~GetSkillImportFileUrlResult()
{}

void GetSkillImportFileUrlResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["UploadUrl"].isNull())
		data_.uploadUrl = dataNode["UploadUrl"].asString();
	if(!dataNode["ContentType"].isNull())
		data_.contentType = dataNode["ContentType"].asString();
	if(!dataNode["OssObjectName"].isNull())
		data_.ossObjectName = dataNode["OssObjectName"].asString();
	if(!dataNode["MaxSize"].isNull())
		data_.maxSize = dataNode["MaxSize"].asString();

}

GetSkillImportFileUrlResult::Data GetSkillImportFileUrlResult::getData()const
{
	return data_;
}

