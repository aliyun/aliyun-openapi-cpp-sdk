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

#include <alibabacloud/ice/model/GetLiveRecordTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

GetLiveRecordTemplateResult::GetLiveRecordTemplateResult() :
	ServiceResult()
{}

GetLiveRecordTemplateResult::GetLiveRecordTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLiveRecordTemplateResult::~GetLiveRecordTemplateResult()
{}

void GetLiveRecordTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto recordTemplateNode = value["RecordTemplate"];
	if(!recordTemplateNode["CreateTime"].isNull())
		recordTemplate_.createTime = recordTemplateNode["CreateTime"].asString();
	if(!recordTemplateNode["LastModified"].isNull())
		recordTemplate_.lastModified = recordTemplateNode["LastModified"].asString();
	if(!recordTemplateNode["TemplateId"].isNull())
		recordTemplate_.templateId = recordTemplateNode["TemplateId"].asString();
	if(!recordTemplateNode["Name"].isNull())
		recordTemplate_.name = recordTemplateNode["Name"].asString();
	if(!recordTemplateNode["Type"].isNull())
		recordTemplate_.type = recordTemplateNode["Type"].asString();
	auto allRecordFormatListNode = recordTemplateNode["RecordFormatList"]["recordFormat"];
	for (auto recordTemplateNodeRecordFormatListrecordFormat : allRecordFormatListNode)
	{
		RecordTemplate::RecordFormat recordFormatObject;
		if(!recordTemplateNodeRecordFormatListrecordFormat["Format"].isNull())
			recordFormatObject.format = recordTemplateNodeRecordFormatListrecordFormat["Format"].asString();
		if(!recordTemplateNodeRecordFormatListrecordFormat["OssObjectPrefix"].isNull())
			recordFormatObject.ossObjectPrefix = recordTemplateNodeRecordFormatListrecordFormat["OssObjectPrefix"].asString();
		if(!recordTemplateNodeRecordFormatListrecordFormat["SliceOssObjectPrefix"].isNull())
			recordFormatObject.sliceOssObjectPrefix = recordTemplateNodeRecordFormatListrecordFormat["SliceOssObjectPrefix"].asString();
		if(!recordTemplateNodeRecordFormatListrecordFormat["CycleDuration"].isNull())
			recordFormatObject.cycleDuration = std::stoi(recordTemplateNodeRecordFormatListrecordFormat["CycleDuration"].asString());
		if(!recordTemplateNodeRecordFormatListrecordFormat["SliceDuration"].isNull())
			recordFormatObject.sliceDuration = std::stoi(recordTemplateNodeRecordFormatListrecordFormat["SliceDuration"].asString());
		recordTemplate_.recordFormatList.push_back(recordFormatObject);
	}

}

GetLiveRecordTemplateResult::RecordTemplate GetLiveRecordTemplateResult::getRecordTemplate()const
{
	return recordTemplate_;
}

