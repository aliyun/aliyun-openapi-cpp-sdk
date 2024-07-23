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

#include <alibabacloud/mts/model/ListFpShotImportJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

ListFpShotImportJobResult::ListFpShotImportJobResult() :
	ServiceResult()
{}

ListFpShotImportJobResult::ListFpShotImportJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFpShotImportJobResult::~ListFpShotImportJobResult()
{}

void ListFpShotImportJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFpShotImportJobListNode = value["FpShotImportJobList"]["FpShotImportJob"];
	for (auto valueFpShotImportJobListFpShotImportJob : allFpShotImportJobListNode)
	{
		FpShotImportJob fpShotImportJobListObject;
		if(!valueFpShotImportJobListFpShotImportJob["Id"].isNull())
			fpShotImportJobListObject.id = valueFpShotImportJobListFpShotImportJob["Id"].asString();
		if(!valueFpShotImportJobListFpShotImportJob["FpDBId"].isNull())
			fpShotImportJobListObject.fpDBId = valueFpShotImportJobListFpShotImportJob["FpDBId"].asString();
		if(!valueFpShotImportJobListFpShotImportJob["PipelineId"].isNull())
			fpShotImportJobListObject.pipelineId = valueFpShotImportJobListFpShotImportJob["PipelineId"].asString();
		if(!valueFpShotImportJobListFpShotImportJob["FpImportConfig"].isNull())
			fpShotImportJobListObject.fpImportConfig = valueFpShotImportJobListFpShotImportJob["FpImportConfig"].asString();
		if(!valueFpShotImportJobListFpShotImportJob["Status"].isNull())
			fpShotImportJobListObject.status = valueFpShotImportJobListFpShotImportJob["Status"].asString();
		if(!valueFpShotImportJobListFpShotImportJob["Code"].isNull())
			fpShotImportJobListObject.code = valueFpShotImportJobListFpShotImportJob["Code"].asString();
		if(!valueFpShotImportJobListFpShotImportJob["Message"].isNull())
			fpShotImportJobListObject.message = valueFpShotImportJobListFpShotImportJob["Message"].asString();
		if(!valueFpShotImportJobListFpShotImportJob["CreateTime"].isNull())
			fpShotImportJobListObject.createTime = valueFpShotImportJobListFpShotImportJob["CreateTime"].asString();
		if(!valueFpShotImportJobListFpShotImportJob["FinishTime"].isNull())
			fpShotImportJobListObject.finishTime = valueFpShotImportJobListFpShotImportJob["FinishTime"].asString();
		if(!valueFpShotImportJobListFpShotImportJob["UserData"].isNull())
			fpShotImportJobListObject.userData = valueFpShotImportJobListFpShotImportJob["UserData"].asString();
		if(!valueFpShotImportJobListFpShotImportJob["Input"].isNull())
			fpShotImportJobListObject.input = valueFpShotImportJobListFpShotImportJob["Input"].asString();
		if(!valueFpShotImportJobListFpShotImportJob["ProcessMessage"].isNull())
			fpShotImportJobListObject.processMessage = valueFpShotImportJobListFpShotImportJob["ProcessMessage"].asString();
		fpShotImportJobList_.push_back(fpShotImportJobListObject);
	}
	auto allNonExistIds = value["NonExistIds"]["String"];
	for (const auto &item : allNonExistIds)
		nonExistIds_.push_back(item.asString());

}

std::vector<ListFpShotImportJobResult::FpShotImportJob> ListFpShotImportJobResult::getFpShotImportJobList()const
{
	return fpShotImportJobList_;
}

std::vector<std::string> ListFpShotImportJobResult::getNonExistIds()const
{
	return nonExistIds_;
}

