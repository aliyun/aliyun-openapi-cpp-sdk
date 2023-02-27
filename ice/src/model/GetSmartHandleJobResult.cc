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

#include <alibabacloud/ice/model/GetSmartHandleJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

GetSmartHandleJobResult::GetSmartHandleJobResult() :
	ServiceResult()
{}

GetSmartHandleJobResult::GetSmartHandleJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSmartHandleJobResult::~GetSmartHandleJobResult()
{}

void GetSmartHandleJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto jobResultNode = value["JobResult"];
	if(!jobResultNode["MediaId"].isNull())
		jobResult_.mediaId = jobResultNode["MediaId"].asString();
	if(!jobResultNode["AiResult"].isNull())
		jobResult_.aiResult = jobResultNode["AiResult"].asString();
	auto smartJobInfoNode = value["SmartJobInfo"];
	if(!smartJobInfoNode["Title"].isNull())
		smartJobInfo_.title = smartJobInfoNode["Title"].asString();
	if(!smartJobInfoNode["Description"].isNull())
		smartJobInfo_.description = smartJobInfoNode["Description"].asString();
	if(!smartJobInfoNode["UserId"].isNull())
		smartJobInfo_.userId = smartJobInfoNode["UserId"].asString();
	if(!smartJobInfoNode["EditingConfig"].isNull())
		smartJobInfo_.editingConfig = smartJobInfoNode["EditingConfig"].asString();
	if(!smartJobInfoNode["outputConfig"].isNull())
		smartJobInfo_.outputConfig = smartJobInfoNode["outputConfig"].asString();
	if(!smartJobInfoNode["CreateTime"].isNull())
		smartJobInfo_.createTime = smartJobInfoNode["CreateTime"].asString();
	if(!smartJobInfoNode["ModifiedTime"].isNull())
		smartJobInfo_.modifiedTime = smartJobInfoNode["ModifiedTime"].asString();
	if(!smartJobInfoNode["JobType"].isNull())
		smartJobInfo_.jobType = smartJobInfoNode["JobType"].asString();
	auto inputConfigNode = smartJobInfoNode["InputConfig"];
	if(!inputConfigNode["InputFile"].isNull())
		smartJobInfo_.inputConfig.inputFile = inputConfigNode["InputFile"].asString();
	if(!inputConfigNode["JobParameters"].isNull())
		smartJobInfo_.inputConfig.jobParameters = inputConfigNode["JobParameters"].asString();
	auto outputConfigNode = smartJobInfoNode["OutputConfig"];
	if(!outputConfigNode["Bucket"].isNull())
		smartJobInfo_.outputConfig.bucket = outputConfigNode["Bucket"].asString();
	if(!outputConfigNode["Object"].isNull())
		smartJobInfo_.outputConfig.object = outputConfigNode["Object"].asString();
	if(!value["JobId"].isNull())
		jobId_ = value["JobId"].asString();
	if(!value["Output"].isNull())
		output_ = value["Output"].asString();
	if(!value["State"].isNull())
		state_ = value["State"].asString();
	if(!value["UserData"].isNull())
		userData_ = value["UserData"].asString();
	if(!value["FEExtend"].isNull())
		fEExtend_ = value["FEExtend"].asString();

}

GetSmartHandleJobResult::JobResult GetSmartHandleJobResult::getJobResult()const
{
	return jobResult_;
}

std::string GetSmartHandleJobResult::getUserData()const
{
	return userData_;
}

std::string GetSmartHandleJobResult::getState()const
{
	return state_;
}

std::string GetSmartHandleJobResult::getFEExtend()const
{
	return fEExtend_;
}

std::string GetSmartHandleJobResult::getOutput()const
{
	return output_;
}

std::string GetSmartHandleJobResult::getJobId()const
{
	return jobId_;
}

GetSmartHandleJobResult::SmartJobInfo GetSmartHandleJobResult::getSmartJobInfo()const
{
	return smartJobInfo_;
}

