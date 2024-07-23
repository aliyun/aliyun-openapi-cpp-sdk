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

#include <alibabacloud/mts/model/SubmitSnapshotJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

SubmitSnapshotJobResult::SubmitSnapshotJobResult() :
	ServiceResult()
{}

SubmitSnapshotJobResult::SubmitSnapshotJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SubmitSnapshotJobResult::~SubmitSnapshotJobResult()
{}

void SubmitSnapshotJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto snapshotJobNode = value["SnapshotJob"];
	if(!snapshotJobNode["CreationTime"].isNull())
		snapshotJob_.creationTime = snapshotJobNode["CreationTime"].asString();
	if(!snapshotJobNode["State"].isNull())
		snapshotJob_.state = snapshotJobNode["State"].asString();
	if(!snapshotJobNode["Message"].isNull())
		snapshotJob_.message = snapshotJobNode["Message"].asString();
	if(!snapshotJobNode["Count"].isNull())
		snapshotJob_.count = snapshotJobNode["Count"].asString();
	if(!snapshotJobNode["TileCount"].isNull())
		snapshotJob_.tileCount = snapshotJobNode["TileCount"].asString();
	if(!snapshotJobNode["UserData"].isNull())
		snapshotJob_.userData = snapshotJobNode["UserData"].asString();
	if(!snapshotJobNode["Code"].isNull())
		snapshotJob_.code = snapshotJobNode["Code"].asString();
	if(!snapshotJobNode["PipelineId"].isNull())
		snapshotJob_.pipelineId = snapshotJobNode["PipelineId"].asString();
	if(!snapshotJobNode["Id"].isNull())
		snapshotJob_.id = snapshotJobNode["Id"].asString();
	auto snapshotConfigNode = snapshotJobNode["SnapshotConfig"];
	if(!snapshotConfigNode["Time"].isNull())
		snapshotJob_.snapshotConfig.time = snapshotConfigNode["Time"].asString();
	if(!snapshotConfigNode["Interval"].isNull())
		snapshotJob_.snapshotConfig.interval = snapshotConfigNode["Interval"].asString();
	if(!snapshotConfigNode["FrameType"].isNull())
		snapshotJob_.snapshotConfig.frameType = snapshotConfigNode["FrameType"].asString();
	if(!snapshotConfigNode["Width"].isNull())
		snapshotJob_.snapshotConfig.width = snapshotConfigNode["Width"].asString();
	if(!snapshotConfigNode["Height"].isNull())
		snapshotJob_.snapshotConfig.height = snapshotConfigNode["Height"].asString();
	if(!snapshotConfigNode["Num"].isNull())
		snapshotJob_.snapshotConfig.num = snapshotConfigNode["Num"].asString();
	auto tileOutNode = snapshotConfigNode["TileOut"];
	if(!tileOutNode["Padding"].isNull())
		snapshotJob_.snapshotConfig.tileOut.padding = tileOutNode["Padding"].asString();
	if(!tileOutNode["Color"].isNull())
		snapshotJob_.snapshotConfig.tileOut.color = tileOutNode["Color"].asString();
	if(!tileOutNode["CellSelStep"].isNull())
		snapshotJob_.snapshotConfig.tileOut.cellSelStep = tileOutNode["CellSelStep"].asString();
	if(!tileOutNode["CellHeight"].isNull())
		snapshotJob_.snapshotConfig.tileOut.cellHeight = tileOutNode["CellHeight"].asString();
	if(!tileOutNode["CellWidth"].isNull())
		snapshotJob_.snapshotConfig.tileOut.cellWidth = tileOutNode["CellWidth"].asString();
	if(!tileOutNode["Margin"].isNull())
		snapshotJob_.snapshotConfig.tileOut.margin = tileOutNode["Margin"].asString();
	if(!tileOutNode["Columns"].isNull())
		snapshotJob_.snapshotConfig.tileOut.columns = tileOutNode["Columns"].asString();
	if(!tileOutNode["IsKeepCellPic"].isNull())
		snapshotJob_.snapshotConfig.tileOut.isKeepCellPic = tileOutNode["IsKeepCellPic"].asString();
	if(!tileOutNode["Lines"].isNull())
		snapshotJob_.snapshotConfig.tileOut.lines = tileOutNode["Lines"].asString();
	auto outputFileNode = snapshotConfigNode["OutputFile"];
	if(!outputFileNode["RoleArn"].isNull())
		snapshotJob_.snapshotConfig.outputFile.roleArn = outputFileNode["RoleArn"].asString();
	if(!outputFileNode["Object"].isNull())
		snapshotJob_.snapshotConfig.outputFile.object = outputFileNode["Object"].asString();
	if(!outputFileNode["Location"].isNull())
		snapshotJob_.snapshotConfig.outputFile.location = outputFileNode["Location"].asString();
	if(!outputFileNode["Bucket"].isNull())
		snapshotJob_.snapshotConfig.outputFile.bucket = outputFileNode["Bucket"].asString();
	auto tileOutputFileNode = snapshotConfigNode["TileOutputFile"];
	if(!tileOutputFileNode["RoleArn"].isNull())
		snapshotJob_.snapshotConfig.tileOutputFile.roleArn = tileOutputFileNode["RoleArn"].asString();
	if(!tileOutputFileNode["Object"].isNull())
		snapshotJob_.snapshotConfig.tileOutputFile.object = tileOutputFileNode["Object"].asString();
	if(!tileOutputFileNode["Location"].isNull())
		snapshotJob_.snapshotConfig.tileOutputFile.location = tileOutputFileNode["Location"].asString();
	if(!tileOutputFileNode["Bucket"].isNull())
		snapshotJob_.snapshotConfig.tileOutputFile.bucket = tileOutputFileNode["Bucket"].asString();
		auto allTimeArray = snapshotConfigNode["TimeArray"]["TimePointList"];
		for (auto value : allTimeArray)
			snapshotJob_.snapshotConfig.timeArray.push_back(value.asString());
	auto mNSMessageResultNode = snapshotJobNode["MNSMessageResult"];
	if(!mNSMessageResultNode["MessageId"].isNull())
		snapshotJob_.mNSMessageResult.messageId = mNSMessageResultNode["MessageId"].asString();
	if(!mNSMessageResultNode["ErrorMessage"].isNull())
		snapshotJob_.mNSMessageResult.errorMessage = mNSMessageResultNode["ErrorMessage"].asString();
	if(!mNSMessageResultNode["ErrorCode"].isNull())
		snapshotJob_.mNSMessageResult.errorCode = mNSMessageResultNode["ErrorCode"].asString();
	auto inputNode = snapshotJobNode["Input"];
	if(!inputNode["RoleArn"].isNull())
		snapshotJob_.input.roleArn = inputNode["RoleArn"].asString();
	if(!inputNode["Object"].isNull())
		snapshotJob_.input.object = inputNode["Object"].asString();
	if(!inputNode["Location"].isNull())
		snapshotJob_.input.location = inputNode["Location"].asString();
	if(!inputNode["Bucket"].isNull())
		snapshotJob_.input.bucket = inputNode["Bucket"].asString();

}

SubmitSnapshotJobResult::SnapshotJob SubmitSnapshotJobResult::getSnapshotJob()const
{
	return snapshotJob_;
}

