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

#include <alibabacloud/dataworks-public/model/GetDISyncTaskMetricInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetDISyncTaskMetricInfoResult::GetDISyncTaskMetricInfoResult() :
	ServiceResult()
{}

GetDISyncTaskMetricInfoResult::GetDISyncTaskMetricInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDISyncTaskMetricInfoResult::~GetDISyncTaskMetricInfoResult()
{}

void GetDISyncTaskMetricInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto metricInfoNode = value["MetricInfo"];
	if(!metricInfoNode["Message"].isNull())
		metricInfo_.message = metricInfoNode["Message"].asString();
	if(!metricInfoNode["SumReaderRecords"].isNull())
		metricInfo_.sumReaderRecords = std::stol(metricInfoNode["SumReaderRecords"].asString());
	if(!metricInfoNode["SumWriterRecords"].isNull())
		metricInfo_.sumWriterRecords = std::stol(metricInfoNode["SumWriterRecords"].asString());
	if(!metricInfoNode["LastTaskDelay"].isNull())
		metricInfo_.lastTaskDelay = std::stol(metricInfoNode["LastTaskDelay"].asString());
	if(!metricInfoNode["InsertReaderRecords"].isNull())
		metricInfo_.insertReaderRecords = std::stol(metricInfoNode["InsertReaderRecords"].asString());
	if(!metricInfoNode["UpdateReaderRecords"].isNull())
		metricInfo_.updateReaderRecords = std::stol(metricInfoNode["UpdateReaderRecords"].asString());
	if(!metricInfoNode["DeleteReaderRecords"].isNull())
		metricInfo_.deleteReaderRecords = std::stol(metricInfoNode["DeleteReaderRecords"].asString());
	if(!metricInfoNode["InsertWriterRecords"].isNull())
		metricInfo_.insertWriterRecords = std::stol(metricInfoNode["InsertWriterRecords"].asString());
	if(!metricInfoNode["UpdateWriterRecords"].isNull())
		metricInfo_.updateWriterRecords = std::stol(metricInfoNode["UpdateWriterRecords"].asString());
	if(!metricInfoNode["DeleteWriterRecords"].isNull())
		metricInfo_.deleteWriterRecords = std::stol(metricInfoNode["DeleteWriterRecords"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetDISyncTaskMetricInfoResult::MetricInfo GetDISyncTaskMetricInfoResult::getMetricInfo()const
{
	return metricInfo_;
}

bool GetDISyncTaskMetricInfoResult::getSuccess()const
{
	return success_;
}

