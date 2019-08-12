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

#include <alibabacloud/emr/model/GetQueueOutputStatisticInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

GetQueueOutputStatisticInfoResult::GetQueueOutputStatisticInfoResult() :
	ServiceResult()
{}

GetQueueOutputStatisticInfoResult::GetQueueOutputStatisticInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetQueueOutputStatisticInfoResult::~GetQueueOutputStatisticInfoResult()
{}

void GetQueueOutputStatisticInfoResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allQueueOutputList = value["QueueOutputList"]["ClusterStatQueueOutput"];
	for (auto value : allQueueOutputList)
	{
		ClusterStatQueueOutput queueOutputListObject;
		if(!value["Queue"].isNull())
			queueOutputListObject.queue = value["Queue"].asString();
		if(!value["BytesOutput"].isNull())
			queueOutputListObject.bytesOutput = std::stol(value["BytesOutput"].asString());
		queueOutputList_.push_back(queueOutputListObject);
	}

}

std::vector<GetQueueOutputStatisticInfoResult::ClusterStatQueueOutput> GetQueueOutputStatisticInfoResult::getQueueOutputList()const
{
	return queueOutputList_;
}

