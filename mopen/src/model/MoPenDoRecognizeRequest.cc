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

#include <alibabacloud/mopen/model/MoPenDoRecognizeRequest.h>

using AlibabaCloud::MoPen::Model::MoPenDoRecognizeRequest;

MoPenDoRecognizeRequest::MoPenDoRecognizeRequest() :
	RpcServiceRequest("mopen", "2018-02-11", "MoPenDoRecognize")
{}

MoPenDoRecognizeRequest::~MoPenDoRecognizeRequest()
{}

long MoPenDoRecognizeRequest::getCanvasId()const
{
	return canvasId_;
}

void MoPenDoRecognizeRequest::setCanvasId(long canvasId)
{
	canvasId_ = canvasId;
	setCoreParameter("CanvasId", canvasId);
}

int MoPenDoRecognizeRequest::getEndY()const
{
	return endY_;
}

void MoPenDoRecognizeRequest::setEndY(int endY)
{
	endY_ = endY;
	setCoreParameter("EndY", endY);
}

int MoPenDoRecognizeRequest::getEndX()const
{
	return endX_;
}

void MoPenDoRecognizeRequest::setEndX(int endX)
{
	endX_ = endX;
	setCoreParameter("EndX", endX);
}

std::string MoPenDoRecognizeRequest::getJsonConf()const
{
	return jsonConf_;
}

void MoPenDoRecognizeRequest::setJsonConf(const std::string& jsonConf)
{
	jsonConf_ = jsonConf;
	setCoreParameter("JsonConf", std::to_string(jsonConf));
}

std::string MoPenDoRecognizeRequest::getExportType()const
{
	return exportType_;
}

void MoPenDoRecognizeRequest::setExportType(const std::string& exportType)
{
	exportType_ = exportType;
	setCoreParameter("ExportType", std::to_string(exportType));
}

int MoPenDoRecognizeRequest::getStartY()const
{
	return startY_;
}

void MoPenDoRecognizeRequest::setStartY(int startY)
{
	startY_ = startY;
	setCoreParameter("StartY", startY);
}

int MoPenDoRecognizeRequest::getStartX()const
{
	return startX_;
}

void MoPenDoRecognizeRequest::setStartX(int startX)
{
	startX_ = startX;
	setCoreParameter("StartX", startX);
}

