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

#include <alibabacloud/ice/model/GetSnapshotJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

GetSnapshotJobResult::GetSnapshotJobResult() :
	ServiceResult()
{}

GetSnapshotJobResult::GetSnapshotJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSnapshotJobResult::~GetSnapshotJobResult()
{}

void GetSnapshotJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto snapshotJobNode = value["SnapshotJob"];
	if(!snapshotJobNode["JobId"].isNull())
		snapshotJob_.jobId = snapshotJobNode["JobId"].asString();
	if(!snapshotJobNode["TriggerSource"].isNull())
		snapshotJob_.triggerSource = snapshotJobNode["TriggerSource"].asString();
	if(!snapshotJobNode["Name"].isNull())
		snapshotJob_.name = snapshotJobNode["Name"].asString();
	if(!snapshotJobNode["Type"].isNull())
		snapshotJob_.type = snapshotJobNode["Type"].asString();
	if(!snapshotJobNode["Count"].isNull())
		snapshotJob_.count = std::stoi(snapshotJobNode["Count"].asString());
	if(!snapshotJobNode["Async"].isNull())
		snapshotJob_.async = snapshotJobNode["Async"].asString() == "true";
	if(!snapshotJobNode["TemplateId"].isNull())
		snapshotJob_.templateId = snapshotJobNode["TemplateId"].asString();
	if(!snapshotJobNode["TemplateConfig"].isNull())
		snapshotJob_.templateConfig = snapshotJobNode["TemplateConfig"].asString();
	if(!snapshotJobNode["PipelineId"].isNull())
		snapshotJob_.pipelineId = snapshotJobNode["PipelineId"].asString();
	if(!snapshotJobNode["Status"].isNull())
		snapshotJob_.status = snapshotJobNode["Status"].asString();
	if(!snapshotJobNode["Code"].isNull())
		snapshotJob_.code = snapshotJobNode["Code"].asString();
	if(!snapshotJobNode["Message"].isNull())
		snapshotJob_.message = snapshotJobNode["Message"].asString();
	if(!snapshotJobNode["SubmitTime"].isNull())
		snapshotJob_.submitTime = snapshotJobNode["SubmitTime"].asString();
	if(!snapshotJobNode["FinishTime"].isNull())
		snapshotJob_.finishTime = snapshotJobNode["FinishTime"].asString();
	if(!snapshotJobNode["UserData"].isNull())
		snapshotJob_.userData = snapshotJobNode["UserData"].asString();
	if(!snapshotJobNode["CreateTime"].isNull())
		snapshotJob_.createTime = snapshotJobNode["CreateTime"].asString();
	if(!snapshotJobNode["ModifiedTime"].isNull())
		snapshotJob_.modifiedTime = snapshotJobNode["ModifiedTime"].asString();
	auto inputNode = snapshotJobNode["Input"];
	if(!inputNode["Type"].isNull())
		snapshotJob_.input.type = inputNode["Type"].asString();
	if(!inputNode["Media"].isNull())
		snapshotJob_.input.media = inputNode["Media"].asString();
	auto ossFileNode = inputNode["OssFile"];
	if(!ossFileNode["Bucket"].isNull())
		snapshotJob_.input.ossFile.bucket = ossFileNode["Bucket"].asString();
	if(!ossFileNode["Location"].isNull())
		snapshotJob_.input.ossFile.location = ossFileNode["Location"].asString();
	if(!ossFileNode["Object"].isNull())
		snapshotJob_.input.ossFile.object = ossFileNode["Object"].asString();
	auto outputNode = snapshotJobNode["Output"];
	if(!outputNode["Type"].isNull())
		snapshotJob_.output.type = outputNode["Type"].asString();
	if(!outputNode["Media"].isNull())
		snapshotJob_.output.media = outputNode["Media"].asString();
	auto ossFile1Node = outputNode["OssFile"];
	if(!ossFile1Node["Bucket"].isNull())
		snapshotJob_.output.ossFile1.bucket = ossFile1Node["Bucket"].asString();
	if(!ossFile1Node["Location"].isNull())
		snapshotJob_.output.ossFile1.location = ossFile1Node["Location"].asString();
	if(!ossFile1Node["Object"].isNull())
		snapshotJob_.output.ossFile1.object = ossFile1Node["Object"].asString();

}

GetSnapshotJobResult::SnapshotJob GetSnapshotJobResult::getSnapshotJob()const
{
	return snapshotJob_;
}

