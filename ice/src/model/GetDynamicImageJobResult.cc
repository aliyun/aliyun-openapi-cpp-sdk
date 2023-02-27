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

#include <alibabacloud/ice/model/GetDynamicImageJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

GetDynamicImageJobResult::GetDynamicImageJobResult() :
	ServiceResult()
{}

GetDynamicImageJobResult::GetDynamicImageJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDynamicImageJobResult::~GetDynamicImageJobResult()
{}

void GetDynamicImageJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dynamicImageJobNode = value["DynamicImageJob"];
	if(!dynamicImageJobNode["JobId"].isNull())
		dynamicImageJob_.jobId = dynamicImageJobNode["JobId"].asString();
	if(!dynamicImageJobNode["TriggerSource"].isNull())
		dynamicImageJob_.triggerSource = dynamicImageJobNode["TriggerSource"].asString();
	if(!dynamicImageJobNode["Name"].isNull())
		dynamicImageJob_.name = dynamicImageJobNode["Name"].asString();
	if(!dynamicImageJobNode["OutputUrl"].isNull())
		dynamicImageJob_.outputUrl = dynamicImageJobNode["OutputUrl"].asString();
	if(!dynamicImageJobNode["TemplateConfig"].isNull())
		dynamicImageJob_.templateConfig = dynamicImageJobNode["TemplateConfig"].asString();
	if(!dynamicImageJobNode["TemplateId"].isNull())
		dynamicImageJob_.templateId = dynamicImageJobNode["TemplateId"].asString();
	if(!dynamicImageJobNode["PipelineId"].isNull())
		dynamicImageJob_.pipelineId = dynamicImageJobNode["PipelineId"].asString();
	if(!dynamicImageJobNode["Status"].isNull())
		dynamicImageJob_.status = dynamicImageJobNode["Status"].asString();
	if(!dynamicImageJobNode["Code"].isNull())
		dynamicImageJob_.code = dynamicImageJobNode["Code"].asString();
	if(!dynamicImageJobNode["Message"].isNull())
		dynamicImageJob_.message = dynamicImageJobNode["Message"].asString();
	if(!dynamicImageJobNode["SubmitTime"].isNull())
		dynamicImageJob_.submitTime = dynamicImageJobNode["SubmitTime"].asString();
	if(!dynamicImageJobNode["FinishTime"].isNull())
		dynamicImageJob_.finishTime = dynamicImageJobNode["FinishTime"].asString();
	if(!dynamicImageJobNode["UserData"].isNull())
		dynamicImageJob_.userData = dynamicImageJobNode["UserData"].asString();
	if(!dynamicImageJobNode["CreateTime"].isNull())
		dynamicImageJob_.createTime = dynamicImageJobNode["CreateTime"].asString();
	if(!dynamicImageJobNode["ModifiedTime"].isNull())
		dynamicImageJob_.modifiedTime = dynamicImageJobNode["ModifiedTime"].asString();
	auto inputNode = dynamicImageJobNode["Input"];
	if(!inputNode["Type"].isNull())
		dynamicImageJob_.input.type = inputNode["Type"].asString();
	if(!inputNode["Media"].isNull())
		dynamicImageJob_.input.media = inputNode["Media"].asString();
	auto ossFileNode = inputNode["OssFile"];
	if(!ossFileNode["Bucket"].isNull())
		dynamicImageJob_.input.ossFile.bucket = ossFileNode["Bucket"].asString();
	if(!ossFileNode["Location"].isNull())
		dynamicImageJob_.input.ossFile.location = ossFileNode["Location"].asString();
	if(!ossFileNode["Object"].isNull())
		dynamicImageJob_.input.ossFile.object = ossFileNode["Object"].asString();
	auto outputNode = dynamicImageJobNode["Output"];
	if(!outputNode["Type"].isNull())
		dynamicImageJob_.output.type = outputNode["Type"].asString();
	if(!outputNode["Media"].isNull())
		dynamicImageJob_.output.media = outputNode["Media"].asString();
	auto ossFile1Node = outputNode["OssFile"];
	if(!ossFile1Node["Bucket"].isNull())
		dynamicImageJob_.output.ossFile1.bucket = ossFile1Node["Bucket"].asString();
	if(!ossFile1Node["Location"].isNull())
		dynamicImageJob_.output.ossFile1.location = ossFile1Node["Location"].asString();
	if(!ossFile1Node["Object"].isNull())
		dynamicImageJob_.output.ossFile1.object = ossFile1Node["Object"].asString();

}

GetDynamicImageJobResult::DynamicImageJob GetDynamicImageJobResult::getDynamicImageJob()const
{
	return dynamicImageJob_;
}

