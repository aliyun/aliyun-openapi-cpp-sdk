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

#include <alibabacloud/cc5g/model/CreateBatchOperateCardsTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CC5G;
using namespace AlibabaCloud::CC5G::Model;

CreateBatchOperateCardsTaskResult::CreateBatchOperateCardsTaskResult() :
	ServiceResult()
{}

CreateBatchOperateCardsTaskResult::CreateBatchOperateCardsTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateBatchOperateCardsTaskResult::~CreateBatchOperateCardsTaskResult()
{}

void CreateBatchOperateCardsTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["BatchOperateCardsTaskId"].isNull())
		batchOperateCardsTaskId_ = value["BatchOperateCardsTaskId"].asString();
	if(!value["OperateResultOssFilePath"].isNull())
		operateResultOssFilePath_ = value["OperateResultOssFilePath"].asString();

}

std::string CreateBatchOperateCardsTaskResult::getOperateResultOssFilePath()const
{
	return operateResultOssFilePath_;
}

std::string CreateBatchOperateCardsTaskResult::getBatchOperateCardsTaskId()const
{
	return batchOperateCardsTaskId_;
}

