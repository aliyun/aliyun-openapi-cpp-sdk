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

#include <alibabacloud/vod/model/ListVodTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

ListVodTemplateResult::ListVodTemplateResult() :
	ServiceResult()
{}

ListVodTemplateResult::ListVodTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVodTemplateResult::~ListVodTemplateResult()
{}

void ListVodTemplateResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allVodTemplateInfoList = value["VodTemplateInfoList"]["VodTemplateInfo"];
	for (auto value : allVodTemplateInfoList)
	{
		VodTemplateInfo vodTemplateInfoListObject;
		if(!value["Name"].isNull())
			vodTemplateInfoListObject.name = value["Name"].asString();
		if(!value["VodTemplateId"].isNull())
			vodTemplateInfoListObject.vodTemplateId = value["VodTemplateId"].asString();
		if(!value["TemplateType"].isNull())
			vodTemplateInfoListObject.templateType = value["TemplateType"].asString();
		if(!value["SubTemplateType"].isNull())
			vodTemplateInfoListObject.subTemplateType = value["SubTemplateType"].asString();
		if(!value["Source"].isNull())
			vodTemplateInfoListObject.source = value["Source"].asString();
		if(!value["IsDefault"].isNull())
			vodTemplateInfoListObject.isDefault = value["IsDefault"].asString();
		if(!value["TemplateConfig"].isNull())
			vodTemplateInfoListObject.templateConfig = value["TemplateConfig"].asString();
		if(!value["CreationTime"].isNull())
			vodTemplateInfoListObject.creationTime = value["CreationTime"].asString();
		if(!value["ModifyTime"].isNull())
			vodTemplateInfoListObject.modifyTime = value["ModifyTime"].asString();
		if(!value["AppId"].isNull())
			vodTemplateInfoListObject.appId = value["AppId"].asString();
		vodTemplateInfoList_.push_back(vodTemplateInfoListObject);
	}

}

std::vector<ListVodTemplateResult::VodTemplateInfo> ListVodTemplateResult::getVodTemplateInfoList()const
{
	return vodTemplateInfoList_;
}

