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

#include <alibabacloud/mts/model/SubmitImageQualityJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

SubmitImageQualityJobResult::SubmitImageQualityJobResult() :
	ServiceResult()
{}

SubmitImageQualityJobResult::SubmitImageQualityJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SubmitImageQualityJobResult::~SubmitImageQualityJobResult()
{}

void SubmitImageQualityJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto imageQualityJobNode = value["ImageQualityJob"];
	if(!imageQualityJobNode["JobId"].isNull())
		imageQualityJob_.jobId = imageQualityJobNode["JobId"].asString();
	if(!imageQualityJobNode["UserData"].isNull())
		imageQualityJob_.userData = imageQualityJobNode["UserData"].asString();
	if(!imageQualityJobNode["PipelineId"].isNull())
		imageQualityJob_.pipelineId = imageQualityJobNode["PipelineId"].asString();
	if(!imageQualityJobNode["State"].isNull())
		imageQualityJob_.state = imageQualityJobNode["State"].asString();
	if(!imageQualityJobNode["CreationTime"].isNull())
		imageQualityJob_.creationTime = imageQualityJobNode["CreationTime"].asString();
	auto inputNode = imageQualityJobNode["Input"];
	if(!inputNode["Bucket"].isNull())
		imageQualityJob_.input.bucket = inputNode["Bucket"].asString();
	if(!inputNode["Location"].isNull())
		imageQualityJob_.input.location = inputNode["Location"].asString();
	if(!inputNode["Object"].isNull())
		imageQualityJob_.input.object = inputNode["Object"].asString();
	if(!inputNode["Url"].isNull())
		imageQualityJob_.input.url = inputNode["Url"].asString();
	auto resultNode = imageQualityJobNode["Result"];
	if(!resultNode["Code"].isNull())
		imageQualityJob_.result.code = resultNode["Code"].asString();
	if(!resultNode["Message"].isNull())
		imageQualityJob_.result.message = resultNode["Message"].asString();
	if(!resultNode["Score"].isNull())
		imageQualityJob_.result.score = resultNode["Score"].asString();

}

SubmitImageQualityJobResult::ImageQualityJob SubmitImageQualityJobResult::getImageQualityJob()const
{
	return imageQualityJob_;
}

