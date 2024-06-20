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

#include <alibabacloud/csas/model/GetWmEmbedTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

GetWmEmbedTaskResult::GetWmEmbedTaskResult() :
	ServiceResult()
{}

GetWmEmbedTaskResult::GetWmEmbedTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetWmEmbedTaskResult::~GetWmEmbedTaskResult()
{}

void GetWmEmbedTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TaskId"].isNull())
		data_.taskId = dataNode["TaskId"].asString();
	if(!dataNode["TaskStatus"].isNull())
		data_.taskStatus = dataNode["TaskStatus"].asString();
	if(!dataNode["FileUrl"].isNull())
		data_.fileUrl = dataNode["FileUrl"].asString();
	if(!dataNode["FileUrlExp"].isNull())
		data_.fileUrlExp = dataNode["FileUrlExp"].asString();
	if(!dataNode["Filename"].isNull())
		data_.filename = dataNode["Filename"].asString();
	if(!dataNode["OutFileHashMd5"].isNull())
		data_.outFileHashMd5 = dataNode["OutFileHashMd5"].asString();
	if(!dataNode["OutFileSize"].isNull())
		data_.outFileSize = std::stol(dataNode["OutFileSize"].asString());

}

GetWmEmbedTaskResult::Data GetWmEmbedTaskResult::getData()const
{
	return data_;
}

