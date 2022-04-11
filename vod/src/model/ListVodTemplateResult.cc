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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVodTemplateInfoListNode = value["VodTemplateInfoList"]["VodTemplateInfo"];
	for (auto valueVodTemplateInfoListVodTemplateInfo : allVodTemplateInfoListNode)
	{
		VodTemplateInfo vodTemplateInfoListObject;
		if(!valueVodTemplateInfoListVodTemplateInfo["CreationTime"].isNull())
			vodTemplateInfoListObject.creationTime = valueVodTemplateInfoListVodTemplateInfo["CreationTime"].asString();
		if(!valueVodTemplateInfoListVodTemplateInfo["IsDefault"].isNull())
			vodTemplateInfoListObject.isDefault = valueVodTemplateInfoListVodTemplateInfo["IsDefault"].asString();
		if(!valueVodTemplateInfoListVodTemplateInfo["AppId"].isNull())
			vodTemplateInfoListObject.appId = valueVodTemplateInfoListVodTemplateInfo["AppId"].asString();
		if(!valueVodTemplateInfoListVodTemplateInfo["TemplateType"].isNull())
			vodTemplateInfoListObject.templateType = valueVodTemplateInfoListVodTemplateInfo["TemplateType"].asString();
		if(!valueVodTemplateInfoListVodTemplateInfo["VodTemplateId"].isNull())
			vodTemplateInfoListObject.vodTemplateId = valueVodTemplateInfoListVodTemplateInfo["VodTemplateId"].asString();
		if(!valueVodTemplateInfoListVodTemplateInfo["TemplateConfig"].isNull())
			vodTemplateInfoListObject.templateConfig = valueVodTemplateInfoListVodTemplateInfo["TemplateConfig"].asString();
		if(!valueVodTemplateInfoListVodTemplateInfo["Source"].isNull())
			vodTemplateInfoListObject.source = valueVodTemplateInfoListVodTemplateInfo["Source"].asString();
		if(!valueVodTemplateInfoListVodTemplateInfo["Name"].isNull())
			vodTemplateInfoListObject.name = valueVodTemplateInfoListVodTemplateInfo["Name"].asString();
		if(!valueVodTemplateInfoListVodTemplateInfo["ModifyTime"].isNull())
			vodTemplateInfoListObject.modifyTime = valueVodTemplateInfoListVodTemplateInfo["ModifyTime"].asString();
		if(!valueVodTemplateInfoListVodTemplateInfo["SubTemplateType"].isNull())
			vodTemplateInfoListObject.subTemplateType = valueVodTemplateInfoListVodTemplateInfo["SubTemplateType"].asString();
		vodTemplateInfoList_.push_back(vodTemplateInfoListObject);
	}

}

std::vector<ListVodTemplateResult::VodTemplateInfo> ListVodTemplateResult::getVodTemplateInfoList()const
{
	return vodTemplateInfoList_;
}

