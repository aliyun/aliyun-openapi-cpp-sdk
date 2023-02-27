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

#include <alibabacloud/ice/model/GetLiveSnapshotTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

GetLiveSnapshotTemplateResult::GetLiveSnapshotTemplateResult() :
	ServiceResult()
{}

GetLiveSnapshotTemplateResult::GetLiveSnapshotTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLiveSnapshotTemplateResult::~GetLiveSnapshotTemplateResult()
{}

void GetLiveSnapshotTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["TemplateId"].isNull())
		templateId_ = value["TemplateId"].asString();
	if(!value["TemplateName"].isNull())
		templateName_ = value["TemplateName"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["OverwriteFormat"].isNull())
		overwriteFormat_ = value["OverwriteFormat"].asString();
	if(!value["SequenceFormat"].isNull())
		sequenceFormat_ = value["SequenceFormat"].asString();
	if(!value["TimeInterval"].isNull())
		timeInterval_ = std::stoi(value["TimeInterval"].asString());
	if(!value["LastModified"].isNull())
		lastModified_ = value["LastModified"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();

}

std::string GetLiveSnapshotTemplateResult::getLastModified()const
{
	return lastModified_;
}

std::string GetLiveSnapshotTemplateResult::getSequenceFormat()const
{
	return sequenceFormat_;
}

std::string GetLiveSnapshotTemplateResult::getType()const
{
	return type_;
}

int GetLiveSnapshotTemplateResult::getTimeInterval()const
{
	return timeInterval_;
}

std::string GetLiveSnapshotTemplateResult::getOverwriteFormat()const
{
	return overwriteFormat_;
}

std::string GetLiveSnapshotTemplateResult::getCreateTime()const
{
	return createTime_;
}

std::string GetLiveSnapshotTemplateResult::getTemplateName()const
{
	return templateName_;
}

std::string GetLiveSnapshotTemplateResult::getTemplateId()const
{
	return templateId_;
}

