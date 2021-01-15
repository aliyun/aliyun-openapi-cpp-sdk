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

#include <alibabacloud/opensearch/model/DescribeAppGroupDataReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

DescribeAppGroupDataReportResult::DescribeAppGroupDataReportResult() :
	ServiceResult()
{}

DescribeAppGroupDataReportResult::DescribeAppGroupDataReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAppGroupDataReportResult::~DescribeAppGroupDataReportResult()
{}

void DescribeAppGroupDataReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["receivedCount"].isNull())
		result_.receivedCount = std::stoi(resultNode["receivedCount"].asString());
	auto allreceivedSampleNode = resultNode["receivedSample"]["receivedSampleItem"];
	for (auto resultNodereceivedSamplereceivedSampleItem : allreceivedSampleNode)
	{
		Result::ReceivedSampleItem receivedSampleItemObject;
		if(!resultNodereceivedSamplereceivedSampleItem["receivedTimeMs"].isNull())
			receivedSampleItemObject.receivedTimeMs = std::stol(resultNodereceivedSamplereceivedSampleItem["receivedTimeMs"].asString());
		auto messageNode = value["message"];
		if(!messageNode["clientIp"].isNull())
			receivedSampleItemObject.message.clientIp = messageNode["clientIp"].asString();
		if(!messageNode["arg3"].isNull())
			receivedSampleItemObject.message.arg3 = messageNode["arg3"].asString();
		if(!messageNode["userId"].isNull())
			receivedSampleItemObject.message.userId = messageNode["userId"].asString();
		if(!messageNode["args"].isNull())
			receivedSampleItemObject.message.args = messageNode["args"].asString();
		if(!messageNode["arg1"].isNull())
			receivedSampleItemObject.message.arg1 = messageNode["arg1"].asString();
		if(!messageNode["sdkType"].isNull())
			receivedSampleItemObject.message.sdkType = messageNode["sdkType"].asString();
		if(!messageNode["sessionId"].isNull())
			receivedSampleItemObject.message.sessionId = messageNode["sessionId"].asString();
		if(!messageNode["eventId"].isNull())
			receivedSampleItemObject.message.eventId = std::stoi(messageNode["eventId"].asString());
		if(!messageNode["sdkVersion"].isNull())
			receivedSampleItemObject.message.sdkVersion = messageNode["sdkVersion"].asString();
		if(!messageNode["page"].isNull())
			receivedSampleItemObject.message.page = messageNode["page"].asString();
		result_.receivedSample.push_back(receivedSampleItemObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::string DescribeAppGroupDataReportResult::getRequestId()const
{
	return requestId_;
}

DescribeAppGroupDataReportResult::Result DescribeAppGroupDataReportResult::getResult()const
{
	return result_;
}

