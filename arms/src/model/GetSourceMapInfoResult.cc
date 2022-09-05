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

#include <alibabacloud/arms/model/GetSourceMapInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

GetSourceMapInfoResult::GetSourceMapInfoResult() :
	ServiceResult()
{}

GetSourceMapInfoResult::GetSourceMapInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSourceMapInfoResult::~GetSourceMapInfoResult()
{}

void GetSourceMapInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSourceMapListNode = value["SourceMapList"]["data"];
	for (auto valueSourceMapListdata : allSourceMapListNode)
	{
		Data sourceMapListObject;
		if(!valueSourceMapListdata["Fid"].isNull())
			sourceMapListObject.fid = valueSourceMapListdata["Fid"].asString();
		if(!valueSourceMapListdata["FileName"].isNull())
			sourceMapListObject.fileName = valueSourceMapListdata["FileName"].asString();
		if(!valueSourceMapListdata["Size"].isNull())
			sourceMapListObject.size = valueSourceMapListdata["Size"].asString();
		if(!valueSourceMapListdata["UploadTime"].isNull())
			sourceMapListObject.uploadTime = valueSourceMapListdata["UploadTime"].asString();
		if(!valueSourceMapListdata["Version"].isNull())
			sourceMapListObject.version = valueSourceMapListdata["Version"].asString();
		sourceMapList_.push_back(sourceMapListObject);
	}

}

std::vector<GetSourceMapInfoResult::Data> GetSourceMapInfoResult::getSourceMapList()const
{
	return sourceMapList_;
}

