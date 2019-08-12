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

#include <alibabacloud/imm/model/ListFaceGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

ListFaceGroupsResult::ListFaceGroupsResult() :
	ServiceResult()
{}

ListFaceGroupsResult::ListFaceGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFaceGroupsResult::~ListFaceGroupsResult()
{}

void ListFaceGroupsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allFaceGroups = value["FaceGroups"]["FaceGroupsItem"];
	for (auto value : allFaceGroups)
	{
		FaceGroupsItem faceGroupsObject;
		if(!value["GroupId"].isNull())
			faceGroupsObject.groupId = value["GroupId"].asString();
		if(!value["GroupName"].isNull())
			faceGroupsObject.groupName = value["GroupName"].asString();
		if(!value["FaceCount"].isNull())
			faceGroupsObject.faceCount = std::stoi(value["FaceCount"].asString());
		if(!value["CreateTime"].isNull())
			faceGroupsObject.createTime = value["CreateTime"].asString();
		if(!value["ModifyTime"].isNull())
			faceGroupsObject.modifyTime = value["ModifyTime"].asString();
		auto groupCoverFaceNode = value["GroupCoverFace"];
		if(!groupCoverFaceNode["FaceId"].isNull())
			faceGroupsObject.groupCoverFace.faceId = groupCoverFaceNode["FaceId"].asString();
		if(!groupCoverFaceNode["ImageUri"].isNull())
			faceGroupsObject.groupCoverFace.imageUri = groupCoverFaceNode["ImageUri"].asString();
		auto faceBoundaryNode = groupCoverFaceNode["FaceBoundary"];
		if(!faceBoundaryNode["Left"].isNull())
			faceGroupsObject.groupCoverFace.faceBoundary.left = std::stoi(faceBoundaryNode["Left"].asString());
		if(!faceBoundaryNode["Top"].isNull())
			faceGroupsObject.groupCoverFace.faceBoundary.top = std::stoi(faceBoundaryNode["Top"].asString());
		if(!faceBoundaryNode["Width"].isNull())
			faceGroupsObject.groupCoverFace.faceBoundary.width = std::stoi(faceBoundaryNode["Width"].asString());
		if(!faceBoundaryNode["Height"].isNull())
			faceGroupsObject.groupCoverFace.faceBoundary.height = std::stoi(faceBoundaryNode["Height"].asString());
		faceGroups_.push_back(faceGroupsObject);
	}
	if(!value["NextMarker"].isNull())
		nextMarker_ = value["NextMarker"].asString();

}

std::string ListFaceGroupsResult::getNextMarker()const
{
	return nextMarker_;
}

std::vector<ListFaceGroupsResult::FaceGroupsItem> ListFaceGroupsResult::getFaceGroups()const
{
	return faceGroups_;
}

