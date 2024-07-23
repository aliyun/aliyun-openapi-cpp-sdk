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

#include <alibabacloud/mts/model/QuerySnapshotJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QuerySnapshotJobListResult::QuerySnapshotJobListResult() :
	ServiceResult()
{}

QuerySnapshotJobListResult::QuerySnapshotJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySnapshotJobListResult::~QuerySnapshotJobListResult()
{}

void QuerySnapshotJobListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSnapshotJobListNode = value["SnapshotJobList"]["SnapshotJob"];
	for (auto valueSnapshotJobListSnapshotJob : allSnapshotJobListNode)
	{
		SnapshotJob snapshotJobListObject;
		if(!valueSnapshotJobListSnapshotJob["CreationTime"].isNull())
			snapshotJobListObject.creationTime = valueSnapshotJobListSnapshotJob["CreationTime"].asString();
		if(!valueSnapshotJobListSnapshotJob["State"].isNull())
			snapshotJobListObject.state = valueSnapshotJobListSnapshotJob["State"].asString();
		if(!valueSnapshotJobListSnapshotJob["Message"].isNull())
			snapshotJobListObject.message = valueSnapshotJobListSnapshotJob["Message"].asString();
		if(!valueSnapshotJobListSnapshotJob["Count"].isNull())
			snapshotJobListObject.count = valueSnapshotJobListSnapshotJob["Count"].asString();
		if(!valueSnapshotJobListSnapshotJob["TileCount"].isNull())
			snapshotJobListObject.tileCount = valueSnapshotJobListSnapshotJob["TileCount"].asString();
		if(!valueSnapshotJobListSnapshotJob["UserData"].isNull())
			snapshotJobListObject.userData = valueSnapshotJobListSnapshotJob["UserData"].asString();
		if(!valueSnapshotJobListSnapshotJob["Code"].isNull())
			snapshotJobListObject.code = valueSnapshotJobListSnapshotJob["Code"].asString();
		if(!valueSnapshotJobListSnapshotJob["PipelineId"].isNull())
			snapshotJobListObject.pipelineId = valueSnapshotJobListSnapshotJob["PipelineId"].asString();
		if(!valueSnapshotJobListSnapshotJob["Id"].isNull())
			snapshotJobListObject.id = valueSnapshotJobListSnapshotJob["Id"].asString();
		auto snapshotConfigNode = value["SnapshotConfig"];
		if(!snapshotConfigNode["Time"].isNull())
			snapshotJobListObject.snapshotConfig.time = snapshotConfigNode["Time"].asString();
		if(!snapshotConfigNode["Interval"].isNull())
			snapshotJobListObject.snapshotConfig.interval = snapshotConfigNode["Interval"].asString();
		if(!snapshotConfigNode["FrameType"].isNull())
			snapshotJobListObject.snapshotConfig.frameType = snapshotConfigNode["FrameType"].asString();
		if(!snapshotConfigNode["Width"].isNull())
			snapshotJobListObject.snapshotConfig.width = snapshotConfigNode["Width"].asString();
		if(!snapshotConfigNode["Height"].isNull())
			snapshotJobListObject.snapshotConfig.height = snapshotConfigNode["Height"].asString();
		if(!snapshotConfigNode["Num"].isNull())
			snapshotJobListObject.snapshotConfig.num = snapshotConfigNode["Num"].asString();
		auto tileOutNode = snapshotConfigNode["TileOut"];
		if(!tileOutNode["Padding"].isNull())
			snapshotJobListObject.snapshotConfig.tileOut.padding = tileOutNode["Padding"].asString();
		if(!tileOutNode["Color"].isNull())
			snapshotJobListObject.snapshotConfig.tileOut.color = tileOutNode["Color"].asString();
		if(!tileOutNode["CellSelStep"].isNull())
			snapshotJobListObject.snapshotConfig.tileOut.cellSelStep = tileOutNode["CellSelStep"].asString();
		if(!tileOutNode["CellHeight"].isNull())
			snapshotJobListObject.snapshotConfig.tileOut.cellHeight = tileOutNode["CellHeight"].asString();
		if(!tileOutNode["CellWidth"].isNull())
			snapshotJobListObject.snapshotConfig.tileOut.cellWidth = tileOutNode["CellWidth"].asString();
		if(!tileOutNode["Margin"].isNull())
			snapshotJobListObject.snapshotConfig.tileOut.margin = tileOutNode["Margin"].asString();
		if(!tileOutNode["Columns"].isNull())
			snapshotJobListObject.snapshotConfig.tileOut.columns = tileOutNode["Columns"].asString();
		if(!tileOutNode["IsKeepCellPic"].isNull())
			snapshotJobListObject.snapshotConfig.tileOut.isKeepCellPic = tileOutNode["IsKeepCellPic"].asString();
		if(!tileOutNode["Lines"].isNull())
			snapshotJobListObject.snapshotConfig.tileOut.lines = tileOutNode["Lines"].asString();
		auto outputFileNode = snapshotConfigNode["OutputFile"];
		if(!outputFileNode["RoleArn"].isNull())
			snapshotJobListObject.snapshotConfig.outputFile.roleArn = outputFileNode["RoleArn"].asString();
		if(!outputFileNode["Object"].isNull())
			snapshotJobListObject.snapshotConfig.outputFile.object = outputFileNode["Object"].asString();
		if(!outputFileNode["Location"].isNull())
			snapshotJobListObject.snapshotConfig.outputFile.location = outputFileNode["Location"].asString();
		if(!outputFileNode["Bucket"].isNull())
			snapshotJobListObject.snapshotConfig.outputFile.bucket = outputFileNode["Bucket"].asString();
		auto tileOutputFileNode = snapshotConfigNode["TileOutputFile"];
		if(!tileOutputFileNode["RoleArn"].isNull())
			snapshotJobListObject.snapshotConfig.tileOutputFile.roleArn = tileOutputFileNode["RoleArn"].asString();
		if(!tileOutputFileNode["Object"].isNull())
			snapshotJobListObject.snapshotConfig.tileOutputFile.object = tileOutputFileNode["Object"].asString();
		if(!tileOutputFileNode["Location"].isNull())
			snapshotJobListObject.snapshotConfig.tileOutputFile.location = tileOutputFileNode["Location"].asString();
		if(!tileOutputFileNode["Bucket"].isNull())
			snapshotJobListObject.snapshotConfig.tileOutputFile.bucket = tileOutputFileNode["Bucket"].asString();
			auto allTimeArray = snapshotConfigNode["TimeArray"]["TimePointList"];
			for (auto value : allTimeArray)
				snapshotJobListObject.snapshotConfig.timeArray.push_back(value.asString());
		auto mNSMessageResultNode = value["MNSMessageResult"];
		if(!mNSMessageResultNode["MessageId"].isNull())
			snapshotJobListObject.mNSMessageResult.messageId = mNSMessageResultNode["MessageId"].asString();
		if(!mNSMessageResultNode["ErrorMessage"].isNull())
			snapshotJobListObject.mNSMessageResult.errorMessage = mNSMessageResultNode["ErrorMessage"].asString();
		if(!mNSMessageResultNode["ErrorCode"].isNull())
			snapshotJobListObject.mNSMessageResult.errorCode = mNSMessageResultNode["ErrorCode"].asString();
		auto inputNode = value["Input"];
		if(!inputNode["RoleArn"].isNull())
			snapshotJobListObject.input.roleArn = inputNode["RoleArn"].asString();
		if(!inputNode["Object"].isNull())
			snapshotJobListObject.input.object = inputNode["Object"].asString();
		if(!inputNode["Location"].isNull())
			snapshotJobListObject.input.location = inputNode["Location"].asString();
		if(!inputNode["Bucket"].isNull())
			snapshotJobListObject.input.bucket = inputNode["Bucket"].asString();
		snapshotJobList_.push_back(snapshotJobListObject);
	}
	auto allNonExistSnapshotJobIds = value["NonExistSnapshotJobIds"]["String"];
	for (const auto &item : allNonExistSnapshotJobIds)
		nonExistSnapshotJobIds_.push_back(item.asString());
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = value["NextPageToken"].asString();

}

std::vector<QuerySnapshotJobListResult::SnapshotJob> QuerySnapshotJobListResult::getSnapshotJobList()const
{
	return snapshotJobList_;
}

std::vector<std::string> QuerySnapshotJobListResult::getNonExistSnapshotJobIds()const
{
	return nonExistSnapshotJobIds_;
}

std::string QuerySnapshotJobListResult::getNextPageToken()const
{
	return nextPageToken_;
}

