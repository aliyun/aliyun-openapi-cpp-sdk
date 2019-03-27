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

#include <alibabacloud/ons/model/OnsMessageTraceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ons;
using namespace AlibabaCloud::Ons::Model;

OnsMessageTraceResult::OnsMessageTraceResult() :
	ServiceResult()
{}

OnsMessageTraceResult::OnsMessageTraceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OnsMessageTraceResult::~OnsMessageTraceResult()
{}

void OnsMessageTraceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["MessageTrack"];
	for (auto value : allData)
	{
		MessageTrack dataObject;
		if(!value["ConsumerGroup"].isNull())
			dataObject.consumerGroup = value["ConsumerGroup"].asString();
		if(!value["TrackType"].isNull())
			dataObject.trackType = value["TrackType"].asString();
		if(!value["ExceptionDesc"].isNull())
			dataObject.exceptionDesc = value["ExceptionDesc"].asString();
		if(!value["InstanceId"].isNull())
			dataObject.instanceId = value["InstanceId"].asString();
		data_.push_back(dataObject);
	}
	if(!value["HelpUrl"].isNull())
		helpUrl_ = value["HelpUrl"].asString();

}

std::vector<OnsMessageTraceResult::MessageTrack> OnsMessageTraceResult::getData()const
{
	return data_;
}

std::string OnsMessageTraceResult::getHelpUrl()const
{
	return helpUrl_;
}

