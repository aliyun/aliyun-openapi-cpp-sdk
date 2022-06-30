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

#include <alibabacloud/facebody/model/HandPostureResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Facebody;
using namespace AlibabaCloud::Facebody::Model;

HandPostureResult::HandPostureResult() :
	ServiceResult()
{}

HandPostureResult::HandPostureResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

HandPostureResult::~HandPostureResult()
{}

void HandPostureResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allOutputsNode = dataNode["Outputs"]["Output"];
	for (auto dataNodeOutputsOutput : allOutputsNode)
	{
		Data::Output outputObject;
		if(!dataNodeOutputsOutput["HandCount"].isNull())
			outputObject.handCount = std::stoi(dataNodeOutputsOutput["HandCount"].asString());
		auto allResultsNode = dataNodeOutputsOutput["Results"]["Result"];
		for (auto dataNodeOutputsOutputResultsResult : allResultsNode)
		{
			Data::Output::Result resultsObject;
			auto handsNode = value["Hands"];
			if(!handsNode["Confident"].isNull())
				resultsObject.hands.confident = std::stof(handsNode["Confident"].asString());
			auto allKeyPointsNode = handsNode["KeyPoints"]["KeyPoint"];
			for (auto handsNodeKeyPointsKeyPoint : allKeyPointsNode)
			{
				Data::Output::Result::Hands::KeyPoint keyPointObject;
				if(!handsNodeKeyPointsKeyPoint["Label"].isNull())
					keyPointObject.label = handsNodeKeyPointsKeyPoint["Label"].asString();
				auto allPositionsNode = handsNodeKeyPointsKeyPoint["Positions"]["Position"];
				for (auto handsNodeKeyPointsKeyPointPositionsPosition : allPositionsNode)
				{
					Data::Output::Result::Hands::KeyPoint::Position positionsObject;
					auto allPoints = value["Points"]["Point"];
					for (auto value : allPoints)
						positionsObject.points.push_back(value.asString());
					keyPointObject.positions.push_back(positionsObject);
				}
				resultsObject.hands.keyPoints.push_back(keyPointObject);
			}
			auto boxNode = value["Box"];
			if(!boxNode["Confident"].isNull())
				resultsObject.box.confident = std::stof(boxNode["Confident"].asString());
			auto allPositions1Node = boxNode["Positions"]["Position"];
			for (auto boxNodePositionsPosition : allPositions1Node)
			{
				Data::Output::Result::Box::Position2 position2Object;
				auto allPoints3 = value["Points"]["Point"];
				for (auto value : allPoints3)
					position2Object.points3.push_back(value.asString());
				resultsObject.box.positions1.push_back(position2Object);
			}
			outputObject.results.push_back(resultsObject);
		}
		data_.outputs.push_back(outputObject);
	}
	auto metaObjectNode = dataNode["MetaObject"];
	if(!metaObjectNode["Width"].isNull())
		data_.metaObject.width = std::stoi(metaObjectNode["Width"].asString());
	if(!metaObjectNode["Height"].isNull())
		data_.metaObject.height = std::stoi(metaObjectNode["Height"].asString());

}

HandPostureResult::Data HandPostureResult::getData()const
{
	return data_;
}

