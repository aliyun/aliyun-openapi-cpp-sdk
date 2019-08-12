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

#include <alibabacloud/emr/model/GetMetadataTypeListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

GetMetadataTypeListResult::GetMetadataTypeListResult() :
	ServiceResult()
{}

GetMetadataTypeListResult::GetMetadataTypeListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMetadataTypeListResult::~GetMetadataTypeListResult()
{}

void GetMetadataTypeListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["supportedMetadataTypeDTO"];
	for (auto value : allData)
	{
		SupportedMetadataTypeDTO dataObject;
		auto allName = value["Name"]["Name"];
		for (auto value : allName)
			dataObject.name.push_back(value.asString());
		auto allServiceName = value["ServiceName"]["ServiceName"];
		for (auto value : allServiceName)
			dataObject.serviceName.push_back(value.asString());
		data_.push_back(dataObject);
	}

}

std::vector<GetMetadataTypeListResult::SupportedMetadataTypeDTO> GetMetadataTypeListResult::getData()const
{
	return data_;
}

