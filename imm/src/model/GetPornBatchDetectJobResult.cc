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

#include <alibabacloud/imm/model/GetPornBatchDetectJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

GetPornBatchDetectJobResult::GetPornBatchDetectJobResult() :
	ServiceResult()
{}

GetPornBatchDetectJobResult::GetPornBatchDetectJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPornBatchDetectJobResult::~GetPornBatchDetectJobResult()
{}

void GetPornBatchDetectJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	if(!value["JobId"].isNull())
		jobId_ = value["JobId"].asString();
	if(!value["SrcUri"].isNull())
		srcUri_ = value["SrcUri"].asString();
	if(!value["TgtUri"].isNull())
		tgtUri_ = value["TgtUri"].asString();
	if(!value["NotifyTopicName"].isNull())
		notifyTopicName_ = value["NotifyTopicName"].asString();
	if(!value["NotifyEndpoint"].isNull())
		notifyEndpoint_ = value["NotifyEndpoint"].asString();
	if(!value["ExternalID"].isNull())
		externalID_ = value["ExternalID"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["FinishTime"].isNull())
		finishTime_ = value["FinishTime"].asString();
	if(!value["Percent"].isNull())
		percent_ = std::stoi(value["Percent"].asString());

}

std::string GetPornBatchDetectJobResult::getStatus()const
{
	return status_;
}

std::string GetPornBatchDetectJobResult::getNotifyEndpoint()const
{
	return notifyEndpoint_;
}

std::string GetPornBatchDetectJobResult::getTgtUri()const
{
	return tgtUri_;
}

std::string GetPornBatchDetectJobResult::getFinishTime()const
{
	return finishTime_;
}

int GetPornBatchDetectJobResult::getPercent()const
{
	return percent_;
}

std::string GetPornBatchDetectJobResult::getExternalID()const
{
	return externalID_;
}

std::string GetPornBatchDetectJobResult::getCreateTime()const
{
	return createTime_;
}

std::string GetPornBatchDetectJobResult::getNotifyTopicName()const
{
	return notifyTopicName_;
}

std::string GetPornBatchDetectJobResult::getJobId()const
{
	return jobId_;
}

std::string GetPornBatchDetectJobResult::getSrcUri()const
{
	return srcUri_;
}

