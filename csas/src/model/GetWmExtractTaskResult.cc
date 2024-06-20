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

#include <alibabacloud/csas/model/GetWmExtractTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

GetWmExtractTaskResult::GetWmExtractTaskResult() :
	ServiceResult()
{}

GetWmExtractTaskResult::GetWmExtractTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetWmExtractTaskResult::~GetWmExtractTaskResult()
{}

void GetWmExtractTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = dataNode["CreateTime"].asString();
	if(!dataNode["TaskId"].isNull())
		data_.taskId = dataNode["TaskId"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["Filename"].isNull())
		data_.filename = dataNode["Filename"].asString();
	if(!dataNode["WmType"].isNull())
		data_.wmType = dataNode["WmType"].asString();
	if(!dataNode["WmInfoSize"].isNull())
		data_.wmInfoSize = std::stol(dataNode["WmInfoSize"].asString());
	if(!dataNode["WmInfoUint"].isNull())
		data_.wmInfoUint = std::stol(dataNode["WmInfoUint"].asString());
	if(!dataNode["WmInfoBytesB64"].isNull())
		data_.wmInfoBytesB64 = dataNode["WmInfoBytesB64"].asString();

}

GetWmExtractTaskResult::Data GetWmExtractTaskResult::getData()const
{
	return data_;
}

