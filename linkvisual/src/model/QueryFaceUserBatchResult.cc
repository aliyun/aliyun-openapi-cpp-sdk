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

#include <alibabacloud/linkvisual/model/QueryFaceUserBatchResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

QueryFaceUserBatchResult::QueryFaceUserBatchResult() :
	ServiceResult()
{}

QueryFaceUserBatchResult::QueryFaceUserBatchResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryFaceUserBatchResult::~QueryFaceUserBatchResult()
{}

void QueryFaceUserBatchResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["dataItem"];
	for (auto valueDatadataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDatadataItem["Params"].isNull())
			dataObject.params = valueDatadataItem["Params"].asString();
		if(!valueDatadataItem["CustomUserId"].isNull())
			dataObject.customUserId = valueDatadataItem["CustomUserId"].asString();
		if(!valueDatadataItem["CreateTime"].isNull())
			dataObject.createTime = std::stol(valueDatadataItem["CreateTime"].asString());
		if(!valueDatadataItem["UserId"].isNull())
			dataObject.userId = valueDatadataItem["UserId"].asString();
		if(!valueDatadataItem["Name"].isNull())
			dataObject.name = valueDatadataItem["Name"].asString();
		if(!valueDatadataItem["ModifyTime"].isNull())
			dataObject.modifyTime = std::stol(valueDatadataItem["ModifyTime"].asString());
		auto allFacePicListNode = valueDatadataItem["FacePicList"]["facePicListItem"];
		for (auto valueDatadataItemFacePicListfacePicListItem : allFacePicListNode)
		{
			DataItem::FacePicListItem facePicListObject;
			if(!valueDatadataItemFacePicListfacePicListItem["FaceUrl"].isNull())
				facePicListObject.faceUrl = valueDatadataItemFacePicListfacePicListItem["FaceUrl"].asString();
			if(!valueDatadataItemFacePicListfacePicListItem["FaceMd5"].isNull())
				facePicListObject.faceMd5 = valueDatadataItemFacePicListfacePicListItem["FaceMd5"].asString();
			auto allFeatureDTOListNode = valueDatadataItemFacePicListfacePicListItem["FeatureDTOList"]["featureDTO"];
			for (auto valueDatadataItemFacePicListfacePicListItemFeatureDTOListfeatureDTO : allFeatureDTOListNode)
			{
				DataItem::FacePicListItem::FeatureDTO featureDTOListObject;
				if(!valueDatadataItemFacePicListfacePicListItemFeatureDTOListfeatureDTO["AlgorithmName"].isNull())
					featureDTOListObject.algorithmName = valueDatadataItemFacePicListfacePicListItemFeatureDTOListfeatureDTO["AlgorithmName"].asString();
				if(!valueDatadataItemFacePicListfacePicListItemFeatureDTOListfeatureDTO["AlgorithmVersion"].isNull())
					featureDTOListObject.algorithmVersion = valueDatadataItemFacePicListfacePicListItemFeatureDTOListfeatureDTO["AlgorithmVersion"].asString();
				if(!valueDatadataItemFacePicListfacePicListItemFeatureDTOListfeatureDTO["AlgorithmProvider"].isNull())
					featureDTOListObject.algorithmProvider = valueDatadataItemFacePicListfacePicListItemFeatureDTOListfeatureDTO["AlgorithmProvider"].asString();
				if(!valueDatadataItemFacePicListfacePicListItemFeatureDTOListfeatureDTO["ErrorMessage"].isNull())
					featureDTOListObject.errorMessage = valueDatadataItemFacePicListfacePicListItemFeatureDTOListfeatureDTO["ErrorMessage"].asString();
				if(!valueDatadataItemFacePicListfacePicListItemFeatureDTOListfeatureDTO["ErrorCode"].isNull())
					featureDTOListObject.errorCode = valueDatadataItemFacePicListfacePicListItemFeatureDTOListfeatureDTO["ErrorCode"].asString();
				if(!valueDatadataItemFacePicListfacePicListItemFeatureDTOListfeatureDTO["FaceMd5"].isNull())
					featureDTOListObject.faceMd5 = valueDatadataItemFacePicListfacePicListItemFeatureDTOListfeatureDTO["FaceMd5"].asString();
				facePicListObject.featureDTOList.push_back(featureDTOListObject);
			}
			dataObject.facePicList.push_back(facePicListObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<QueryFaceUserBatchResult::DataItem> QueryFaceUserBatchResult::getData()const
{
	return data_;
}

std::string QueryFaceUserBatchResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryFaceUserBatchResult::getCode()const
{
	return code_;
}

bool QueryFaceUserBatchResult::getSuccess()const
{
	return success_;
}

