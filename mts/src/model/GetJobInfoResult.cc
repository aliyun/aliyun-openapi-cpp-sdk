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

#include <alibabacloud/mts/model/GetJobInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

GetJobInfoResult::GetJobInfoResult() :
	ServiceResult()
{}

GetJobInfoResult::GetJobInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetJobInfoResult::~GetJobInfoResult()
{}

void GetJobInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto mtsTransferJobNode = value["MtsTransferJob"];
	if(!mtsTransferJobNode["JobId"].isNull())
		mtsTransferJob_.jobId = mtsTransferJobNode["JobId"].asString();
	if(!mtsTransferJobNode["JobType"].isNull())
		mtsTransferJob_.jobType = mtsTransferJobNode["JobType"].asString();
	if(!mtsTransferJobNode["CreateTime"].isNull())
		mtsTransferJob_.createTime = mtsTransferJobNode["CreateTime"].asString();
	if(!mtsTransferJobNode["ModifiedTime"].isNull())
		mtsTransferJob_.modifiedTime = mtsTransferJobNode["ModifiedTime"].asString();
	if(!mtsTransferJobNode["FinishedTime"].isNull())
		mtsTransferJob_.finishedTime = mtsTransferJobNode["FinishedTime"].asString();
	if(!mtsTransferJobNode["State"].isNull())
		mtsTransferJob_.state = mtsTransferJobNode["State"].asString();
	if(!mtsTransferJobNode["ErrorCode"].isNull())
		mtsTransferJob_.errorCode = mtsTransferJobNode["ErrorCode"].asString();
	if(!mtsTransferJobNode["ErrorMessage"].isNull())
		mtsTransferJob_.errorMessage = mtsTransferJobNode["ErrorMessage"].asString();
	if(!mtsTransferJobNode["UserData"].isNull())
		mtsTransferJob_.userData = mtsTransferJobNode["UserData"].asString();
	if(!mtsTransferJobNode["Extend"].isNull())
		mtsTransferJob_.extend = mtsTransferJobNode["Extend"].asString();
	if(!mtsTransferJobNode["RequestJson"].isNull())
		mtsTransferJob_.requestJson = mtsTransferJobNode["RequestJson"].asString();

}

GetJobInfoResult::MtsTransferJob GetJobInfoResult::getMtsTransferJob()const
{
	return mtsTransferJob_;
}

