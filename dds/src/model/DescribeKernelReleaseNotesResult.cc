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

#include <alibabacloud/dds/model/DescribeKernelReleaseNotesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeKernelReleaseNotesResult::DescribeKernelReleaseNotesResult() :
	ServiceResult()
{}

DescribeKernelReleaseNotesResult::DescribeKernelReleaseNotesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeKernelReleaseNotesResult::~DescribeKernelReleaseNotesResult()
{}

void DescribeKernelReleaseNotesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allReleaseNotes = value["ReleaseNotes"]["ReleaseNote"];
	for (auto value : allReleaseNotes)
	{
		ReleaseNote releaseNotesObject;
		if(!value["KernelVersion"].isNull())
			releaseNotesObject.kernelVersion = value["KernelVersion"].asString();
		if(!value["ReleaseNote"].isNull())
			releaseNotesObject.releaseNote = value["ReleaseNote"].asString();
		releaseNotes_.push_back(releaseNotesObject);
	}

}

std::vector<DescribeKernelReleaseNotesResult::ReleaseNote> DescribeKernelReleaseNotesResult::getReleaseNotes()const
{
	return releaseNotes_;
}

