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

#include <alibabacloud/mts/model/ListFpShotFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

ListFpShotFilesResult::ListFpShotFilesResult() :
	ServiceResult()
{}

ListFpShotFilesResult::ListFpShotFilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFpShotFilesResult::~ListFpShotFilesResult()
{}

void ListFpShotFilesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFpShotFileListNode = value["FpShotFileList"]["FpShotFile"];
	for (auto valueFpShotFileListFpShotFile : allFpShotFileListNode)
	{
		FpShotFile fpShotFileListObject;
		if(!valueFpShotFileListFpShotFile["PrimaryKey"].isNull())
			fpShotFileListObject.primaryKey = valueFpShotFileListFpShotFile["PrimaryKey"].asString();
		if(!valueFpShotFileListFpShotFile["FileId"].isNull())
			fpShotFileListObject.fileId = valueFpShotFileListFpShotFile["FileId"].asString();
		if(!valueFpShotFileListFpShotFile["StoreTime"].isNull())
			fpShotFileListObject.storeTime = valueFpShotFileListFpShotFile["StoreTime"].asString();
		auto inputFileNode = value["InputFile"];
		if(!inputFileNode["Object"].isNull())
			fpShotFileListObject.inputFile.object = inputFileNode["Object"].asString();
		if(!inputFileNode["Location"].isNull())
			fpShotFileListObject.inputFile.location = inputFileNode["Location"].asString();
		if(!inputFileNode["Bucket"].isNull())
			fpShotFileListObject.inputFile.bucket = inputFileNode["Bucket"].asString();
		fpShotFileList_.push_back(fpShotFileListObject);
	}
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = value["NextPageToken"].asString();

}

std::string ListFpShotFilesResult::getNextPageToken()const
{
	return nextPageToken_;
}

std::vector<ListFpShotFilesResult::FpShotFile> ListFpShotFilesResult::getFpShotFileList()const
{
	return fpShotFileList_;
}

