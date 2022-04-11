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

#include <alibabacloud/vod/model/GetVodTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetVodTemplateResult::GetVodTemplateResult() :
	ServiceResult()
{}

GetVodTemplateResult::GetVodTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetVodTemplateResult::~GetVodTemplateResult()
{}

void GetVodTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto vodTemplateInfoNode = value["VodTemplateInfo"];
	if(!vodTemplateInfoNode["CreationTime"].isNull())
		vodTemplateInfo_.creationTime = vodTemplateInfoNode["CreationTime"].asString();
	if(!vodTemplateInfoNode["IsDefault"].isNull())
		vodTemplateInfo_.isDefault = vodTemplateInfoNode["IsDefault"].asString();
	if(!vodTemplateInfoNode["TemplateType"].isNull())
		vodTemplateInfo_.templateType = vodTemplateInfoNode["TemplateType"].asString();
	if(!vodTemplateInfoNode["VodTemplateId"].isNull())
		vodTemplateInfo_.vodTemplateId = vodTemplateInfoNode["VodTemplateId"].asString();
	if(!vodTemplateInfoNode["TemplateConfig"].isNull())
		vodTemplateInfo_.templateConfig = vodTemplateInfoNode["TemplateConfig"].asString();
	if(!vodTemplateInfoNode["Source"].isNull())
		vodTemplateInfo_.source = vodTemplateInfoNode["Source"].asString();
	if(!vodTemplateInfoNode["Name"].isNull())
		vodTemplateInfo_.name = vodTemplateInfoNode["Name"].asString();
	if(!vodTemplateInfoNode["ModifyTime"].isNull())
		vodTemplateInfo_.modifyTime = vodTemplateInfoNode["ModifyTime"].asString();
	if(!vodTemplateInfoNode["SubTemplateType"].isNull())
		vodTemplateInfo_.subTemplateType = vodTemplateInfoNode["SubTemplateType"].asString();

}

GetVodTemplateResult::VodTemplateInfo GetVodTemplateResult::getVodTemplateInfo()const
{
	return vodTemplateInfo_;
}

