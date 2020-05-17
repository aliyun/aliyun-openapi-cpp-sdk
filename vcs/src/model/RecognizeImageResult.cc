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

#include <alibabacloud/vcs/model/RecognizeImageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

RecognizeImageResult::RecognizeImageResult() :
	ServiceResult()
{}

RecognizeImageResult::RecognizeImageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RecognizeImageResult::~RecognizeImageResult()
{}

void RecognizeImageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allBodyListNode = dataNode["BodyList"]["Body"];
	for (auto dataNodeBodyListBody : allBodyListNode)
	{
		Data::Body bodyObject;
		if(!dataNodeBodyListBody["Feature"].isNull())
			bodyObject.feature = dataNodeBodyListBody["Feature"].asString();
		if(!dataNodeBodyListBody["FileName"].isNull())
			bodyObject.fileName = dataNodeBodyListBody["FileName"].asString();
		if(!dataNodeBodyListBody["ImageBaseSixFour"].isNull())
			bodyObject.imageBaseSixFour = dataNodeBodyListBody["ImageBaseSixFour"].asString();
		if(!dataNodeBodyListBody["LeftTopX"].isNull())
			bodyObject.leftTopX = dataNodeBodyListBody["LeftTopX"].asString();
		if(!dataNodeBodyListBody["LeftTopY"].isNull())
			bodyObject.leftTopY = dataNodeBodyListBody["LeftTopY"].asString();
		if(!dataNodeBodyListBody["LocalFeature"].isNull())
			bodyObject.localFeature = dataNodeBodyListBody["LocalFeature"].asString();
		if(!dataNodeBodyListBody["RespiratorColor"].isNull())
			bodyObject.respiratorColor = dataNodeBodyListBody["RespiratorColor"].asString();
		if(!dataNodeBodyListBody["RightBottomX"].isNull())
			bodyObject.rightBottomX = dataNodeBodyListBody["RightBottomX"].asString();
		if(!dataNodeBodyListBody["RightBottomY"].isNull())
			bodyObject.rightBottomY = dataNodeBodyListBody["RightBottomY"].asString();
		data_.bodyList.push_back(bodyObject);
	}
	auto allFaceListNode = dataNode["FaceList"]["Face"];
	for (auto dataNodeFaceListFace : allFaceListNode)
	{
		Data::Face faceObject;
		if(!dataNodeFaceListFace["Feature"].isNull())
			faceObject.feature = dataNodeFaceListFace["Feature"].asString();
		if(!dataNodeFaceListFace["FileName"].isNull())
			faceObject.fileName = dataNodeFaceListFace["FileName"].asString();
		if(!dataNodeFaceListFace["ImageBaseSixFour"].isNull())
			faceObject.imageBaseSixFour = dataNodeFaceListFace["ImageBaseSixFour"].asString();
		if(!dataNodeFaceListFace["LeftTopX"].isNull())
			faceObject.leftTopX = dataNodeFaceListFace["LeftTopX"].asString();
		if(!dataNodeFaceListFace["LeftTopY"].isNull())
			faceObject.leftTopY = dataNodeFaceListFace["LeftTopY"].asString();
		if(!dataNodeFaceListFace["LocalFeature"].isNull())
			faceObject.localFeature = dataNodeFaceListFace["LocalFeature"].asString();
		if(!dataNodeFaceListFace["RespiratorColor"].isNull())
			faceObject.respiratorColor = dataNodeFaceListFace["RespiratorColor"].asString();
		if(!dataNodeFaceListFace["RightBottomX"].isNull())
			faceObject.rightBottomX = dataNodeFaceListFace["RightBottomX"].asString();
		if(!dataNodeFaceListFace["RightBottomY"].isNull())
			faceObject.rightBottomY = dataNodeFaceListFace["RightBottomY"].asString();
		data_.faceList.push_back(faceObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string RecognizeImageResult::getMessage()const
{
	return message_;
}

RecognizeImageResult::Data RecognizeImageResult::getData()const
{
	return data_;
}

std::string RecognizeImageResult::getCode()const
{
	return code_;
}

